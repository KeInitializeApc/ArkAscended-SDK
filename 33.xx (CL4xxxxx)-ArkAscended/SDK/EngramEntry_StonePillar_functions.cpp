#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StonePillar.EngramEntry_StonePillar_C
// (None)

class UClass* UEngramEntry_StonePillar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StonePillar_C");

	return Clss;
}


// EngramEntry_StonePillar_C EngramEntry_StonePillar.Default__EngramEntry_StonePillar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StonePillar_C* UEngramEntry_StonePillar_C::GetDefaultObj()
{
	static class UEngramEntry_StonePillar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StonePillar_C*>(UEngramEntry_StonePillar_C::StaticClass()->DefaultObject);

	return Default;
}

}


