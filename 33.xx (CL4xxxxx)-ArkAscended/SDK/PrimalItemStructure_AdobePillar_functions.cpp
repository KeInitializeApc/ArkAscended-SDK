#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_AdobePillar.PrimalItemStructure_AdobePillar_C
// (None)

class UClass* UPrimalItemStructure_AdobePillar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_AdobePillar_C");

	return Clss;
}


// PrimalItemStructure_AdobePillar_C PrimalItemStructure_AdobePillar.Default__PrimalItemStructure_AdobePillar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_AdobePillar_C* UPrimalItemStructure_AdobePillar_C::GetDefaultObj()
{
	static class UPrimalItemStructure_AdobePillar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_AdobePillar_C*>(UPrimalItemStructure_AdobePillar_C::StaticClass()->DefaultObject);

	return Default;
}

}


