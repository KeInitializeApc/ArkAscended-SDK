#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekTeleporterMini.PrimalItemStructure_TekTeleporterMini_C
// (None)

class UClass* UPrimalItemStructure_TekTeleporterMini_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekTeleporterMini_C");

	return Clss;
}


// PrimalItemStructure_TekTeleporterMini_C PrimalItemStructure_TekTeleporterMini.Default__PrimalItemStructure_TekTeleporterMini_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekTeleporterMini_C* UPrimalItemStructure_TekTeleporterMini_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekTeleporterMini_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekTeleporterMini_C*>(UPrimalItemStructure_TekTeleporterMini_C::StaticClass()->DefaultObject);

	return Default;
}

}


