#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Fuschia_6_Valentine.PrimalItemDye_Fuschia_6_Valentine_C
// (None)

class UClass* UPrimalItemDye_Fuschia_6_Valentine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Fuschia_6_Valentine_C");

	return Clss;
}


// PrimalItemDye_Fuschia_6_Valentine_C PrimalItemDye_Fuschia_6_Valentine.Default__PrimalItemDye_Fuschia_6_Valentine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Fuschia_6_Valentine_C* UPrimalItemDye_Fuschia_6_Valentine_C::GetDefaultObj()
{
	static class UPrimalItemDye_Fuschia_6_Valentine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Fuschia_6_Valentine_C*>(UPrimalItemDye_Fuschia_6_Valentine_C::StaticClass()->DefaultObject);

	return Default;
}

}


