#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_RockDrakeSaddle.PrimalItemArmor_RockDrakeSaddle_C
// (None)

class UClass* UPrimalItemArmor_RockDrakeSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_RockDrakeSaddle_C");

	return Clss;
}


// PrimalItemArmor_RockDrakeSaddle_C PrimalItemArmor_RockDrakeSaddle.Default__PrimalItemArmor_RockDrakeSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_RockDrakeSaddle_C* UPrimalItemArmor_RockDrakeSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_RockDrakeSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_RockDrakeSaddle_C*>(UPrimalItemArmor_RockDrakeSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


