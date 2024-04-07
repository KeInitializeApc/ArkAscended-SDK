#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_UnderwaterBase.PrimalItemStructure_UnderwaterBase_C
// (None)

class UClass* UPrimalItemStructure_UnderwaterBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_UnderwaterBase_C");

	return Clss;
}


// PrimalItemStructure_UnderwaterBase_C PrimalItemStructure_UnderwaterBase.Default__PrimalItemStructure_UnderwaterBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_UnderwaterBase_C* UPrimalItemStructure_UnderwaterBase_C::GetDefaultObj()
{
	static class UPrimalItemStructure_UnderwaterBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_UnderwaterBase_C*>(UPrimalItemStructure_UnderwaterBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


