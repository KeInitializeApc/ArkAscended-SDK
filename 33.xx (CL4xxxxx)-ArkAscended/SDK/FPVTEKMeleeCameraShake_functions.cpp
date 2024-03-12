#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FPVTEKMeleeCameraShake.FPVTEKMeleeCameraShake_C
// (None)

class UClass* UFPVTEKMeleeCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FPVTEKMeleeCameraShake_C");

	return Clss;
}


// FPVTEKMeleeCameraShake_C FPVTEKMeleeCameraShake.Default__FPVTEKMeleeCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFPVTEKMeleeCameraShake_C* UFPVTEKMeleeCameraShake_C::GetDefaultObj()
{
	static class UFPVTEKMeleeCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFPVTEKMeleeCameraShake_C*>(UFPVTEKMeleeCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


