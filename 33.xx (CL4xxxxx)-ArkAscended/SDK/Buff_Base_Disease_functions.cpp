#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_Base_Disease.Buff_Base_Disease_C
// (Actor)

class UClass* ABuff_Base_Disease_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_Base_Disease_C");

	return Clss;
}


// Buff_Base_Disease_C Buff_Base_Disease.Default__Buff_Base_Disease_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_Base_Disease_C* ABuff_Base_Disease_C::GetDefaultObj()
{
	static class ABuff_Base_Disease_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_Base_Disease_C*>(ABuff_Base_Disease_C::StaticClass()->DefaultObject);

	return Default;
}

}


