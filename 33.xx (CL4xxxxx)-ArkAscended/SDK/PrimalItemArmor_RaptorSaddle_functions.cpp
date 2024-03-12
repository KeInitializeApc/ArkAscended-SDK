#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_RaptorSaddle.PrimalItemArmor_RaptorSaddle_C
// (None)

class UClass* UPrimalItemArmor_RaptorSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_RaptorSaddle_C");

	return Clss;
}


// PrimalItemArmor_RaptorSaddle_C PrimalItemArmor_RaptorSaddle.Default__PrimalItemArmor_RaptorSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_RaptorSaddle_C* UPrimalItemArmor_RaptorSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_RaptorSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_RaptorSaddle_C*>(UPrimalItemArmor_RaptorSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


