#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_AdobeFrameGate.PrimalItemStructure_AdobeFrameGate_C
// (None)

class UClass* UPrimalItemStructure_AdobeFrameGate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_AdobeFrameGate_C");

	return Clss;
}


// PrimalItemStructure_AdobeFrameGate_C PrimalItemStructure_AdobeFrameGate.Default__PrimalItemStructure_AdobeFrameGate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_AdobeFrameGate_C* UPrimalItemStructure_AdobeFrameGate_C::GetDefaultObj()
{
	static class UPrimalItemStructure_AdobeFrameGate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_AdobeFrameGate_C*>(UPrimalItemStructure_AdobeFrameGate_C::StaticClass()->DefaultObject);

	return Default;
}

}


