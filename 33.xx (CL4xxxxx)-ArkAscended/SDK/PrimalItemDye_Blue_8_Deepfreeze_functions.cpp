#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Blue_8_Deepfreeze.PrimalItemDye_Blue_8_Deepfreeze_C
// (None)

class UClass* UPrimalItemDye_Blue_8_Deepfreeze_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Blue_8_Deepfreeze_C");

	return Clss;
}


// PrimalItemDye_Blue_8_Deepfreeze_C PrimalItemDye_Blue_8_Deepfreeze.Default__PrimalItemDye_Blue_8_Deepfreeze_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Blue_8_Deepfreeze_C* UPrimalItemDye_Blue_8_Deepfreeze_C::GetDefaultObj()
{
	static class UPrimalItemDye_Blue_8_Deepfreeze_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Blue_8_Deepfreeze_C*>(UPrimalItemDye_Blue_8_Deepfreeze_C::StaticClass()->DefaultObject);

	return Default;
}

}


