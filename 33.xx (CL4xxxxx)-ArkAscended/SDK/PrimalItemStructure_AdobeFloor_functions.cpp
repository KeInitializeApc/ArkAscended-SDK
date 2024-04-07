#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_AdobeFloor.PrimalItemStructure_AdobeFloor_C
// (None)

class UClass* UPrimalItemStructure_AdobeFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_AdobeFloor_C");

	return Clss;
}


// PrimalItemStructure_AdobeFloor_C PrimalItemStructure_AdobeFloor.Default__PrimalItemStructure_AdobeFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_AdobeFloor_C* UPrimalItemStructure_AdobeFloor_C::GetDefaultObj()
{
	static class UPrimalItemStructure_AdobeFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_AdobeFloor_C*>(UPrimalItemStructure_AdobeFloor_C::StaticClass()->DefaultObject);

	return Default;
}

}


