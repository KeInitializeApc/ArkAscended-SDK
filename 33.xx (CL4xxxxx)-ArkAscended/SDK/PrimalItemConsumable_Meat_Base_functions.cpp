#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Meat_Base.PrimalItemConsumable_Meat_Base_C
// (None)

class UClass* UPrimalItemConsumable_Meat_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Meat_Base_C");

	return Clss;
}


// PrimalItemConsumable_Meat_Base_C PrimalItemConsumable_Meat_Base.Default__PrimalItemConsumable_Meat_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Meat_Base_C* UPrimalItemConsumable_Meat_Base_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Meat_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Meat_Base_C*>(UPrimalItemConsumable_Meat_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


