#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_BaseFenceFoundation.PrimalItemStructure_BaseFenceFoundation_C
// (None)

class UClass* UPrimalItemStructure_BaseFenceFoundation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_BaseFenceFoundation_C");

	return Clss;
}


// PrimalItemStructure_BaseFenceFoundation_C PrimalItemStructure_BaseFenceFoundation.Default__PrimalItemStructure_BaseFenceFoundation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_BaseFenceFoundation_C* UPrimalItemStructure_BaseFenceFoundation_C::GetDefaultObj()
{
	static class UPrimalItemStructure_BaseFenceFoundation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_BaseFenceFoundation_C*>(UPrimalItemStructure_BaseFenceFoundation_C::StaticClass()->DefaultObject);

	return Default;
}

}


