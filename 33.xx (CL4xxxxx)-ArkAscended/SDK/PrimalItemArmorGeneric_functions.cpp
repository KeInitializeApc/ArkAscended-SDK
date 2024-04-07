#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmorGeneric.PrimalItemArmorGeneric_C
// (None)

class UClass* UPrimalItemArmorGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmorGeneric_C");

	return Clss;
}


// PrimalItemArmorGeneric_C PrimalItemArmorGeneric.Default__PrimalItemArmorGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmorGeneric_C* UPrimalItemArmorGeneric_C::GetDefaultObj()
{
	static class UPrimalItemArmorGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmorGeneric_C*>(UPrimalItemArmorGeneric_C::StaticClass()->DefaultObject);

	return Default;
}

}


