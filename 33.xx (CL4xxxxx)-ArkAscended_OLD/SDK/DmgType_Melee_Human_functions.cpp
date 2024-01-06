#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_Human.DmgType_Melee_Human_C
// (None)

class UClass* UDmgType_Melee_Human_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_Human_C");

	return Clss;
}


// DmgType_Melee_Human_C DmgType_Melee_Human.Default__DmgType_Melee_Human_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_Human_C* UDmgType_Melee_Human_C::GetDefaultObj()
{
	static class UDmgType_Melee_Human_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_Human_C*>(UDmgType_Melee_Human_C::StaticClass()->DefaultObject);

	return Default;
}

}


