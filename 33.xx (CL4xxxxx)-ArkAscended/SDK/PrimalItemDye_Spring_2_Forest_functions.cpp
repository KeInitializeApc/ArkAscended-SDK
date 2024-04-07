#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Spring_2_Forest.PrimalItemDye_Spring_2_Forest_C
// (None)

class UClass* UPrimalItemDye_Spring_2_Forest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Spring_2_Forest_C");

	return Clss;
}


// PrimalItemDye_Spring_2_Forest_C PrimalItemDye_Spring_2_Forest.Default__PrimalItemDye_Spring_2_Forest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Spring_2_Forest_C* UPrimalItemDye_Spring_2_Forest_C::GetDefaultObj()
{
	static class UPrimalItemDye_Spring_2_Forest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Spring_2_Forest_C*>(UPrimalItemDye_Spring_2_Forest_C::StaticClass()->DefaultObject);

	return Default;
}

}


