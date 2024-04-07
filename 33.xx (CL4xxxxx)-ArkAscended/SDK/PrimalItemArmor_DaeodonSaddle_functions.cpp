#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_DaeodonSaddle.PrimalItemArmor_DaeodonSaddle_C
// (None)

class UClass* UPrimalItemArmor_DaeodonSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_DaeodonSaddle_C");

	return Clss;
}


// PrimalItemArmor_DaeodonSaddle_C PrimalItemArmor_DaeodonSaddle.Default__PrimalItemArmor_DaeodonSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_DaeodonSaddle_C* UPrimalItemArmor_DaeodonSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_DaeodonSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_DaeodonSaddle_C*>(UPrimalItemArmor_DaeodonSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


