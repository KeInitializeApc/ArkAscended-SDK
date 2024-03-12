#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_StagSaddle.PrimalItemArmor_StagSaddle_C
// (None)

class UClass* UPrimalItemArmor_StagSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_StagSaddle_C");

	return Clss;
}


// PrimalItemArmor_StagSaddle_C PrimalItemArmor_StagSaddle.Default__PrimalItemArmor_StagSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_StagSaddle_C* UPrimalItemArmor_StagSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_StagSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_StagSaddle_C*>(UPrimalItemArmor_StagSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


