#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TaxidermyBase_Large.PrimalItemStructure_TaxidermyBase_Large_C
// (None)

class UClass* UPrimalItemStructure_TaxidermyBase_Large_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TaxidermyBase_Large_C");

	return Clss;
}


// PrimalItemStructure_TaxidermyBase_Large_C PrimalItemStructure_TaxidermyBase_Large.Default__PrimalItemStructure_TaxidermyBase_Large_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TaxidermyBase_Large_C* UPrimalItemStructure_TaxidermyBase_Large_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TaxidermyBase_Large_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TaxidermyBase_Large_C*>(UPrimalItemStructure_TaxidermyBase_Large_C::StaticClass()->DefaultObject);

	return Default;
}

}


