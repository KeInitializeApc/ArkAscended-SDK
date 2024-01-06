#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoCameraConfig_Base_BP.DinoCameraConfig_Base_BP_C
// (None)

class UClass* UDinoCameraConfig_Base_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoCameraConfig_Base_BP_C");

	return Clss;
}


// DinoCameraConfig_Base_BP_C DinoCameraConfig_Base_BP.Default__DinoCameraConfig_Base_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoCameraConfig_Base_BP_C* UDinoCameraConfig_Base_BP_C::GetDefaultObj()
{
	static class UDinoCameraConfig_Base_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoCameraConfig_Base_BP_C*>(UDinoCameraConfig_Base_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


