#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_NoBuild.Buff_NoBuild_C
// (Actor)

class UClass* ABuff_NoBuild_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_NoBuild_C");

	return Clss;
}


// Buff_NoBuild_C Buff_NoBuild.Default__Buff_NoBuild_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_NoBuild_C* ABuff_NoBuild_C::GetDefaultObj()
{
	static class ABuff_NoBuild_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_NoBuild_C*>(ABuff_NoBuild_C::StaticClass()->DefaultObject);

	return Default;
}

}


