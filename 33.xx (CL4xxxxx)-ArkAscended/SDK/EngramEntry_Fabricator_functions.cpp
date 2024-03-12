#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Fabricator.EngramEntry_Fabricator_C
// (None)

class UClass* UEngramEntry_Fabricator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Fabricator_C");

	return Clss;
}


// EngramEntry_Fabricator_C EngramEntry_Fabricator.Default__EngramEntry_Fabricator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Fabricator_C* UEngramEntry_Fabricator_C::GetDefaultObj()
{
	static class UEngramEntry_Fabricator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Fabricator_C*>(UEngramEntry_Fabricator_C::StaticClass()->DefaultObject);

	return Default;
}

}


