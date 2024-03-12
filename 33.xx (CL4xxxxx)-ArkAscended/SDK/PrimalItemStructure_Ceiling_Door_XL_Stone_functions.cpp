#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Ceiling_Door_XL_Stone.PrimalItemStructure_Ceiling_Door_XL_Stone_C
// (None)

class UClass* UPrimalItemStructure_Ceiling_Door_XL_Stone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Ceiling_Door_XL_Stone_C");

	return Clss;
}


// PrimalItemStructure_Ceiling_Door_XL_Stone_C PrimalItemStructure_Ceiling_Door_XL_Stone.Default__PrimalItemStructure_Ceiling_Door_XL_Stone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Ceiling_Door_XL_Stone_C* UPrimalItemStructure_Ceiling_Door_XL_Stone_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Ceiling_Door_XL_Stone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Ceiling_Door_XL_Stone_C*>(UPrimalItemStructure_Ceiling_Door_XL_Stone_C::StaticClass()->DefaultObject);

	return Default;
}

}


