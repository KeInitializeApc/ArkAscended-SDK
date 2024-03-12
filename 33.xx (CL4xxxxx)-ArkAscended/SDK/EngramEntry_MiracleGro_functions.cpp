#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MiracleGro.EngramEntry_MiracleGro_C
// (None)

class UClass* UEngramEntry_MiracleGro_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MiracleGro_C");

	return Clss;
}


// EngramEntry_MiracleGro_C EngramEntry_MiracleGro.Default__EngramEntry_MiracleGro_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MiracleGro_C* UEngramEntry_MiracleGro_C::GetDefaultObj()
{
	static class UEngramEntry_MiracleGro_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MiracleGro_C*>(UEngramEntry_MiracleGro_C::StaticClass()->DefaultObject);

	return Default;
}

}


