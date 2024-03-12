#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_SarcoSaddle.PrimalItemArmor_SarcoSaddle_C
// (None)

class UClass* UPrimalItemArmor_SarcoSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_SarcoSaddle_C");

	return Clss;
}


// PrimalItemArmor_SarcoSaddle_C PrimalItemArmor_SarcoSaddle.Default__PrimalItemArmor_SarcoSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_SarcoSaddle_C* UPrimalItemArmor_SarcoSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_SarcoSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_SarcoSaddle_C*>(UPrimalItemArmor_SarcoSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


