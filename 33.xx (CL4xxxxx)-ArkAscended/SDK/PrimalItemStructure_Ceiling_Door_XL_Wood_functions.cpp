#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Ceiling_Door_XL_Wood.PrimalItemStructure_Ceiling_Door_XL_Wood_C
// (None)

class UClass* UPrimalItemStructure_Ceiling_Door_XL_Wood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Ceiling_Door_XL_Wood_C");

	return Clss;
}


// PrimalItemStructure_Ceiling_Door_XL_Wood_C PrimalItemStructure_Ceiling_Door_XL_Wood.Default__PrimalItemStructure_Ceiling_Door_XL_Wood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Ceiling_Door_XL_Wood_C* UPrimalItemStructure_Ceiling_Door_XL_Wood_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Ceiling_Door_XL_Wood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Ceiling_Door_XL_Wood_C*>(UPrimalItemStructure_Ceiling_Door_XL_Wood_C::StaticClass()->DefaultObject);

	return Default;
}

}


