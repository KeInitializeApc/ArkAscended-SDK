#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_TEK.DmgType_TEK_C
// (None)

class UClass* UDmgType_TEK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_TEK_C");

	return Clss;
}


// DmgType_TEK_C DmgType_TEK.Default__DmgType_TEK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_TEK_C* UDmgType_TEK_C::GetDefaultObj()
{
	static class UDmgType_TEK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_TEK_C*>(UDmgType_TEK_C::StaticClass()->DefaultObject);

	return Default;
}

}


