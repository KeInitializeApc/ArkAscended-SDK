#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_ThatchRoof.PrimalItemStructure_ThatchRoof_C
// (None)

class UClass* UPrimalItemStructure_ThatchRoof_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_ThatchRoof_C");

	return Clss;
}


// PrimalItemStructure_ThatchRoof_C PrimalItemStructure_ThatchRoof.Default__PrimalItemStructure_ThatchRoof_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_ThatchRoof_C* UPrimalItemStructure_ThatchRoof_C::GetDefaultObj()
{
	static class UPrimalItemStructure_ThatchRoof_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_ThatchRoof_C*>(UPrimalItemStructure_ThatchRoof_C::StaticClass()->DefaultObject);

	return Default;
}

}


