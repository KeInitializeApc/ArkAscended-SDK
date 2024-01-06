#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumableEatable.PrimalItemConsumableEatable_C
// (None)

class UClass* UPrimalItemConsumableEatable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumableEatable_C");

	return Clss;
}


// PrimalItemConsumableEatable_C PrimalItemConsumableEatable.Default__PrimalItemConsumableEatable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumableEatable_C* UPrimalItemConsumableEatable_C::GetDefaultObj()
{
	static class UPrimalItemConsumableEatable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumableEatable_C*>(UPrimalItemConsumableEatable_C::StaticClass()->DefaultObject);

	return Default;
}

}


