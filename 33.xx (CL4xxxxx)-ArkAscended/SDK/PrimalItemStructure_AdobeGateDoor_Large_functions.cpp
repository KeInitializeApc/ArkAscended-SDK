#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_AdobeGateDoor_Large.PrimalItemStructure_AdobeGateDoor_Large_C
// (None)

class UClass* UPrimalItemStructure_AdobeGateDoor_Large_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_AdobeGateDoor_Large_C");

	return Clss;
}


// PrimalItemStructure_AdobeGateDoor_Large_C PrimalItemStructure_AdobeGateDoor_Large.Default__PrimalItemStructure_AdobeGateDoor_Large_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_AdobeGateDoor_Large_C* UPrimalItemStructure_AdobeGateDoor_Large_C::GetDefaultObj()
{
	static class UPrimalItemStructure_AdobeGateDoor_Large_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_AdobeGateDoor_Large_C*>(UPrimalItemStructure_AdobeGateDoor_Large_C::StaticClass()->DefaultObject);

	return Default;
}

}


