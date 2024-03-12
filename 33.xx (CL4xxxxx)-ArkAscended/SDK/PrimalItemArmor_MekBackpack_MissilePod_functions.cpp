#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_MekBackpack_MissilePod.PrimalItemArmor_MekBackpack_MissilePod_C
// (None)

class UClass* UPrimalItemArmor_MekBackpack_MissilePod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_MekBackpack_MissilePod_C");

	return Clss;
}


// PrimalItemArmor_MekBackpack_MissilePod_C PrimalItemArmor_MekBackpack_MissilePod.Default__PrimalItemArmor_MekBackpack_MissilePod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_MekBackpack_MissilePod_C* UPrimalItemArmor_MekBackpack_MissilePod_C::GetDefaultObj()
{
	static class UPrimalItemArmor_MekBackpack_MissilePod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_MekBackpack_MissilePod_C*>(UPrimalItemArmor_MekBackpack_MissilePod_C::StaticClass()->DefaultObject);

	return Default;
}

}


