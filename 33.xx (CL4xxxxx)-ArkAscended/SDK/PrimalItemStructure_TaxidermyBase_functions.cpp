#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TaxidermyBase.PrimalItemStructure_TaxidermyBase_C
// (None)

class UClass* UPrimalItemStructure_TaxidermyBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TaxidermyBase_C");

	return Clss;
}


// PrimalItemStructure_TaxidermyBase_C PrimalItemStructure_TaxidermyBase.Default__PrimalItemStructure_TaxidermyBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TaxidermyBase_C* UPrimalItemStructure_TaxidermyBase_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TaxidermyBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TaxidermyBase_C*>(UPrimalItemStructure_TaxidermyBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


