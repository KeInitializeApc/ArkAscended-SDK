#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Grill.EngramEntry_Grill_C
// (None)

class UClass* UEngramEntry_Grill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Grill_C");

	return Clss;
}


// EngramEntry_Grill_C EngramEntry_Grill.Default__EngramEntry_Grill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Grill_C* UEngramEntry_Grill_C::GetDefaultObj()
{
	static class UEngramEntry_Grill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Grill_C*>(UEngramEntry_Grill_C::StaticClass()->DefaultObject);

	return Default;
}

}


