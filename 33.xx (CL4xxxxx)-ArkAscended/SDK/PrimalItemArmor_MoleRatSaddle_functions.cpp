#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_MoleRatSaddle.PrimalItemArmor_MoleRatSaddle_C
// (None)

class UClass* UPrimalItemArmor_MoleRatSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_MoleRatSaddle_C");

	return Clss;
}


// PrimalItemArmor_MoleRatSaddle_C PrimalItemArmor_MoleRatSaddle.Default__PrimalItemArmor_MoleRatSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_MoleRatSaddle_C* UPrimalItemArmor_MoleRatSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_MoleRatSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_MoleRatSaddle_C*>(UPrimalItemArmor_MoleRatSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


