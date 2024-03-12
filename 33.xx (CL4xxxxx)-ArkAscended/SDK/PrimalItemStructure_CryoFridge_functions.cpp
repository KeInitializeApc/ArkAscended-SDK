#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_CryoFridge.PrimalItemStructure_CryoFridge_C
// (None)

class UClass* UPrimalItemStructure_CryoFridge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_CryoFridge_C");

	return Clss;
}


// PrimalItemStructure_CryoFridge_C PrimalItemStructure_CryoFridge.Default__PrimalItemStructure_CryoFridge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_CryoFridge_C* UPrimalItemStructure_CryoFridge_C::GetDefaultObj()
{
	static class UPrimalItemStructure_CryoFridge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_CryoFridge_C*>(UPrimalItemStructure_CryoFridge_C::StaticClass()->DefaultObject);

	return Default;
}

}


