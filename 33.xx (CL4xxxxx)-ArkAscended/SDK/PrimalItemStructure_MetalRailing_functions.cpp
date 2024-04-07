#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_MetalRailing.PrimalItemStructure_MetalRailing_C
// (None)

class UClass* UPrimalItemStructure_MetalRailing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_MetalRailing_C");

	return Clss;
}


// PrimalItemStructure_MetalRailing_C PrimalItemStructure_MetalRailing.Default__PrimalItemStructure_MetalRailing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_MetalRailing_C* UPrimalItemStructure_MetalRailing_C::GetDefaultObj()
{
	static class UPrimalItemStructure_MetalRailing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_MetalRailing_C*>(UPrimalItemStructure_MetalRailing_C::StaticClass()->DefaultObject);

	return Default;
}

}


