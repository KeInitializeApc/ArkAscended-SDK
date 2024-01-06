#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_MetalIngot.PrimalItemResource_MetalIngot_C
// (None)

class UClass* UPrimalItemResource_MetalIngot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_MetalIngot_C");

	return Clss;
}


// PrimalItemResource_MetalIngot_C PrimalItemResource_MetalIngot.Default__PrimalItemResource_MetalIngot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_MetalIngot_C* UPrimalItemResource_MetalIngot_C::GetDefaultObj()
{
	static class UPrimalItemResource_MetalIngot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_MetalIngot_C*>(UPrimalItemResource_MetalIngot_C::StaticClass()->DefaultObject);

	return Default;
}

}


