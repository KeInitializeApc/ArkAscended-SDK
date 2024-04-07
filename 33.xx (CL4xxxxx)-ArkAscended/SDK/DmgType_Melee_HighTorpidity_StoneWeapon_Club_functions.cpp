#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_HighTorpidity_StoneWeapon_Club.DmgType_Melee_HighTorpidity_StoneWeapon_Club_C
// (None)

class UClass* UDmgType_Melee_HighTorpidity_StoneWeapon_Club_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_HighTorpidity_StoneWeapon_Club_C");

	return Clss;
}


// DmgType_Melee_HighTorpidity_StoneWeapon_Club_C DmgType_Melee_HighTorpidity_StoneWeapon_Club.Default__DmgType_Melee_HighTorpidity_StoneWeapon_Club_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_HighTorpidity_StoneWeapon_Club_C* UDmgType_Melee_HighTorpidity_StoneWeapon_Club_C::GetDefaultObj()
{
	static class UDmgType_Melee_HighTorpidity_StoneWeapon_Club_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_HighTorpidity_StoneWeapon_Club_C*>(UDmgType_Melee_HighTorpidity_StoneWeapon_Club_C::StaticClass()->DefaultObject);

	return Default;
}

}


