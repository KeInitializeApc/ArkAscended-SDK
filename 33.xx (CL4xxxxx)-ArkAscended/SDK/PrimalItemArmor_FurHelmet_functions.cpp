#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_FurHelmet.PrimalItemArmor_FurHelmet_C
// (None)

class UClass* UPrimalItemArmor_FurHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_FurHelmet_C");

	return Clss;
}


// PrimalItemArmor_FurHelmet_C PrimalItemArmor_FurHelmet.Default__PrimalItemArmor_FurHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_FurHelmet_C* UPrimalItemArmor_FurHelmet_C::GetDefaultObj()
{
	static class UPrimalItemArmor_FurHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_FurHelmet_C*>(UPrimalItemArmor_FurHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


