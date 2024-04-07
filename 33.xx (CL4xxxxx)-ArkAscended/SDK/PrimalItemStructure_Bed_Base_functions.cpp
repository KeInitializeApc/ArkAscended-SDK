#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Bed_Base.PrimalItemStructure_Bed_Base_C
// (None)

class UClass* UPrimalItemStructure_Bed_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Bed_Base_C");

	return Clss;
}


// PrimalItemStructure_Bed_Base_C PrimalItemStructure_Bed_Base.Default__PrimalItemStructure_Bed_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Bed_Base_C* UPrimalItemStructure_Bed_Base_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Bed_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Bed_Base_C*>(UPrimalItemStructure_Bed_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


