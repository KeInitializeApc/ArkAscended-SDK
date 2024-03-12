#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_CureLesser.Buff_CureLesser_C
// (Actor)

class UClass* ABuff_CureLesser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_CureLesser_C");

	return Clss;
}


// Buff_CureLesser_C Buff_CureLesser.Default__Buff_CureLesser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_CureLesser_C* ABuff_CureLesser_C::GetDefaultObj()
{
	static class ABuff_CureLesser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_CureLesser_C*>(ABuff_CureLesser_C::StaticClass()->DefaultObject);

	return Default;
}

}


