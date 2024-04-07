#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MekBackpack_Cannon.EngramEntry_MekBackpack_Cannon_C
// (None)

class UClass* UEngramEntry_MekBackpack_Cannon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MekBackpack_Cannon_C");

	return Clss;
}


// EngramEntry_MekBackpack_Cannon_C EngramEntry_MekBackpack_Cannon.Default__EngramEntry_MekBackpack_Cannon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MekBackpack_Cannon_C* UEngramEntry_MekBackpack_Cannon_C::GetDefaultObj()
{
	static class UEngramEntry_MekBackpack_Cannon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MekBackpack_Cannon_C*>(UEngramEntry_MekBackpack_Cannon_C::StaticClass()->DefaultObject);

	return Default;
}

}


