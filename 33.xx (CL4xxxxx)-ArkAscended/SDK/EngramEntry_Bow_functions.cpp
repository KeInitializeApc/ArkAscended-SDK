#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Bow.EngramEntry_Bow_C
// (None)

class UClass* UEngramEntry_Bow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Bow_C");

	return Clss;
}


// EngramEntry_Bow_C EngramEntry_Bow.Default__EngramEntry_Bow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Bow_C* UEngramEntry_Bow_C::GetDefaultObj()
{
	static class UEngramEntry_Bow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Bow_C*>(UEngramEntry_Bow_C::StaticClass()->DefaultObject);

	return Default;
}

}


