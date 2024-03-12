#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Mek_Character_Base_BP.Mek_Character_Base_BP_C
// (Actor, Pawn)

class UClass* AMek_Character_Base_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mek_Character_Base_BP_C");

	return Clss;
}


// Mek_Character_Base_BP_C Mek_Character_Base_BP.Default__Mek_Character_Base_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMek_Character_Base_BP_C* AMek_Character_Base_BP_C::GetDefaultObj()
{
	static class AMek_Character_Base_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMek_Character_Base_BP_C*>(AMek_Character_Base_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


