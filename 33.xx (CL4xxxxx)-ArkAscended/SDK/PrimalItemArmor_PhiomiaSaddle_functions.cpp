#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_PhiomiaSaddle.PrimalItemArmor_PhiomiaSaddle_C
// (None)

class UClass* UPrimalItemArmor_PhiomiaSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_PhiomiaSaddle_C");

	return Clss;
}


// PrimalItemArmor_PhiomiaSaddle_C PrimalItemArmor_PhiomiaSaddle.Default__PrimalItemArmor_PhiomiaSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_PhiomiaSaddle_C* UPrimalItemArmor_PhiomiaSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_PhiomiaSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_PhiomiaSaddle_C*>(UPrimalItemArmor_PhiomiaSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


