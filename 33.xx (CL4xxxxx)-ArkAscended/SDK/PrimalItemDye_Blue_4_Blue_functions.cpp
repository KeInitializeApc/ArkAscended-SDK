#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Blue_4_Blue.PrimalItemDye_Blue_4_Blue_C
// (None)

class UClass* UPrimalItemDye_Blue_4_Blue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Blue_4_Blue_C");

	return Clss;
}


// PrimalItemDye_Blue_4_Blue_C PrimalItemDye_Blue_4_Blue.Default__PrimalItemDye_Blue_4_Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Blue_4_Blue_C* UPrimalItemDye_Blue_4_Blue_C::GetDefaultObj()
{
	static class UPrimalItemDye_Blue_4_Blue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Blue_4_Blue_C*>(UPrimalItemDye_Blue_4_Blue_C::StaticClass()->DefaultObject);

	return Default;
}

}


