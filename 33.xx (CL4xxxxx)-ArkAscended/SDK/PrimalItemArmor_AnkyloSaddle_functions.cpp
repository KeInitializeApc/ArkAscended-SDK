#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_AnkyloSaddle.PrimalItemArmor_AnkyloSaddle_C
// (None)

class UClass* UPrimalItemArmor_AnkyloSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_AnkyloSaddle_C");

	return Clss;
}


// PrimalItemArmor_AnkyloSaddle_C PrimalItemArmor_AnkyloSaddle.Default__PrimalItemArmor_AnkyloSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_AnkyloSaddle_C* UPrimalItemArmor_AnkyloSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_AnkyloSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_AnkyloSaddle_C*>(UPrimalItemArmor_AnkyloSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


