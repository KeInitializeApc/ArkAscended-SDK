#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Stimulant.EngramEntry_Stimulant_C
// (None)

class UClass* UEngramEntry_Stimulant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Stimulant_C");

	return Clss;
}


// EngramEntry_Stimulant_C EngramEntry_Stimulant.Default__EngramEntry_Stimulant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Stimulant_C* UEngramEntry_Stimulant_C::GetDefaultObj()
{
	static class UEngramEntry_Stimulant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Stimulant_C*>(UEngramEntry_Stimulant_C::StaticClass()->DefaultObject);

	return Default;
}

}


