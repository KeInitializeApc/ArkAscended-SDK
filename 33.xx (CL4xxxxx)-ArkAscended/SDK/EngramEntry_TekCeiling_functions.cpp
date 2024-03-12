#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekCeiling.EngramEntry_TekCeiling_C
// (None)

class UClass* UEngramEntry_TekCeiling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekCeiling_C");

	return Clss;
}


// EngramEntry_TekCeiling_C EngramEntry_TekCeiling.Default__EngramEntry_TekCeiling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekCeiling_C* UEngramEntry_TekCeiling_C::GetDefaultObj()
{
	static class UEngramEntry_TekCeiling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekCeiling_C*>(UEngramEntry_TekCeiling_C::StaticClass()->DefaultObject);

	return Default;
}

}


