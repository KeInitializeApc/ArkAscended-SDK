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
// bool                               bCanUse                                                          (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent                   (Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent                   (ConstParm, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool AWeap_Torch_Base_C::CanUseNiagaraFire(class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent, bool* CallFunc_IsValid_ReturnValue, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "CanUseNiagaraFire");

	Params::AWeap_Torch_Base_C_CanUseNiagaraFire_Params Parms{};

	Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent = CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent;
	Parms.CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent = CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.GetFPVNiagaraFire
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNiagaraComponent*           FPVNiagaraComponent                                              (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)

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
// class UNiagaraComponent*           TPVNiagaraComponent                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)

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
// class AShooterCharacter*           ByCharacter                                                      (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValidClass_ReturnValue                                (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool AWeap_Torch_Base_C::BPCanEquip(bool ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class APrimalBuff* CallFunc_GetBuff_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "BPCanEquip");

	Params::AWeap_Torch_Base_C_BPCanEquip_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetBuff_ReturnValue = CallFunc_GetBuff_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent                   (ConstParm, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (Edit, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetPawnOwner_ReturnValue                                (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValidClass_ReturnValue                                (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// class UPrimalItem_WeaponTorch_C*   K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch                    (ExportObject, Net, Parm, OutParm, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetFlameColorIndex_Index                                (ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, SubobjectReference)
// struct FLinearColor                CallFunc_GetItemCustomColor_outColor                             (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_GetItemCustomColor_ReturnValue                          (BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, SubobjectReference)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference, Interp)
// float                              CallFunc_GetFloatValue_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_1                        (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference, Interp)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// bool                               CallFunc_CanUseNiagaraFire_bCanUse                               (ConstParm, ExportObject, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_CanUseNiagaraFire_bCanUse_1                             (ConstParm, ExportObject, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// bool                               CallFunc_CanUseNiagaraFire_bCanUse_2                             (ConstParm, ExportObject, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_1                 (ConstParm, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent                   (Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_2                 (ConstParm, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1                 (Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_3                 (ConstParm, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2                 (Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3                 (Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_4                 (ConstParm, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, NonTransactional)
// class AShooterCharacter*           CallFunc_GetPawnOwner_ReturnValue_1                              (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, SubobjectReference)
// class ABuff_BeltTorch_C*           K2Node_DynamicCast_AsBuff_Belt_Torch                             (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FTimerHandle                CallFunc_K2_SetTimerForNextTick_ReturnValue                      (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue_1                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference, Interp)
// struct FTimerHandle                CallFunc_K2_SetTimerForNextTick_ReturnValue_1                    (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// bool                               CallFunc_K2_TimerExists_ReturnValue                              (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_K2_TimerExists_ReturnValue_1                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// struct FTimerHandle                CallFunc_K2_SetTimerForNextTick_ReturnValue_2                    (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4                 (Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (Edit, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast_1                     (BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_1                     (Edit, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast_1                        (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference, Interp)

float AWeap_Torch_Base_C::ExecuteUbergraph_Weap_Torch_Base(class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent, class UClass* CallFunc_GetObjectClass_ReturnValue, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UPrimalItem_WeaponTorch_C** K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch, const struct FLinearColor& CallFunc_GetItemCustomColor_outColor, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, bool CallFunc_CanUseNiagaraFire_bCanUse, bool CallFunc_CanUseNiagaraFire_bCanUse_1, bool CallFunc_CanUseNiagaraFire_bCanUse_2, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_1, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_2, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_3, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_4, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue_1, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, class APrimalBuff* CallFunc_GetBuff_ReturnValue, class ABuff_BeltTorch_C** K2Node_DynamicCast_AsBuff_Belt_Torch, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, double CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerForNextTick_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerForNextTick_ReturnValue_1, bool CallFunc_K2_TimerExists_ReturnValue, bool CallFunc_K2_TimerExists_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerForNextTick_ReturnValue_2, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4, float CallFunc_Divide_DoubleFloat_B_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_Divide_DoubleFloat_B_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "ExecuteUbergraph_Weap_Torch_Base");

	Params::AWeap_Torch_Base_C_ExecuteUbergraph_Weap_Torch_Base_Params Parms{};

	Parms.CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent = CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetPawnOwner_ReturnValue = CallFunc_GetPawnOwner_ReturnValue;
	Parms.CallFunc_GetItemCustomColor_outColor = CallFunc_GetItemCustomColor_outColor;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_CanUseNiagaraFire_bCanUse = CallFunc_CanUseNiagaraFire_bCanUse;
	Parms.CallFunc_CanUseNiagaraFire_bCanUse_1 = CallFunc_CanUseNiagaraFire_bCanUse_1;
	Parms.CallFunc_CanUseNiagaraFire_bCanUse_2 = CallFunc_CanUseNiagaraFire_bCanUse_2;
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
	Parms.CallFunc_GetBuff_ReturnValue = CallFunc_GetBuff_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_K2_SetTimerForNextTick_ReturnValue = CallFunc_K2_SetTimerForNextTick_ReturnValue;
	Parms.CallFunc_K2_SetTimerForNextTick_ReturnValue_1 = CallFunc_K2_SetTimerForNextTick_ReturnValue_1;
	Parms.CallFunc_K2_TimerExists_ReturnValue = CallFunc_K2_TimerExists_ReturnValue;
	Parms.CallFunc_K2_TimerExists_ReturnValue_1 = CallFunc_K2_TimerExists_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerForNextTick_ReturnValue_2 = CallFunc_K2_SetTimerForNextTick_ReturnValue_2;
	Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4 = CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast = CallFunc_Divide_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast_1 = CallFunc_Divide_DoubleFloat_B_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_1 = CallFunc_GetFloatValue_InTime_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch = Parms.K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;

	if (K2Node_DynamicCast_AsBuff_Belt_Torch != nullptr)
		*K2Node_DynamicCast_AsBuff_Belt_Torch = Parms.K2Node_DynamicCast_AsBuff_Belt_Torch;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	return Parms.ReturnValue;

}

}


