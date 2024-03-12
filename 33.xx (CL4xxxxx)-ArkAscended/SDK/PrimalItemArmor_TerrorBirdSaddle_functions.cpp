#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_TerrorBirdSaddle.PrimalItemArmor_TerrorBirdSaddle_C
// (None)

class UClass* UPrimalItemArmor_TerrorBirdSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_TerrorBirdSaddle_C");

	return Clss;
}


// PrimalItemArmor_TerrorBirdSaddle_C PrimalItemArmor_TerrorBirdSaddle.Default__PrimalItemArmor_TerrorBirdSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_TerrorBirdSaddle_C* UPrimalItemArmor_TerrorBirdSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_TerrorBirdSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_TerrorBirdSaddle_C*>(UPrimalItemArmor_TerrorBirdSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


