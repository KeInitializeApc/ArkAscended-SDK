#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_ParaSaddle.PrimalItemArmor_ParaSaddle_C
// (None)

class UClass* UPrimalItemArmor_ParaSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_ParaSaddle_C");

	return Clss;
}


// PrimalItemArmor_ParaSaddle_C PrimalItemArmor_ParaSaddle.Default__PrimalItemArmor_ParaSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_ParaSaddle_C* UPrimalItemArmor_ParaSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_ParaSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_ParaSaddle_C*>(UPrimalItemArmor_ParaSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


