#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_Paracer_Saddle.PrimalItemArmor_Paracer_Saddle_C
// (None)

class UClass* UPrimalItemArmor_Paracer_Saddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_Paracer_Saddle_C");

	return Clss;
}


// PrimalItemArmor_Paracer_Saddle_C PrimalItemArmor_Paracer_Saddle.Default__PrimalItemArmor_Paracer_Saddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_Paracer_Saddle_C* UPrimalItemArmor_Paracer_Saddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_Paracer_Saddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_Paracer_Saddle_C*>(UPrimalItemArmor_Paracer_Saddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


