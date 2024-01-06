#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_FlameThrower.DmgType_FlameThrower_C
// (None)

class UClass* UDmgType_FlameThrower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_FlameThrower_C");

	return Clss;
}


// DmgType_FlameThrower_C DmgType_FlameThrower.Default__DmgType_FlameThrower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_FlameThrower_C* UDmgType_FlameThrower_C::GetDefaultObj()
{
	static class UDmgType_FlameThrower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_FlameThrower_C*>(UDmgType_FlameThrower_C::StaticClass()->DefaultObject);

	return Default;
}

}


