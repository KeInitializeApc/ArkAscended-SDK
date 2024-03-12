#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_HeavyTurret.PrimalItemStructure_HeavyTurret_C
// (None)

class UClass* UPrimalItemStructure_HeavyTurret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_HeavyTurret_C");

	return Clss;
}


// PrimalItemStructure_HeavyTurret_C PrimalItemStructure_HeavyTurret.Default__PrimalItemStructure_HeavyTurret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_HeavyTurret_C* UPrimalItemStructure_HeavyTurret_C::GetDefaultObj()
{
	static class UPrimalItemStructure_HeavyTurret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_HeavyTurret_C*>(UPrimalItemStructure_HeavyTurret_C::StaticClass()->DefaultObject);

	return Default;
}

}


