#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_ScorpionSaddle.PrimalItemArmor_ScorpionSaddle_C
// (None)

class UClass* UPrimalItemArmor_ScorpionSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_ScorpionSaddle_C");

	return Clss;
}


// PrimalItemArmor_ScorpionSaddle_C PrimalItemArmor_ScorpionSaddle.Default__PrimalItemArmor_ScorpionSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_ScorpionSaddle_C* UPrimalItemArmor_ScorpionSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_ScorpionSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_ScorpionSaddle_C*>(UPrimalItemArmor_ScorpionSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


