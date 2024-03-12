#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_ChitinHelmet.PrimalItemArmor_ChitinHelmet_C
// (None)

class UClass* UPrimalItemArmor_ChitinHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_ChitinHelmet_C");

	return Clss;
}


// PrimalItemArmor_ChitinHelmet_C PrimalItemArmor_ChitinHelmet.Default__PrimalItemArmor_ChitinHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_ChitinHelmet_C* UPrimalItemArmor_ChitinHelmet_C::GetDefaultObj()
{
	static class UPrimalItemArmor_ChitinHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_ChitinHelmet_C*>(UPrimalItemArmor_ChitinHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


