#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_TekGloves_Gen2.PrimalItemArmor_TekGloves_Gen2_C
// (None)

class UClass* UPrimalItemArmor_TekGloves_Gen2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_TekGloves_Gen2_C");

	return Clss;
}


// PrimalItemArmor_TekGloves_Gen2_C PrimalItemArmor_TekGloves_Gen2.Default__PrimalItemArmor_TekGloves_Gen2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_TekGloves_Gen2_C* UPrimalItemArmor_TekGloves_Gen2_C::GetDefaultObj()
{
	static class UPrimalItemArmor_TekGloves_Gen2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_TekGloves_Gen2_C*>(UPrimalItemArmor_TekGloves_Gen2_C::StaticClass()->DefaultObject);

	return Default;
}

}


