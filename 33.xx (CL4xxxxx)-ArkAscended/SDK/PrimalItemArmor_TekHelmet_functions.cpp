#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_TekHelmet.PrimalItemArmor_TekHelmet_C
// (None)

class UClass* UPrimalItemArmor_TekHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_TekHelmet_C");

	return Clss;
}


// PrimalItemArmor_TekHelmet_C PrimalItemArmor_TekHelmet.Default__PrimalItemArmor_TekHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_TekHelmet_C* UPrimalItemArmor_TekHelmet_C::GetDefaultObj()
{
	static class UPrimalItemArmor_TekHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_TekHelmet_C*>(UPrimalItemArmor_TekHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


