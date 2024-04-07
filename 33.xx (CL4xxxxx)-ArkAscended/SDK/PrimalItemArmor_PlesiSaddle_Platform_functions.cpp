#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_PlesiSaddle_Platform.PrimalItemArmor_PlesiSaddle_Platform_C
// (None)

class UClass* UPrimalItemArmor_PlesiSaddle_Platform_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_PlesiSaddle_Platform_C");

	return Clss;
}


// PrimalItemArmor_PlesiSaddle_Platform_C PrimalItemArmor_PlesiSaddle_Platform.Default__PrimalItemArmor_PlesiSaddle_Platform_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_PlesiSaddle_Platform_C* UPrimalItemArmor_PlesiSaddle_Platform_C::GetDefaultObj()
{
	static class UPrimalItemArmor_PlesiSaddle_Platform_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_PlesiSaddle_Platform_C*>(UPrimalItemArmor_PlesiSaddle_Platform_C::StaticClass()->DefaultObject);

	return Default;
}

}


