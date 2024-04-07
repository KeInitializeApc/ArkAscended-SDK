#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Blue_6_Ice.PrimalItemDye_Blue_6_Ice_C
// (None)

class UClass* UPrimalItemDye_Blue_6_Ice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Blue_6_Ice_C");

	return Clss;
}


// PrimalItemDye_Blue_6_Ice_C PrimalItemDye_Blue_6_Ice.Default__PrimalItemDye_Blue_6_Ice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Blue_6_Ice_C* UPrimalItemDye_Blue_6_Ice_C::GetDefaultObj()
{
	static class UPrimalItemDye_Blue_6_Ice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Blue_6_Ice_C*>(UPrimalItemDye_Blue_6_Ice_C::StaticClass()->DefaultObject);

	return Default;
}

}


