#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_BaseHatchet.DmgType_Melee_BaseHatchet_C
// (None)

class UClass* UDmgType_Melee_BaseHatchet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_BaseHatchet_C");

	return Clss;
}


// DmgType_Melee_BaseHatchet_C DmgType_Melee_BaseHatchet.Default__DmgType_Melee_BaseHatchet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_BaseHatchet_C* UDmgType_Melee_BaseHatchet_C::GetDefaultObj()
{
	static class UDmgType_Melee_BaseHatchet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_BaseHatchet_C*>(UDmgType_Melee_BaseHatchet_C::StaticClass()->DefaultObject);

	return Default;
}

}


