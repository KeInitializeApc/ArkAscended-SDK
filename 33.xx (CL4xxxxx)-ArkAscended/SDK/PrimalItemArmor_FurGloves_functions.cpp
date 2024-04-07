#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_FurGloves.PrimalItemArmor_FurGloves_C
// (None)

class UClass* UPrimalItemArmor_FurGloves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_FurGloves_C");

	return Clss;
}


// PrimalItemArmor_FurGloves_C PrimalItemArmor_FurGloves.Default__PrimalItemArmor_FurGloves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_FurGloves_C* UPrimalItemArmor_FurGloves_C::GetDefaultObj()
{
	static class UPrimalItemArmor_FurGloves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_FurGloves_C*>(UPrimalItemArmor_FurGloves_C::StaticClass()->DefaultObject);

	return Default;
}

}


