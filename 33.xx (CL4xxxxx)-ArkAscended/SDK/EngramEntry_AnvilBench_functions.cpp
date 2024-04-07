#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_AnvilBench.EngramEntry_AnvilBench_C
// (None)

class UClass* UEngramEntry_AnvilBench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_AnvilBench_C");

	return Clss;
}


// EngramEntry_AnvilBench_C EngramEntry_AnvilBench.Default__EngramEntry_AnvilBench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_AnvilBench_C* UEngramEntry_AnvilBench_C::GetDefaultObj()
{
	static class UEngramEntry_AnvilBench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_AnvilBench_C*>(UEngramEntry_AnvilBench_C::StaticClass()->DefaultObject);

	return Default;
}

}


