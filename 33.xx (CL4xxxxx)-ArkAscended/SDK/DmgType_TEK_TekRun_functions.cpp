#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_TEK_TekRun.DmgType_TEK_TekRun_C
// (None)

class UClass* UDmgType_TEK_TekRun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_TEK_TekRun_C");

	return Clss;
}


// DmgType_TEK_TekRun_C DmgType_TEK_TekRun.Default__DmgType_TEK_TekRun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_TEK_TekRun_C* UDmgType_TEK_TekRun_C::GetDefaultObj()
{
	static class UDmgType_TEK_TekRun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_TEK_TekRun_C*>(UDmgType_TEK_TekRun_C::StaticClass()->DefaultObject);

	return Default;
}

}


