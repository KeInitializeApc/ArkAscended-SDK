#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_YutySaddle.PrimalItemArmor_YutySaddle_C
// (None)

class UClass* UPrimalItemArmor_YutySaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_YutySaddle_C");

	return Clss;
}


// PrimalItemArmor_YutySaddle_C PrimalItemArmor_YutySaddle.Default__PrimalItemArmor_YutySaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_YutySaddle_C* UPrimalItemArmor_YutySaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_YutySaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_YutySaddle_C*>(UPrimalItemArmor_YutySaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


