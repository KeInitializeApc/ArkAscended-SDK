#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_CookedPrimeMeat_Jerky.PrimalItemConsumable_CookedPrimeMeat_Jerky_C
// (None)

class UClass* UPrimalItemConsumable_CookedPrimeMeat_Jerky_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_CookedPrimeMeat_Jerky_C");

	return Clss;
}


// PrimalItemConsumable_CookedPrimeMeat_Jerky_C PrimalItemConsumable_CookedPrimeMeat_Jerky.Default__PrimalItemConsumable_CookedPrimeMeat_Jerky_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_CookedPrimeMeat_Jerky_C* UPrimalItemConsumable_CookedPrimeMeat_Jerky_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_CookedPrimeMeat_Jerky_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_CookedPrimeMeat_Jerky_C*>(UPrimalItemConsumable_CookedPrimeMeat_Jerky_C::StaticClass()->DefaultObject);

	return Default;
}

}


