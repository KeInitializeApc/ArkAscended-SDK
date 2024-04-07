#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Turret.EngramEntry_Turret_C
// (None)

class UClass* UEngramEntry_Turret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Turret_C");

	return Clss;
}


// EngramEntry_Turret_C EngramEntry_Turret.Default__EngramEntry_Turret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Turret_C* UEngramEntry_Turret_C::GetDefaultObj()
{
	static class UEngramEntry_Turret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Turret_C*>(UEngramEntry_Turret_C::StaticClass()->DefaultObject);

	return Default;
}

}


