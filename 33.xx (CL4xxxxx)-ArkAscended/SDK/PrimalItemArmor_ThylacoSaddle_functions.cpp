#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_ThylacoSaddle.PrimalItemArmor_ThylacoSaddle_C
// (None)

class UClass* UPrimalItemArmor_ThylacoSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_ThylacoSaddle_C");

	return Clss;
}


// PrimalItemArmor_ThylacoSaddle_C PrimalItemArmor_ThylacoSaddle.Default__PrimalItemArmor_ThylacoSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_ThylacoSaddle_C* UPrimalItemArmor_ThylacoSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_ThylacoSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_ThylacoSaddle_C*>(UPrimalItemArmor_ThylacoSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


