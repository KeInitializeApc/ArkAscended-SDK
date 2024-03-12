#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_MegalaniaSaddle.PrimalItemArmor_MegalaniaSaddle_C
// (None)

class UClass* UPrimalItemArmor_MegalaniaSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_MegalaniaSaddle_C");

	return Clss;
}


// PrimalItemArmor_MegalaniaSaddle_C PrimalItemArmor_MegalaniaSaddle.Default__PrimalItemArmor_MegalaniaSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_MegalaniaSaddle_C* UPrimalItemArmor_MegalaniaSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_MegalaniaSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_MegalaniaSaddle_C*>(UPrimalItemArmor_MegalaniaSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


