#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_ParacerSaddle_Platform.PrimalItemArmor_ParacerSaddle_Platform_C
// (None)

class UClass* UPrimalItemArmor_ParacerSaddle_Platform_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_ParacerSaddle_Platform_C");

	return Clss;
}


// PrimalItemArmor_ParacerSaddle_Platform_C PrimalItemArmor_ParacerSaddle_Platform.Default__PrimalItemArmor_ParacerSaddle_Platform_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_ParacerSaddle_Platform_C* UPrimalItemArmor_ParacerSaddle_Platform_C::GetDefaultObj()
{
	static class UPrimalItemArmor_ParacerSaddle_Platform_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_ParacerSaddle_Platform_C*>(UPrimalItemArmor_ParacerSaddle_Platform_C::StaticClass()->DefaultObject);

	return Default;
}

}


