#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TriFoundation_Tek.EngramEntry_TriFoundation_Tek_C
// (None)

class UClass* UEngramEntry_TriFoundation_Tek_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TriFoundation_Tek_C");

	return Clss;
}


// EngramEntry_TriFoundation_Tek_C EngramEntry_TriFoundation_Tek.Default__EngramEntry_TriFoundation_Tek_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TriFoundation_Tek_C* UEngramEntry_TriFoundation_Tek_C::GetDefaultObj()
{
	static class UEngramEntry_TriFoundation_Tek_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TriFoundation_Tek_C*>(UEngramEntry_TriFoundation_Tek_C::StaticClass()->DefaultObject);

	return Default;
}

}


