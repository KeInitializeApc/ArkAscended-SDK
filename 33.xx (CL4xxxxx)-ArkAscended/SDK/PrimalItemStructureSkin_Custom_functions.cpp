#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructureSkin_Custom.PrimalItemStructureSkin_Custom_C
// (None)

class UClass* UPrimalItemStructureSkin_Custom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructureSkin_Custom_C");

	return Clss;
}


// PrimalItemStructureSkin_Custom_C PrimalItemStructureSkin_Custom.Default__PrimalItemStructureSkin_Custom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructureSkin_Custom_C* UPrimalItemStructureSkin_Custom_C::GetDefaultObj()
{
	static class UPrimalItemStructureSkin_Custom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructureSkin_Custom_C*>(UPrimalItemStructureSkin_Custom_C::StaticClass()->DefaultObject);

	return Default;
}

}


