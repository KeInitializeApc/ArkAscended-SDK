#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemSkin_PlayerCostume_Custom.PrimalItemSkin_PlayerCostume_Custom_C
// (None)

class UClass* UPrimalItemSkin_PlayerCostume_Custom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemSkin_PlayerCostume_Custom_C");

	return Clss;
}


// PrimalItemSkin_PlayerCostume_Custom_C PrimalItemSkin_PlayerCostume_Custom.Default__PrimalItemSkin_PlayerCostume_Custom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemSkin_PlayerCostume_Custom_C* UPrimalItemSkin_PlayerCostume_Custom_C::GetDefaultObj()
{
	static class UPrimalItemSkin_PlayerCostume_Custom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemSkin_PlayerCostume_Custom_C*>(UPrimalItemSkin_PlayerCostume_Custom_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemSkin_PlayerCostume_Custom.PrimalItemSkin_PlayerCostume_Custom_C.BPOverrideEquippedDurabilityPercentage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OutDurabilityPercentageValue                                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)

void UPrimalItemSkin_PlayerCostume_Custom_C::BPOverrideEquippedDurabilityPercentage(float OutDurabilityPercentageValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemSkin_PlayerCostume_Custom_C", "BPOverrideEquippedDurabilityPercentage");

	Params::UPrimalItemSkin_PlayerCostume_Custom_C_BPOverrideEquippedDurabilityPercentage_Params Parms{};

	Parms.OutDurabilityPercentageValue = OutDurabilityPercentageValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


