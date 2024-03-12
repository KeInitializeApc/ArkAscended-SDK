#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass FPV_Sword_AnimBP.FPV_Sword_AnimBP_C
// (None)

class UClass* UFPV_Sword_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FPV_Sword_AnimBP_C");

	return Clss;
}


// FPV_Sword_AnimBP_C FPV_Sword_AnimBP.Default__FPV_Sword_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFPV_Sword_AnimBP_C* UFPV_Sword_AnimBP_C::GetDefaultObj()
{
	static class UFPV_Sword_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFPV_Sword_AnimBP_C*>(UFPV_Sword_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


