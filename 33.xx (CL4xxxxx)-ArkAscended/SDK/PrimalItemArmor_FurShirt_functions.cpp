#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_FurShirt.PrimalItemArmor_FurShirt_C
// (None)

class UClass* UPrimalItemArmor_FurShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_FurShirt_C");

	return Clss;
}


// PrimalItemArmor_FurShirt_C PrimalItemArmor_FurShirt.Default__PrimalItemArmor_FurShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_FurShirt_C* UPrimalItemArmor_FurShirt_C::GetDefaultObj()
{
	static class UPrimalItemArmor_FurShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_FurShirt_C*>(UPrimalItemArmor_FurShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


