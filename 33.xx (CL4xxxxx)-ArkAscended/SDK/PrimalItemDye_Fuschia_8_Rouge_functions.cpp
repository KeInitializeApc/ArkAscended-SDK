#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Fuschia_8_Rouge.PrimalItemDye_Fuschia_8_Rouge_C
// (None)

class UClass* UPrimalItemDye_Fuschia_8_Rouge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Fuschia_8_Rouge_C");

	return Clss;
}


// PrimalItemDye_Fuschia_8_Rouge_C PrimalItemDye_Fuschia_8_Rouge.Default__PrimalItemDye_Fuschia_8_Rouge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Fuschia_8_Rouge_C* UPrimalItemDye_Fuschia_8_Rouge_C::GetDefaultObj()
{
	static class UPrimalItemDye_Fuschia_8_Rouge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Fuschia_8_Rouge_C*>(UPrimalItemDye_Fuschia_8_Rouge_C::StaticClass()->DefaultObject);

	return Default;
}

}


