#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_MegatheriumSaddle.PrimalItemArmor_MegatheriumSaddle_C
// (None)

class UClass* UPrimalItemArmor_MegatheriumSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_MegatheriumSaddle_C");

	return Clss;
}


// PrimalItemArmor_MegatheriumSaddle_C PrimalItemArmor_MegatheriumSaddle.Default__PrimalItemArmor_MegatheriumSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_MegatheriumSaddle_C* UPrimalItemArmor_MegatheriumSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_MegatheriumSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_MegatheriumSaddle_C*>(UPrimalItemArmor_MegatheriumSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


