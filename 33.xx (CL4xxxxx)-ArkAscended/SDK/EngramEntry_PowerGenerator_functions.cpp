#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_PowerGenerator.EngramEntry_PowerGenerator_C
// (None)

class UClass* UEngramEntry_PowerGenerator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_PowerGenerator_C");

	return Clss;
}


// EngramEntry_PowerGenerator_C EngramEntry_PowerGenerator.Default__EngramEntry_PowerGenerator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_PowerGenerator_C* UEngramEntry_PowerGenerator_C::GetDefaultObj()
{
	static class UEngramEntry_PowerGenerator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_PowerGenerator_C*>(UEngramEntry_PowerGenerator_C::StaticClass()->DefaultObject);

	return Default;
}

}


