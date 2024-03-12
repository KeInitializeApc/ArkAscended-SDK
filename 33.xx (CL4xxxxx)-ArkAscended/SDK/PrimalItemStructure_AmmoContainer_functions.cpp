#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_AmmoContainer.PrimalItemStructure_AmmoContainer_C
// (None)

class UClass* UPrimalItemStructure_AmmoContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_AmmoContainer_C");

	return Clss;
}


// PrimalItemStructure_AmmoContainer_C PrimalItemStructure_AmmoContainer.Default__PrimalItemStructure_AmmoContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_AmmoContainer_C* UPrimalItemStructure_AmmoContainer_C::GetDefaultObj()
{
	static class UPrimalItemStructure_AmmoContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_AmmoContainer_C*>(UPrimalItemStructure_AmmoContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


