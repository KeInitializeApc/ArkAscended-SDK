#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_RiotGloves.PrimalItemArmor_RiotGloves_C
// (None)

class UClass* UPrimalItemArmor_RiotGloves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_RiotGloves_C");

	return Clss;
}


// PrimalItemArmor_RiotGloves_C PrimalItemArmor_RiotGloves.Default__PrimalItemArmor_RiotGloves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_RiotGloves_C* UPrimalItemArmor_RiotGloves_C::GetDefaultObj()
{
	static class UPrimalItemArmor_RiotGloves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_RiotGloves_C*>(UPrimalItemArmor_RiotGloves_C::StaticClass()->DefaultObject);

	return Default;
}

}


