#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_ToadSaddle.PrimalItemArmor_ToadSaddle_C
// (None)

class UClass* UPrimalItemArmor_ToadSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_ToadSaddle_C");

	return Clss;
}


// PrimalItemArmor_ToadSaddle_C PrimalItemArmor_ToadSaddle.Default__PrimalItemArmor_ToadSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_ToadSaddle_C* UPrimalItemArmor_ToadSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_ToadSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_ToadSaddle_C*>(UPrimalItemArmor_ToadSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


