#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_MantisSaddle.PrimalItemArmor_MantisSaddle_C
// (None)

class UClass* UPrimalItemArmor_MantisSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_MantisSaddle_C");

	return Clss;
}


// PrimalItemArmor_MantisSaddle_C PrimalItemArmor_MantisSaddle.Default__PrimalItemArmor_MantisSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_MantisSaddle_C* UPrimalItemArmor_MantisSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_MantisSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_MantisSaddle_C*>(UPrimalItemArmor_MantisSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


