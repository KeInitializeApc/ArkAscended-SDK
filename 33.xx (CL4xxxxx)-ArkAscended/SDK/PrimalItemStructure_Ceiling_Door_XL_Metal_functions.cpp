#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Ceiling_Door_XL_Metal.PrimalItemStructure_Ceiling_Door_XL_Metal_C
// (None)

class UClass* UPrimalItemStructure_Ceiling_Door_XL_Metal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Ceiling_Door_XL_Metal_C");

	return Clss;
}


// PrimalItemStructure_Ceiling_Door_XL_Metal_C PrimalItemStructure_Ceiling_Door_XL_Metal.Default__PrimalItemStructure_Ceiling_Door_XL_Metal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Ceiling_Door_XL_Metal_C* UPrimalItemStructure_Ceiling_Door_XL_Metal_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Ceiling_Door_XL_Metal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Ceiling_Door_XL_Metal_C*>(UPrimalItemStructure_Ceiling_Door_XL_Metal_C::StaticClass()->DefaultObject);

	return Default;
}

}


