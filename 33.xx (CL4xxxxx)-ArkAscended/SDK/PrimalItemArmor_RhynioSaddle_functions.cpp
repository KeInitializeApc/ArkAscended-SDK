#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_RhynioSaddle.PrimalItemArmor_RhynioSaddle_C
// (None)

class UClass* UPrimalItemArmor_RhynioSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_RhynioSaddle_C");

	return Clss;
}


// PrimalItemArmor_RhynioSaddle_C PrimalItemArmor_RhynioSaddle.Default__PrimalItemArmor_RhynioSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_RhynioSaddle_C* UPrimalItemArmor_RhynioSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_RhynioSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_RhynioSaddle_C*>(UPrimalItemArmor_RhynioSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


