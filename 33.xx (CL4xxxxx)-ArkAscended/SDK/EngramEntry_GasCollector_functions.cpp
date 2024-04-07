#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_GasCollector.EngramEntry_GasCollector_C
// (None)

class UClass* UEngramEntry_GasCollector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_GasCollector_C");

	return Clss;
}


// EngramEntry_GasCollector_C EngramEntry_GasCollector.Default__EngramEntry_GasCollector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_GasCollector_C* UEngramEntry_GasCollector_C::GetDefaultObj()
{
	static class UEngramEntry_GasCollector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_GasCollector_C*>(UEngramEntry_GasCollector_C::StaticClass()->DefaultObject);

	return Default;
}

}


