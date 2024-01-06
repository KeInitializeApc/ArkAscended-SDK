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
// class UPrimalInventoryComponent*   InvComp                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              NumToGive                                                        (Edit, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      DamageTypeClass                                                  (Edit, ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class AActor*                      ToActor                                                          (Edit, Net, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class ACamelsaurus_Character_Base_BP_C*K2Node_DynamicCast_AsCamelsaurus_Character_Base_BP               (Edit, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_AddWater_NewWaterAmount                                 (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// class UPrimalCharacterStatusComponent*CallFunc_GetCharacterStatusComponent_ReturnValue                 (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// float                              CallFunc_AddStatusValueModifier_Speed_ImplicitCast               (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// float                              CallFunc_AddStatusValueModifier_Amount_ImplicitCast              (ConstParm, BlueprintReadOnly, Net, OutParm, Transient, EditConst, SubobjectReference)

bool UCactusHarvestComponent_C::BPCustomHarvestResource(class UPrimalInventoryComponent* InvComp, int32 NumToGive, class AActor** ToActor, int32* ReturnValue, class ACamelsaurus_Character_Base_BP_C** K2Node_DynamicCast_AsCamelsaurus_Character_Base_BP, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, double* CallFunc_AddWater_NewWaterAmount, class UPrimalCharacterStatusComponent** CallFunc_GetCharacterStatusComponent_ReturnValue, float* CallFunc_AddStatusValueModifier_Speed_ImplicitCast, float* CallFunc_AddStatusValueModifier_Amount_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CactusHarvestComponent_C", "BPCustomHarvestResource");

	Params::UCactusHarvestComponent_C_BPCustomHarvestResource_Params Parms{};

	Parms.InvComp = InvComp;
	Parms.NumToGive = NumToGive;

	UObject::ProcessEvent(Func, &Parms);

	if (ToActor != nullptr)
		*ToActor = Parms.ToActor;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	if (K2Node_DynamicCast_AsCamelsaurus_Character_Base_BP != nullptr)
		*K2Node_DynamicCast_AsCamelsaurus_Character_Base_BP = Parms.K2Node_DynamicCast_AsCamelsaurus_Character_Base_BP;

	if (K2Node_DynamicCast_AsShooter_Character != nullptr)
		*K2Node_DynamicCast_AsShooter_Character = Parms.K2Node_DynamicCast_AsShooter_Character;

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


