#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass WeaponFistsAnimBlueprint.WeaponFistsAnimBlueprint_C
// (None)

class UClass* UWeaponFistsAnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponFistsAnimBlueprint_C");

	return Clss;
}


// WeaponFistsAnimBlueprint_C WeaponFistsAnimBlueprint.Default__WeaponFistsAnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWeaponFistsAnimBlueprint_C* UWeaponFistsAnimBlueprint_C::GetDefaultObj()
{
	static class UWeaponFistsAnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponFistsAnimBlueprint_C*>(UWeaponFistsAnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}

}


