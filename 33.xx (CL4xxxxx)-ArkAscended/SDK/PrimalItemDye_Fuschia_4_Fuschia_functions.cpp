#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Fuschia_4_Fuschia.PrimalItemDye_Fuschia_4_Fuschia_C
// (None)

class UClass* UPrimalItemDye_Fuschia_4_Fuschia_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Fuschia_4_Fuschia_C");

	return Clss;
}


// PrimalItemDye_Fuschia_4_Fuschia_C PrimalItemDye_Fuschia_4_Fuschia.Default__PrimalItemDye_Fuschia_4_Fuschia_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Fuschia_4_Fuschia_C* UPrimalItemDye_Fuschia_4_Fuschia_C::GetDefaultObj()
{
	static class UPrimalItemDye_Fuschia_4_Fuschia_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Fuschia_4_Fuschia_C*>(UPrimalItemDye_Fuschia_4_Fuschia_C::StaticClass()->DefaultObject);

	return Default;
}

}


