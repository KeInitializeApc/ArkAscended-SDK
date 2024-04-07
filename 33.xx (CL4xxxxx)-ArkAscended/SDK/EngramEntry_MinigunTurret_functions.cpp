#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MinigunTurret.EngramEntry_MinigunTurret_C
// (None)

class UClass* UEngramEntry_MinigunTurret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MinigunTurret_C");

	return Clss;
}


// EngramEntry_MinigunTurret_C EngramEntry_MinigunTurret.Default__EngramEntry_MinigunTurret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MinigunTurret_C* UEngramEntry_MinigunTurret_C::GetDefaultObj()
{
	static class UEngramEntry_MinigunTurret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MinigunTurret_C*>(UEngramEntry_MinigunTurret_C::StaticClass()->DefaultObject);

	return Default;
}

}


