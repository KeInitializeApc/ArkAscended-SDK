#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_CookedPrimeMeat.PrimalItemConsumable_CookedPrimeMeat_C
// (None)

class UClass* UPrimalItemConsumable_CookedPrimeMeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_CookedPrimeMeat_C");

	return Clss;
}


// PrimalItemConsumable_CookedPrimeMeat_C PrimalItemConsumable_CookedPrimeMeat.Default__PrimalItemConsumable_CookedPrimeMeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_CookedPrimeMeat_C* UPrimalItemConsumable_CookedPrimeMeat_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_CookedPrimeMeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_CookedPrimeMeat_C*>(UPrimalItemConsumable_CookedPrimeMeat_C::StaticClass()->DefaultObject);

	return Default;
}

}


