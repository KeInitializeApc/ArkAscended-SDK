#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TreeTap.PrimalItemStructure_TreeTap_C
// (None)

class UClass* UPrimalItemStructure_TreeTap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TreeTap_C");

	return Clss;
}


// PrimalItemStructure_TreeTap_C PrimalItemStructure_TreeTap.Default__PrimalItemStructure_TreeTap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TreeTap_C* UPrimalItemStructure_TreeTap_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TreeTap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TreeTap_C*>(UPrimalItemStructure_TreeTap_C::StaticClass()->DefaultObject);

	return Default;
}

}


