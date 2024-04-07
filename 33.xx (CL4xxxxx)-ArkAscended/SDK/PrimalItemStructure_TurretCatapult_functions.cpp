#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TurretCatapult.PrimalItemStructure_TurretCatapult_C
// (None)

class UClass* UPrimalItemStructure_TurretCatapult_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TurretCatapult_C");

	return Clss;
}


// PrimalItemStructure_TurretCatapult_C PrimalItemStructure_TurretCatapult.Default__PrimalItemStructure_TurretCatapult_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TurretCatapult_C* UPrimalItemStructure_TurretCatapult_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TurretCatapult_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TurretCatapult_C*>(UPrimalItemStructure_TurretCatapult_C::StaticClass()->DefaultObject);

	return Default;
}

}


