#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_CamelsaurusSaddle.PrimalItemArmor_CamelsaurusSaddle_C
// (None)

class UClass* UPrimalItemArmor_CamelsaurusSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_CamelsaurusSaddle_C");

	return Clss;
}


// PrimalItemArmor_CamelsaurusSaddle_C PrimalItemArmor_CamelsaurusSaddle.Default__PrimalItemArmor_CamelsaurusSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_CamelsaurusSaddle_C* UPrimalItemArmor_CamelsaurusSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_CamelsaurusSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_CamelsaurusSaddle_C*>(UPrimalItemArmor_CamelsaurusSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


