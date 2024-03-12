#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Fuschia_1_Raisin.PrimalItemDye_Fuschia_1_Raisin_C
// (None)

class UClass* UPrimalItemDye_Fuschia_1_Raisin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Fuschia_1_Raisin_C");

	return Clss;
}


// PrimalItemDye_Fuschia_1_Raisin_C PrimalItemDye_Fuschia_1_Raisin.Default__PrimalItemDye_Fuschia_1_Raisin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Fuschia_1_Raisin_C* UPrimalItemDye_Fuschia_1_Raisin_C::GetDefaultObj()
{
	static class UPrimalItemDye_Fuschia_1_Raisin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Fuschia_1_Raisin_C*>(UPrimalItemDye_Fuschia_1_Raisin_C::StaticClass()->DefaultObject);

	return Default;
}

}


