#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WarMap.PrimalItemStructure_WarMap_C
// (None)

class UClass* UPrimalItemStructure_WarMap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WarMap_C");

	return Clss;
}


// PrimalItemStructure_WarMap_C PrimalItemStructure_WarMap.Default__PrimalItemStructure_WarMap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WarMap_C* UPrimalItemStructure_WarMap_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WarMap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WarMap_C*>(UPrimalItemStructure_WarMap_C::StaticClass()->DefaultObject);

	return Default;
}

}


