#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_GachaSaddle.PrimalItemArmor_GachaSaddle_C
// (None)

class UClass* UPrimalItemArmor_GachaSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_GachaSaddle_C");

	return Clss;
}


// PrimalItemArmor_GachaSaddle_C PrimalItemArmor_GachaSaddle.Default__PrimalItemArmor_GachaSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_GachaSaddle_C* UPrimalItemArmor_GachaSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_GachaSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_GachaSaddle_C*>(UPrimalItemArmor_GachaSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


