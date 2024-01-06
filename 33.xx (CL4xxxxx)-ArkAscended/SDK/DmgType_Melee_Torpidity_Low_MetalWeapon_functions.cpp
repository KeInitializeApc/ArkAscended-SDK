#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_Torpidity_Low_MetalWeapon.DmgType_Melee_Torpidity_Low_MetalWeapon_C
// (None)

class UClass* UDmgType_Melee_Torpidity_Low_MetalWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_Torpidity_Low_MetalWeapon_C");

	return Clss;
}


// DmgType_Melee_Torpidity_Low_MetalWeapon_C DmgType_Melee_Torpidity_Low_MetalWeapon.Default__DmgType_Melee_Torpidity_Low_MetalWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_Torpidity_Low_MetalWeapon_C* UDmgType_Melee_Torpidity_Low_MetalWeapon_C::GetDefaultObj()
{
	static class UDmgType_Melee_Torpidity_Low_MetalWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_Torpidity_Low_MetalWeapon_C*>(UDmgType_Melee_Torpidity_Low_MetalWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


