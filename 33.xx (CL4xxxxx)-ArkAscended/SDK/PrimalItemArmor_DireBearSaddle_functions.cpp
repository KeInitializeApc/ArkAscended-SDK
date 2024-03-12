#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_DireBearSaddle.PrimalItemArmor_DireBearSaddle_C
// (None)

class UClass* UPrimalItemArmor_DireBearSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_DireBearSaddle_C");

	return Clss;
}


// PrimalItemArmor_DireBearSaddle_C PrimalItemArmor_DireBearSaddle.Default__PrimalItemArmor_DireBearSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_DireBearSaddle_C* UPrimalItemArmor_DireBearSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_DireBearSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_DireBearSaddle_C*>(UPrimalItemArmor_DireBearSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


