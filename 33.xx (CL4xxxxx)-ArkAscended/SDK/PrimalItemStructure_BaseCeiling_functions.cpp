#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_BaseCeiling.PrimalItemStructure_BaseCeiling_C
// (None)

class UClass* UPrimalItemStructure_BaseCeiling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_BaseCeiling_C");

	return Clss;
}


// PrimalItemStructure_BaseCeiling_C PrimalItemStructure_BaseCeiling.Default__PrimalItemStructure_BaseCeiling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_BaseCeiling_C* UPrimalItemStructure_BaseCeiling_C::GetDefaultObj()
{
	static class UPrimalItemStructure_BaseCeiling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_BaseCeiling_C*>(UPrimalItemStructure_BaseCeiling_C::StaticClass()->DefaultObject);

	return Default;
}

}


