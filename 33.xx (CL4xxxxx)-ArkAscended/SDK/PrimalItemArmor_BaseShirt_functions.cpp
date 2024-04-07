#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_BaseShirt.PrimalItemArmor_BaseShirt_C
// (None)

class UClass* UPrimalItemArmor_BaseShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_BaseShirt_C");

	return Clss;
}


// PrimalItemArmor_BaseShirt_C PrimalItemArmor_BaseShirt.Default__PrimalItemArmor_BaseShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_BaseShirt_C* UPrimalItemArmor_BaseShirt_C::GetDefaultObj()
{
	static class UPrimalItemArmor_BaseShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_BaseShirt_C*>(UPrimalItemArmor_BaseShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


