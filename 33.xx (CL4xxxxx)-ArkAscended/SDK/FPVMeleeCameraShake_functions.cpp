#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FPVMeleeCameraShake.FPVMeleeCameraShake_C
// (None)

class UClass* UFPVMeleeCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FPVMeleeCameraShake_C");

	return Clss;
}


// FPVMeleeCameraShake_C FPVMeleeCameraShake.Default__FPVMeleeCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFPVMeleeCameraShake_C* UFPVMeleeCameraShake_C::GetDefaultObj()
{
	static class UFPVMeleeCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFPVMeleeCameraShake_C*>(UFPVMeleeCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


