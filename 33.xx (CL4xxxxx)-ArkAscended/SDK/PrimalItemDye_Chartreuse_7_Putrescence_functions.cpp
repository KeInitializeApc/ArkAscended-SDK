#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Chartreuse_7_Putrescence.PrimalItemDye_Chartreuse_7_Putrescence_C
// (None)

class UClass* UPrimalItemDye_Chartreuse_7_Putrescence_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Chartreuse_7_Putrescence_C");

	return Clss;
}


// PrimalItemDye_Chartreuse_7_Putrescence_C PrimalItemDye_Chartreuse_7_Putrescence.Default__PrimalItemDye_Chartreuse_7_Putrescence_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Chartreuse_7_Putrescence_C* UPrimalItemDye_Chartreuse_7_Putrescence_C::GetDefaultObj()
{
	static class UPrimalItemDye_Chartreuse_7_Putrescence_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Chartreuse_7_Putrescence_C*>(UPrimalItemDye_Chartreuse_7_Putrescence_C::StaticClass()->DefaultObject);

	return Default;
}

}


