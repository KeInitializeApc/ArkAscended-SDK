#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_Glider_Base.Buff_Glider_Base_C
// (Actor)

class UClass* ABuff_Glider_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_Glider_Base_C");

	return Clss;
}


// Buff_Glider_Base_C Buff_Glider_Base.Default__Buff_Glider_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_Glider_Base_C* ABuff_Glider_Base_C::GetDefaultObj()
{
	static class ABuff_Glider_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_Glider_Base_C*>(ABuff_Glider_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


