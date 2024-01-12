#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Weap_Torch_Base.Weap_Torch_Base_C
// (Actor)

class UClass* AWeap_Torch_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Weap_Torch_Base_C");

	return Clss;
}


// Weap_Torch_Base_C Weap_Torch_Base.Default__Weap_Torch_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeap_Torch_Base_C* AWeap_Torch_Base_C::GetDefaultObj()
{
	static class AWeap_Torch_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeap_Torch_Base_C*>(AWeap_Torch_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Weap_Torch_Base.Weap_Torch_Base_C.CanUseNiagaraFire
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bCanUse                                                          (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, EditConst, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent                   (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent                   (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

bool AWeap_Torch_Base_C::CanUseNiagaraFire(bool* bCanUse, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent, bool* CallFunc_IsValid_ReturnValue, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "CanUseNiagaraFire");

	Params::AWeap_Torch_Base_C_CanUseNiagaraFire_Params Parms{};

	Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent = CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent;
	Parms.CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent = CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bCanUse != nullptr)
		*bCanUse = Parms.bCanUse;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.GetFPVNiagaraFire
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNiagaraComponent*           FPVNiagaraComponent                                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, EditConst, SubobjectReference)

void AWeap_Torch_Base_C::GetFPVNiagaraFire(class UNiagaraComponent** FPVNiagaraComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "GetFPVNiagaraFire");

	Params::AWeap_Torch_Base_C_GetFPVNiagaraFire_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FPVNiagaraComponent != nullptr)
		*FPVNiagaraComponent = Parms.FPVNiagaraComponent;

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.GetTPVNiagaraFire
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNiagaraComponent*           TPVNiagaraComponent                                              (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)

void AWeap_Torch_Base_C::GetTPVNiagaraFire(class UNiagaraComponent** TPVNiagaraComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "GetTPVNiagaraFire");

	Params::AWeap_Torch_Base_C_GetTPVNiagaraFire_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TPVNiagaraComponent != nullptr)
		*TPVNiagaraComponent = Parms.TPVNiagaraComponent;

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.BPCanEquip
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           ByCharacter                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValidClass_ReturnValue                                (Edit, Net, Parm, ZeroConstructor, EditConst, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool AWeap_Torch_Base_C::BPCanEquip(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue, class APrimalBuff** CallFunc_GetBuff_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "BPCanEquip");

	Params::AWeap_Torch_Base_C_BPCanEquip_Params Parms{};

	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_GetBuff_ReturnValue != nullptr)
		*CallFunc_GetBuff_ReturnValue = Parms.CallFunc_GetBuff_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	return Parms.ReturnValue;

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.StartSecondaryActionEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void AWeap_Torch_Base_C::StartSecondaryActionEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "StartSecondaryActionEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.Server_AttemptPutOnBelt
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeap_Torch_Base_C::Server_AttemptPutOnBelt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "Server_AttemptPutOnBelt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AWeap_Torch_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.StartUnequipEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeap_Torch_Base_C::StartUnequipEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "StartUnequipEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.FireTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeap_Torch_Base_C::FireTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "FireTick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.BPAppliedPrimalItemToWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeap_Torch_Base_C::BPAppliedPrimalItemToWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "BPAppliedPrimalItemToWeapon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.OnInstigatorSleepingStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void AWeap_Torch_Base_C::OnInstigatorSleepingStateChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "OnInstigatorSleepingStateChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.ExecuteUbergraph_Weap_Torch_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent                   (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetPawnOwner_ReturnValue                                (Edit, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValidClass_ReturnValue                                (Edit, Net, Parm, ZeroConstructor, EditConst, SubobjectReference)
// class UPrimalItem_WeaponTorch_C*   K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_GetFlameColorIndex_Index                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
// struct FLinearColor                CallFunc_GetItemCustomColor_outColor                             (ConstParm, BlueprintVisible, Net, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_GetItemCustomColor_ReturnValue                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, EditConst, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (Edit, Net, Parm, ZeroConstructor, EditConst, SubobjectReference, Interp)
// float                              CallFunc_GetFloatValue_ReturnValue                               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_1                        (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_CanUseNiagaraFire_bCanUse                               (Edit, BlueprintVisible, Parm, OutParm, EditConst, SubobjectReference)
// bool                               CallFunc_CanUseNiagaraFire_bCanUse_1                             (Edit, BlueprintVisible, Parm, OutParm, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_CanUseNiagaraFire_bCanUse_2                             (Edit, BlueprintVisible, Parm, OutParm, EditConst, SubobjectReference, RepNotify, Interp)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_1                 (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference, Interp)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent                   (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, SubobjectReference)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_2                 (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference, RepNotify, Interp)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1                 (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, SubobjectReference, Interp)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_3                 (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference, NonTransactional)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2                 (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, SubobjectReference, RepNotify, Interp)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3                 (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, SubobjectReference, NonTransactional)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_4                 (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference, RepNotify, NonTransactional)
// class AShooterCharacter*           CallFunc_GetPawnOwner_ReturnValue_1                              (Edit, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference, Interp)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
// class ABuff_BeltTorch_C*           K2Node_DynamicCast_AsBuff_Belt_Torch                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (Edit, ConstParm, ExportObject, Parm, ZeroConstructor, EditConst, SubobjectReference)
// struct FTimerHandle                CallFunc_K2_SetTimerForNextTick_ReturnValue                      (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, EditConst, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue_1                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, EditConst, SubobjectReference, Interp)
// struct FTimerHandle                CallFunc_K2_SetTimerForNextTick_ReturnValue_1                    (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_K2_TimerExists_ReturnValue                              (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_K2_TimerExists_ReturnValue_1                            (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, Interp)
// struct FTimerHandle                CallFunc_K2_SetTimerForNextTick_ReturnValue_2                    (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4                 (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast_1                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference, Interp)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_1                     (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference, Interp)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast_1                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, SubobjectReference, Interp)

bool AWeap_Torch_Base_C::ExecuteUbergraph_Weap_Torch_Base(class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent, class UClass* CallFunc_GetObjectClass_ReturnValue, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UPrimalItem_WeaponTorch_C** K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch, bool* K2Node_DynamicCast_bSuccess, int32* CallFunc_GetFlameColorIndex_Index, const struct FLinearColor& CallFunc_GetItemCustomColor_outColor, bool CallFunc_GetItemCustomColor_ReturnValue, struct FVector* CallFunc_Conv_LinearColorToVector_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, float* CallFunc_GetFloatValue_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, float* CallFunc_GetFloatValue_ReturnValue_1, bool* CallFunc_CanUseNiagaraFire_bCanUse, bool* CallFunc_CanUseNiagaraFire_bCanUse_1, bool* CallFunc_CanUseNiagaraFire_bCanUse_2, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_1, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_2, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_3, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_4, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue_1, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, class APrimalBuff** CallFunc_GetBuff_ReturnValue, class ABuff_BeltTorch_C** K2Node_DynamicCast_AsBuff_Belt_Torch, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, double CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerForNextTick_ReturnValue, double* CallFunc_Add_DoubleFloat_ReturnValue, double* CallFunc_Add_DoubleFloat_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerForNextTick_ReturnValue_1, bool CallFunc_K2_TimerExists_ReturnValue, bool CallFunc_K2_TimerExists_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerForNextTick_ReturnValue_2, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_2, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast, float* CallFunc_GetFloatValue_InTime_ImplicitCast, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast_1, float* CallFunc_GetFloatValue_InTime_ImplicitCast_1, float* CallFunc_Add_DoubleFloat_B_ImplicitCast, float* CallFunc_Add_DoubleFloat_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "ExecuteUbergraph_Weap_Torch_Base");

	Params::AWeap_Torch_Base_C_ExecuteUbergraph_Weap_Torch_Base_Params Parms{};

	Parms.CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent = CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetPawnOwner_ReturnValue = CallFunc_GetPawnOwner_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetItemCustomColor_outColor = CallFunc_GetItemCustomColor_outColor;
	Parms.CallFunc_GetItemCustomColor_ReturnValue = CallFunc_GetItemCustomColor_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue_1 = CallFunc_IsValidClass_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_1 = CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_1;
	Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent = CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent;
	Parms.CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_2 = CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_2;
	Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1 = CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1;
	Parms.CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_3 = CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_3;
	Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2 = CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2;
	Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3 = CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3;
	Parms.CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_4 = CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_4;
	Parms.CallFunc_GetPawnOwner_ReturnValue_1 = CallFunc_GetPawnOwner_ReturnValue_1;
	Parms.CallFunc_StaticAddBuff_ReturnValue = CallFunc_StaticAddBuff_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_K2_SetTimerForNextTick_ReturnValue = CallFunc_K2_SetTimerForNextTick_ReturnValue;
	Parms.CallFunc_K2_SetTimerForNextTick_ReturnValue_1 = CallFunc_K2_SetTimerForNextTick_ReturnValue_1;
	Parms.CallFunc_K2_TimerExists_ReturnValue = CallFunc_K2_TimerExists_ReturnValue;
	Parms.CallFunc_K2_TimerExists_ReturnValue_1 = CallFunc_K2_TimerExists_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerForNextTick_ReturnValue_2 = CallFunc_K2_SetTimerForNextTick_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4 = CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch = Parms.K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetFlameColorIndex_Index != nullptr)
		*CallFunc_GetFlameColorIndex_Index = Parms.CallFunc_GetFlameColorIndex_Index;

	if (CallFunc_Conv_LinearColorToVector_ReturnValue != nullptr)
		*CallFunc_Conv_LinearColorToVector_ReturnValue = std::move(Parms.CallFunc_Conv_LinearColorToVector_ReturnValue);

	if (CallFunc_GetFloatValue_ReturnValue != nullptr)
		*CallFunc_GetFloatValue_ReturnValue = Parms.CallFunc_GetFloatValue_ReturnValue;

	if (CallFunc_GetFloatValue_ReturnValue_1 != nullptr)
		*CallFunc_GetFloatValue_ReturnValue_1 = Parms.CallFunc_GetFloatValue_ReturnValue_1;

	if (CallFunc_CanUseNiagaraFire_bCanUse != nullptr)
		*CallFunc_CanUseNiagaraFire_bCanUse = Parms.CallFunc_CanUseNiagaraFire_bCanUse;

	if (CallFunc_CanUseNiagaraFire_bCanUse_1 != nullptr)
		*CallFunc_CanUseNiagaraFire_bCanUse_1 = Parms.CallFunc_CanUseNiagaraFire_bCanUse_1;

	if (CallFunc_CanUseNiagaraFire_bCanUse_2 != nullptr)
		*CallFunc_CanUseNiagaraFire_bCanUse_2 = Parms.CallFunc_CanUseNiagaraFire_bCanUse_2;

	if (CallFunc_GetBuff_ReturnValue != nullptr)
		*CallFunc_GetBuff_ReturnValue = Parms.CallFunc_GetBuff_ReturnValue;

	if (K2Node_DynamicCast_AsBuff_Belt_Torch != nullptr)
		*K2Node_DynamicCast_AsBuff_Belt_Torch = Parms.K2Node_DynamicCast_AsBuff_Belt_Torch;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_Add_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Add_DoubleFloat_ReturnValue = Parms.CallFunc_Add_DoubleFloat_ReturnValue;

	if (CallFunc_Add_DoubleFloat_ReturnValue_1 != nullptr)
		*CallFunc_Add_DoubleFloat_ReturnValue_1 = Parms.CallFunc_Add_DoubleFloat_ReturnValue_1;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_Divide_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	if (CallFunc_GetFloatValue_InTime_ImplicitCast != nullptr)
		*CallFunc_GetFloatValue_InTime_ImplicitCast = Parms.CallFunc_GetFloatValue_InTime_ImplicitCast;

	if (CallFunc_Divide_DoubleFloat_B_ImplicitCast_1 != nullptr)
		*CallFunc_Divide_DoubleFloat_B_ImplicitCast_1 = Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast_1;

	if (CallFunc_GetFloatValue_InTime_ImplicitCast_1 != nullptr)
		*CallFunc_GetFloatValue_InTime_ImplicitCast_1 = Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_1;

	if (CallFunc_Add_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Add_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Add_DoubleFloat_B_ImplicitCast;

	if (CallFunc_Add_DoubleFloat_B_ImplicitCast_1 != nullptr)
		*CallFunc_Add_DoubleFloat_B_ImplicitCast_1 = Parms.CallFunc_Add_DoubleFloat_B_ImplicitCast_1;

	return Parms.ReturnValue;

}

}


