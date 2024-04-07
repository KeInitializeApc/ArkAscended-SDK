#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_DunkleosteusSaddle.PrimalItemArmor_DunkleosteusSaddle_C
// (None)

class UClass* UPrimalItemArmor_DunkleosteusSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_DunkleosteusSaddle_C");

	return Clss;
}


// PrimalItemArmor_DunkleosteusSaddle_C PrimalItemArmor_DunkleosteusSaddle.Default__PrimalItemArmor_DunkleosteusSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_DunkleosteusSaddle_C* UPrimalItemArmor_DunkleosteusSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_DunkleosteusSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_DunkleosteusSaddle_C*>(UPrimalItemArmor_DunkleosteusSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


