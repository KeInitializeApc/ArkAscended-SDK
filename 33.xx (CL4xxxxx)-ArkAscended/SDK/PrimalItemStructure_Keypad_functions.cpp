#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Keypad.PrimalItemStructure_Keypad_C
// (None)

class UClass* UPrimalItemStructure_Keypad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Keypad_C");

	return Clss;
}


// PrimalItemStructure_Keypad_C PrimalItemStructure_Keypad.Default__PrimalItemStructure_Keypad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Keypad_C* UPrimalItemStructure_Keypad_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Keypad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Keypad_C*>(UPrimalItemStructure_Keypad_C::StaticClass()->DefaultObject);

	return Default;
}

}


