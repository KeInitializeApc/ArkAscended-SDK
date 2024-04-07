#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_QuetzSaddle.PrimalItemArmor_QuetzSaddle_C
// (None)

class UClass* UPrimalItemArmor_QuetzSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_QuetzSaddle_C");

	return Clss;
}


// PrimalItemArmor_QuetzSaddle_C PrimalItemArmor_QuetzSaddle.Default__PrimalItemArmor_QuetzSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_QuetzSaddle_C* UPrimalItemArmor_QuetzSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_QuetzSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_QuetzSaddle_C*>(UPrimalItemArmor_QuetzSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


