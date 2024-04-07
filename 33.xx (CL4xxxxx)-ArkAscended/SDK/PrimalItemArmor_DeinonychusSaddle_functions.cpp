#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_DeinonychusSaddle.PrimalItemArmor_DeinonychusSaddle_C
// (None)

class UClass* UPrimalItemArmor_DeinonychusSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_DeinonychusSaddle_C");

	return Clss;
}


// PrimalItemArmor_DeinonychusSaddle_C PrimalItemArmor_DeinonychusSaddle.Default__PrimalItemArmor_DeinonychusSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_DeinonychusSaddle_C* UPrimalItemArmor_DeinonychusSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_DeinonychusSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_DeinonychusSaddle_C*>(UPrimalItemArmor_DeinonychusSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


