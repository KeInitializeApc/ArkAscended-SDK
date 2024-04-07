#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_Tapejara_Tek.PrimalItemArmor_Tapejara_Tek_C
// (None)

class UClass* UPrimalItemArmor_Tapejara_Tek_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_Tapejara_Tek_C");

	return Clss;
}


// PrimalItemArmor_Tapejara_Tek_C PrimalItemArmor_Tapejara_Tek.Default__PrimalItemArmor_Tapejara_Tek_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_Tapejara_Tek_C* UPrimalItemArmor_Tapejara_Tek_C::GetDefaultObj()
{
	static class UPrimalItemArmor_Tapejara_Tek_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_Tapejara_Tek_C*>(UPrimalItemArmor_Tapejara_Tek_C::StaticClass()->DefaultObject);

	return Default;
}

}


