#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Narcotic.EngramEntry_Narcotic_C
// (None)

class UClass* UEngramEntry_Narcotic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Narcotic_C");

	return Clss;
}


// EngramEntry_Narcotic_C EngramEntry_Narcotic.Default__EngramEntry_Narcotic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Narcotic_C* UEngramEntry_Narcotic_C::GetDefaultObj()
{
	static class UEngramEntry_Narcotic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Narcotic_C*>(UEngramEntry_Narcotic_C::StaticClass()->DefaultObject);

	return Default;
}

}


