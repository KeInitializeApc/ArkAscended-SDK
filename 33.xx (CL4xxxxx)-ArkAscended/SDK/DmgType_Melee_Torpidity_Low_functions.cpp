#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_Torpidity_Low.DmgType_Melee_Torpidity_Low_C
// (None)

class UClass* UDmgType_Melee_Torpidity_Low_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_Torpidity_Low_C");

	return Clss;
}


// DmgType_Melee_Torpidity_Low_C DmgType_Melee_Torpidity_Low.Default__DmgType_Melee_Torpidity_Low_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_Torpidity_Low_C* UDmgType_Melee_Torpidity_Low_C::GetDefaultObj()
{
	static class UDmgType_Melee_Torpidity_Low_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_Torpidity_Low_C*>(UDmgType_Melee_Torpidity_Low_C::StaticClass()->DefaultObject);

	return Default;
}

}


