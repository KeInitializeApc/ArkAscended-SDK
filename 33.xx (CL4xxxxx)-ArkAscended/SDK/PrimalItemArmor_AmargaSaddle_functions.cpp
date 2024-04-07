#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_AmargaSaddle.PrimalItemArmor_AmargaSaddle_C
// (None)

class UClass* UPrimalItemArmor_AmargaSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_AmargaSaddle_C");

	return Clss;
}


// PrimalItemArmor_AmargaSaddle_C PrimalItemArmor_AmargaSaddle.Default__PrimalItemArmor_AmargaSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_AmargaSaddle_C* UPrimalItemArmor_AmargaSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_AmargaSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_AmargaSaddle_C*>(UPrimalItemArmor_AmargaSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


