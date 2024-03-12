#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_StoneCeiling.PrimalItemStructure_StoneCeiling_C
// (None)

class UClass* UPrimalItemStructure_StoneCeiling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_StoneCeiling_C");

	return Clss;
}


// PrimalItemStructure_StoneCeiling_C PrimalItemStructure_StoneCeiling.Default__PrimalItemStructure_StoneCeiling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_StoneCeiling_C* UPrimalItemStructure_StoneCeiling_C::GetDefaultObj()
{
	static class UPrimalItemStructure_StoneCeiling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_StoneCeiling_C*>(UPrimalItemStructure_StoneCeiling_C::StaticClass()->DefaultObject);

	return Default;
}

}


