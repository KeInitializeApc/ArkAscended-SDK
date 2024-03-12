#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_TusoSaddle.PrimalItemArmor_TusoSaddle_C
// (None)

class UClass* UPrimalItemArmor_TusoSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_TusoSaddle_C");

	return Clss;
}


// PrimalItemArmor_TusoSaddle_C PrimalItemArmor_TusoSaddle.Default__PrimalItemArmor_TusoSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_TusoSaddle_C* UPrimalItemArmor_TusoSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_TusoSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_TusoSaddle_C*>(UPrimalItemArmor_TusoSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


