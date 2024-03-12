#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_PlesiaSaddle.PrimalItemArmor_PlesiaSaddle_C
// (None)

class UClass* UPrimalItemArmor_PlesiaSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_PlesiaSaddle_C");

	return Clss;
}


// PrimalItemArmor_PlesiaSaddle_C PrimalItemArmor_PlesiaSaddle.Default__PrimalItemArmor_PlesiaSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_PlesiaSaddle_C* UPrimalItemArmor_PlesiaSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_PlesiaSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_PlesiaSaddle_C*>(UPrimalItemArmor_PlesiaSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


