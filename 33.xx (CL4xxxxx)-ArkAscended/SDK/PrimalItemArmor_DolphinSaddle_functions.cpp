#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_DolphinSaddle.PrimalItemArmor_DolphinSaddle_C
// (None)

class UClass* UPrimalItemArmor_DolphinSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_DolphinSaddle_C");

	return Clss;
}


// PrimalItemArmor_DolphinSaddle_C PrimalItemArmor_DolphinSaddle.Default__PrimalItemArmor_DolphinSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_DolphinSaddle_C* UPrimalItemArmor_DolphinSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_DolphinSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_DolphinSaddle_C*>(UPrimalItemArmor_DolphinSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


