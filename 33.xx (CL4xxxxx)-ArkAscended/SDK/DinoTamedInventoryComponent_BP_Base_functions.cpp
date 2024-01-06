#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoTamedInventoryComponent_BP_Base.DinoTamedInventoryComponent_BP_Base_C
// (None)

class UClass* UDinoTamedInventoryComponent_BP_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoTamedInventoryComponent_BP_Base_C");

	return Clss;
}


// DinoTamedInventoryComponent_BP_Base_C DinoTamedInventoryComponent_BP_Base.Default__DinoTamedInventoryComponent_BP_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoTamedInventoryComponent_BP_Base_C* UDinoTamedInventoryComponent_BP_Base_C::GetDefaultObj()
{
	static class UDinoTamedInventoryComponent_BP_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoTamedInventoryComponent_BP_Base_C*>(UDinoTamedInventoryComponent_BP_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


