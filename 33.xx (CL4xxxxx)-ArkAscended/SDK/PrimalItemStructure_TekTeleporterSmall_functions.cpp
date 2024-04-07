#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekTeleporterSmall.PrimalItemStructure_TekTeleporterSmall_C
// (None)

class UClass* UPrimalItemStructure_TekTeleporterSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekTeleporterSmall_C");

	return Clss;
}


// PrimalItemStructure_TekTeleporterSmall_C PrimalItemStructure_TekTeleporterSmall.Default__PrimalItemStructure_TekTeleporterSmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekTeleporterSmall_C* UPrimalItemStructure_TekTeleporterSmall_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekTeleporterSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekTeleporterSmall_C*>(UPrimalItemStructure_TekTeleporterSmall_C::StaticClass()->DefaultObject);

	return Default;
}

}


