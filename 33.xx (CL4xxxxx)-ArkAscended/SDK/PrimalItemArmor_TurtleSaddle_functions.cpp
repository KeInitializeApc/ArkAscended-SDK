#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_TurtleSaddle.PrimalItemArmor_TurtleSaddle_C
// (None)

class UClass* UPrimalItemArmor_TurtleSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_TurtleSaddle_C");

	return Clss;
}


// PrimalItemArmor_TurtleSaddle_C PrimalItemArmor_TurtleSaddle.Default__PrimalItemArmor_TurtleSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_TurtleSaddle_C* UPrimalItemArmor_TurtleSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_TurtleSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_TurtleSaddle_C*>(UPrimalItemArmor_TurtleSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


