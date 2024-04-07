#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekPillar.PrimalItemStructure_TekPillar_C
// (None)

class UClass* UPrimalItemStructure_TekPillar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekPillar_C");

	return Clss;
}


// PrimalItemStructure_TekPillar_C PrimalItemStructure_TekPillar.Default__PrimalItemStructure_TekPillar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekPillar_C* UPrimalItemStructure_TekPillar_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekPillar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekPillar_C*>(UPrimalItemStructure_TekPillar_C::StaticClass()->DefaultObject);

	return Default;
}

}


