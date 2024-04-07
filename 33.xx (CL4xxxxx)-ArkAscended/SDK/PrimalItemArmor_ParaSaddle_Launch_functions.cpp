#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_ParaSaddle_Launch.PrimalItemArmor_ParaSaddle_Launch_C
// (None)

class UClass* UPrimalItemArmor_ParaSaddle_Launch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_ParaSaddle_Launch_C");

	return Clss;
}


// PrimalItemArmor_ParaSaddle_Launch_C PrimalItemArmor_ParaSaddle_Launch.Default__PrimalItemArmor_ParaSaddle_Launch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_ParaSaddle_Launch_C* UPrimalItemArmor_ParaSaddle_Launch_C::GetDefaultObj()
{
	static class UPrimalItemArmor_ParaSaddle_Launch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_ParaSaddle_Launch_C*>(UPrimalItemArmor_ParaSaddle_Launch_C::StaticClass()->DefaultObject);

	return Default;
}

}


