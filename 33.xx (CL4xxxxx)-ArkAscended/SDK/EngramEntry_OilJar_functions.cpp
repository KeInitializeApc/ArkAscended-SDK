#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_OilJar.EngramEntry_OilJar_C
// (None)

class UClass* UEngramEntry_OilJar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_OilJar_C");

	return Clss;
}


// EngramEntry_OilJar_C EngramEntry_OilJar.Default__EngramEntry_OilJar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_OilJar_C* UEngramEntry_OilJar_C::GetDefaultObj()
{
	static class UEngramEntry_OilJar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_OilJar_C*>(UEngramEntry_OilJar_C::StaticClass()->DefaultObject);

	return Default;
}

}


