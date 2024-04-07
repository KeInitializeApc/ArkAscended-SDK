#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_BeaverSaddle.PrimalItemArmor_BeaverSaddle_C
// (None)

class UClass* UPrimalItemArmor_BeaverSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_BeaverSaddle_C");

	return Clss;
}


// PrimalItemArmor_BeaverSaddle_C PrimalItemArmor_BeaverSaddle.Default__PrimalItemArmor_BeaverSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_BeaverSaddle_C* UPrimalItemArmor_BeaverSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_BeaverSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_BeaverSaddle_C*>(UPrimalItemArmor_BeaverSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


