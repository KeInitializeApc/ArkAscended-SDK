#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_SauroSaddle_Platform.PrimalItemArmor_SauroSaddle_Platform_C
// (None)

class UClass* UPrimalItemArmor_SauroSaddle_Platform_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_SauroSaddle_Platform_C");

	return Clss;
}


// PrimalItemArmor_SauroSaddle_Platform_C PrimalItemArmor_SauroSaddle_Platform.Default__PrimalItemArmor_SauroSaddle_Platform_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_SauroSaddle_Platform_C* UPrimalItemArmor_SauroSaddle_Platform_C::GetDefaultObj()
{
	static class UPrimalItemArmor_SauroSaddle_Platform_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_SauroSaddle_Platform_C*>(UPrimalItemArmor_SauroSaddle_Platform_C::StaticClass()->DefaultObject);

	return Default;
}

}


