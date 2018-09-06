/* Exit Games Common - C++ Client Lib
 * Copyright (C) 2004-2018 by Exit Games GmbH. All rights reserved.
 * http://www.photonengine.com
 * mailto:developer@photonengine.com
 */

#pragma once

#include "Common-cpp/inc/MemoryManagement/Allocate.h"

namespace ExitGames
{
	namespace Common
	{
		namespace Helpers
		{
			template<typename Etype>
			class SmartPointerBase
			{
			public:
				virtual Etype* operator->(void);
				virtual const Etype* operator->(void) const;
				virtual Etype& operator*(void);
				virtual const Etype& operator*(void) const;
				virtual operator Etype*(void);
				virtual operator const Etype*(void) const;
			protected:
				SmartPointerBase(void (*pDeleter)(const Etype*));
				SmartPointerBase(Etype* pData, void (*pDeleter)(const Etype*));
				virtual ~SmartPointerBase(void) = 0;

				SmartPointerBase(const SmartPointerBase<Etype>& toCopy);

				Etype* mpData;
				void (*mpDeleter)(const Etype*);
			private:
				SmartPointerBase& operator=(const SmartPointerBase<Etype>& toCopy);
			};



			template<typename Etype>
			SmartPointerBase<Etype>::SmartPointerBase(void (*pDeleter)(const Etype*))
			{
				mpData = NULL;
				mpDeleter = pDeleter;
			}

			template<typename Etype>
			SmartPointerBase<Etype>::SmartPointerBase(Etype* pData, void (*pDeleter)(const Etype*))
			{
				mpData = pData;
				mpDeleter = pDeleter;
			}

			template<typename Etype>
			SmartPointerBase<Etype>::~SmartPointerBase(void)
			{
			}

			template<typename Etype>
			SmartPointerBase<Etype>::SmartPointerBase(const SmartPointerBase<Etype>& toCopy)
			{
			}

			template<typename Etype>
			Etype* SmartPointerBase<Etype>::operator->(void)
			{
				return mpData;
			}

			template<typename Etype>
			const Etype* SmartPointerBase<Etype>::operator->(void) const
			{
				return mpData;
			}

			template<typename Etype>
			Etype& SmartPointerBase<Etype>::operator*(void)
			{
				return *mpData;
			}

			template<typename Etype>
			const Etype& SmartPointerBase<Etype>::operator*(void) const
			{
				return *mpData;
			}

			template<typename Etype>
			SmartPointerBase<Etype>::operator Etype*(void)
			{
				return mpData;
			}

			template<typename Etype>
			SmartPointerBase<Etype>::operator const Etype*(void) const
			{
				return mpData;
			}
		}
	}
}