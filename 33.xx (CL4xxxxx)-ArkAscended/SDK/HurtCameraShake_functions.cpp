#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HurtCameraShake.HurtCameraShake_C
// (None)

class UClass* UHurtCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HurtCameraShake_C");

	return Clss;
}


// HurtCameraShake_C HurtCameraShake.Default__HurtCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHurtCameraShake_C* UHurtCameraShake_C::GetDefaultObj()
{
	static class UHurtCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHurtCameraShake_C*>(UHurtCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


