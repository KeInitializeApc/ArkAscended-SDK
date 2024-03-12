#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TranqSpearBolt.EngramEntry_TranqSpearBolt_C
// (None)

class UClass* UEngramEntry_TranqSpearBolt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TranqSpearBolt_C");

	return Clss;
}


// EngramEntry_TranqSpearBolt_C EngramEntry_TranqSpearBolt.Default__EngramEntry_TranqSpearBolt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TranqSpearBolt_C* UEngramEntry_TranqSpearBolt_C::GetDefaultObj()
{
	static class UEngramEntry_TranqSpearBolt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TranqSpearBolt_C*>(UEngramEntry_TranqSpearBolt_C::StaticClass()->DefaultObject);

	return Default;
}

}


