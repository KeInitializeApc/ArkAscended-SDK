#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_TapejaraSaddle.PrimalItemArmor_TapejaraSaddle_C
// (None)

class UClass* UPrimalItemArmor_TapejaraSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_TapejaraSaddle_C");

	return Clss;
}


// PrimalItemArmor_TapejaraSaddle_C PrimalItemArmor_TapejaraSaddle.Default__PrimalItemArmor_TapejaraSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_TapejaraSaddle_C* UPrimalItemArmor_TapejaraSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_TapejaraSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_TapejaraSaddle_C*>(UPrimalItemArmor_TapejaraSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


