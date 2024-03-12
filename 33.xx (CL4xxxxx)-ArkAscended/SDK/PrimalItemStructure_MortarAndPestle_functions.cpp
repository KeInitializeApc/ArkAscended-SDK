#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_MortarAndPestle.PrimalItemStructure_MortarAndPestle_C
// (None)

class UClass* UPrimalItemStructure_MortarAndPestle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_MortarAndPestle_C");

	return Clss;
}


// PrimalItemStructure_MortarAndPestle_C PrimalItemStructure_MortarAndPestle.Default__PrimalItemStructure_MortarAndPestle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_MortarAndPestle_C* UPrimalItemStructure_MortarAndPestle_C::GetDefaultObj()
{
	static class UPrimalItemStructure_MortarAndPestle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_MortarAndPestle_C*>(UPrimalItemStructure_MortarAndPestle_C::StaticClass()->DefaultObject);

	return Default;
}

}


