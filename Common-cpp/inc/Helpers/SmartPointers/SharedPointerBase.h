/* Exit Games Common - C++ Client Lib
 * Copyright (C) 2004-2018 by Exit Games GmbH. All rights reserved.
 * http://www.photonengine.com
 * mailto:developer@photonengine.com
 */

#pragma once

#include "Common-cpp/inc/Helpers/SmartPointers/SmartPointerBase.h"

namespace ExitGames
{
	namespace Common
	{
		namespace Helpers
		{
			template<typename Etype>
			class SharedPointerBase : public SmartPointerBase<Etype>
			{
			protected:
				SharedPointerBase(void (*pDeleter)(const Etype*));
				SharedPointerBase(Etype* pData, void (*pDeleter)(const Etype*));
				virtual ~SharedPointerBase(void) = 0;

				SharedPointerBase(const SharedPointerBase<Etype>& toCopy);
				virtual SharedPointerBase& operator=(const SharedPointerBase<Etype>& toCopy);

				unsigned long long* mpRefCount;

				typedef SmartPointerBase<Etype> super;
			};



			template<typename Etype>
			SharedPointerBase<Etype>::SharedPointerBase(void (*pDeleter)(const Etype*)) : SmartPointerBase<Etype>(pDeleter)
			{
				SharedPointerBase::mpRefCount = MemoryManagement::allocate<unsigned long long>(1);
			}

			template<typename Etype>
			SharedPointerBase<Etype>::SharedPointerBase(Etype* pData, void (*pDeleter)(const Etype*)) : SmartPointerBase<Etype>(pData, pDeleter)
			{
				mpRefCount = MemoryManagement::allocate<unsigned long long>(1);
			}

			template<typename Etype>
			SharedPointerBase<Etype>::~SharedPointerBase(void)
			{
				if(--*mpRefCount)
					return;
				super::mpDeleter(super::mpData);
				MemoryManagement::deallocate(mpRefCount);
			}

			template<typename Etype>
			SharedPointerBase<Etype>::SharedPointerBase(const SharedPointerBase<Etype>& toCopy) : SmartPointerBase<Etype>(toCopy)
			{
				super::mpData = NULL;
				mpRefCount = NULL;
				*this = toCopy;
			}

			template<typename Etype>
			SharedPointerBase<Etype>& SharedPointerBase<Etype>::operator=(const SharedPointerBase<Etype>& toCopy)
			{
				if(mpRefCount && !--*mpRefCount)
				{
					super::mpDeleter(super::mpData);
					MemoryManagement::deallocate(mpRefCount);
				}
				super::mpData = toCopy.mpData;
				super::mpDeleter = toCopy.mpDeleter;
				++*(mpRefCount=toCopy.mpRefCount);
				return *this;
			}
		}
	}
}