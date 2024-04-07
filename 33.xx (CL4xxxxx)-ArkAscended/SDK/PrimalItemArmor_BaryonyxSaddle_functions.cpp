#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_BaryonyxSaddle.PrimalItemArmor_BaryonyxSaddle_C
// (None)

class UClass* UPrimalItemArmor_BaryonyxSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_BaryonyxSaddle_C");

	return Clss;
}


// PrimalItemArmor_BaryonyxSaddle_C PrimalItemArmor_BaryonyxSaddle.Default__PrimalItemArmor_BaryonyxSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_BaryonyxSaddle_C* UPrimalItemArmor_BaryonyxSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_BaryonyxSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_BaryonyxSaddle_C*>(UPrimalItemArmor_BaryonyxSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


