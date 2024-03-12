#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Green_3_Emerald.PrimalItemDye_Green_3_Emerald_C
// (None)

class UClass* UPrimalItemDye_Green_3_Emerald_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Green_3_Emerald_C");

	return Clss;
}


// PrimalItemDye_Green_3_Emerald_C PrimalItemDye_Green_3_Emerald.Default__PrimalItemDye_Green_3_Emerald_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Green_3_Emerald_C* UPrimalItemDye_Green_3_Emerald_C::GetDefaultObj()
{
	static class UPrimalItemDye_Green_3_Emerald_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Green_3_Emerald_C*>(UPrimalItemDye_Green_3_Emerald_C::StaticClass()->DefaultObject);

	return Default;
}

}


