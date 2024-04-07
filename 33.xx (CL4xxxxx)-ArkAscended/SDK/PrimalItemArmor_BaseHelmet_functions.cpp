#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_BaseHelmet.PrimalItemArmor_BaseHelmet_C
// (None)

class UClass* UPrimalItemArmor_BaseHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_BaseHelmet_C");

	return Clss;
}


// PrimalItemArmor_BaseHelmet_C PrimalItemArmor_BaseHelmet.Default__PrimalItemArmor_BaseHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_BaseHelmet_C* UPrimalItemArmor_BaseHelmet_C::GetDefaultObj()
{
	static class UPrimalItemArmor_BaseHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_BaseHelmet_C*>(UPrimalItemArmor_BaseHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


