#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_ChitinShirt.PrimalItemArmor_ChitinShirt_C
// (None)

class UClass* UPrimalItemArmor_ChitinShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_ChitinShirt_C");

	return Clss;
}


// PrimalItemArmor_ChitinShirt_C PrimalItemArmor_ChitinShirt.Default__PrimalItemArmor_ChitinShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_ChitinShirt_C* UPrimalItemArmor_ChitinShirt_C::GetDefaultObj()
{
	static class UPrimalItemArmor_ChitinShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_ChitinShirt_C*>(UPrimalItemArmor_ChitinShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


