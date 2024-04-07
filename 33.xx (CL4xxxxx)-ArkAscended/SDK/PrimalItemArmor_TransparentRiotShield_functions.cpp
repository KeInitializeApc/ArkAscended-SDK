#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_TransparentRiotShield.PrimalItemArmor_TransparentRiotShield_C
// (None)

class UClass* UPrimalItemArmor_TransparentRiotShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_TransparentRiotShield_C");

	return Clss;
}


// PrimalItemArmor_TransparentRiotShield_C PrimalItemArmor_TransparentRiotShield.Default__PrimalItemArmor_TransparentRiotShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_TransparentRiotShield_C* UPrimalItemArmor_TransparentRiotShield_C::GetDefaultObj()
{
	static class UPrimalItemArmor_TransparentRiotShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_TransparentRiotShield_C*>(UPrimalItemArmor_TransparentRiotShield_C::StaticClass()->DefaultObject);

	return Default;
}

}


