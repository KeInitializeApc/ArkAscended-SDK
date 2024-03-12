#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_IndustrialForge.PrimalItemStructure_IndustrialForge_C
// (None)

class UClass* UPrimalItemStructure_IndustrialForge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_IndustrialForge_C");

	return Clss;
}


// PrimalItemStructure_IndustrialForge_C PrimalItemStructure_IndustrialForge.Default__PrimalItemStructure_IndustrialForge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_IndustrialForge_C* UPrimalItemStructure_IndustrialForge_C::GetDefaultObj()
{
	static class UPrimalItemStructure_IndustrialForge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_IndustrialForge_C*>(UPrimalItemStructure_IndustrialForge_C::StaticClass()->DefaultObject);

	return Default;
}

}


