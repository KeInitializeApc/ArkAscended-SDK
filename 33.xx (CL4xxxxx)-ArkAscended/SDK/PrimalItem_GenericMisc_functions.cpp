#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_GenericMisc.PrimalItem_GenericMisc_C
// (None)

class UClass* UPrimalItem_GenericMisc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_GenericMisc_C");

	return Clss;
}


// PrimalItem_GenericMisc_C PrimalItem_GenericMisc.Default__PrimalItem_GenericMisc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_GenericMisc_C* UPrimalItem_GenericMisc_C::GetDefaultObj()
{
	static class UPrimalItem_GenericMisc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_GenericMisc_C*>(UPrimalItem_GenericMisc_C::StaticClass()->DefaultObject);

	return Default;
}

}


