#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoCharacterStatusComponent_BP.DinoCharacterStatusComponent_BP_C
// (None)

class UClass* UDinoCharacterStatusComponent_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoCharacterStatusComponent_BP_C");

	return Clss;
}


// DinoCharacterStatusComponent_BP_C DinoCharacterStatusComponent_BP.Default__DinoCharacterStatusComponent_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoCharacterStatusComponent_BP_C* UDinoCharacterStatusComponent_BP_C::GetDefaultObj()
{
	static class UDinoCharacterStatusComponent_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoCharacterStatusComponent_BP_C*>(UDinoCharacterStatusComponent_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


