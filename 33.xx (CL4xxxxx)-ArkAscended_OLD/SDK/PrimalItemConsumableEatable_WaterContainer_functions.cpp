#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumableEatable_WaterContainer.PrimalItemConsumableEatable_WaterContainer_C
// (None)

class UClass* UPrimalItemConsumableEatable_WaterContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumableEatable_WaterContainer_C");

	return Clss;
}


// PrimalItemConsumableEatable_WaterContainer_C PrimalItemConsumableEatable_WaterContainer.Default__PrimalItemConsumableEatable_WaterContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumableEatable_WaterContainer_C* UPrimalItemConsumableEatable_WaterContainer_C::GetDefaultObj()
{
	static class UPrimalItemConsumableEatable_WaterContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumableEatable_WaterContainer_C*>(UPrimalItemConsumableEatable_WaterContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


