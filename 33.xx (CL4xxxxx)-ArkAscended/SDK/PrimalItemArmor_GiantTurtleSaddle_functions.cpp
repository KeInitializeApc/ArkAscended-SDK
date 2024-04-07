#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_GiantTurtleSaddle.PrimalItemArmor_GiantTurtleSaddle_C
// (None)

class UClass* UPrimalItemArmor_GiantTurtleSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_GiantTurtleSaddle_C");

	return Clss;
}


// PrimalItemArmor_GiantTurtleSaddle_C PrimalItemArmor_GiantTurtleSaddle.Default__PrimalItemArmor_GiantTurtleSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_GiantTurtleSaddle_C* UPrimalItemArmor_GiantTurtleSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_GiantTurtleSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_GiantTurtleSaddle_C*>(UPrimalItemArmor_GiantTurtleSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


