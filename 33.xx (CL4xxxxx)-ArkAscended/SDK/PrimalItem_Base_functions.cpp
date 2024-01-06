#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_Base.PrimalItem_Base_C
// (None)

class UClass* UPrimalItem_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_Base_C");

	return Clss;
}


// PrimalItem_Base_C PrimalItem_Base.Default__PrimalItem_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_Base_C* UPrimalItem_Base_C::GetDefaultObj()
{
	static class UPrimalItem_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_Base_C*>(UPrimalItem_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


