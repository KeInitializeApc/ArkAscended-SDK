#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WoodCeiling.EngramEntry_WoodCeiling_C
// (None)

class UClass* UEngramEntry_WoodCeiling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WoodCeiling_C");

	return Clss;
}


// EngramEntry_WoodCeiling_C EngramEntry_WoodCeiling.Default__EngramEntry_WoodCeiling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WoodCeiling_C* UEngramEntry_WoodCeiling_C::GetDefaultObj()
{
	static class UEngramEntry_WoodCeiling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WoodCeiling_C*>(UEngramEntry_WoodCeiling_C::StaticClass()->DefaultObject);

	return Default;
}

}


