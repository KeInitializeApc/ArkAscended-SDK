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
// class UPrimalInventoryComponent*   InvComp                                                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              NumToGive                                                        (BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      DamageTypeClass                                                  (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class AActor*                      ToActor                                                          (Edit, ConstParm, ExportObject, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class ACamelsaurus_Character_Base_BP_C*K2Node_DynamicCast_AsCamelsaurus_Character_Base_BP               (ConstParm, Parm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_AddWater_NewWaterAmount                                 (ExportObject, BlueprintReadOnly, EditFixedSize, Transient, EditConst, SubobjectReference)
// class UPrimalCharacterStatusComponent*CallFunc_GetCharacterStatusComponent_ReturnValue                 (Edit, ExportObject, Net, EditFixedSize, Transient, EditConst, SubobjectReference)
// float                              CallFunc_AddStatusValueModifier_Speed_ImplicitCast               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, EditConst, SubobjectReference)
// float                              CallFunc_AddStatusValueModifier_Amount_ImplicitCast              (Edit, ConstParm, Net, Transient, EditConst, SubobjectReference)

bool UCactusHarvestComponent_C::BPCustomHarvestResource(class UPrimalInventoryComponent* InvComp, int32 NumToGive, class AActor* ToActor, int32* ReturnValue, class ACamelsaurus_Character_Base_BP_C* K2Node_DynamicCast_AsCamelsaurus_Character_Base_BP, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, double CallFunc_AddWater_NewWaterAmount, class UPrimalCharacterStatusComponent* CallFunc_GetCharacterStatusComponent_ReturnValue, float CallFunc_AddStatusValueModifier_Speed_ImplicitCast, float CallFunc_AddStatusValueModifier_Amount_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CactusHarvestComponent_C", "BPCustomHarvestResource");

	Params::UCactusHarvestComponent_C_BPCustomHarvestResource_Params Parms{};

	Parms.InvComp = InvComp;
	Parms.NumToGive = NumToGive;
	Parms.ToActor = ToActor;
	Parms.K2Node_DynamicCast_AsCamelsaurus_Character_Base_BP = K2Node_DynamicCast_AsCamelsaurus_Character_Base_BP;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_AddWater_NewWaterAmount = CallFunc_AddWater_NewWaterAmount;
	Parms.CallFunc_GetCharacterStatusComponent_ReturnValue = CallFunc_GetCharacterStatusComponent_ReturnValue;
	Parms.CallFunc_AddStatusValueModifier_Speed_ImplicitCast = CallFunc_AddStatusValueModifier_Speed_ImplicitCast;
	Parms.CallFunc_AddStatusValueModifier_Amount_ImplicitCast = CallFunc_AddStatusValueModifier_Amount_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}

}


