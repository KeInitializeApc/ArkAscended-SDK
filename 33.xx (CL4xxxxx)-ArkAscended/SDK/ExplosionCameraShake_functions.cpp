#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ExplosionCameraShake.ExplosionCameraShake_C
// (None)

class UClass* UExplosionCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExplosionCameraShake_C");

	return Clss;
}


// ExplosionCameraShake_C ExplosionCameraShake.Default__ExplosionCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UExplosionCameraShake_C* UExplosionCameraShake_C::GetDefaultObj()
{
	static class UExplosionCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UExplosionCameraShake_C*>(UExplosionCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


