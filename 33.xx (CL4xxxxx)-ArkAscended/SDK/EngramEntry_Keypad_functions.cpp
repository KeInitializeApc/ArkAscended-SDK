#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Keypad.EngramEntry_Keypad_C
// (None)

class UClass* UEngramEntry_Keypad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Keypad_C");

	return Clss;
}


// EngramEntry_Keypad_C EngramEntry_Keypad.Default__EngramEntry_Keypad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Keypad_C* UEngramEntry_Keypad_C::GetDefaultObj()
{
	static class UEngramEntry_Keypad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Keypad_C*>(UEngramEntry_Keypad_C::StaticClass()->DefaultObject);

	return Default;
}

}


