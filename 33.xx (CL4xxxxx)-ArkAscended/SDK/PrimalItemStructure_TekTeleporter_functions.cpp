#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekTeleporter.PrimalItemStructure_TekTeleporter_C
// (None)

class UClass* UPrimalItemStructure_TekTeleporter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekTeleporter_C");

	return Clss;
}


// PrimalItemStructure_TekTeleporter_C PrimalItemStructure_TekTeleporter.Default__PrimalItemStructure_TekTeleporter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekTeleporter_C* UPrimalItemStructure_TekTeleporter_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekTeleporter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekTeleporter_C*>(UPrimalItemStructure_TekTeleporter_C::StaticClass()->DefaultObject);

	return Default;
}

}


