#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_StoneFenceFoundation.PrimalItemStructure_StoneFenceFoundation_C
// (None)

class UClass* UPrimalItemStructure_StoneFenceFoundation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_StoneFenceFoundation_C");

	return Clss;
}


// PrimalItemStructure_StoneFenceFoundation_C PrimalItemStructure_StoneFenceFoundation.Default__PrimalItemStructure_StoneFenceFoundation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_StoneFenceFoundation_C* UPrimalItemStructure_StoneFenceFoundation_C::GetDefaultObj()
{
	static class UPrimalItemStructure_StoneFenceFoundation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_StoneFenceFoundation_C*>(UPrimalItemStructure_StoneFenceFoundation_C::StaticClass()->DefaultObject);

	return Default;
}

}


