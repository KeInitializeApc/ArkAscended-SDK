#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_RiotHelmet.PrimalItemArmor_RiotHelmet_C
// (None)

class UClass* UPrimalItemArmor_RiotHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_RiotHelmet_C");

	return Clss;
}


// PrimalItemArmor_RiotHelmet_C PrimalItemArmor_RiotHelmet.Default__PrimalItemArmor_RiotHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_RiotHelmet_C* UPrimalItemArmor_RiotHelmet_C::GetDefaultObj()
{
	static class UPrimalItemArmor_RiotHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_RiotHelmet_C*>(UPrimalItemArmor_RiotHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


