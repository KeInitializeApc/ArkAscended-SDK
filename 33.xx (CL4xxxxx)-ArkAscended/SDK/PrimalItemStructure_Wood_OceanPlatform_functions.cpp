#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Wood_OceanPlatform.PrimalItemStructure_Wood_OceanPlatform_C
// (None)

class UClass* UPrimalItemStructure_Wood_OceanPlatform_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Wood_OceanPlatform_C");

	return Clss;
}


// PrimalItemStructure_Wood_OceanPlatform_C PrimalItemStructure_Wood_OceanPlatform.Default__PrimalItemStructure_Wood_OceanPlatform_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Wood_OceanPlatform_C* UPrimalItemStructure_Wood_OceanPlatform_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Wood_OceanPlatform_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Wood_OceanPlatform_C*>(UPrimalItemStructure_Wood_OceanPlatform_C::StaticClass()->DefaultObject);

	return Default;
}

}


