#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChargedTekCameraShake.ChargedTekCameraShake_C
// (None)

class UClass* UChargedTekCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChargedTekCameraShake_C");

	return Clss;
}


// ChargedTekCameraShake_C ChargedTekCameraShake.Default__ChargedTekCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChargedTekCameraShake_C* UChargedTekCameraShake_C::GetDefaultObj()
{
	static class UChargedTekCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChargedTekCameraShake_C*>(UChargedTekCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


