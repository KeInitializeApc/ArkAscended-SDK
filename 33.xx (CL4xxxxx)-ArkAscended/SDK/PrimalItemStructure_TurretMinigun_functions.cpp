#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TurretMinigun.PrimalItemStructure_TurretMinigun_C
// (None)

class UClass* UPrimalItemStructure_TurretMinigun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TurretMinigun_C");

	return Clss;
}


// PrimalItemStructure_TurretMinigun_C PrimalItemStructure_TurretMinigun.Default__PrimalItemStructure_TurretMinigun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TurretMinigun_C* UPrimalItemStructure_TurretMinigun_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TurretMinigun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TurretMinigun_C*>(UPrimalItemStructure_TurretMinigun_C::StaticClass()->DefaultObject);

	return Default;
}

}


