#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_CrabSaddle.PrimalItemArmor_CrabSaddle_C
// (None)

class UClass* UPrimalItemArmor_CrabSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_CrabSaddle_C");

	return Clss;
}


// PrimalItemArmor_CrabSaddle_C PrimalItemArmor_CrabSaddle.Default__PrimalItemArmor_CrabSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_CrabSaddle_C* UPrimalItemArmor_CrabSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_CrabSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_CrabSaddle_C*>(UPrimalItemArmor_CrabSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


