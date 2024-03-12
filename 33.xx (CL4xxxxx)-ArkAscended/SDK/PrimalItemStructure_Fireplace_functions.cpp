#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Fireplace.PrimalItemStructure_Fireplace_C
// (None)

class UClass* UPrimalItemStructure_Fireplace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Fireplace_C");

	return Clss;
}


// PrimalItemStructure_Fireplace_C PrimalItemStructure_Fireplace.Default__PrimalItemStructure_Fireplace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Fireplace_C* UPrimalItemStructure_Fireplace_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Fireplace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Fireplace_C*>(UPrimalItemStructure_Fireplace_C::StaticClass()->DefaultObject);

	return Default;
}

}


