#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_DisplayCase.EngramEntry_DisplayCase_C
// (None)

class UClass* UEngramEntry_DisplayCase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_DisplayCase_C");

	return Clss;
}


// EngramEntry_DisplayCase_C EngramEntry_DisplayCase.Default__EngramEntry_DisplayCase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_DisplayCase_C* UEngramEntry_DisplayCase_C::GetDefaultObj()
{
	static class UEngramEntry_DisplayCase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_DisplayCase_C*>(UEngramEntry_DisplayCase_C::StaticClass()->DefaultObject);

	return Default;
}

}


