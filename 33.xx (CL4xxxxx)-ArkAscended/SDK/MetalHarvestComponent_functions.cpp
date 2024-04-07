#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MetalHarvestComponent.MetalHarvestComponent_C
// (None)

class UClass* UMetalHarvestComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetalHarvestComponent_C");

	return Clss;
}


// MetalHarvestComponent_C MetalHarvestComponent.Default__MetalHarvestComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMetalHarvestComponent_C* UMetalHarvestComponent_C::GetDefaultObj()
{
	static class UMetalHarvestComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetalHarvestComponent_C*>(UMetalHarvestComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


