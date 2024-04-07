#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TurretTek.PrimalItemStructure_TurretTek_C
// (None)

class UClass* UPrimalItemStructure_TurretTek_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TurretTek_C");

	return Clss;
}


// PrimalItemStructure_TurretTek_C PrimalItemStructure_TurretTek.Default__PrimalItemStructure_TurretTek_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TurretTek_C* UPrimalItemStructure_TurretTek_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TurretTek_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TurretTek_C*>(UPrimalItemStructure_TurretTek_C::StaticClass()->DefaultObject);

	return Default;
}

}


