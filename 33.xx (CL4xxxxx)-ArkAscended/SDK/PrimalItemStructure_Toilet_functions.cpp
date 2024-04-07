#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Toilet.PrimalItemStructure_Toilet_C
// (None)

class UClass* UPrimalItemStructure_Toilet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Toilet_C");

	return Clss;
}


// PrimalItemStructure_Toilet_C PrimalItemStructure_Toilet.Default__PrimalItemStructure_Toilet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Toilet_C* UPrimalItemStructure_Toilet_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Toilet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Toilet_C*>(UPrimalItemStructure_Toilet_C::StaticClass()->DefaultObject);

	return Default;
}

}


