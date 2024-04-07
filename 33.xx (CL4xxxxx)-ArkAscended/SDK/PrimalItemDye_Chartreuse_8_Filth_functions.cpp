#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Chartreuse_8_Filth.PrimalItemDye_Chartreuse_8_Filth_C
// (None)

class UClass* UPrimalItemDye_Chartreuse_8_Filth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Chartreuse_8_Filth_C");

	return Clss;
}


// PrimalItemDye_Chartreuse_8_Filth_C PrimalItemDye_Chartreuse_8_Filth.Default__PrimalItemDye_Chartreuse_8_Filth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Chartreuse_8_Filth_C* UPrimalItemDye_Chartreuse_8_Filth_C::GetDefaultObj()
{
	static class UPrimalItemDye_Chartreuse_8_Filth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Chartreuse_8_Filth_C*>(UPrimalItemDye_Chartreuse_8_Filth_C::StaticClass()->DefaultObject);

	return Default;
}

}


