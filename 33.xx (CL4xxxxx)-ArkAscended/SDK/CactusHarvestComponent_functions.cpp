#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CactusHarvestComponent.CactusHarvestComponent_C
// (None)

class UClass* UCactusHarvestComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CactusHarvestComponent_C");

	return Clss;
}


// CactusHarvestComponent_C CactusHarvestComponent.Default__CactusHarvestComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCactusHarvestComponent_C* UCactusHarvestComponent_C::GetDefaultObj()
{
	static class UCactusHarvestComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCactusHarvestComponent_C*>(UCactusHarvestComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CactusHarvestComponent.CactusHarvestComponent_C.BPCustomHarvestResource
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalInventoryComponent*   InvComp                                                          (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              NumToGive                                                        (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      DamageTypeClass                                                  (Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class AActor*                      ToActor                                                          (ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class ACamelsaurus_Character_Base_BP_C*K2Node_DynamicCast_AsCamelsaurus_Character_Base_BP               (Edit, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_AddWater_NewWaterAmount                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimalCharacterStatusComponent*CallFunc_GetCharacterStatusComponent_ReturnValue                 (ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_AddStatusValueModifier_Speed_ImplicitCast               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_AddStatusValueModifier_Amount_ImplicitCast              (ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

bool UCactusHarvestComponent_C::BPCustomHarvestResource(class AActor** ToActor, int32 ReturnValue, double* CallFunc_AddWater_NewWaterAmount, class UPrimalCharacterStatusComponent** CallFunc_GetCharacterStatusComponent_ReturnValue, float* CallFunc_AddStatusValueModifier_Speed_ImplicitCast, float* CallFunc_AddStatusValueModifier_Amount_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CactusHarvestComponent_C", "BPCustomHarvestResource");

	Params::UCactusHarvestComponent_C_BPCustomHarvestResource_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ToActor != nullptr)
		*ToActor = Parms.ToActor;

	if (CallFunc_AddWater_NewWaterAmount != nullptr)
		*CallFunc_AddWater_NewWaterAmount = Parms.CallFunc_AddWater_NewWaterAmount;

	if (CallFunc_GetCharacterStatusComponent_ReturnValue != nullptr)
		*CallFunc_GetCharacterStatusComponent_ReturnValue = Parms.CallFunc_GetCharacterStatusComponent_ReturnValue;

	if (CallFunc_AddStatusValueModifier_Speed_ImplicitCast != nullptr)
		*CallFunc_AddStatusValueModifier_Speed_ImplicitCast = Parms.CallFunc_AddStatusValueModifier_Speed_ImplicitCast;

	if (CallFunc_AddStatusValueModifier_Amount_ImplicitCast != nullptr)
		*CallFunc_AddStatusValueModifier_Amount_ImplicitCast = Parms.CallFunc_AddStatusValueModifier_Amount_ImplicitCast;

	return Parms.ReturnValue;

}

}


