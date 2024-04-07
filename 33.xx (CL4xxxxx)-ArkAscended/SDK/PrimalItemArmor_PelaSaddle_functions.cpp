#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_PelaSaddle.PrimalItemArmor_PelaSaddle_C
// (None)

class UClass* UPrimalItemArmor_PelaSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_PelaSaddle_C");

	return Clss;
}


// PrimalItemArmor_PelaSaddle_C PrimalItemArmor_PelaSaddle.Default__PrimalItemArmor_PelaSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_PelaSaddle_C* UPrimalItemArmor_PelaSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_PelaSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_PelaSaddle_C*>(UPrimalItemArmor_PelaSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


