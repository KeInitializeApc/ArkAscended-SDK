#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Bed_Modern.PrimalItemStructure_Bed_Modern_C
// (None)

class UClass* UPrimalItemStructure_Bed_Modern_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Bed_Modern_C");

	return Clss;
}


// PrimalItemStructure_Bed_Modern_C PrimalItemStructure_Bed_Modern.Default__PrimalItemStructure_Bed_Modern_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Bed_Modern_C* UPrimalItemStructure_Bed_Modern_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Bed_Modern_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Bed_Modern_C*>(UPrimalItemStructure_Bed_Modern_C::StaticClass()->DefaultObject);

	return Default;
}

}


