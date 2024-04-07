#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WoodBench.EngramEntry_WoodBench_C
// (None)

class UClass* UEngramEntry_WoodBench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WoodBench_C");

	return Clss;
}


// EngramEntry_WoodBench_C EngramEntry_WoodBench.Default__EngramEntry_WoodBench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WoodBench_C* UEngramEntry_WoodBench_C::GetDefaultObj()
{
	static class UEngramEntry_WoodBench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WoodBench_C*>(UEngramEntry_WoodBench_C::StaticClass()->DefaultObject);

	return Default;
}

}


