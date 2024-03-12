#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_CarnoSaddle.PrimalItemArmor_CarnoSaddle_C
// (None)

class UClass* UPrimalItemArmor_CarnoSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_CarnoSaddle_C");

	return Clss;
}


// PrimalItemArmor_CarnoSaddle_C PrimalItemArmor_CarnoSaddle.Default__PrimalItemArmor_CarnoSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_CarnoSaddle_C* UPrimalItemArmor_CarnoSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_CarnoSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_CarnoSaddle_C*>(UPrimalItemArmor_CarnoSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


