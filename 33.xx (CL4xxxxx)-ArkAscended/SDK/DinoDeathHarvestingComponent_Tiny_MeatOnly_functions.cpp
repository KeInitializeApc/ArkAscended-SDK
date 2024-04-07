#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoDeathHarvestingComponent_Tiny_MeatOnly.DinoDeathHarvestingComponent_Tiny_MeatOnly_C
// (None)

class UClass* UDinoDeathHarvestingComponent_Tiny_MeatOnly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoDeathHarvestingComponent_Tiny_MeatOnly_C");

	return Clss;
}


// DinoDeathHarvestingComponent_Tiny_MeatOnly_C DinoDeathHarvestingComponent_Tiny_MeatOnly.Default__DinoDeathHarvestingComponent_Tiny_MeatOnly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoDeathHarvestingComponent_Tiny_MeatOnly_C* UDinoDeathHarvestingComponent_Tiny_MeatOnly_C::GetDefaultObj()
{
	static class UDinoDeathHarvestingComponent_Tiny_MeatOnly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoDeathHarvestingComponent_Tiny_MeatOnly_C*>(UDinoDeathHarvestingComponent_Tiny_MeatOnly_C::StaticClass()->DefaultObject);

	return Default;
}

}


