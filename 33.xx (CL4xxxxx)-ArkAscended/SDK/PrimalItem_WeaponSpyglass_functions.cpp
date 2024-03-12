#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C
// (None)

class UClass* UPrimalItem_WeaponSpyglass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponSpyglass_C");

	return Clss;
}


// PrimalItem_WeaponSpyglass_C PrimalItem_WeaponSpyglass.Default__PrimalItem_WeaponSpyglass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponSpyglass_C* UPrimalItem_WeaponSpyglass_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponSpyglass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponSpyglass_C*>(UPrimalItem_WeaponSpyglass_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.CanUseItemPing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsSOTF_ReturnValue                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsBroken_ReturnValue                                    (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)

bool UPrimalItem_WeaponSpyglass_C::CanUseItemPing(bool CallFunc_IsSOTF_ReturnValue, bool* CallFunc_IsBroken_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponSpyglass_C", "CanUseItemPing");

	Params::UPrimalItem_WeaponSpyglass_C_CanUseItemPing_Params Parms{};

	Parms.CallFunc_IsSOTF_ReturnValue = CallFunc_IsSOTF_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsBroken_ReturnValue != nullptr)
		*CallFunc_IsBroken_ReturnValue = Parms.CallFunc_IsBroken_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.BPPreventWeaponEquip
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsSOTF_ReturnValue                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UPrimalItem_WeaponSpyglass_C::BPPreventWeaponEquip(bool CallFunc_IsSOTF_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponSpyglass_C", "BPPreventWeaponEquip");

	Params::UPrimalItem_WeaponSpyglass_C_BPPreventWeaponEquip_Params Parms{};

	Parms.CallFunc_IsSOTF_ReturnValue = CallFunc_IsSOTF_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.TimerDoubleTap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_SelectInt_ReturnValue                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)

int32 UPrimalItem_WeaponSpyglass_C::TimerDoubleTap(struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponSpyglass_C", "TimerDoubleTap");

	Params::UPrimalItem_WeaponSpyglass_C_TimerDoubleTap_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_MakeStruct_BPNetExecParams != nullptr)
		*K2Node_MakeStruct_BPNetExecParams = std::move(Parms.K2Node_MakeStruct_BPNetExecParams);

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.TimerUsePingWheel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

class AShooterHUD* UPrimalItem_WeaponSpyglass_C::TimerUsePingWheel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponSpyglass_C", "TimerUsePingWheel");

	Params::UPrimalItem_WeaponSpyglass_C_TimerUsePingWheel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.LocalUseStartHoldBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class AShooterPlayerController*    ForPC                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

void UPrimalItem_WeaponSpyglass_C::LocalUseStartHoldBP(class AShooterPlayerController** ForPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponSpyglass_C", "LocalUseStartHoldBP");

	Params::UPrimalItem_WeaponSpyglass_C_LocalUseStartHoldBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ForPC != nullptr)
		*ForPC = Parms.ForPC;

}


// Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.LocalUseItemReleaseBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class AShooterPlayerController*    ForPC                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

void UPrimalItem_WeaponSpyglass_C::LocalUseItemReleaseBP(class AShooterPlayerController** ForPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponSpyglass_C", "LocalUseItemReleaseBP");

	Params::UPrimalItem_WeaponSpyglass_C_LocalUseItemReleaseBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ForPC != nullptr)
		*ForPC = Parms.ForPC;

}


// Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.LocalUseAfterHoldBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class AShooterPlayerController*    ForPC                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

void UPrimalItem_WeaponSpyglass_C::LocalUseAfterHoldBP(class AShooterPlayerController** ForPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponSpyglass_C", "LocalUseAfterHoldBP");

	Params::UPrimalItem_WeaponSpyglass_C_LocalUseAfterHoldBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ForPC != nullptr)
		*ForPC = Parms.ForPC;

}


// Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.BPServerHandleItemNetExecCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerController*    ForPC                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// class FName                        CommandName                                                      (Edit, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            ExecParams                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UPrimalItem_WeaponSpyglass_C::BPServerHandleItemNetExecCommand(class AShooterPlayerController** ForPC, class FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponSpyglass_C", "BPServerHandleItemNetExecCommand");

	Params::UPrimalItem_WeaponSpyglass_C_BPServerHandleItemNetExecCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ForPC != nullptr)
		*ForPC = Parms.ForPC;

	if (CommandName != nullptr)
		*CommandName = Parms.CommandName;

	if (ExecParams != nullptr)
		*ExecParams = std::move(Parms.ExecParams);

}


// Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.ExecuteUbergraph_PrimalItem_WeaponSpyglass
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class AShooterPlayerController*    K2Node_Event_ForPC_1                                             (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_TryCreateTeamPingType_ReturnValue                       (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_K2_IsTimerActive_ReturnValue                            (ConstParm, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_K2_IsTimerActive_ReturnValue_1                          (ConstParm, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp)
// class AShooterPlayerController*    K2Node_Event_ForPC                                               (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        K2Node_Event_CommandName                                         (ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            K2Node_Event_ExecParams                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class AController*                 K2Node_DynamicCast_AsController                                  (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetShooterCharacterFromController_ReturnValue           (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerController*    K2Node_Event_ForPC_2                                             (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_CanUseItemPing_ReturnValue                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_CanUseItemPing_ReturnValue_1                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_CanUseItemPing_ReturnValue_2                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_CanUseItemPing_ReturnValue_3                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_1                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// class AShooterPlayerController*    K2Node_Event_ForPC_3                                             (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class AShooterPlayerController*    CallFunc_PCToSPC_ReturnValue                                     (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetShooterCharacterFromController_ReturnValue_1         (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UPrimalItem_WeaponSpyglass_C::ExecuteUbergraph_PrimalItem_WeaponSpyglass(int32* EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_EqualEqual_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponSpyglass_C", "ExecuteUbergraph_PrimalItem_WeaponSpyglass");

	Params::UPrimalItem_WeaponSpyglass_C_ExecuteUbergraph_PrimalItem_WeaponSpyglass_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_Event_CommandName = K2Node_Event_CommandName;
	Parms.K2Node_Event_ExecParams = K2Node_Event_ExecParams;
	Parms.CallFunc_K2_SetTimer_ReturnValue_1 = CallFunc_K2_SetTimer_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}

}


