#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_RockGolemSaddle.PrimalItemArmor_RockGolemSaddle_C
// (None)

class UClass* UPrimalItemArmor_RockGolemSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_RockGolemSaddle_C");

	return Clss;
}


// PrimalItemArmor_RockGolemSaddle_C PrimalItemArmor_RockGolemSaddle.Default__PrimalItemArmor_RockGolemSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_RockGolemSaddle_C* UPrimalItemArmor_RockGolemSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_RockGolemSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_RockGolemSaddle_C*>(UPrimalItemArmor_RockGolemSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


