#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponTaxidermyTool.PrimalItem_WeaponTaxidermyTool_C
// (None)

class UClass* UPrimalItem_WeaponTaxidermyTool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponTaxidermyTool_C");

	return Clss;
}


// PrimalItem_WeaponTaxidermyTool_C PrimalItem_WeaponTaxidermyTool.Default__PrimalItem_WeaponTaxidermyTool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponTaxidermyTool_C* UPrimalItem_WeaponTaxidermyTool_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponTaxidermyTool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponTaxidermyTool_C*>(UPrimalItem_WeaponTaxidermyTool_C::StaticClass()->DefaultObject);

	return Default;
}

}


