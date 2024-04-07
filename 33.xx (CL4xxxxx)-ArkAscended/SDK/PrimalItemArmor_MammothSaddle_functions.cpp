#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_MammothSaddle.PrimalItemArmor_MammothSaddle_C
// (None)

class UClass* UPrimalItemArmor_MammothSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_MammothSaddle_C");

	return Clss;
}


// PrimalItemArmor_MammothSaddle_C PrimalItemArmor_MammothSaddle.Default__PrimalItemArmor_MammothSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_MammothSaddle_C* UPrimalItemArmor_MammothSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_MammothSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_MammothSaddle_C*>(UPrimalItemArmor_MammothSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


