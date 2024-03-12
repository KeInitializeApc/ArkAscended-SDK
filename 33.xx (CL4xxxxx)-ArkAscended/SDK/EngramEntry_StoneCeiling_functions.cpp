#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StoneCeiling.EngramEntry_StoneCeiling_C
// (None)

class UClass* UEngramEntry_StoneCeiling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StoneCeiling_C");

	return Clss;
}


// EngramEntry_StoneCeiling_C EngramEntry_StoneCeiling.Default__EngramEntry_StoneCeiling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StoneCeiling_C* UEngramEntry_StoneCeiling_C::GetDefaultObj()
{
	static class UEngramEntry_StoneCeiling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StoneCeiling_C*>(UEngramEntry_StoneCeiling_C::StaticClass()->DefaultObject);

	return Default;
}

}


