#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_MantaSaddle.PrimalItemArmor_MantaSaddle_C
// (None)

class UClass* UPrimalItemArmor_MantaSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_MantaSaddle_C");

	return Clss;
}


// PrimalItemArmor_MantaSaddle_C PrimalItemArmor_MantaSaddle.Default__PrimalItemArmor_MantaSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_MantaSaddle_C* UPrimalItemArmor_MantaSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_MantaSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_MantaSaddle_C*>(UPrimalItemArmor_MantaSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


