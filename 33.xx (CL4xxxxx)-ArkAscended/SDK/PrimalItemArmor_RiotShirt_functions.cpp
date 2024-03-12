#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_RiotShirt.PrimalItemArmor_RiotShirt_C
// (None)

class UClass* UPrimalItemArmor_RiotShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_RiotShirt_C");

	return Clss;
}


// PrimalItemArmor_RiotShirt_C PrimalItemArmor_RiotShirt.Default__PrimalItemArmor_RiotShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_RiotShirt_C* UPrimalItemArmor_RiotShirt_C::GetDefaultObj()
{
	static class UPrimalItemArmor_RiotShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_RiotShirt_C*>(UPrimalItemArmor_RiotShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


