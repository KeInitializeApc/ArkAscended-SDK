#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_AlloSaddle.PrimalItemArmor_AlloSaddle_C
// (None)

class UClass* UPrimalItemArmor_AlloSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_AlloSaddle_C");

	return Clss;
}


// PrimalItemArmor_AlloSaddle_C PrimalItemArmor_AlloSaddle.Default__PrimalItemArmor_AlloSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_AlloSaddle_C* UPrimalItemArmor_AlloSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_AlloSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_AlloSaddle_C*>(UPrimalItemArmor_AlloSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


