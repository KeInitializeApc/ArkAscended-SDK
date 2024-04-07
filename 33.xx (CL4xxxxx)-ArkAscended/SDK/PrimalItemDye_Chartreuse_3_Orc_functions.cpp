#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Chartreuse_3_Orc.PrimalItemDye_Chartreuse_3_Orc_C
// (None)

class UClass* UPrimalItemDye_Chartreuse_3_Orc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Chartreuse_3_Orc_C");

	return Clss;
}


// PrimalItemDye_Chartreuse_3_Orc_C PrimalItemDye_Chartreuse_3_Orc.Default__PrimalItemDye_Chartreuse_3_Orc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Chartreuse_3_Orc_C* UPrimalItemDye_Chartreuse_3_Orc_C::GetDefaultObj()
{
	static class UPrimalItemDye_Chartreuse_3_Orc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Chartreuse_3_Orc_C*>(UPrimalItemDye_Chartreuse_3_Orc_C::StaticClass()->DefaultObject);

	return Default;
}

}


