#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_ChitinGloves.PrimalItemArmor_ChitinGloves_C
// (None)

class UClass* UPrimalItemArmor_ChitinGloves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_ChitinGloves_C");

	return Clss;
}


// PrimalItemArmor_ChitinGloves_C PrimalItemArmor_ChitinGloves.Default__PrimalItemArmor_ChitinGloves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_ChitinGloves_C* UPrimalItemArmor_ChitinGloves_C::GetDefaultObj()
{
	static class UPrimalItemArmor_ChitinGloves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_ChitinGloves_C*>(UPrimalItemArmor_ChitinGloves_C::StaticClass()->DefaultObject);

	return Default;
}

}


