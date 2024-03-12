#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_FreezeImmunity.Buff_FreezeImmunity_C
// (Actor)

class UClass* ABuff_FreezeImmunity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_FreezeImmunity_C");

	return Clss;
}


// Buff_FreezeImmunity_C Buff_FreezeImmunity.Default__Buff_FreezeImmunity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_FreezeImmunity_C* ABuff_FreezeImmunity_C::GetDefaultObj()
{
	static class ABuff_FreezeImmunity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_FreezeImmunity_C*>(ABuff_FreezeImmunity_C::StaticClass()->DefaultObject);

	return Default;
}

}


