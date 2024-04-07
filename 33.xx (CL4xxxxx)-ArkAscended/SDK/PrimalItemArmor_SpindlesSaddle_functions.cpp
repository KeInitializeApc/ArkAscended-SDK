#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_SpindlesSaddle.PrimalItemArmor_SpindlesSaddle_C
// (None)

class UClass* UPrimalItemArmor_SpindlesSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_SpindlesSaddle_C");

	return Clss;
}


// PrimalItemArmor_SpindlesSaddle_C PrimalItemArmor_SpindlesSaddle.Default__PrimalItemArmor_SpindlesSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_SpindlesSaddle_C* UPrimalItemArmor_SpindlesSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_SpindlesSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_SpindlesSaddle_C*>(UPrimalItemArmor_SpindlesSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


