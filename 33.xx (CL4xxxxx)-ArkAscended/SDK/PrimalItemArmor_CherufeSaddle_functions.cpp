#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_CherufeSaddle.PrimalItemArmor_CherufeSaddle_C
// (None)

class UClass* UPrimalItemArmor_CherufeSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_CherufeSaddle_C");

	return Clss;
}


// PrimalItemArmor_CherufeSaddle_C PrimalItemArmor_CherufeSaddle.Default__PrimalItemArmor_CherufeSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_CherufeSaddle_C* UPrimalItemArmor_CherufeSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_CherufeSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_CherufeSaddle_C*>(UPrimalItemArmor_CherufeSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


