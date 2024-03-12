#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MekBackpack_Missiles.EngramEntry_MekBackpack_Missiles_C
// (None)

class UClass* UEngramEntry_MekBackpack_Missiles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MekBackpack_Missiles_C");

	return Clss;
}


// EngramEntry_MekBackpack_Missiles_C EngramEntry_MekBackpack_Missiles.Default__EngramEntry_MekBackpack_Missiles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MekBackpack_Missiles_C* UEngramEntry_MekBackpack_Missiles_C::GetDefaultObj()
{
	static class UEngramEntry_MekBackpack_Missiles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MekBackpack_Missiles_C*>(UEngramEntry_MekBackpack_Missiles_C::StaticClass()->DefaultObject);

	return Default;
}

}


