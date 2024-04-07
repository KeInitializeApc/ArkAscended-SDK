#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShooterCameraConfig_BP.ShooterCameraConfig_BP_C
// (None)

class UClass* UShooterCameraConfig_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShooterCameraConfig_BP_C");

	return Clss;
}


// ShooterCameraConfig_BP_C ShooterCameraConfig_BP.Default__ShooterCameraConfig_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShooterCameraConfig_BP_C* UShooterCameraConfig_BP_C::GetDefaultObj()
{
	static class UShooterCameraConfig_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShooterCameraConfig_BP_C*>(UShooterCameraConfig_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


