#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TriRoof_Greenhouse.PrimalItemStructure_TriRoof_Greenhouse_C
// (None)

class UClass* UPrimalItemStructure_TriRoof_Greenhouse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TriRoof_Greenhouse_C");

	return Clss;
}


// PrimalItemStructure_TriRoof_Greenhouse_C PrimalItemStructure_TriRoof_Greenhouse.Default__PrimalItemStructure_TriRoof_Greenhouse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TriRoof_Greenhouse_C* UPrimalItemStructure_TriRoof_Greenhouse_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TriRoof_Greenhouse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TriRoof_Greenhouse_C*>(UPrimalItemStructure_TriRoof_Greenhouse_C::StaticClass()->DefaultObject);

	return Default;
}

}


