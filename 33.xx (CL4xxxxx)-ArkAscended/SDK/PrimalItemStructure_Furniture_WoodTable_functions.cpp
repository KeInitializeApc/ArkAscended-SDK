#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Furniture_WoodTable.PrimalItemStructure_Furniture_WoodTable_C
// (None)

class UClass* UPrimalItemStructure_Furniture_WoodTable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Furniture_WoodTable_C");

	return Clss;
}


// PrimalItemStructure_Furniture_WoodTable_C PrimalItemStructure_Furniture_WoodTable.Default__PrimalItemStructure_Furniture_WoodTable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Furniture_WoodTable_C* UPrimalItemStructure_Furniture_WoodTable_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Furniture_WoodTable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Furniture_WoodTable_C*>(UPrimalItemStructure_Furniture_WoodTable_C::StaticClass()->DefaultObject);

	return Default;
}

}


