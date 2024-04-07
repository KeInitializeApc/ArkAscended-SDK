#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_IceJumperSaddle.PrimalItemArmor_IceJumperSaddle_C
// (None)

class UClass* UPrimalItemArmor_IceJumperSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_IceJumperSaddle_C");

	return Clss;
}


// PrimalItemArmor_IceJumperSaddle_C PrimalItemArmor_IceJumperSaddle.Default__PrimalItemArmor_IceJumperSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_IceJumperSaddle_C* UPrimalItemArmor_IceJumperSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_IceJumperSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_IceJumperSaddle_C*>(UPrimalItemArmor_IceJumperSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


