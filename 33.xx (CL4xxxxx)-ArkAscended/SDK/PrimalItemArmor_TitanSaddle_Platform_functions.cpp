#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_TitanSaddle_Platform.PrimalItemArmor_TitanSaddle_Platform_C
// (None)

class UClass* UPrimalItemArmor_TitanSaddle_Platform_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_TitanSaddle_Platform_C");

	return Clss;
}


// PrimalItemArmor_TitanSaddle_Platform_C PrimalItemArmor_TitanSaddle_Platform.Default__PrimalItemArmor_TitanSaddle_Platform_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_TitanSaddle_Platform_C* UPrimalItemArmor_TitanSaddle_Platform_C::GetDefaultObj()
{
	static class UPrimalItemArmor_TitanSaddle_Platform_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_TitanSaddle_Platform_C*>(UPrimalItemArmor_TitanSaddle_Platform_C::StaticClass()->DefaultObject);

	return Default;
}

}


