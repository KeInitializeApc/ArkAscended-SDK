#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_BasePillar.PrimalItemStructure_BasePillar_C
// (None)

class UClass* UPrimalItemStructure_BasePillar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_BasePillar_C");

	return Clss;
}


// PrimalItemStructure_BasePillar_C PrimalItemStructure_BasePillar.Default__PrimalItemStructure_BasePillar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_BasePillar_C* UPrimalItemStructure_BasePillar_C::GetDefaultObj()
{
	static class UPrimalItemStructure_BasePillar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_BasePillar_C*>(UPrimalItemStructure_BasePillar_C::StaticClass()->DefaultObject);

	return Default;
}

}


