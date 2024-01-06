#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_DmgMetal_TekSword.DmgType_Melee_DmgMetal_TekSword_C
// (None)

class UClass* UDmgType_Melee_DmgMetal_TekSword_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_DmgMetal_TekSword_C");

	return Clss;
}


// DmgType_Melee_DmgMetal_TekSword_C DmgType_Melee_DmgMetal_TekSword.Default__DmgType_Melee_DmgMetal_TekSword_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_DmgMetal_TekSword_C* UDmgType_Melee_DmgMetal_TekSword_C::GetDefaultObj()
{
	static class UDmgType_Melee_DmgMetal_TekSword_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_DmgMetal_TekSword_C*>(UDmgType_Melee_DmgMetal_TekSword_C::StaticClass()->DefaultObject);

	return Default;
}

}


