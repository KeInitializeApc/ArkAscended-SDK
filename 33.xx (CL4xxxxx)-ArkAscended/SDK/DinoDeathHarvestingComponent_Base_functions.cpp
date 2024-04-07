#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoDeathHarvestingComponent_Base.DinoDeathHarvestingComponent_Base_C
// (None)

class UClass* UDinoDeathHarvestingComponent_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoDeathHarvestingComponent_Base_C");

	return Clss;
}


// DinoDeathHarvestingComponent_Base_C DinoDeathHarvestingComponent_Base.Default__DinoDeathHarvestingComponent_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoDeathHarvestingComponent_Base_C* UDinoDeathHarvestingComponent_Base_C::GetDefaultObj()
{
	static class UDinoDeathHarvestingComponent_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoDeathHarvestingComponent_Base_C*>(UDinoDeathHarvestingComponent_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


