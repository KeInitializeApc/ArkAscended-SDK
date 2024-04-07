#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_HidePants.PrimalItemArmor_HidePants_C
// (None)

class UClass* UPrimalItemArmor_HidePants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_HidePants_C");

	return Clss;
}


// PrimalItemArmor_HidePants_C PrimalItemArmor_HidePants.Default__PrimalItemArmor_HidePants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_HidePants_C* UPrimalItemArmor_HidePants_C::GetDefaultObj()
{
	static class UPrimalItemArmor_HidePants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_HidePants_C*>(UPrimalItemArmor_HidePants_C::StaticClass()->DefaultObject);

	return Default;
}

}


