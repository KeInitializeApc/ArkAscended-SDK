#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_MetalTrapdoorGiant.PrimalItemStructure_MetalTrapdoorGiant_C
// (None)

class UClass* UPrimalItemStructure_MetalTrapdoorGiant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_MetalTrapdoorGiant_C");

	return Clss;
}


// PrimalItemStructure_MetalTrapdoorGiant_C PrimalItemStructure_MetalTrapdoorGiant.Default__PrimalItemStructure_MetalTrapdoorGiant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_MetalTrapdoorGiant_C* UPrimalItemStructure_MetalTrapdoorGiant_C::GetDefaultObj()
{
	static class UPrimalItemStructure_MetalTrapdoorGiant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_MetalTrapdoorGiant_C*>(UPrimalItemStructure_MetalTrapdoorGiant_C::StaticClass()->DefaultObject);

	return Default;
}

}


