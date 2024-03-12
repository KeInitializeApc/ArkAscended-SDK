#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_PachySaddle.PrimalItemArmor_PachySaddle_C
// (None)

class UClass* UPrimalItemArmor_PachySaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_PachySaddle_C");

	return Clss;
}


// PrimalItemArmor_PachySaddle_C PrimalItemArmor_PachySaddle.Default__PrimalItemArmor_PachySaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_PachySaddle_C* UPrimalItemArmor_PachySaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_PachySaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_PachySaddle_C*>(UPrimalItemArmor_PachySaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


