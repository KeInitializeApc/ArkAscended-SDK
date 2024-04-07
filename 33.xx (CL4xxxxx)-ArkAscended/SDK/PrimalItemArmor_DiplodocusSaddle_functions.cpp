#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_DiplodocusSaddle.PrimalItemArmor_DiplodocusSaddle_C
// (None)

class UClass* UPrimalItemArmor_DiplodocusSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_DiplodocusSaddle_C");

	return Clss;
}


// PrimalItemArmor_DiplodocusSaddle_C PrimalItemArmor_DiplodocusSaddle.Default__PrimalItemArmor_DiplodocusSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_DiplodocusSaddle_C* UPrimalItemArmor_DiplodocusSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_DiplodocusSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_DiplodocusSaddle_C*>(UPrimalItemArmor_DiplodocusSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


