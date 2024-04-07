#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_RexSaddle_StompedGlasses.PrimalItemArmor_RexSaddle_StompedGlasses_C
// (None)

class UClass* UPrimalItemArmor_RexSaddle_StompedGlasses_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_RexSaddle_StompedGlasses_C");

	return Clss;
}


// PrimalItemArmor_RexSaddle_StompedGlasses_C PrimalItemArmor_RexSaddle_StompedGlasses.Default__PrimalItemArmor_RexSaddle_StompedGlasses_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_RexSaddle_StompedGlasses_C* UPrimalItemArmor_RexSaddle_StompedGlasses_C::GetDefaultObj()
{
	static class UPrimalItemArmor_RexSaddle_StompedGlasses_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_RexSaddle_StompedGlasses_C*>(UPrimalItemArmor_RexSaddle_StompedGlasses_C::StaticClass()->DefaultObject);

	return Default;
}

}


