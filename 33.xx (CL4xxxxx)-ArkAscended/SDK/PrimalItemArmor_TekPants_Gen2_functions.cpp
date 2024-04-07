#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_TekPants_Gen2.PrimalItemArmor_TekPants_Gen2_C
// (None)

class UClass* UPrimalItemArmor_TekPants_Gen2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_TekPants_Gen2_C");

	return Clss;
}


// PrimalItemArmor_TekPants_Gen2_C PrimalItemArmor_TekPants_Gen2.Default__PrimalItemArmor_TekPants_Gen2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_TekPants_Gen2_C* UPrimalItemArmor_TekPants_Gen2_C::GetDefaultObj()
{
	static class UPrimalItemArmor_TekPants_Gen2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_TekPants_Gen2_C*>(UPrimalItemArmor_TekPants_Gen2_C::StaticClass()->DefaultObject);

	return Default;
}

}


