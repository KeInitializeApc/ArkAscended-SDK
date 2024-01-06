#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FPVClimbPickHitCameraShake.FPVClimbPickHitCameraShake_C
// (None)

class UClass* UFPVClimbPickHitCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FPVClimbPickHitCameraShake_C");

	return Clss;
}


// FPVClimbPickHitCameraShake_C FPVClimbPickHitCameraShake.Default__FPVClimbPickHitCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFPVClimbPickHitCameraShake_C* UFPVClimbPickHitCameraShake_C::GetDefaultObj()
{
	static class UFPVClimbPickHitCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFPVClimbPickHitCameraShake_C*>(UFPVClimbPickHitCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


