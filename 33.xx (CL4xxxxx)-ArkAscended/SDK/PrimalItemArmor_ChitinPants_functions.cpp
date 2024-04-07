#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_ChitinPants.PrimalItemArmor_ChitinPants_C
// (None)

class UClass* UPrimalItemArmor_ChitinPants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_ChitinPants_C");

	return Clss;
}


// PrimalItemArmor_ChitinPants_C PrimalItemArmor_ChitinPants.Default__PrimalItemArmor_ChitinPants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_ChitinPants_C* UPrimalItemArmor_ChitinPants_C::GetDefaultObj()
{
	static class UPrimalItemArmor_ChitinPants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_ChitinPants_C*>(UPrimalItemArmor_ChitinPants_C::StaticClass()->DefaultObject);

	return Default;
}

}


