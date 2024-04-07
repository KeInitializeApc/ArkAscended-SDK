#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TurretBallista.PrimalItemStructure_TurretBallista_C
// (None)

class UClass* UPrimalItemStructure_TurretBallista_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TurretBallista_C");

	return Clss;
}


// PrimalItemStructure_TurretBallista_C PrimalItemStructure_TurretBallista.Default__PrimalItemStructure_TurretBallista_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TurretBallista_C* UPrimalItemStructure_TurretBallista_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TurretBallista_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TurretBallista_C*>(UPrimalItemStructure_TurretBallista_C::StaticClass()->DefaultObject);

	return Default;
}

}


