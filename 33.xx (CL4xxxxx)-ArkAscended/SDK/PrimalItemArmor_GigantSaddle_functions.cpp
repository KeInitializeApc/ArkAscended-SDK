#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_GigantSaddle.PrimalItemArmor_GigantSaddle_C
// (None)

class UClass* UPrimalItemArmor_GigantSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_GigantSaddle_C");

	return Clss;
}


// PrimalItemArmor_GigantSaddle_C PrimalItemArmor_GigantSaddle.Default__PrimalItemArmor_GigantSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_GigantSaddle_C* UPrimalItemArmor_GigantSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_GigantSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_GigantSaddle_C*>(UPrimalItemArmor_GigantSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


