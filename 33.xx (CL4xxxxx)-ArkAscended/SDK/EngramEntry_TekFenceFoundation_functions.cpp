#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekFenceFoundation.EngramEntry_TekFenceFoundation_C
// (None)

class UClass* UEngramEntry_TekFenceFoundation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekFenceFoundation_C");

	return Clss;
}


// EngramEntry_TekFenceFoundation_C EngramEntry_TekFenceFoundation.Default__EngramEntry_TekFenceFoundation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekFenceFoundation_C* UEngramEntry_TekFenceFoundation_C::GetDefaultObj()
{
	static class UEngramEntry_TekFenceFoundation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekFenceFoundation_C*>(UEngramEntry_TekFenceFoundation_C::StaticClass()->DefaultObject);

	return Default;
}

}


