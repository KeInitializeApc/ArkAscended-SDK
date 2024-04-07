#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_TrikeSaddle.PrimalItemArmor_TrikeSaddle_C
// (None)

class UClass* UPrimalItemArmor_TrikeSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_TrikeSaddle_C");

	return Clss;
}


// PrimalItemArmor_TrikeSaddle_C PrimalItemArmor_TrikeSaddle.Default__PrimalItemArmor_TrikeSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_TrikeSaddle_C* UPrimalItemArmor_TrikeSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_TrikeSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_TrikeSaddle_C*>(UPrimalItemArmor_TrikeSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


