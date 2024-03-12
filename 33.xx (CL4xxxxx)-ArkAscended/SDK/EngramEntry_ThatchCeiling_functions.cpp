#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ThatchCeiling.EngramEntry_ThatchCeiling_C
// (None)

class UClass* UEngramEntry_ThatchCeiling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ThatchCeiling_C");

	return Clss;
}


// EngramEntry_ThatchCeiling_C EngramEntry_ThatchCeiling.Default__EngramEntry_ThatchCeiling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ThatchCeiling_C* UEngramEntry_ThatchCeiling_C::GetDefaultObj()
{
	static class UEngramEntry_ThatchCeiling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ThatchCeiling_C*>(UEngramEntry_ThatchCeiling_C::StaticClass()->DefaultObject);

	return Default;
}

}


