#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Ceiling_Door_XL_Adobe.PrimalItemStructure_Ceiling_Door_XL_Adobe_C
// (None)

class UClass* UPrimalItemStructure_Ceiling_Door_XL_Adobe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Ceiling_Door_XL_Adobe_C");

	return Clss;
}


// PrimalItemStructure_Ceiling_Door_XL_Adobe_C PrimalItemStructure_Ceiling_Door_XL_Adobe.Default__PrimalItemStructure_Ceiling_Door_XL_Adobe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Ceiling_Door_XL_Adobe_C* UPrimalItemStructure_Ceiling_Door_XL_Adobe_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Ceiling_Door_XL_Adobe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Ceiling_Door_XL_Adobe_C*>(UPrimalItemStructure_Ceiling_Door_XL_Adobe_C::StaticClass()->DefaultObject);

	return Default;
}

}


