#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_DoedSaddle.PrimalItemArmor_DoedSaddle_C
// (None)

class UClass* UPrimalItemArmor_DoedSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_DoedSaddle_C");

	return Clss;
}


// PrimalItemArmor_DoedSaddle_C PrimalItemArmor_DoedSaddle.Default__PrimalItemArmor_DoedSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_DoedSaddle_C* UPrimalItemArmor_DoedSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_DoedSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_DoedSaddle_C*>(UPrimalItemArmor_DoedSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


