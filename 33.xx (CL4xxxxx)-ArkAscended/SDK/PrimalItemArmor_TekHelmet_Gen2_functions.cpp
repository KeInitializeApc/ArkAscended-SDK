#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_TekHelmet_Gen2.PrimalItemArmor_TekHelmet_Gen2_C
// (None)

class UClass* UPrimalItemArmor_TekHelmet_Gen2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_TekHelmet_Gen2_C");

	return Clss;
}


// PrimalItemArmor_TekHelmet_Gen2_C PrimalItemArmor_TekHelmet_Gen2.Default__PrimalItemArmor_TekHelmet_Gen2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_TekHelmet_Gen2_C* UPrimalItemArmor_TekHelmet_Gen2_C::GetDefaultObj()
{
	static class UPrimalItemArmor_TekHelmet_Gen2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_TekHelmet_Gen2_C*>(UPrimalItemArmor_TekHelmet_Gen2_C::StaticClass()->DefaultObject);

	return Default;
}

}


