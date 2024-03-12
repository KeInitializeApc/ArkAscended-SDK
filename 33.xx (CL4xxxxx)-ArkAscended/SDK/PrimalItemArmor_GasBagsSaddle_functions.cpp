#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_GasBagsSaddle.PrimalItemArmor_GasBagsSaddle_C
// (None)

class UClass* UPrimalItemArmor_GasBagsSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_GasBagsSaddle_C");

	return Clss;
}


// PrimalItemArmor_GasBagsSaddle_C PrimalItemArmor_GasBagsSaddle.Default__PrimalItemArmor_GasBagsSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_GasBagsSaddle_C* UPrimalItemArmor_GasBagsSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_GasBagsSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_GasBagsSaddle_C*>(UPrimalItemArmor_GasBagsSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


