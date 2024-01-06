#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalCameraConfig_BP_Base.PrimalCameraConfig_BP_Base_C
// (None)

class UClass* UPrimalCameraConfig_BP_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalCameraConfig_BP_Base_C");

	return Clss;
}


// PrimalCameraConfig_BP_Base_C PrimalCameraConfig_BP_Base.Default__PrimalCameraConfig_BP_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalCameraConfig_BP_Base_C* UPrimalCameraConfig_BP_Base_C::GetDefaultObj()
{
	static class UPrimalCameraConfig_BP_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalCameraConfig_BP_Base_C*>(UPrimalCameraConfig_BP_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


