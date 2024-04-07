#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_BasiliskSaddle.PrimalItemArmor_BasiliskSaddle_C
// (None)

class UClass* UPrimalItemArmor_BasiliskSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_BasiliskSaddle_C");

	return Clss;
}


// PrimalItemArmor_BasiliskSaddle_C PrimalItemArmor_BasiliskSaddle.Default__PrimalItemArmor_BasiliskSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_BasiliskSaddle_C* UPrimalItemArmor_BasiliskSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_BasiliskSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_BasiliskSaddle_C*>(UPrimalItemArmor_BasiliskSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


