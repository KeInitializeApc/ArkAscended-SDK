#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WaterJar.EngramEntry_WaterJar_C
// (None)

class UClass* UEngramEntry_WaterJar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WaterJar_C");

	return Clss;
}


// EngramEntry_WaterJar_C EngramEntry_WaterJar.Default__EngramEntry_WaterJar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WaterJar_C* UEngramEntry_WaterJar_C::GetDefaultObj()
{
	static class UEngramEntry_WaterJar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WaterJar_C*>(UEngramEntry_WaterJar_C::StaticClass()->DefaultObject);

	return Default;
}

}


