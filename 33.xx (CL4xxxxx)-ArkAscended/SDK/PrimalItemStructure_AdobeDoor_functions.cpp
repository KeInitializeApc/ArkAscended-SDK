#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_AdobeDoor.PrimalItemStructure_AdobeDoor_C
// (None)

class UClass* UPrimalItemStructure_AdobeDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_AdobeDoor_C");

	return Clss;
}


// PrimalItemStructure_AdobeDoor_C PrimalItemStructure_AdobeDoor.Default__PrimalItemStructure_AdobeDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_AdobeDoor_C* UPrimalItemStructure_AdobeDoor_C::GetDefaultObj()
{
	static class UPrimalItemStructure_AdobeDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_AdobeDoor_C*>(UPrimalItemStructure_AdobeDoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


