#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_TekGloves.PrimalItemArmor_TekGloves_C
// (None)

class UClass* UPrimalItemArmor_TekGloves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_TekGloves_C");

	return Clss;
}


// PrimalItemArmor_TekGloves_C PrimalItemArmor_TekGloves.Default__PrimalItemArmor_TekGloves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_TekGloves_C* UPrimalItemArmor_TekGloves_C::GetDefaultObj()
{
	static class UPrimalItemArmor_TekGloves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_TekGloves_C*>(UPrimalItemArmor_TekGloves_C::StaticClass()->DefaultObject);

	return Default;
}

}


