#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_PteroSaddle.PrimalItemArmor_PteroSaddle_C
// (None)

class UClass* UPrimalItemArmor_PteroSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_PteroSaddle_C");

	return Clss;
}


// PrimalItemArmor_PteroSaddle_C PrimalItemArmor_PteroSaddle.Default__PrimalItemArmor_PteroSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_PteroSaddle_C* UPrimalItemArmor_PteroSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_PteroSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_PteroSaddle_C*>(UPrimalItemArmor_PteroSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


