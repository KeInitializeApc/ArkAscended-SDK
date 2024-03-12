#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_BasiloSaddle.PrimalItemArmor_BasiloSaddle_C
// (None)

class UClass* UPrimalItemArmor_BasiloSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_BasiloSaddle_C");

	return Clss;
}


// PrimalItemArmor_BasiloSaddle_C PrimalItemArmor_BasiloSaddle.Default__PrimalItemArmor_BasiloSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_BasiloSaddle_C* UPrimalItemArmor_BasiloSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_BasiloSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_BasiloSaddle_C*>(UPrimalItemArmor_BasiloSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


