#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_StonePillar.PrimalItemStructure_StonePillar_C
// (None)

class UClass* UPrimalItemStructure_StonePillar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_StonePillar_C");

	return Clss;
}


// PrimalItemStructure_StonePillar_C PrimalItemStructure_StonePillar.Default__PrimalItemStructure_StonePillar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_StonePillar_C* UPrimalItemStructure_StonePillar_C::GetDefaultObj()
{
	static class UPrimalItemStructure_StonePillar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_StonePillar_C*>(UPrimalItemStructure_StonePillar_C::StaticClass()->DefaultObject);

	return Default;
}

}


