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
// bool                               bCanUse                                                          (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent                   (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent                   (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)

bool AWeap_Torch_Base_C::CanUseNiagaraFire(bool bCanUse, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "CanUseNiagaraFire");

	Params::AWeap_Torch_Base_C_CanUseNiagaraFire_Params Parms{};

	Parms.bCanUse = bCanUse;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent != nullptr)
		*CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent = Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent;

	return Parms.ReturnValue;

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.GetFPVNiagaraFire
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNiagaraComponent*           FPVNiagaraComponent                                              (OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

class UNiagaraComponent* AWeap_Torch_Base_C::GetFPVNiagaraFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "GetFPVNiagaraFire");

	Params::AWeap_Torch_Base_C_GetFPVNiagaraFire_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.GetTPVNiagaraFire
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNiagaraComponent*           TPVNiagaraComponent                                              (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

class UNiagaraComponent* AWeap_Torch_Base_C::GetTPVNiagaraFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "GetTPVNiagaraFire");

	Params::AWeap_Torch_Base_C_GetTPVNiagaraFire_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.BPCanEquip
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           ByCharacter                                                      (BlueprintVisible, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValidClass_ReturnValue                                (Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

bool AWeap_Torch_Base_C::BPCanEquip(class AShooterCharacter** ByCharacter, bool ReturnValue, class APrimalBuff** CallFunc_GetBuff_ReturnValue, bool* CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "BPCanEquip");

	Params::AWeap_Torch_Base_C_BPCanEquip_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ByCharacter != nullptr)
		*ByCharacter = Parms.ByCharacter;

	if (CallFunc_GetBuff_ReturnValue != nullptr)
		*CallFunc_GetBuff_ReturnValue = Parms.CallFunc_GetBuff_ReturnValue;

	if (CallFunc_EqualEqual_ObjectObject_ReturnValue != nullptr)
		*CallFunc_EqualEqual_ObjectObject_ReturnValue = Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue;

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
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent                   (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetPawnOwner_ReturnValue                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValidClass_ReturnValue                                (Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem_WeaponTorch_C*   K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_GetFlameColorIndex_Index                                (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FLinearColor                CallFunc_GetItemCustomColor_outColor                             (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetItemCustomColor_ReturnValue                          (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_1                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_CanUseNiagaraFire_bCanUse                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_CanUseNiagaraFire_bCanUse_1                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_CanUseNiagaraFire_bCanUse_2                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_1                 (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent                   (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_2                 (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1                 (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_3                 (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2                 (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3                 (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_4                 (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class AShooterCharacter*           CallFunc_GetPawnOwner_ReturnValue_1                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class ABuff_BeltTorch_C*           K2Node_DynamicCast_AsBuff_Belt_Torch                             (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FTimerHandle                CallFunc_K2_SetTimerForNextTick_ReturnValue                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue_1                           (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FTimerHandle                CallFunc_K2_SetTimerForNextTick_ReturnValue_1                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_K2_TimerExists_ReturnValue                              (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_K2_TimerExists_ReturnValue_1                            (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FTimerHandle                CallFunc_K2_SetTimerForNextTick_ReturnValue_2                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4                 (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast_1                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_1                     (ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast_1                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)

bool AWeap_Torch_Base_C::ExecuteUbergraph_Weap_Torch_Base(int32 EntryPoint, class UClass** CallFunc_GetObjectClass_ReturnValue, class AShooterCharacter** CallFunc_GetPawnOwner_ReturnValue, int32* CallFunc_GetFlameColorIndex_Index, struct FLinearColor* CallFunc_GetItemCustomColor_outColor, bool* CallFunc_GetItemCustomColor_ReturnValue, struct FVector* CallFunc_Conv_LinearColorToVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double* CallFunc_Divide_DoubleFloat_ReturnValue, float* CallFunc_GetFloatValue_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double* CallFunc_Divide_DoubleFloat_ReturnValue_1, float* CallFunc_GetFloatValue_ReturnValue_1, bool CallFunc_CanUseNiagaraFire_bCanUse, bool CallFunc_CanUseNiagaraFire_bCanUse_1, bool CallFunc_CanUseNiagaraFire_bCanUse_2, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3, class AShooterCharacter** CallFunc_GetPawnOwner_ReturnValue_1, class APrimalBuff** CallFunc_GetBuff_ReturnValue, double CallFunc_Add_DoubleFloat_ReturnValue, double CallFunc_Add_DoubleFloat_ReturnValue_1, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast, float* CallFunc_GetFloatValue_InTime_ImplicitCast, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast_1, float* CallFunc_GetFloatValue_InTime_ImplicitCast_1, float CallFunc_Add_DoubleFloat_B_ImplicitCast, float CallFunc_Add_DoubleFloat_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "ExecuteUbergraph_Weap_Torch_Base");

	Params::AWeap_Torch_Base_C_ExecuteUbergraph_Weap_Torch_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_CanUseNiagaraFire_bCanUse = CallFunc_CanUseNiagaraFire_bCanUse;
	Parms.CallFunc_CanUseNiagaraFire_bCanUse_1 = CallFunc_CanUseNiagaraFire_bCanUse_1;
	Parms.CallFunc_CanUseNiagaraFire_bCanUse_2 = CallFunc_CanUseNiagaraFire_bCanUse_2;
	Parms.CallFunc_Add_DoubleFloat_ReturnValue = CallFunc_Add_DoubleFloat_ReturnValue;
	Parms.CallFunc_Add_DoubleFloat_ReturnValue_1 = CallFunc_Add_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Add_DoubleFloat_B_ImplicitCast = CallFunc_Add_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleFloat_B_ImplicitCast_1 = CallFunc_Add_DoubleFloat_B_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetObjectClass_ReturnValue != nullptr)
		*CallFunc_GetObjectClass_ReturnValue = Parms.CallFunc_GetObjectClass_ReturnValue;

	if (CallFunc_GetPawnOwner_ReturnValue != nullptr)
		*CallFunc_GetPawnOwner_ReturnValue = Parms.CallFunc_GetPawnOwner_ReturnValue;

	if (CallFunc_GetFlameColorIndex_Index != nullptr)
		*CallFunc_GetFlameColorIndex_Index = Parms.CallFunc_GetFlameColorIndex_Index;

	if (CallFunc_GetItemCustomColor_outColor != nullptr)
		*CallFunc_GetItemCustomColor_outColor = std::move(Parms.CallFunc_GetItemCustomColor_outColor);

	if (CallFunc_GetItemCustomColor_ReturnValue != nullptr)
		*CallFunc_GetItemCustomColor_ReturnValue = Parms.CallFunc_GetItemCustomColor_ReturnValue;

	if (CallFunc_Conv_LinearColorToVector_ReturnValue != nullptr)
		*CallFunc_Conv_LinearColorToVector_ReturnValue = std::move(Parms.CallFunc_Conv_LinearColorToVector_ReturnValue);

	if (CallFunc_Divide_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Divide_DoubleFloat_ReturnValue = Parms.CallFunc_Divide_DoubleFloat_ReturnValue;

	if (CallFunc_GetFloatValue_ReturnValue != nullptr)
		*CallFunc_GetFloatValue_ReturnValue = Parms.CallFunc_GetFloatValue_ReturnValue;

	if (CallFunc_Divide_DoubleFloat_ReturnValue_1 != nullptr)
		*CallFunc_Divide_DoubleFloat_ReturnValue_1 = Parms.CallFunc_Divide_DoubleFloat_ReturnValue_1;

	if (CallFunc_GetFloatValue_ReturnValue_1 != nullptr)
		*CallFunc_GetFloatValue_ReturnValue_1 = Parms.CallFunc_GetFloatValue_ReturnValue_1;

	if (CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent != nullptr)
		*CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent = Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent;

	if (CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1 != nullptr)
		*CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1 = Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1;

	if (CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2 != nullptr)
		*CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2 = Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2;

	if (CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3 != nullptr)
		*CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3 = Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3;

	if (CallFunc_GetPawnOwner_ReturnValue_1 != nullptr)
		*CallFunc_GetPawnOwner_ReturnValue_1 = Parms.CallFunc_GetPawnOwner_ReturnValue_1;

	if (CallFunc_GetBuff_ReturnValue != nullptr)
		*CallFunc_GetBuff_ReturnValue = Parms.CallFunc_GetBuff_ReturnValue;

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

	return Parms.ReturnValue;

}

}


