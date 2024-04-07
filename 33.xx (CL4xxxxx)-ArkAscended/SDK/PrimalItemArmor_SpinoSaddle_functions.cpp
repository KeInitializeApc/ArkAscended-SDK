#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_SpinoSaddle.PrimalItemArmor_SpinoSaddle_C
// (None)

class UClass* UPrimalItemArmor_SpinoSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_SpinoSaddle_C");

	return Clss;
}


// PrimalItemArmor_SpinoSaddle_C PrimalItemArmor_SpinoSaddle.Default__PrimalItemArmor_SpinoSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_SpinoSaddle_C* UPrimalItemArmor_SpinoSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_SpinoSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_SpinoSaddle_C*>(UPrimalItemArmor_SpinoSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


