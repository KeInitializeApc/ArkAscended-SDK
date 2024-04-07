#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Blue_5_Denim.PrimalItemDye_Blue_5_Denim_C
// (None)

class UClass* UPrimalItemDye_Blue_5_Denim_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Blue_5_Denim_C");

	return Clss;
}


// PrimalItemDye_Blue_5_Denim_C PrimalItemDye_Blue_5_Denim.Default__PrimalItemDye_Blue_5_Denim_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Blue_5_Denim_C* UPrimalItemDye_Blue_5_Denim_C::GetDefaultObj()
{
	static class UPrimalItemDye_Blue_5_Denim_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Blue_5_Denim_C*>(UPrimalItemDye_Blue_5_Denim_C::StaticClass()->DefaultObject);

	return Default;
}

}


