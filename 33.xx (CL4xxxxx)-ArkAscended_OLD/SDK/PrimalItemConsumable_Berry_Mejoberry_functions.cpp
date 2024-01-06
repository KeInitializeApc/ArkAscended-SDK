#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Berry_Mejoberry.PrimalItemConsumable_Berry_Mejoberry_C
// (None)

class UClass* UPrimalItemConsumable_Berry_Mejoberry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Berry_Mejoberry_C");

	return Clss;
}


// PrimalItemConsumable_Berry_Mejoberry_C PrimalItemConsumable_Berry_Mejoberry.Default__PrimalItemConsumable_Berry_Mejoberry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Berry_Mejoberry_C* UPrimalItemConsumable_Berry_Mejoberry_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Berry_Mejoberry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Berry_Mejoberry_C*>(UPrimalItemConsumable_Berry_Mejoberry_C::StaticClass()->DefaultObject);

	return Default;
}

}


