#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_StaminaDrainReduction.Buff_StaminaDrainReduction_C
// (Actor)

class UClass* ABuff_StaminaDrainReduction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_StaminaDrainReduction_C");

	return Clss;
}


// Buff_StaminaDrainReduction_C Buff_StaminaDrainReduction.Default__Buff_StaminaDrainReduction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_StaminaDrainReduction_C* ABuff_StaminaDrainReduction_C::GetDefaultObj()
{
	static class ABuff_StaminaDrainReduction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_StaminaDrainReduction_C*>(ABuff_StaminaDrainReduction_C::StaticClass()->DefaultObject);

	return Default;
}

}


