#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Furniture_Rug.PrimalItemStructure_Furniture_Rug_C
// (None)

class UClass* UPrimalItemStructure_Furniture_Rug_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Furniture_Rug_C");

	return Clss;
}


// PrimalItemStructure_Furniture_Rug_C PrimalItemStructure_Furniture_Rug.Default__PrimalItemStructure_Furniture_Rug_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Furniture_Rug_C* UPrimalItemStructure_Furniture_Rug_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Furniture_Rug_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Furniture_Rug_C*>(UPrimalItemStructure_Furniture_Rug_C::StaticClass()->DefaultObject);

	return Default;
}

}


