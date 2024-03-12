#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_CavewolfSaddle.PrimalItemArmor_CavewolfSaddle_C
// (None)

class UClass* UPrimalItemArmor_CavewolfSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_CavewolfSaddle_C");

	return Clss;
}


// PrimalItemArmor_CavewolfSaddle_C PrimalItemArmor_CavewolfSaddle.Default__PrimalItemArmor_CavewolfSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_CavewolfSaddle_C* UPrimalItemArmor_CavewolfSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_CavewolfSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_CavewolfSaddle_C*>(UPrimalItemArmor_CavewolfSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


