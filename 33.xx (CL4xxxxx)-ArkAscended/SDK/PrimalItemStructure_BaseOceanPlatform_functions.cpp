#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_BaseOceanPlatform.PrimalItemStructure_BaseOceanPlatform_C
// (None)

class UClass* UPrimalItemStructure_BaseOceanPlatform_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_BaseOceanPlatform_C");

	return Clss;
}


// PrimalItemStructure_BaseOceanPlatform_C PrimalItemStructure_BaseOceanPlatform.Default__PrimalItemStructure_BaseOceanPlatform_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_BaseOceanPlatform_C* UPrimalItemStructure_BaseOceanPlatform_C::GetDefaultObj()
{
	static class UPrimalItemStructure_BaseOceanPlatform_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_BaseOceanPlatform_C*>(UPrimalItemStructure_BaseOceanPlatform_C::StaticClass()->DefaultObject);

	return Default;
}

}


