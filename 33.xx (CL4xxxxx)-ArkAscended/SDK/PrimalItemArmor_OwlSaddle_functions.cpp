#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_OwlSaddle.PrimalItemArmor_OwlSaddle_C
// (None)

class UClass* UPrimalItemArmor_OwlSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_OwlSaddle_C");

	return Clss;
}


// PrimalItemArmor_OwlSaddle_C PrimalItemArmor_OwlSaddle.Default__PrimalItemArmor_OwlSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_OwlSaddle_C* UPrimalItemArmor_OwlSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_OwlSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_OwlSaddle_C*>(UPrimalItemArmor_OwlSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


