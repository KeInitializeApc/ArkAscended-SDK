#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_SpineyLizardSaddle.PrimalItemArmor_SpineyLizardSaddle_C
// (None)

class UClass* UPrimalItemArmor_SpineyLizardSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_SpineyLizardSaddle_C");

	return Clss;
}


// PrimalItemArmor_SpineyLizardSaddle_C PrimalItemArmor_SpineyLizardSaddle.Default__PrimalItemArmor_SpineyLizardSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_SpineyLizardSaddle_C* UPrimalItemArmor_SpineyLizardSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_SpineyLizardSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_SpineyLizardSaddle_C*>(UPrimalItemArmor_SpineyLizardSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


