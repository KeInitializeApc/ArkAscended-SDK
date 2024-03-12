#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_MegalosaurusSaddle.PrimalItemArmor_MegalosaurusSaddle_C
// (None)

class UClass* UPrimalItemArmor_MegalosaurusSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_MegalosaurusSaddle_C");

	return Clss;
}


// PrimalItemArmor_MegalosaurusSaddle_C PrimalItemArmor_MegalosaurusSaddle.Default__PrimalItemArmor_MegalosaurusSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_MegalosaurusSaddle_C* UPrimalItemArmor_MegalosaurusSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_MegalosaurusSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_MegalosaurusSaddle_C*>(UPrimalItemArmor_MegalosaurusSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


