#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_ChitinBoots.PrimalItemArmor_ChitinBoots_C
// (None)

class UClass* UPrimalItemArmor_ChitinBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_ChitinBoots_C");

	return Clss;
}


// PrimalItemArmor_ChitinBoots_C PrimalItemArmor_ChitinBoots.Default__PrimalItemArmor_ChitinBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_ChitinBoots_C* UPrimalItemArmor_ChitinBoots_C::GetDefaultObj()
{
	static class UPrimalItemArmor_ChitinBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_ChitinBoots_C*>(UPrimalItemArmor_ChitinBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


