#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_AdobeGateDoor.PrimalItemStructure_AdobeGateDoor_C
// (None)

class UClass* UPrimalItemStructure_AdobeGateDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_AdobeGateDoor_C");

	return Clss;
}


// PrimalItemStructure_AdobeGateDoor_C PrimalItemStructure_AdobeGateDoor.Default__PrimalItemStructure_AdobeGateDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_AdobeGateDoor_C* UPrimalItemStructure_AdobeGateDoor_C::GetDefaultObj()
{
	static class UPrimalItemStructure_AdobeGateDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_AdobeGateDoor_C*>(UPrimalItemStructure_AdobeGateDoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


