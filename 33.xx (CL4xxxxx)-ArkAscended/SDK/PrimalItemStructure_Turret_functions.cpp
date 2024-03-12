#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Turret.PrimalItemStructure_Turret_C
// (None)

class UClass* UPrimalItemStructure_Turret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Turret_C");

	return Clss;
}


// PrimalItemStructure_Turret_C PrimalItemStructure_Turret.Default__PrimalItemStructure_Turret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Turret_C* UPrimalItemStructure_Turret_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Turret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Turret_C*>(UPrimalItemStructure_Turret_C::StaticClass()->DefaultObject);

	return Default;
}

}


