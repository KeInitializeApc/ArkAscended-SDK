#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_CompostBin.PrimalItemStructure_CompostBin_C
// (None)

class UClass* UPrimalItemStructure_CompostBin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_CompostBin_C");

	return Clss;
}


// PrimalItemStructure_CompostBin_C PrimalItemStructure_CompostBin.Default__PrimalItemStructure_CompostBin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_CompostBin_C* UPrimalItemStructure_CompostBin_C::GetDefaultObj()
{
	static class UPrimalItemStructure_CompostBin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_CompostBin_C*>(UPrimalItemStructure_CompostBin_C::StaticClass()->DefaultObject);

	return Default;
}

}


