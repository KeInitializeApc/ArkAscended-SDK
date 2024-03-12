#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Red_6_Salmon.PrimalItemDye_Red_6_Salmon_C
// (None)

class UClass* UPrimalItemDye_Red_6_Salmon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Red_6_Salmon_C");

	return Clss;
}


// PrimalItemDye_Red_6_Salmon_C PrimalItemDye_Red_6_Salmon.Default__PrimalItemDye_Red_6_Salmon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Red_6_Salmon_C* UPrimalItemDye_Red_6_Salmon_C::GetDefaultObj()
{
	static class UPrimalItemDye_Red_6_Salmon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Red_6_Salmon_C*>(UPrimalItemDye_Red_6_Salmon_C::StaticClass()->DefaultObject);

	return Default;
}

}


