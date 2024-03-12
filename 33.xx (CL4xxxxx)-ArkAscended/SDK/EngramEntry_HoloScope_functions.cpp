#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_HoloScope.EngramEntry_HoloScope_C
// (None)

class UClass* UEngramEntry_HoloScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_HoloScope_C");

	return Clss;
}


// EngramEntry_HoloScope_C EngramEntry_HoloScope.Default__EngramEntry_HoloScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_HoloScope_C* UEngramEntry_HoloScope_C::GetDefaultObj()
{
	static class UEngramEntry_HoloScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_HoloScope_C*>(UEngramEntry_HoloScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


