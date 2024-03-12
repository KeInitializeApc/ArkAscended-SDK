#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Fuschia_3_Lust.PrimalItemDye_Fuschia_3_Lust_C
// (None)

class UClass* UPrimalItemDye_Fuschia_3_Lust_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Fuschia_3_Lust_C");

	return Clss;
}


// PrimalItemDye_Fuschia_3_Lust_C PrimalItemDye_Fuschia_3_Lust.Default__PrimalItemDye_Fuschia_3_Lust_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Fuschia_3_Lust_C* UPrimalItemDye_Fuschia_3_Lust_C::GetDefaultObj()
{
	static class UPrimalItemDye_Fuschia_3_Lust_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Fuschia_3_Lust_C*>(UPrimalItemDye_Fuschia_3_Lust_C::StaticClass()->DefaultObject);

	return Default;
}

}


