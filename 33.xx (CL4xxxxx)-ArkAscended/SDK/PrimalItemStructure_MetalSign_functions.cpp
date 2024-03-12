#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_MetalSign.PrimalItemStructure_MetalSign_C
// (None)

class UClass* UPrimalItemStructure_MetalSign_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_MetalSign_C");

	return Clss;
}


// PrimalItemStructure_MetalSign_C PrimalItemStructure_MetalSign.Default__PrimalItemStructure_MetalSign_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_MetalSign_C* UPrimalItemStructure_MetalSign_C::GetDefaultObj()
{
	static class UPrimalItemStructure_MetalSign_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_MetalSign_C*>(UPrimalItemStructure_MetalSign_C::StaticClass()->DefaultObject);

	return Default;
}

}


