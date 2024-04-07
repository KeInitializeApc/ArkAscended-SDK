#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponCameraOverride_Sword.WeaponCameraOverride_Sword_C
// (None)

class UClass* UWeaponCameraOverride_Sword_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponCameraOverride_Sword_C");

	return Clss;
}


// WeaponCameraOverride_Sword_C WeaponCameraOverride_Sword.Default__WeaponCameraOverride_Sword_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWeaponCameraOverride_Sword_C* UWeaponCameraOverride_Sword_C::GetDefaultObj()
{
	static class UWeaponCameraOverride_Sword_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponCameraOverride_Sword_C*>(UWeaponCameraOverride_Sword_C::StaticClass()->DefaultObject);

	return Default;
}

}


