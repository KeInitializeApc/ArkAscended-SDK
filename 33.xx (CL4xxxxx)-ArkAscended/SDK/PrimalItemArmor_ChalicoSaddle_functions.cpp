#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_ChalicoSaddle.PrimalItemArmor_ChalicoSaddle_C
// (None)

class UClass* UPrimalItemArmor_ChalicoSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_ChalicoSaddle_C");

	return Clss;
}


// PrimalItemArmor_ChalicoSaddle_C PrimalItemArmor_ChalicoSaddle.Default__PrimalItemArmor_ChalicoSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_ChalicoSaddle_C* UPrimalItemArmor_ChalicoSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_ChalicoSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_ChalicoSaddle_C*>(UPrimalItemArmor_ChalicoSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


