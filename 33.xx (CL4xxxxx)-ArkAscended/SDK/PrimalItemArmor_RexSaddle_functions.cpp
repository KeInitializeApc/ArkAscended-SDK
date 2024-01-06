#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_RexSaddle.PrimalItemArmor_RexSaddle_C
// (None)

class UClass* UPrimalItemArmor_RexSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_RexSaddle_C");

	return Clss;
}


// PrimalItemArmor_RexSaddle_C PrimalItemArmor_RexSaddle.Default__PrimalItemArmor_RexSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_RexSaddle_C* UPrimalItemArmor_RexSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_RexSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_RexSaddle_C*>(UPrimalItemArmor_RexSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


