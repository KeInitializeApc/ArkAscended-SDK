#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_MekBackpack_Shield.PrimalItemArmor_MekBackpack_Shield_C
// (None)

class UClass* UPrimalItemArmor_MekBackpack_Shield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_MekBackpack_Shield_C");

	return Clss;
}


// PrimalItemArmor_MekBackpack_Shield_C PrimalItemArmor_MekBackpack_Shield.Default__PrimalItemArmor_MekBackpack_Shield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_MekBackpack_Shield_C* UPrimalItemArmor_MekBackpack_Shield_C::GetDefaultObj()
{
	static class UPrimalItemArmor_MekBackpack_Shield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_MekBackpack_Shield_C*>(UPrimalItemArmor_MekBackpack_Shield_C::StaticClass()->DefaultObject);

	return Default;
}

}


