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
// bool                               bCanUse                                                          (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent                   (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

bool AWeap_Torch_Base_C::CanUseNiagaraFire(bool* bCanUse, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent, bool CallFunc_Not_PreBool_ReturnValue, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "CanUseNiagaraFire");

	Params::AWeap_Torch_Base_C_CanUseNiagaraFire_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent = CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (bCanUse != nullptr)
		*bCanUse = Parms.bCanUse;

	if (CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent != nullptr)
		*CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent = Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	if (CallFunc_BooleanAND_ReturnValue_1 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_1 = Parms.CallFunc_BooleanAND_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.GetFPVNiagaraFire
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNiagaraComponent*           FPVNiagaraComponent                                              (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

void AWeap_Torch_Base_C::GetFPVNiagaraFire(class UNiagaraComponent* FPVNiagaraComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "GetFPVNiagaraFire");

	Params::AWeap_Torch_Base_C_GetFPVNiagaraFire_Params Parms{};

	Parms.FPVNiagaraComponent = FPVNiagaraComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.GetTPVNiagaraFire
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNiagaraComponent*           TPVNiagaraComponent                                              (BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

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
// class AShooterCharacter*           ByCharacter                                                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool AWeap_Torch_Base_C::BPCanEquip(class AShooterCharacter* ByCharacter, bool* ReturnValue, bool* CallFunc_IsValidClass_ReturnValue, class APrimalBuff** CallFunc_GetBuff_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "BPCanEquip");

	Params::AWeap_Torch_Base_C_BPCanEquip_Params Parms{};

	Parms.ByCharacter = ByCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	if (CallFunc_IsValidClass_ReturnValue != nullptr)
		*CallFunc_IsValidClass_ReturnValue = Parms.CallFunc_IsValidClass_ReturnValue;

	if (CallFunc_GetBuff_ReturnValue != nullptr)
		*CallFunc_GetBuff_ReturnValue = Parms.CallFunc_GetBuff_ReturnValue;

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
// int32                              EntryPoint                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent                   (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetPawnOwner_ReturnValue                                (ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UPrimalItem_WeaponTorch_C*   K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_GetFlameColorIndex_Index                                (Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// struct FLinearColor                CallFunc_GetItemCustomColor_outColor                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_GetItemCustomColor_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// float                              CallFunc_GetFloatValue_ReturnValue                               (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_1                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_CanUseNiagaraFire_bCanUse                               (ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_CanUseNiagaraFire_bCanUse_1                             (ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_CanUseNiagaraFire_bCanUse_2                             (ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_1                 (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_2                 (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_3                 (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_4                 (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, NonTransactional)
// class AShooterCharacter*           CallFunc_GetPawnOwner_ReturnValue_1                              (ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class ABuff_BeltTorch_C*           K2Node_DynamicCast_AsBuff_Belt_Torch                             (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FTimerHandle                CallFunc_K2_SetTimerForNextTick_ReturnValue                      (ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (Edit, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue_1                           (Edit, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// struct FTimerHandle                CallFunc_K2_SetTimerForNextTick_ReturnValue_1                    (ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_K2_TimerExists_ReturnValue                              (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_K2_TimerExists_ReturnValue_1                            (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// struct FTimerHandle                CallFunc_K2_SetTimerForNextTick_ReturnValue_2                    (ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast_1                     (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_1                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast_1                        (BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)

bool AWeap_Torch_Base_C::ExecuteUbergraph_Weap_Torch_Base(int32* EntryPoint, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent, class UClass* CallFunc_GetObjectClass_ReturnValue, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue, bool* CallFunc_IsValidClass_ReturnValue, class UPrimalItem_WeaponTorch_C** K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_IsValidClass_ReturnValue_1, float* CallFunc_GetFloatValue_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, float* CallFunc_GetFloatValue_ReturnValue_1, bool* CallFunc_CanUseNiagaraFire_bCanUse, bool* CallFunc_CanUseNiagaraFire_bCanUse_1, bool* CallFunc_CanUseNiagaraFire_bCanUse_2, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_1, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_2, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_3, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_4, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue_1, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, class APrimalBuff** CallFunc_GetBuff_ReturnValue, class ABuff_BeltTorch_C* K2Node_DynamicCast_AsBuff_Belt_Torch, double CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerForNextTick_ReturnValue, double* CallFunc_Add_DoubleFloat_ReturnValue, double* CallFunc_Add_DoubleFloat_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerForNextTick_ReturnValue_1, bool CallFunc_K2_TimerExists_ReturnValue, bool CallFunc_K2_TimerExists_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerForNextTick_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast, float* CallFunc_GetFloatValue_InTime_ImplicitCast, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast_1, float* CallFunc_GetFloatValue_InTime_ImplicitCast_1, float* CallFunc_Add_DoubleFloat_B_ImplicitCast, float* CallFunc_Add_DoubleFloat_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "ExecuteUbergraph_Weap_Torch_Base");

	Params::AWeap_Torch_Base_C_ExecuteUbergraph_Weap_Torch_Base_Params Parms{};

	Parms.CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent = CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetPawnOwner_ReturnValue = CallFunc_GetPawnOwner_ReturnValue;
	Parms.CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_1 = CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_1;
	Parms.CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_2 = CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_2;
	Parms.CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_3 = CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_3;
	Parms.CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_4 = CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_4;
	Parms.CallFunc_GetPawnOwner_ReturnValue_1 = CallFunc_GetPawnOwner_ReturnValue_1;
	Parms.CallFunc_StaticAddBuff_ReturnValue = CallFunc_StaticAddBuff_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuff_Belt_Torch = K2Node_DynamicCast_AsBuff_Belt_Torch;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_K2_SetTimerForNextTick_ReturnValue = CallFunc_K2_SetTimerForNextTick_ReturnValue;
	Parms.CallFunc_K2_SetTimerForNextTick_ReturnValue_1 = CallFunc_K2_SetTimerForNextTick_ReturnValue_1;
	Parms.CallFunc_K2_TimerExists_ReturnValue = CallFunc_K2_TimerExists_ReturnValue;
	Parms.CallFunc_K2_TimerExists_ReturnValue_1 = CallFunc_K2_TimerExists_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerForNextTick_ReturnValue_2 = CallFunc_K2_SetTimerForNextTick_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_IsValidClass_ReturnValue != nullptr)
		*CallFunc_IsValidClass_ReturnValue = Parms.CallFunc_IsValidClass_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch = Parms.K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	if (CallFunc_IsValidClass_ReturnValue_1 != nullptr)
		*CallFunc_IsValidClass_ReturnValue_1 = Parms.CallFunc_IsValidClass_ReturnValue_1;

	if (CallFunc_GetFloatValue_ReturnValue != nullptr)
		*CallFunc_GetFloatValue_ReturnValue = Parms.CallFunc_GetFloatValue_ReturnValue;

	if (CallFunc_BooleanAND_ReturnValue_1 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_1 = Parms.CallFunc_BooleanAND_ReturnValue_1;

	if (CallFunc_GetFloatValue_ReturnValue_1 != nullptr)
		*CallFunc_GetFloatValue_ReturnValue_1 = Parms.CallFunc_GetFloatValue_ReturnValue_1;

	if (CallFunc_CanUseNiagaraFire_bCanUse != nullptr)
		*CallFunc_CanUseNiagaraFire_bCanUse = Parms.CallFunc_CanUseNiagaraFire_bCanUse;

	if (CallFunc_CanUseNiagaraFire_bCanUse_1 != nullptr)
		*CallFunc_CanUseNiagaraFire_bCanUse_1 = Parms.CallFunc_CanUseNiagaraFire_bCanUse_1;

	if (CallFunc_CanUseNiagaraFire_bCanUse_2 != nullptr)
		*CallFunc_CanUseNiagaraFire_bCanUse_2 = Parms.CallFunc_CanUseNiagaraFire_bCanUse_2;

	if (CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent != nullptr)
		*CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent = Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent;

	if (CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1 != nullptr)
		*CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1 = Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1;

	if (CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2 != nullptr)
		*CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2 = Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2;

	if (CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3 != nullptr)
		*CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3 = Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3;

	if (CallFunc_GetBuff_ReturnValue != nullptr)
		*CallFunc_GetBuff_ReturnValue = Parms.CallFunc_GetBuff_ReturnValue;

	if (CallFunc_Add_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Add_DoubleFloat_ReturnValue = Parms.CallFunc_Add_DoubleFloat_ReturnValue;

	if (CallFunc_Add_DoubleFloat_ReturnValue_1 != nullptr)
		*CallFunc_Add_DoubleFloat_ReturnValue_1 = Parms.CallFunc_Add_DoubleFloat_ReturnValue_1;

	if (K2Node_DynamicCast_AsShooter_Character != nullptr)
		*K2Node_DynamicCast_AsShooter_Character = Parms.K2Node_DynamicCast_AsShooter_Character;

	if (CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4 != nullptr)
		*CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4 = Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4;

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


