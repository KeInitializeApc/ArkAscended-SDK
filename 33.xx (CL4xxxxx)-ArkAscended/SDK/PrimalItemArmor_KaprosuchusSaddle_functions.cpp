#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_KaprosuchusSaddle.PrimalItemArmor_KaprosuchusSaddle_C
// (None)

class UClass* UPrimalItemArmor_KaprosuchusSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_KaprosuchusSaddle_C");

	return Clss;
}


// PrimalItemArmor_KaprosuchusSaddle_C PrimalItemArmor_KaprosuchusSaddle.Default__PrimalItemArmor_KaprosuchusSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_KaprosuchusSaddle_C* UPrimalItemArmor_KaprosuchusSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_KaprosuchusSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_KaprosuchusSaddle_C*>(UPrimalItemArmor_KaprosuchusSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


