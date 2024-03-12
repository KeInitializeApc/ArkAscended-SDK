#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TurretRocket.PrimalItemStructure_TurretRocket_C
// (None)

class UClass* UPrimalItemStructure_TurretRocket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TurretRocket_C");

	return Clss;
}


// PrimalItemStructure_TurretRocket_C PrimalItemStructure_TurretRocket.Default__PrimalItemStructure_TurretRocket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TurretRocket_C* UPrimalItemStructure_TurretRocket_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TurretRocket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TurretRocket_C*>(UPrimalItemStructure_TurretRocket_C::StaticClass()->DefaultObject);

	return Default;
}

}


