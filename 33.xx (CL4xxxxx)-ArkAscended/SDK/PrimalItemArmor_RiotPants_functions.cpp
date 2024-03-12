#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_RiotPants.PrimalItemArmor_RiotPants_C
// (None)

class UClass* UPrimalItemArmor_RiotPants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_RiotPants_C");

	return Clss;
}


// PrimalItemArmor_RiotPants_C PrimalItemArmor_RiotPants.Default__PrimalItemArmor_RiotPants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_RiotPants_C* UPrimalItemArmor_RiotPants_C::GetDefaultObj()
{
	static class UPrimalItemArmor_RiotPants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_RiotPants_C*>(UPrimalItemArmor_RiotPants_C::StaticClass()->DefaultObject);

	return Default;
}

}


