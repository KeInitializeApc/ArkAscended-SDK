#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekBridge.PrimalItemStructure_TekBridge_C
// (None)

class UClass* UPrimalItemStructure_TekBridge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekBridge_C");

	return Clss;
}


// PrimalItemStructure_TekBridge_C PrimalItemStructure_TekBridge.Default__PrimalItemStructure_TekBridge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekBridge_C* UPrimalItemStructure_TekBridge_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekBridge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekBridge_C*>(UPrimalItemStructure_TekBridge_C::StaticClass()->DefaultObject);

	return Default;
}

}


