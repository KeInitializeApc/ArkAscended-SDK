#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ChemBench.EngramEntry_ChemBench_C
// (None)

class UClass* UEngramEntry_ChemBench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ChemBench_C");

	return Clss;
}


// EngramEntry_ChemBench_C EngramEntry_ChemBench.Default__EngramEntry_ChemBench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ChemBench_C* UEngramEntry_ChemBench_C::GetDefaultObj()
{
	static class UEngramEntry_ChemBench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ChemBench_C*>(UEngramEntry_ChemBench_C::StaticClass()->DefaultObject);

	return Default;
}

}


