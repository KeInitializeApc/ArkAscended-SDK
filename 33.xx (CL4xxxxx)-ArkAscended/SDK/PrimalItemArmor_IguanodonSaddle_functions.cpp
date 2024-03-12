#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_IguanodonSaddle.PrimalItemArmor_IguanodonSaddle_C
// (None)

class UClass* UPrimalItemArmor_IguanodonSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_IguanodonSaddle_C");

	return Clss;
}


// PrimalItemArmor_IguanodonSaddle_C PrimalItemArmor_IguanodonSaddle.Default__PrimalItemArmor_IguanodonSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_IguanodonSaddle_C* UPrimalItemArmor_IguanodonSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_IguanodonSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_IguanodonSaddle_C*>(UPrimalItemArmor_IguanodonSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


