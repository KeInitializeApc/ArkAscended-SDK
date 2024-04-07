#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponCameraOverride_Base.WeaponCameraOverride_Base_C
// (None)

class UClass* UWeaponCameraOverride_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponCameraOverride_Base_C");

	return Clss;
}


// WeaponCameraOverride_Base_C WeaponCameraOverride_Base.Default__WeaponCameraOverride_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWeaponCameraOverride_Base_C* UWeaponCameraOverride_Base_C::GetDefaultObj()
{
	static class UWeaponCameraOverride_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponCameraOverride_Base_C*>(UWeaponCameraOverride_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


