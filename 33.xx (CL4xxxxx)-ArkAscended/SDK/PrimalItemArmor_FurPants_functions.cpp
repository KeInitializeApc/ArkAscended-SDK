#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_FurPants.PrimalItemArmor_FurPants_C
// (None)

class UClass* UPrimalItemArmor_FurPants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_FurPants_C");

	return Clss;
}


// PrimalItemArmor_FurPants_C PrimalItemArmor_FurPants.Default__PrimalItemArmor_FurPants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_FurPants_C* UPrimalItemArmor_FurPants_C::GetDefaultObj()
{
	static class UPrimalItemArmor_FurPants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_FurPants_C*>(UPrimalItemArmor_FurPants_C::StaticClass()->DefaultObject);

	return Default;
}

}


