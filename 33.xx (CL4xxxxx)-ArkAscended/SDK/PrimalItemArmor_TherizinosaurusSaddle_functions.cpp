#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_TherizinosaurusSaddle.PrimalItemArmor_TherizinosaurusSaddle_C
// (None)

class UClass* UPrimalItemArmor_TherizinosaurusSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_TherizinosaurusSaddle_C");

	return Clss;
}


// PrimalItemArmor_TherizinosaurusSaddle_C PrimalItemArmor_TherizinosaurusSaddle.Default__PrimalItemArmor_TherizinosaurusSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_TherizinosaurusSaddle_C* UPrimalItemArmor_TherizinosaurusSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_TherizinosaurusSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_TherizinosaurusSaddle_C*>(UPrimalItemArmor_TherizinosaurusSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


