/* Exit Games Common - C++ Client Lib
 * Copyright (C) 2004-2018 by Exit Games GmbH. All rights reserved.
 * http://www.photonengine.com
 * mailto:developer@photonengine.com
 */

#pragma once

#include "Common-cpp/inc/JString.h"
#include "Common-cpp/inc/Helpers/SmartPointers/SmartPointerBase.h"

namespace ExitGames
{
	namespace Common
	{
		namespace Helpers
		{
			template<typename Etype>
			class ElementAccessor
			{
			protected:
				static const Etype& getElement(Etype* data, unsigned int index);
			};

			template<typename Etype>
			class ElementAccessor<Etype*>
			{
			protected:
				static const Etype& getElement(Etype** pData, unsigned int index);
			};

			template<typename Etype>
			class ElementAccessor<SmartPointerBase<Etype> >
			{
			protected:
				static const Etype& getElement(SmartPointerBase<Etype>* spData, unsigned int index);
			};



			template<typename Etype>
			const Etype& ElementAccessor<Etype>::getElement(Etype* data, unsigned int index)
			{
				return data[index];
			}

			template<typename Etype>
			const Etype& ElementAccessor<Etype*>::getElement(Etype** pData, unsigned int index)
			{
				return *(pData[index]);
			}

			template<typename Etype>
			const Etype& ElementAccessor<SmartPointerBase<Etype> >::getElement(SmartPointerBase<Etype>* spData, unsigned int index)
			{
				return *(spData[index]);
			}
		}
	}
}