#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_TekArmor_Pants.Buff_TekArmor_Pants_C
// (Actor)

class UClass* ABuff_TekArmor_Pants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_TekArmor_Pants_C");

	return Clss;
}


// Buff_TekArmor_Pants_C Buff_TekArmor_Pants.Default__Buff_TekArmor_Pants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_TekArmor_Pants_C* ABuff_TekArmor_Pants_C::GetDefaultObj()
{
	static class ABuff_TekArmor_Pants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_TekArmor_Pants_C*>(ABuff_TekArmor_Pants_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ValidateRunningState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_TekRunningState       NewState                                                         (BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bStateValid                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class E_TekRunningState       MaxRunningState                                                  (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)

enum class E_TekRunningState ABuff_TekArmor_Pants_C::ValidateRunningState(int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "ValidateRunningState");

	Params::ABuff_TekArmor_Pants_C_ValidateRunningState_Params Parms{};

	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.IsPlayerUsingJetpack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// bool                               CallFunc_IsTekArmorUsingAbility__result                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

void ABuff_TekArmor_Pants_C::IsPlayerUsingJetpack(bool Result, bool* CallFunc_IsTekArmorUsingAbility__result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "IsPlayerUsingJetpack");

	Params::ABuff_TekArmor_Pants_C_IsPlayerUsingJetpack_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsTekArmorUsingAbility__result != nullptr)
		*CallFunc_IsTekArmorUsingAbility__result = Parms.CallFunc_IsTekArmorUsingAbility__result;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPlayerIgnoreSpeedModifiers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewIgnore                                                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsInStatusState_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted         (ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalCharacterStatusComponent*CallFunc_GetCharacterStatusComponent_ReturnValue                 (Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)

bool ABuff_TekArmor_Pants_C::SetPlayerIgnoreSpeedModifiers(bool* CallFunc_IsLocallyControlled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "SetPlayerIgnoreSpeedModifiers");

	Params::ABuff_TekArmor_Pants_C_SetPlayerIgnoreSpeedModifiers_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsLocallyControlled_ReturnValue != nullptr)
		*CallFunc_IsLocallyControlled_ReturnValue = Parms.CallFunc_IsLocallyControlled_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.PlayerHasFistsEquipped
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// bool                               RetVal                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AWeapFists_C*                K2Node_DynamicCast_AsWeap_Fists                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

void ABuff_TekArmor_Pants_C::PlayerHasFistsEquipped(bool Result, bool* RetVal, class AWeapFists_C** K2Node_DynamicCast_AsWeap_Fists, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "PlayerHasFistsEquipped");

	Params::ABuff_TekArmor_Pants_C_PlayerHasFistsEquipped_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

	if (RetVal != nullptr)
		*RetVal = Parms.RetVal;

	if (K2Node_DynamicCast_AsWeap_Fists != nullptr)
		*K2Node_DynamicCast_AsWeap_Fists = Parms.K2Node_DynamicCast_AsWeap_Fists;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.IsPlayerGrappled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ABuff_TekArmor_Pants_C::IsPlayerGrappled(bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "IsPlayerGrappled");

	Params::ABuff_TekArmor_Pants_C_IsPlayerGrappled_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BPCheckPreventInput
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPrimalCharacterInputTypeInputType                                                        (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_PlayerHasFistsEquipped_result                           (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// bool                               CallFunc_IsPlayerGrappled_result                                 (Edit, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Greater_ByteByte_ReturnValue                            (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)

bool ABuff_TekArmor_Pants_C::BPCheckPreventInput(enum class EPrimalCharacterInputType* InputType, bool* CallFunc_PlayerHasFistsEquipped_result, bool CallFunc_IsPlayerGrappled_result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "BPCheckPreventInput");

	Params::ABuff_TekArmor_Pants_C_BPCheckPreventInput_Params Parms{};

	Parms.CallFunc_IsPlayerGrappled_result = CallFunc_IsPlayerGrappled_result;

	UObject::ProcessEvent(Func, &Parms);

	if (InputType != nullptr)
		*InputType = Parms.InputType;

	if (CallFunc_PlayerHasFistsEquipped_result != nullptr)
		*CallFunc_PlayerHasFistsEquipped_result = Parms.CallFunc_PlayerHasFistsEquipped_result;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerMoveSpeedModifier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Result                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimalCharacterStatusComponent*CallFunc_GetCharacterStatusComponent_ReturnValue                 (Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_GetMovementSpeedModifier_ReturnValue                    (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_FunctionResult_result_ImplicitCast                        (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

float ABuff_TekArmor_Pants_C::GetPlayerMoveSpeedModifier(double Result, double K2Node_FunctionResult_result_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "GetPlayerMoveSpeedModifier");

	Params::ABuff_TekArmor_Pants_C_GetPlayerMoveSpeedModifier_Params Parms{};

	Parms.Result = Result;
	Parms.K2Node_FunctionResult_result_ImplicitCast = K2Node_FunctionResult_result_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.OnRep_bCanRunOnWater
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CallFunc_GetDefaultPlayer_ref                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UPrimalCharacterMovement*    CallFunc_CharacterMovementToPCM_ReturnValue                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UPrimalCharacterMovement*    CallFunc_CharacterMovementToPCM_ReturnValue_1                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference, Interp)
// float                              K2Node_VariableSet_WaterSubmergedDepthThreshold_ImplicitCast     (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool ABuff_TekArmor_Pants_C::OnRep_bCanRunOnWater(class APrimalCharacter** CallFunc_GetDefaultPlayer_ref, class UPrimalCharacterMovement** CallFunc_CharacterMovementToPCM_ReturnValue, class UPrimalCharacterMovement** CallFunc_CharacterMovementToPCM_ReturnValue_1, float* K2Node_VariableSet_WaterSubmergedDepthThreshold_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "OnRep_bCanRunOnWater");

	Params::ABuff_TekArmor_Pants_C_OnRep_bCanRunOnWater_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetDefaultPlayer_ref != nullptr)
		*CallFunc_GetDefaultPlayer_ref = Parms.CallFunc_GetDefaultPlayer_ref;

	if (CallFunc_CharacterMovementToPCM_ReturnValue != nullptr)
		*CallFunc_CharacterMovementToPCM_ReturnValue = Parms.CallFunc_CharacterMovementToPCM_ReturnValue;

	if (CallFunc_CharacterMovementToPCM_ReturnValue_1 != nullptr)
		*CallFunc_CharacterMovementToPCM_ReturnValue_1 = Parms.CallFunc_CharacterMovementToPCM_ReturnValue_1;

	if (K2Node_VariableSet_WaterSubmergedDepthThreshold_ImplicitCast != nullptr)
		*K2Node_VariableSet_WaterSubmergedDepthThreshold_ImplicitCast = Parms.K2Node_VariableSet_WaterSubmergedDepthThreshold_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetRunningOnWater
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsRunning                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, GlobalConfig)
// struct FWeaponAnim                 K2Node_MakeStruct_WeaponAnim                                     (Edit, Parm, ZeroConstructor, EditConst, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UAnimMontage*                CallFunc_GetOverridenMontage_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_PlayAnimEx_ReturnValue                                  (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Montage_IsPlaying_ReturnValue                           (BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Montage_IsPlaying_ReturnValue_1                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Montage_IsPlaying_ReturnValue_2                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Montage_IsPlaying_ReturnValue_3                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// float                              CallFunc_PlayWeaponAnimation_ReturnValue                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)

bool ABuff_TekArmor_Pants_C::SetRunningOnWater(bool* IsRunning, const struct FWeaponAnim& K2Node_MakeStruct_WeaponAnim, bool* CallFunc_IsLocallyControlled_ReturnValue, bool* CallFunc_IsLocallyControlled_ReturnValue_1, class UAnimInstance** CallFunc_GetAnimInstance_ReturnValue, class UAnimInstance** CallFunc_GetAnimInstance_ReturnValue_1, bool* CallFunc_Montage_IsPlaying_ReturnValue, bool* CallFunc_Montage_IsPlaying_ReturnValue_1, bool* CallFunc_Montage_IsPlaying_ReturnValue_2, bool* CallFunc_Montage_IsPlaying_ReturnValue_3, float* CallFunc_PlayWeaponAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "SetRunningOnWater");

	Params::ABuff_TekArmor_Pants_C_SetRunningOnWater_Params Parms{};

	Parms.K2Node_MakeStruct_WeaponAnim = K2Node_MakeStruct_WeaponAnim;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRunning != nullptr)
		*IsRunning = Parms.IsRunning;

	if (CallFunc_IsLocallyControlled_ReturnValue != nullptr)
		*CallFunc_IsLocallyControlled_ReturnValue = Parms.CallFunc_IsLocallyControlled_ReturnValue;

	if (CallFunc_IsLocallyControlled_ReturnValue_1 != nullptr)
		*CallFunc_IsLocallyControlled_ReturnValue_1 = Parms.CallFunc_IsLocallyControlled_ReturnValue_1;

	if (CallFunc_GetAnimInstance_ReturnValue != nullptr)
		*CallFunc_GetAnimInstance_ReturnValue = Parms.CallFunc_GetAnimInstance_ReturnValue;

	if (CallFunc_GetAnimInstance_ReturnValue_1 != nullptr)
		*CallFunc_GetAnimInstance_ReturnValue_1 = Parms.CallFunc_GetAnimInstance_ReturnValue_1;

	if (CallFunc_Montage_IsPlaying_ReturnValue != nullptr)
		*CallFunc_Montage_IsPlaying_ReturnValue = Parms.CallFunc_Montage_IsPlaying_ReturnValue;

	if (CallFunc_Montage_IsPlaying_ReturnValue_1 != nullptr)
		*CallFunc_Montage_IsPlaying_ReturnValue_1 = Parms.CallFunc_Montage_IsPlaying_ReturnValue_1;

	if (CallFunc_Montage_IsPlaying_ReturnValue_2 != nullptr)
		*CallFunc_Montage_IsPlaying_ReturnValue_2 = Parms.CallFunc_Montage_IsPlaying_ReturnValue_2;

	if (CallFunc_Montage_IsPlaying_ReturnValue_3 != nullptr)
		*CallFunc_Montage_IsPlaying_ReturnValue_3 = Parms.CallFunc_Montage_IsPlaying_ReturnValue_3;

	if (CallFunc_PlayWeaponAnimation_ReturnValue != nullptr)
		*CallFunc_PlayWeaponAnimation_ReturnValue = Parms.CallFunc_PlayWeaponAnimation_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.OnRep_CurrentTekRunState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Get_Default_Player_Run_Speed_Mult_speedMult             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APrimalCharacter*            CallFunc_GetDefaultPlayer_ref                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UPrimalCharacterMovement*    CallFunc_CharacterMovementToPCM_ReturnValue                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UPrimalCharacterMovement*    CallFunc_CharacterMovementToPCM_ReturnValue_1                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// float                              K2Node_VariableSet_RunningSpeedModifier_ImplicitCast             (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              K2Node_VariableSet_RunningSpeedModifier_ImplicitCast_1           (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)

bool ABuff_TekArmor_Pants_C::OnRep_CurrentTekRunState(bool* CallFunc_IsLocallyControlled_ReturnValue, double CallFunc_Get_Default_Player_Run_Speed_Mult_speedMult, class APrimalCharacter** CallFunc_GetDefaultPlayer_ref, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class UPrimalCharacterMovement** CallFunc_CharacterMovementToPCM_ReturnValue, class UPrimalCharacterMovement** CallFunc_CharacterMovementToPCM_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float* K2Node_VariableSet_RunningSpeedModifier_ImplicitCast, float* K2Node_VariableSet_RunningSpeedModifier_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "OnRep_CurrentTekRunState");

	Params::ABuff_TekArmor_Pants_C_OnRep_CurrentTekRunState_Params Parms{};

	Parms.CallFunc_Get_Default_Player_Run_Speed_Mult_speedMult = CallFunc_Get_Default_Player_Run_Speed_Mult_speedMult;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsLocallyControlled_ReturnValue != nullptr)
		*CallFunc_IsLocallyControlled_ReturnValue = Parms.CallFunc_IsLocallyControlled_ReturnValue;

	if (CallFunc_GetDefaultPlayer_ref != nullptr)
		*CallFunc_GetDefaultPlayer_ref = Parms.CallFunc_GetDefaultPlayer_ref;

	if (CallFunc_CharacterMovementToPCM_ReturnValue != nullptr)
		*CallFunc_CharacterMovementToPCM_ReturnValue = Parms.CallFunc_CharacterMovementToPCM_ReturnValue;

	if (CallFunc_CharacterMovementToPCM_ReturnValue_1 != nullptr)
		*CallFunc_CharacterMovementToPCM_ReturnValue_1 = Parms.CallFunc_CharacterMovementToPCM_ReturnValue_1;

	if (K2Node_VariableSet_RunningSpeedModifier_ImplicitCast != nullptr)
		*K2Node_VariableSet_RunningSpeedModifier_ImplicitCast = Parms.K2Node_VariableSet_RunningSpeedModifier_ImplicitCast;

	if (K2Node_VariableSet_RunningSpeedModifier_ImplicitCast_1 != nullptr)
		*K2Node_VariableSet_RunningSpeedModifier_ImplicitCast_1 = Parms.K2Node_VariableSet_RunningSpeedModifier_ImplicitCast_1;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.AreGlovesEquippedAndActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// class ABuff_TekArmor_Gloves_C*     GlovesRef                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class ABuff_TekArmor_Gloves_C*     Ref                                                              (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               RetVal                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimalItemArmor_TekGloves_C*K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Gloves                (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class UClass*                      CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff            (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class ABuff_TekArmor_Gloves_C*     K2Node_DynamicCast_AsBuff_Tek_Armor_Gloves                       (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)

class APrimalBuff* ABuff_TekArmor_Pants_C::AreGlovesEquippedAndActive(bool Result, class ABuff_TekArmor_Gloves_C** GlovesRef, bool* RetVal, class UPrimalItemArmor_TekGloves_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Gloves, bool* K2Node_DynamicCast_bSuccess, class ABuff_TekArmor_Gloves_C* K2Node_DynamicCast_AsBuff_Tek_Armor_Gloves, bool* K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "AreGlovesEquippedAndActive");

	Params::ABuff_TekArmor_Pants_C_AreGlovesEquippedAndActive_Params Parms{};

	Parms.Result = Result;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Gloves = K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Gloves;
	Parms.K2Node_DynamicCast_AsBuff_Tek_Armor_Gloves = K2Node_DynamicCast_AsBuff_Tek_Armor_Gloves;

	UObject::ProcessEvent(Func, &Parms);

	if (GlovesRef != nullptr)
		*GlovesRef = Parms.GlovesRef;

	if (RetVal != nullptr)
		*RetVal = Parms.RetVal;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Player Max Tek Run Velocity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             MaxSpeed                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

class AShooterCharacter* ABuff_TekArmor_Pants_C::Get_Player_Max_Tek_Run_Velocity(double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "Get Player Max Tek Run Velocity");

	Params::ABuff_TekArmor_Pants_C_Get_Player_Max_Tek_Run_Velocity_Params Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetBuffPostprocessIntensity
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CurrentIntensity                                                 (Edit, ConstParm, ExportObject, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_ByteByte_ReturnValue                            (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimalItemArmor_TekGloves_C*K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Gloves                (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class UClass*                      CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff            (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class ABuff_TekArmor_Gloves_C*     K2Node_DynamicCast_AsBuff_Tek_Armor_Gloves                       (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

float ABuff_TekArmor_Pants_C::GetBuffPostprocessIntensity(double CurrentIntensity, double CallFunc_SelectFloat_ReturnValue, class UPrimalItemArmor_TekGloves_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Gloves, bool* K2Node_DynamicCast_bSuccess, class ABuff_TekArmor_Gloves_C* K2Node_DynamicCast_AsBuff_Tek_Armor_Gloves, bool* K2Node_DynamicCast_bSuccess_1, double CallFunc_SelectFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "GetBuffPostprocessIntensity");

	Params::ABuff_TekArmor_Pants_C_GetBuffPostprocessIntensity_Params Parms{};

	Parms.CurrentIntensity = CurrentIntensity;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Gloves = K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Gloves;
	Parms.K2Node_DynamicCast_AsBuff_Tek_Armor_Gloves = K2Node_DynamicCast_AsBuff_Tek_Armor_Gloves;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CanStartTekRun
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// bool                               RetVal                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterGameState*           K2Node_DynamicCast_AsShooter_Game_State                          (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsPlayerInWaterVolume_result                            (BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_IsPlayerInWaterVolume_waterVolumeTopZ                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsTekArmorUsingAbility__result                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsPlayerGrounded_result                                 (Edit, BlueprintVisible, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_CanUseTekAbility_bResult                                (Edit, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool ABuff_TekArmor_Pants_C::CanStartTekRun(bool Result, bool* RetVal, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AShooterGameState** K2Node_DynamicCast_AsShooter_Game_State, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_IsPlayerInWaterVolume_result, bool* CallFunc_IsTekArmorUsingAbility__result, bool CallFunc_IsPlayerGrounded_result, bool CallFunc_CanUseTekAbility_bResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "CanStartTekRun");

	Params::ABuff_TekArmor_Pants_C_CanStartTekRun_Params Parms{};

	Parms.Result = Result;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_IsPlayerInWaterVolume_result = CallFunc_IsPlayerInWaterVolume_result;
	Parms.CallFunc_IsPlayerGrounded_result = CallFunc_IsPlayerGrounded_result;
	Parms.CallFunc_CanUseTekAbility_bResult = CallFunc_CanUseTekAbility_bResult;

	UObject::ProcessEvent(Func, &Parms);

	if (RetVal != nullptr)
		*RetVal = Parms.RetVal;

	if (K2Node_DynamicCast_AsShooter_Game_State != nullptr)
		*K2Node_DynamicCast_AsShooter_Game_State = Parms.K2Node_DynamicCast_AsShooter_Game_State;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsTekArmorUsingAbility__result != nullptr)
		*CallFunc_IsTekArmorUsingAbility__result = Parms.CallFunc_IsTekArmorUsingAbility__result;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.NetSetRunningSpeedModifier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewModifier                                                      (Edit, ConstParm, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              K2Node_VariableSet_RunningSpeedModifier_ImplicitCast             (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

double ABuff_TekArmor_Pants_C::NetSetRunningSpeedModifier(float* K2Node_VariableSet_RunningSpeedModifier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "NetSetRunningSpeedModifier");

	Params::ABuff_TekArmor_Pants_C_NetSetRunningSpeedModifier_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_VariableSet_RunningSpeedModifier_ImplicitCast != nullptr)
		*K2Node_VariableSet_RunningSpeedModifier_ImplicitCast = Parms.K2Node_VariableSet_RunningSpeedModifier_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.RunDamageActor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      HitActor                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               DidRebound                                                       (Edit, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               RetRebounded                                                     (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class APrimalStructure*            K2Node_DynamicCast_AsPrimal_Structure                            (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Should_Damage_Actor_result                              (Edit, ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AStructureBaseBP_C*          K2Node_DynamicCast_AsStructure_Base_BP                           (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetModifiedForward_newForward                           (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_RunDamageActor_DidRebound                               (Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_CalculateDeflectingImpulse_ReturnValue                  (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_TekRunDamage_current_ImplicitCast             (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_ApplyDamage_BaseDamage_ImplicitCast                     (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

float ABuff_TekArmor_Pants_C::RunDamageActor(bool* DidRebound, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_Should_Damage_Actor_result, bool* K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_GetModifiedForward_newForward, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, bool CallFunc_RunDamageActor_DidRebound, struct FVector* CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_CalculateDeflectingImpulse_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, double* CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_TekRunDamage_current_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "RunDamageActor");

	Params::ABuff_TekArmor_Pants_C_RunDamageActor_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Should_Damage_Actor_result = CallFunc_Should_Damage_Actor_result;
	Parms.CallFunc_GetModifiedForward_newForward = CallFunc_GetModifiedForward_newForward;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_RunDamageActor_DidRebound = CallFunc_RunDamageActor_DidRebound;
	Parms.CallFunc_CalculateDeflectingImpulse_ReturnValue = CallFunc_CalculateDeflectingImpulse_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;
	Parms.K2Node_VariableSet_TekRunDamage_current_ImplicitCast = K2Node_VariableSet_TekRunDamage_current_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (DidRebound != nullptr)
		*DidRebound = Parms.DidRebound;

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_GetActorForwardVector_ReturnValue != nullptr)
		*CallFunc_GetActorForwardVector_ReturnValue = std::move(Parms.CallFunc_GetActorForwardVector_ReturnValue);

	if (CallFunc_LessEqual_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.NetSetTekRunningState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_TekRunningState       NewState                                                         (BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue_1                       (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimalCharacterStatusComponent*CallFunc_GetCharacterStatusComponent_ReturnValue                 (Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class ABuff_TekArmor_C*            CallFunc_Get_DefaultTekBuff_ref                                  (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UPrimalCharacterStatusComponent*CallFunc_GetCharacterStatusComponent_ReturnValue_1               (Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// float                              K2Node_VariableSet_BuffTickServerMaxTime_ImplicitCast            (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              K2Node_VariableSet_BuffTickServerMinTime_ImplicitCast            (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

float ABuff_TekArmor_Pants_C::NetSetTekRunningState(bool K2Node_SwitchEnum_CmpSuccess, float* K2Node_VariableSet_BuffTickServerMinTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "NetSetTekRunningState");

	Params::ABuff_TekArmor_Pants_C_NetSetTekRunningState_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_VariableSet_BuffTickServerMinTime_ImplicitCast != nullptr)
		*K2Node_VariableSet_BuffTickServerMinTime_ImplicitCast = Parms.K2Node_VariableSet_BuffTickServerMinTime_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetDustParticlesActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewActive                                                        (Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

bool ABuff_TekArmor_Pants_C::SetDustParticlesActive(float* CallFunc_SetFloatParameter_Param_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "SetDustParticlesActive");

	Params::ABuff_TekArmor_Pants_C_SetDustParticlesActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_SetFloatParameter_Param_ImplicitCast != nullptr)
		*CallFunc_SetFloatParameter_Param_ImplicitCast = Parms.CallFunc_SetFloatParameter_Param_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.UpdateLocalVarsByState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_TekRunningState       NewState                                                         (BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Can_Element_Decrease_CanDecrease                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (Edit, BlueprintVisible, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

struct FRotator ABuff_TekArmor_Pants_C::UpdateLocalVarsByState(bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Can_Element_Decrease_CanDecrease, struct FVector* CallFunc_GetActorForwardVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "UpdateLocalVarsByState");

	Params::ABuff_TekArmor_Pants_C_UpdateLocalVarsByState_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Can_Element_Decrease_CanDecrease = CallFunc_Can_Element_Decrease_CanDecrease;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetActorForwardVector_ReturnValue != nullptr)
		*CallFunc_GetActorForwardVector_ReturnValue = std::move(Parms.CallFunc_GetActorForwardVector_ReturnValue);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.LocalSetTekRunningState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_TekRunningState       NewState                                                         (BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Can_Element_Decrease_CanDecrease                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_Can_Element_Decrease_CanDecrease_1                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)

bool ABuff_TekArmor_Pants_C::LocalSetTekRunningState(bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Can_Element_Decrease_CanDecrease, bool CallFunc_Can_Element_Decrease_CanDecrease_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "LocalSetTekRunningState");

	Params::ABuff_TekArmor_Pants_C_LocalSetTekRunningState_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Can_Element_Decrease_CanDecrease = CallFunc_Can_Element_Decrease_CanDecrease;
	Parms.CallFunc_Can_Element_Decrease_CanDecrease_1 = CallFunc_Can_Element_Decrease_CanDecrease_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BuffTickServer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     ForwardVector                                                    (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_PlayerHasFistsEquipped_result                           (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted         (ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted_1       (ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted_2       (ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsInStatusState_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             CallFunc_GetPlayerMaxTekRunVelocity_Pure_maxSpeed                (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsPlayerInWaterVolume_result                            (BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_IsPlayerInWaterVolume_waterVolumeTopZ                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsSubmerged_ReturnValue                                 (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player_1                            (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_Dot_VectorVector_ReturnValue_1                          (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player_2                            (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_GetVelocity_ReturnValue_1                               (ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_ClampVectorSize_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue_1                                    (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue_1                     (Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Dot_VectorVector_ReturnValue_2                          (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// bool                               CallFunc_IsPlayerGrounded_result                                 (Edit, BlueprintVisible, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_GetPlayerMaxTekRunVelocity_Pure_maxSpeed_1              (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// float                              CallFunc_TimeSince_ReturnValue                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2                 (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// bool                               Temp_bool_IsClosed_Variable                                      (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue_2                     (Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsTekArmorUsingAbility__result                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GetPlayerMaxTekRunVelocity_Pure_maxSpeed_2              (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_Can_Element_Decrease_CanDecrease                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, NonTransactional)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp, NonTransactional)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue_3                     (Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Normal_ReturnValue_2                                    (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Dot_VectorVector_ReturnValue_3                          (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_Abs_ReturnValue                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_2                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3                 (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

bool ABuff_TekArmor_Pants_C::BuffTickServer(struct FVector* ForwardVector, bool* CallFunc_PlayerHasFistsEquipped_result, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsPlayerInWaterVolume_result, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool* CallFunc_IsSubmerged_ReturnValue, struct FVector* CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, struct FVector* CallFunc_GetActorForwardVector_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool CallFunc_IsPlayerGrounded_result, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2, struct FVector* CallFunc_GetActorForwardVector_ReturnValue_2, bool* CallFunc_IsTekArmorUsingAbility__result, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, bool CallFunc_Less_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_Can_Element_Decrease_CanDecrease, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, struct FVector* CallFunc_GetActorForwardVector_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "BuffTickServer");

	Params::ABuff_TekArmor_Pants_C_BuffTickServer_Params Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsPlayerInWaterVolume_result = CallFunc_IsPlayerInWaterVolume_result;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue_1 = CallFunc_Normal_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_IsPlayerGrounded_result = CallFunc_IsPlayerGrounded_result;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Can_Element_Decrease_CanDecrease = CallFunc_Can_Element_Decrease_CanDecrease;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Normal_ReturnValue_2 = CallFunc_Normal_ReturnValue_2;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_2 = CallFunc_Less_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ForwardVector != nullptr)
		*ForwardVector = std::move(Parms.ForwardVector);

	if (CallFunc_PlayerHasFistsEquipped_result != nullptr)
		*CallFunc_PlayerHasFistsEquipped_result = Parms.CallFunc_PlayerHasFistsEquipped_result;

	if (CallFunc_IsSubmerged_ReturnValue != nullptr)
		*CallFunc_IsSubmerged_ReturnValue = Parms.CallFunc_IsSubmerged_ReturnValue;

	if (CallFunc_GetActorForwardVector_ReturnValue != nullptr)
		*CallFunc_GetActorForwardVector_ReturnValue = std::move(Parms.CallFunc_GetActorForwardVector_ReturnValue);

	if (CallFunc_GetActorForwardVector_ReturnValue_1 != nullptr)
		*CallFunc_GetActorForwardVector_ReturnValue_1 = std::move(Parms.CallFunc_GetActorForwardVector_ReturnValue_1);

	if (CallFunc_GetActorForwardVector_ReturnValue_2 != nullptr)
		*CallFunc_GetActorForwardVector_ReturnValue_2 = std::move(Parms.CallFunc_GetActorForwardVector_ReturnValue_2);

	if (CallFunc_IsTekArmorUsingAbility__result != nullptr)
		*CallFunc_IsTekArmorUsingAbility__result = Parms.CallFunc_IsTekArmorUsingAbility__result;

	if (CallFunc_GetActorForwardVector_ReturnValue_3 != nullptr)
		*CallFunc_GetActorForwardVector_ReturnValue_3 = std::move(Parms.CallFunc_GetActorForwardVector_ReturnValue_3);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InitGloves
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_TekArmor_Pants_C::InitGloves()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "InitGloves");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ForceWalkForward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_TekArmor_Pants_C::ForceWalkForward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "ForceWalkForward");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.UpdatePlayerControlRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaSeconds                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ABuff_TekArmor_Pants_C::UpdatePlayerControlRotation(double* DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "UpdatePlayerControlRotation");

	Params::ABuff_TekArmor_Pants_C_UpdatePlayerControlRotation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DeltaSeconds != nullptr)
		*DeltaSeconds = Parms.DeltaSeconds;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BPDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// class APrimalCharacter*            CallFunc_GetDefaultPlayer_ref                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Get_Default_Player_Run_Speed_Mult_speedMult             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UPrimalCharacterMovement*    CallFunc_CharacterMovementToPCM_ReturnValue                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              K2Node_VariableSet_RunningSpeedModifier_ImplicitCast             (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void ABuff_TekArmor_Pants_C::BPDeactivated(class AActor** ForInstigator, class APrimalCharacter** CallFunc_GetDefaultPlayer_ref, double CallFunc_Get_Default_Player_Run_Speed_Mult_speedMult, class UPrimalCharacterMovement** CallFunc_CharacterMovementToPCM_ReturnValue, float* K2Node_VariableSet_RunningSpeedModifier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "BPDeactivated");

	Params::ABuff_TekArmor_Pants_C_BPDeactivated_Params Parms{};

	Parms.CallFunc_Get_Default_Player_Run_Speed_Mult_speedMult = CallFunc_Get_Default_Player_Run_Speed_Mult_speedMult;

	UObject::ProcessEvent(Func, &Parms);

	if (ForInstigator != nullptr)
		*ForInstigator = Parms.ForInstigator;

	if (CallFunc_GetDefaultPlayer_ref != nullptr)
		*CallFunc_GetDefaultPlayer_ref = Parms.CallFunc_GetDefaultPlayer_ref;

	if (CallFunc_CharacterMovementToPCM_ReturnValue != nullptr)
		*CallFunc_CharacterMovementToPCM_ReturnValue = Parms.CallFunc_CharacterMovementToPCM_ReturnValue;

	if (K2Node_VariableSet_RunningSpeedModifier_ImplicitCast != nullptr)
		*K2Node_VariableSet_RunningSpeedModifier_ImplicitCast = Parms.K2Node_VariableSet_RunningSpeedModifier_ImplicitCast;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerTekRunVelocityRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Ratio                                                            (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config)
// double                             CallFunc_GetPlayerMaxTekRunVelocity_Pure_maxSpeed                (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

double ABuff_TekArmor_Pants_C::GetPlayerTekRunVelocityRatio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "GetPlayerTekRunVelocityRatio");

	Params::ABuff_TekArmor_Pants_C_GetPlayerTekRunVelocityRatio_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Player MaxRunVelocity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             MaxSpeed                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// double                             CallFunc_Get_Default_Player_Run_Speed_Mult_speedMult             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UPrimalCharacterStatusComponent*CallFunc_GetCharacterStatusComponent_ReturnValue                 (Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_GetMovementSpeedModifier_ReturnValue                    (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

float ABuff_TekArmor_Pants_C::Get_Player_MaxRunVelocity(double CallFunc_Get_Default_Player_Run_Speed_Mult_speedMult, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "Get Player MaxRunVelocity");

	Params::ABuff_TekArmor_Pants_C_Get_Player_MaxRunVelocity_Params Parms{};

	Parms.CallFunc_Get_Default_Player_Run_Speed_Mult_speedMult = CallFunc_Get_Default_Player_Run_Speed_Mult_speedMult;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.MaintainFullSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsePlayerForward                                                (EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     OverrideDirection                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               WasMaintained                                                    (Edit, ConstParm, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               RetVal                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     NewDirection                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_GetPlayerMaxTekRunVelocity_Pure_maxSpeed                (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)

bool ABuff_TekArmor_Pants_C::MaintainFullSpeed(const struct FVector& OverrideDirection, bool WasMaintained, bool* RetVal, const struct FVector& NewDirection, double CallFunc_Multiply_DoubleDouble_ReturnValue, struct FVector* CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "MaintainFullSpeed");

	Params::ABuff_TekArmor_Pants_C_MaintainFullSpeed_Params Parms{};

	Parms.OverrideDirection = OverrideDirection;
	Parms.WasMaintained = WasMaintained;
	Parms.NewDirection = NewDirection;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (RetVal != nullptr)
		*RetVal = Parms.RetVal;

	if (CallFunc_GetActorForwardVector_ReturnValue != nullptr)
		*CallFunc_GetActorForwardVector_ReturnValue = std::move(Parms.CallFunc_GetActorForwardVector_ReturnValue);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerMaxTekRunVelocity_Pure
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             MaxSpeed                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// double                             CallFunc_Get_Player_Max_Tek_Run_Velocity_maxSpeed                (Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

double ABuff_TekArmor_Pants_C::GetPlayerMaxTekRunVelocity_Pure()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "GetPlayerMaxTekRunVelocity_Pure");

	Params::ABuff_TekArmor_Pants_C_GetPlayerMaxTekRunVelocity_Pure_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.StoreCurrentVelocityLength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

double ABuff_TekArmor_Pants_C::StoreCurrentVelocityLength(struct FVector* CallFunc_GetActorForwardVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "StoreCurrentVelocityLength");

	Params::ABuff_TekArmor_Pants_C_StoreCurrentVelocityLength_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetActorForwardVector_ReturnValue != nullptr)
		*CallFunc_GetActorForwardVector_ReturnValue = std::move(Parms.CallFunc_GetActorForwardVector_ReturnValue);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetChargeStartVariables
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqual_VectorVector_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GetPlayerMaxTekRunVelocity_Pure_maxSpeed                (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

double ABuff_TekArmor_Pants_C::SetChargeStartVariables(const struct FVector& CallFunc_Normal_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "SetChargeStartVariables");

	Params::ABuff_TekArmor_Pants_C_SetChargeStartVariables_Params Parms{};

	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Default Player Run Speed Mult
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             SpeedMult                                                        (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class APrimalCharacter*            CallFunc_GetDefaultPlayer_ref                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_GetRunningSpeedModifier_ReturnValue                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_FunctionResult_speedMult_ImplicitCast                     (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

double ABuff_TekArmor_Pants_C::Get_Default_Player_Run_Speed_Mult(class APrimalCharacter** CallFunc_GetDefaultPlayer_ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "Get Default Player Run Speed Mult");

	Params::ABuff_TekArmor_Pants_C_Get_Default_Player_Run_Speed_Mult_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetDefaultPlayer_ref != nullptr)
		*CallFunc_GetDefaultPlayer_ref = Parms.CallFunc_GetDefaultPlayer_ref;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Tick Update Tek Run
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaSeconds                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ABuff_TekArmor_Pants_C::Tick_Update_Tek_Run(double* DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "Tick Update Tek Run");

	Params::ABuff_TekArmor_Pants_C_Tick_Update_Tek_Run_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DeltaSeconds != nullptr)
		*DeltaSeconds = Parms.DeltaSeconds;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.RedirectPlayerVelocity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     NewForward                                                       (ConstParm, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GetPlayerMaxTekRunVelocity_Pure_maxSpeed                (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)

struct FVector ABuff_TekArmor_Pants_C::RedirectPlayerVelocity(const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "RedirectPlayerVelocity");

	Params::ABuff_TekArmor_Pants_C_RedirectPlayerVelocity_Params Parms{};

	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BuffTickClient
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     CurrentFootOffset                                                (Edit, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsAbilityValid_OutValid                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsPlayerInWaterVolume_result                            (BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_IsPlayerInWaterVolume_waterVolumeTopZ                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsPlayerUsingJetpack_result                             (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player_1                            (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_GetPlayerMaxTekRunVelocity_Pure_maxSpeed                (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue_1                     (Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsFirstPerson_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsTekArmorUsingAbility__result                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue_1                                    (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// float                              CallFunc_TimeSince_ReturnValue                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_2                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_TimeSince_ReturnValue_1                                 (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X_2                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Y_2                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Z_2                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_X_3                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector_Y_3                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector_Z_3                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2                 (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3                 (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_4                 (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
// struct FHitResult                  CallFunc_LineTraceSingleForObjects_OutHit                        (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_LineTraceSingleForObjects_ReturnValue                   (ConstParm, ExportObject, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakHitResult_Time                                     (ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakHitResult_Distance                                 (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BreakHitResult_HitItem                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class APhysicsVolume*              K2Node_DynamicCast_AsPhysics_Volume                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_CanStartTekRun_result                                   (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_ByteByte_ReturnValue                            (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_ByteByte_ReturnValue_1                          (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_ByteByte_ReturnValue_2                          (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsPlayerGrounded_result                                 (Edit, BlueprintVisible, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref                  (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Client_Consume_Element_After_Time_deltaTime_ImplicitCast(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1              (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// float                              CallFunc_RInterpTo_InterpSpeed_ImplicitCast                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast                  (ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

float ABuff_TekArmor_Pants_C::BuffTickClient(struct FVector* CurrentFootOffset, bool* CallFunc_IsAbilityValid_OutValid, bool CallFunc_IsPlayerInWaterVolume_result, struct FVector* CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_IsPlayerUsingJetpack_result, struct FVector* CallFunc_GetActorForwardVector_ReturnValue_1, bool* CallFunc_IsLocallyControlled_ReturnValue, bool* CallFunc_IsFirstPerson_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, bool* CallFunc_IsTekArmorUsingAbility__result, double CallFunc_FClamp_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, TArray<enum class EObjectTypeQuery>* K2Node_MakeArray_Array, struct FVector* CallFunc_GetActorBounds_BoxExtent, TArray<class AActor*>* K2Node_MakeArray_Array_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue_1, double* CallFunc_Add_DoubleDouble_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_4, double* CallFunc_Add_DoubleDouble_ReturnValue_3, bool CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Distance, struct FVector* CallFunc_BreakHitResult_Location, struct FVector* CallFunc_BreakHitResult_ImpactPoint, struct FVector* CallFunc_BreakHitResult_Normal, struct FVector* CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial** CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, class APhysicsVolume* K2Node_DynamicCast_AsPhysics_Volume, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_CanStartTekRun_result, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, bool CallFunc_IsPlayerGrounded_result, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "BuffTickClient");

	Params::ABuff_TekArmor_Pants_C_BuffTickClient_Params Parms{};

	Parms.CallFunc_IsPlayerInWaterVolume_result = CallFunc_IsPlayerInWaterVolume_result;
	Parms.CallFunc_IsPlayerUsingJetpack_result = CallFunc_IsPlayerUsingJetpack_result;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_4 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.K2Node_DynamicCast_AsPhysics_Volume = K2Node_DynamicCast_AsPhysics_Volume;
	Parms.CallFunc_CanStartTekRun_result = CallFunc_CanStartTekRun_result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_IsPlayerGrounded_result = CallFunc_IsPlayerGrounded_result;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1 = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentFootOffset != nullptr)
		*CurrentFootOffset = std::move(Parms.CurrentFootOffset);

	if (CallFunc_IsAbilityValid_OutValid != nullptr)
		*CallFunc_IsAbilityValid_OutValid = Parms.CallFunc_IsAbilityValid_OutValid;

	if (CallFunc_GetActorForwardVector_ReturnValue != nullptr)
		*CallFunc_GetActorForwardVector_ReturnValue = std::move(Parms.CallFunc_GetActorForwardVector_ReturnValue);

	if (CallFunc_GetActorForwardVector_ReturnValue_1 != nullptr)
		*CallFunc_GetActorForwardVector_ReturnValue_1 = std::move(Parms.CallFunc_GetActorForwardVector_ReturnValue_1);

	if (CallFunc_IsLocallyControlled_ReturnValue != nullptr)
		*CallFunc_IsLocallyControlled_ReturnValue = Parms.CallFunc_IsLocallyControlled_ReturnValue;

	if (CallFunc_IsFirstPerson_ReturnValue != nullptr)
		*CallFunc_IsFirstPerson_ReturnValue = Parms.CallFunc_IsFirstPerson_ReturnValue;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (CallFunc_IsTekArmorUsingAbility__result != nullptr)
		*CallFunc_IsTekArmorUsingAbility__result = Parms.CallFunc_IsTekArmorUsingAbility__result;

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (CallFunc_GetActorBounds_BoxExtent != nullptr)
		*CallFunc_GetActorBounds_BoxExtent = std::move(Parms.CallFunc_GetActorBounds_BoxExtent);

	if (K2Node_MakeArray_Array_1 != nullptr)
		*K2Node_MakeArray_Array_1 = std::move(Parms.K2Node_MakeArray_Array_1);

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	if (CallFunc_Add_DoubleDouble_ReturnValue_1 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_1 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_1;

	if (CallFunc_Add_DoubleDouble_ReturnValue_2 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_2 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_2;

	if (CallFunc_Add_DoubleDouble_ReturnValue_3 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_3 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_3;

	if (CallFunc_BreakHitResult_bInitialOverlap != nullptr)
		*CallFunc_BreakHitResult_bInitialOverlap = Parms.CallFunc_BreakHitResult_bInitialOverlap;

	if (CallFunc_BreakHitResult_Distance != nullptr)
		*CallFunc_BreakHitResult_Distance = Parms.CallFunc_BreakHitResult_Distance;

	if (CallFunc_BreakHitResult_Location != nullptr)
		*CallFunc_BreakHitResult_Location = std::move(Parms.CallFunc_BreakHitResult_Location);

	if (CallFunc_BreakHitResult_ImpactPoint != nullptr)
		*CallFunc_BreakHitResult_ImpactPoint = std::move(Parms.CallFunc_BreakHitResult_ImpactPoint);

	if (CallFunc_BreakHitResult_Normal != nullptr)
		*CallFunc_BreakHitResult_Normal = std::move(Parms.CallFunc_BreakHitResult_Normal);

	if (CallFunc_BreakHitResult_ImpactNormal != nullptr)
		*CallFunc_BreakHitResult_ImpactNormal = std::move(Parms.CallFunc_BreakHitResult_ImpactNormal);

	if (CallFunc_BreakHitResult_PhysMat != nullptr)
		*CallFunc_BreakHitResult_PhysMat = Parms.CallFunc_BreakHitResult_PhysMat;

	if (CallFunc_BreakHitResult_HitActor != nullptr)
		*CallFunc_BreakHitResult_HitActor = Parms.CallFunc_BreakHitResult_HitActor;

	if (CallFunc_BreakHitResult_HitComponent != nullptr)
		*CallFunc_BreakHitResult_HitComponent = Parms.CallFunc_BreakHitResult_HitComponent;

	if (CallFunc_BreakHitResult_HitBoneName != nullptr)
		*CallFunc_BreakHitResult_HitBoneName = Parms.CallFunc_BreakHitResult_HitBoneName;

	if (CallFunc_BreakHitResult_BoneName != nullptr)
		*CallFunc_BreakHitResult_BoneName = Parms.CallFunc_BreakHitResult_BoneName;

	if (CallFunc_BreakHitResult_HitItem != nullptr)
		*CallFunc_BreakHitResult_HitItem = Parms.CallFunc_BreakHitResult_HitItem;

	if (CallFunc_BreakHitResult_ElementIndex != nullptr)
		*CallFunc_BreakHitResult_ElementIndex = Parms.CallFunc_BreakHitResult_ElementIndex;

	if (CallFunc_BreakHitResult_FaceIndex != nullptr)
		*CallFunc_BreakHitResult_FaceIndex = Parms.CallFunc_BreakHitResult_FaceIndex;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPreventEquipWeapons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Prevent                                                          (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool ABuff_TekArmor_Pants_C::SetPreventEquipWeapons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "SetPreventEquipWeapons");

	Params::ABuff_TekArmor_Pants_C_SetPreventEquipWeapons_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CalculateDeflectingImpulse
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      TargetCharacter                                                  (ConstParm, ExportObject, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// double                             Impulse                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)

struct FVector ABuff_TekArmor_Pants_C::CalculateDeflectingImpulse(double* Impulse, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "CalculateDeflectingImpulse");

	Params::ABuff_TekArmor_Pants_C_CalculateDeflectingImpulse_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Impulse != nullptr)
		*Impulse = Parms.Impulse;

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPlayerRunSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewSpeed                                                         (Edit, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

double ABuff_TekArmor_Pants_C::SetPlayerRunSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "SetPlayerRunSpeed");

	Params::ABuff_TekArmor_Pants_C_SetPlayerRunSpeed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ClearHitActors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_TekArmor_Pants_C::ClearHitActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "ClearHitActors");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Trace and Damage ForwardPawns
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// TArray<struct FHitResult>          CallFunc_VTraceMultiBP_OutHits                                   (BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_VTraceMultiBP_ReturnValue                               (BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue                              (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakHitResult_Time                                     (ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakHitResult_Distance                                 (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BreakHitResult_HitItem                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Should_Damage_Actor_result                              (Edit, ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Array_Contains_ReturnValue                              (Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FHitResult                  CallFunc_VTraceSingleBP_OutHit                                   (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_VTraceSingleBP_ReturnValue                              (ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_ApplyPointDamage_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, EditConst, SubobjectReference)
// float                              CallFunc_ApplyPointDamage_BaseDamage_ImplicitCast                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, EditConst, SubobjectReference)
// float                              CallFunc_ApplyPointDamage_Impulse_ImplicitCast                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, SubobjectReference)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)

struct FVector ABuff_TekArmor_Pants_C::Trace_and_Damage_ForwardPawns(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, struct FVector* CallFunc_GetActorForwardVector_ReturnValue, TArray<class AActor*>* K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool* CallFunc_BoxTraceSingle_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Distance, struct FVector* CallFunc_BreakHitResult_Location, struct FVector* CallFunc_BreakHitResult_ImpactPoint, struct FVector* CallFunc_BreakHitResult_Normal, struct FVector* CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial** CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_Should_Damage_Actor_result, struct FHitResult* CallFunc_VTraceSingleBP_OutHit, bool* CallFunc_VTraceSingleBP_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float* CallFunc_ApplyPointDamage_ReturnValue, float CallFunc_ApplyPointDamage_BaseDamage_ImplicitCast, float CallFunc_ApplyPointDamage_Impulse_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast, double CallFunc_MakeVector_X_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "Trace and Damage ForwardPawns");

	Params::ABuff_TekArmor_Pants_C_Trace_and_Damage_ForwardPawns_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_Should_Damage_Actor_result = CallFunc_Should_Damage_Actor_result;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_ApplyPointDamage_BaseDamage_ImplicitCast = CallFunc_ApplyPointDamage_BaseDamage_ImplicitCast;
	Parms.CallFunc_ApplyPointDamage_Impulse_ImplicitCast = CallFunc_ApplyPointDamage_Impulse_ImplicitCast;
	Parms.CallFunc_MakeVector_Y_ImplicitCast = CallFunc_MakeVector_Y_ImplicitCast;
	Parms.CallFunc_MakeVector_X_ImplicitCast = CallFunc_MakeVector_X_ImplicitCast;
	Parms.CallFunc_MakeVector_Z_ImplicitCast = CallFunc_MakeVector_Z_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetActorForwardVector_ReturnValue != nullptr)
		*CallFunc_GetActorForwardVector_ReturnValue = std::move(Parms.CallFunc_GetActorForwardVector_ReturnValue);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (CallFunc_BoxTraceSingle_ReturnValue != nullptr)
		*CallFunc_BoxTraceSingle_ReturnValue = Parms.CallFunc_BoxTraceSingle_ReturnValue;

	if (CallFunc_BreakHitResult_bInitialOverlap != nullptr)
		*CallFunc_BreakHitResult_bInitialOverlap = Parms.CallFunc_BreakHitResult_bInitialOverlap;

	if (CallFunc_BreakHitResult_Distance != nullptr)
		*CallFunc_BreakHitResult_Distance = Parms.CallFunc_BreakHitResult_Distance;

	if (CallFunc_BreakHitResult_Location != nullptr)
		*CallFunc_BreakHitResult_Location = std::move(Parms.CallFunc_BreakHitResult_Location);

	if (CallFunc_BreakHitResult_ImpactPoint != nullptr)
		*CallFunc_BreakHitResult_ImpactPoint = std::move(Parms.CallFunc_BreakHitResult_ImpactPoint);

	if (CallFunc_BreakHitResult_Normal != nullptr)
		*CallFunc_BreakHitResult_Normal = std::move(Parms.CallFunc_BreakHitResult_Normal);

	if (CallFunc_BreakHitResult_ImpactNormal != nullptr)
		*CallFunc_BreakHitResult_ImpactNormal = std::move(Parms.CallFunc_BreakHitResult_ImpactNormal);

	if (CallFunc_BreakHitResult_PhysMat != nullptr)
		*CallFunc_BreakHitResult_PhysMat = Parms.CallFunc_BreakHitResult_PhysMat;

	if (CallFunc_BreakHitResult_HitActor != nullptr)
		*CallFunc_BreakHitResult_HitActor = Parms.CallFunc_BreakHitResult_HitActor;

	if (CallFunc_BreakHitResult_HitComponent != nullptr)
		*CallFunc_BreakHitResult_HitComponent = Parms.CallFunc_BreakHitResult_HitComponent;

	if (CallFunc_BreakHitResult_HitBoneName != nullptr)
		*CallFunc_BreakHitResult_HitBoneName = Parms.CallFunc_BreakHitResult_HitBoneName;

	if (CallFunc_BreakHitResult_BoneName != nullptr)
		*CallFunc_BreakHitResult_BoneName = Parms.CallFunc_BreakHitResult_BoneName;

	if (CallFunc_BreakHitResult_HitItem != nullptr)
		*CallFunc_BreakHitResult_HitItem = Parms.CallFunc_BreakHitResult_HitItem;

	if (CallFunc_BreakHitResult_ElementIndex != nullptr)
		*CallFunc_BreakHitResult_ElementIndex = Parms.CallFunc_BreakHitResult_ElementIndex;

	if (CallFunc_BreakHitResult_FaceIndex != nullptr)
		*CallFunc_BreakHitResult_FaceIndex = Parms.CallFunc_BreakHitResult_FaceIndex;

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_VTraceSingleBP_OutHit != nullptr)
		*CallFunc_VTraceSingleBP_OutHit = std::move(Parms.CallFunc_VTraceSingleBP_OutHit);

	if (CallFunc_VTraceSingleBP_ReturnValue != nullptr)
		*CallFunc_VTraceSingleBP_ReturnValue = Parms.CallFunc_VTraceSingleBP_ReturnValue;

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	if (CallFunc_ApplyPointDamage_ReturnValue != nullptr)
		*CallFunc_ApplyPointDamage_ReturnValue = Parms.CallFunc_ApplyPointDamage_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetModifiedForward
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             ForwardScale                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     AdditionalOffset                                                 (BlueprintVisible, BlueprintReadOnly, Net, Transient, Config, SubobjectReference)
// struct FVector                     NewForward                                                       (ConstParm, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)

struct FVector ABuff_TekArmor_Pants_C::GetModifiedForward(double* ForwardScale, const struct FVector& AdditionalOffset, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "GetModifiedForward");

	Params::ABuff_TekArmor_Pants_C_GetModifiedForward_Params Parms{};

	Parms.AdditionalOffset = AdditionalOffset;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ForwardScale != nullptr)
		*ForwardScale = Parms.ForwardScale;

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Trace And Damage Forward StationaryActors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// class AShooterPlayerController*    CallFunc_Get_Ref_Owning_PlayerController_controller              (BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UCharacterMovementComponent* CallFunc_Get_Ref_Owning_PlayerMovement_movement                  (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue                              (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FHitResult>          CallFunc_VTraceMultiBP_OutHits                                   (BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_VTraceMultiBP_ReturnValue                               (BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakHitResult_Time                                     (ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakHitResult_Distance                                 (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BreakHitResult_HitItem                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UInstancedStaticMeshComponent*K2Node_DynamicCast_AsInstanced_Static_Mesh_Component             (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AInstancedFoliageActor*      K2Node_DynamicCast_AsInstanced_Foliage_Actor                     (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// class APrimalStructure*            K2Node_DynamicCast_AsPrimal_Structure                            (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_Cross_VectorVector_ReturnValue                          (BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_RunDamageActor_DidRebound                               (Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_MaintainFullSpeed_wasMaintained                         (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)

double ABuff_TekArmor_Pants_C::Trace_And_Damage_Forward_StationaryActors(int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, double CallFunc_SelectFloat_ReturnValue, TArray<class AActor*>* K2Node_MakeArray_Array, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool* CallFunc_BoxTraceSingle_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Distance, struct FVector* CallFunc_BreakHitResult_Location, struct FVector* CallFunc_BreakHitResult_ImpactPoint, struct FVector* CallFunc_BreakHitResult_Normal, struct FVector* CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial** CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, class UInstancedStaticMeshComponent* K2Node_DynamicCast_AsInstanced_Static_Mesh_Component, bool* K2Node_DynamicCast_bSuccess, class AInstancedFoliageActor** K2Node_DynamicCast_AsInstanced_Foliage_Actor, bool* K2Node_DynamicCast_bSuccess_1, bool* K2Node_DynamicCast_bSuccess_2, struct FVector* CallFunc_Cross_VectorVector_ReturnValue, bool CallFunc_RunDamageActor_DidRebound, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_MakeVector_Y_ImplicitCast, double CallFunc_MakeVector_X_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "Trace And Damage Forward StationaryActors");

	Params::ABuff_TekArmor_Pants_C_Trace_And_Damage_Forward_StationaryActors_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.K2Node_DynamicCast_AsInstanced_Static_Mesh_Component = K2Node_DynamicCast_AsInstanced_Static_Mesh_Component;
	Parms.CallFunc_RunDamageActor_DidRebound = CallFunc_RunDamageActor_DidRebound;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector_Y_ImplicitCast = CallFunc_MakeVector_Y_ImplicitCast;
	Parms.CallFunc_MakeVector_X_ImplicitCast = CallFunc_MakeVector_X_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (CallFunc_BoxTraceSingle_ReturnValue != nullptr)
		*CallFunc_BoxTraceSingle_ReturnValue = Parms.CallFunc_BoxTraceSingle_ReturnValue;

	if (CallFunc_BreakHitResult_bInitialOverlap != nullptr)
		*CallFunc_BreakHitResult_bInitialOverlap = Parms.CallFunc_BreakHitResult_bInitialOverlap;

	if (CallFunc_BreakHitResult_Distance != nullptr)
		*CallFunc_BreakHitResult_Distance = Parms.CallFunc_BreakHitResult_Distance;

	if (CallFunc_BreakHitResult_Location != nullptr)
		*CallFunc_BreakHitResult_Location = std::move(Parms.CallFunc_BreakHitResult_Location);

	if (CallFunc_BreakHitResult_ImpactPoint != nullptr)
		*CallFunc_BreakHitResult_ImpactPoint = std::move(Parms.CallFunc_BreakHitResult_ImpactPoint);

	if (CallFunc_BreakHitResult_Normal != nullptr)
		*CallFunc_BreakHitResult_Normal = std::move(Parms.CallFunc_BreakHitResult_Normal);

	if (CallFunc_BreakHitResult_ImpactNormal != nullptr)
		*CallFunc_BreakHitResult_ImpactNormal = std::move(Parms.CallFunc_BreakHitResult_ImpactNormal);

	if (CallFunc_BreakHitResult_PhysMat != nullptr)
		*CallFunc_BreakHitResult_PhysMat = Parms.CallFunc_BreakHitResult_PhysMat;

	if (CallFunc_BreakHitResult_HitActor != nullptr)
		*CallFunc_BreakHitResult_HitActor = Parms.CallFunc_BreakHitResult_HitActor;

	if (CallFunc_BreakHitResult_HitComponent != nullptr)
		*CallFunc_BreakHitResult_HitComponent = Parms.CallFunc_BreakHitResult_HitComponent;

	if (CallFunc_BreakHitResult_HitBoneName != nullptr)
		*CallFunc_BreakHitResult_HitBoneName = Parms.CallFunc_BreakHitResult_HitBoneName;

	if (CallFunc_BreakHitResult_BoneName != nullptr)
		*CallFunc_BreakHitResult_BoneName = Parms.CallFunc_BreakHitResult_BoneName;

	if (CallFunc_BreakHitResult_HitItem != nullptr)
		*CallFunc_BreakHitResult_HitItem = Parms.CallFunc_BreakHitResult_HitItem;

	if (CallFunc_BreakHitResult_ElementIndex != nullptr)
		*CallFunc_BreakHitResult_ElementIndex = Parms.CallFunc_BreakHitResult_ElementIndex;

	if (CallFunc_BreakHitResult_FaceIndex != nullptr)
		*CallFunc_BreakHitResult_FaceIndex = Parms.CallFunc_BreakHitResult_FaceIndex;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_AsInstanced_Foliage_Actor != nullptr)
		*K2Node_DynamicCast_AsInstanced_Foliage_Actor = Parms.K2Node_DynamicCast_AsInstanced_Foliage_Actor;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_Cross_VectorVector_ReturnValue != nullptr)
		*CallFunc_Cross_VectorVector_ReturnValue = std::move(Parms.CallFunc_Cross_VectorVector_ReturnValue);

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CalculateForwardRelativeToSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaSeconds                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     ForwardVector                                                    (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)

void ABuff_TekArmor_Pants_C::CalculateForwardRelativeToSpeed(double* DeltaSeconds, struct FVector* ForwardVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "CalculateForwardRelativeToSpeed");

	Params::ABuff_TekArmor_Pants_C_CalculateForwardRelativeToSpeed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DeltaSeconds != nullptr)
		*DeltaSeconds = Parms.DeltaSeconds;

	if (ForwardVector != nullptr)
		*ForwardVector = std::move(Parms.ForwardVector);

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CanUseTekAbility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNotifyIfOutOfElement                                            (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               bResult                                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               RetVal                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_CanUseTekAbility_bResult                                (Edit, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    CallFunc_Get_Ref_Owning_PlayerController_controller              (BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsCharacterHardAttached_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsPlacingActive_ReturnValue                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsSubmerged_ReturnValue                                 (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsPlayerGrappled_result                                 (Edit, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsTekArmorUsingAbility__result                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)

bool ABuff_TekArmor_Pants_C::CanUseTekAbility(bool* bNotifyIfOutOfElement, bool* RetVal, bool CallFunc_CanUseTekAbility_bResult, bool CallFunc_IsPlacingActive_ReturnValue, bool* CallFunc_IsSubmerged_ReturnValue, bool CallFunc_IsPlayerGrappled_result, bool* CallFunc_IsTekArmorUsingAbility__result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "CanUseTekAbility");

	Params::ABuff_TekArmor_Pants_C_CanUseTekAbility_Params Parms{};

	Parms.CallFunc_CanUseTekAbility_bResult = CallFunc_CanUseTekAbility_bResult;
	Parms.CallFunc_IsPlacingActive_ReturnValue = CallFunc_IsPlacingActive_ReturnValue;
	Parms.CallFunc_IsPlayerGrappled_result = CallFunc_IsPlayerGrappled_result;

	UObject::ProcessEvent(Func, &Parms);

	if (bNotifyIfOutOfElement != nullptr)
		*bNotifyIfOutOfElement = Parms.bNotifyIfOutOfElement;

	if (RetVal != nullptr)
		*RetVal = Parms.RetVal;

	if (CallFunc_IsSubmerged_ReturnValue != nullptr)
		*CallFunc_IsSubmerged_ReturnValue = Parms.CallFunc_IsSubmerged_ReturnValue;

	if (CallFunc_IsTekArmorUsingAbility__result != nullptr)
		*CallFunc_IsTekArmorUsingAbility__result = Parms.CallFunc_IsTekArmorUsingAbility__result;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetCastedArmorPieceRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItemArmor_Base_Tek_C* CallFunc_GetRelatedTekArmorRef_tekArmorRef                       (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimalItemArmor_TekPants_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Pants                 (ExportObject, Net, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

void ABuff_TekArmor_Pants_C::SetCastedArmorPieceRef(class UPrimalItemArmor_Base_Tek_C* CallFunc_GetRelatedTekArmorRef_tekArmorRef, class UPrimalItemArmor_TekPants_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Pants, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "SetCastedArmorPieceRef");

	Params::ABuff_TekArmor_Pants_C_SetCastedArmorPieceRef_Params Parms{};

	Parms.CallFunc_GetRelatedTekArmorRef_tekArmorRef = CallFunc_GetRelatedTekArmorRef_tekArmorRef;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Pants = K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Pants;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InpActEvt_AltFire_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)

void ABuff_TekArmor_Pants_C::InpActEvt_AltFire_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "InpActEvt_AltFire_K2Node_InputActionEvent_1");

	Params::ABuff_TekArmor_Pants_C_InpActEvt_AltFire_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InpActEvt_AltFire_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)

void ABuff_TekArmor_Pants_C::InpActEvt_AltFire_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "InpActEvt_AltFire_K2Node_InputActionEvent_0");

	Params::ABuff_TekArmor_Pants_C_InpActEvt_AltFire_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Server_SetTekRunningState
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_TekRunningState       NewRunState                                                      (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void ABuff_TekArmor_Pants_C::Server_SetTekRunningState(enum class E_TekRunningState* NewRunState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "Server_SetTekRunningState");

	Params::ABuff_TekArmor_Pants_C_Server_SetTekRunningState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewRunState != nullptr)
		*NewRunState = Parms.NewRunState;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Client_SyncRunModifier
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewModifier                                                      (Edit, ConstParm, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

double ABuff_TekArmor_Pants_C::Client_SyncRunModifier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "Client_SyncRunModifier");

	Params::ABuff_TekArmor_Pants_C_Client_SyncRunModifier_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Pants_AltFirePressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_TekArmor_Pants_C::Pants_AltFirePressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "Pants_AltFirePressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Pants_AltFireReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_TekArmor_Pants_C::Pants_AltFireReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "Pants_AltFireReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ExecuteUbergraph_Buff_TekArmor_Pants
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp)
// struct FKey                        K2Node_InputActionEvent_Key                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FKey                        Temp_struct_Variable                                             (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// enum class E_TekRunningState       K2Node_CustomEvent_newRunState                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_ValidateRunningState_bStateValid                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_CustomEvent_newModifier                                   (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_CanStartTekRun_result                                   (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_AreGlovesEquippedAndActive_result                       (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class ABuff_TekArmor_Gloves_C*     CallFunc_AreGlovesEquippedAndActive_glovesRef                    (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsPlayerGrappled_result                                 (Edit, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_PlayerHasFistsEquipped_result                           (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// float                              K2Node_VariableSet_RunningSpeedModifier_ImplicitCast             (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool ABuff_TekArmor_Pants_C::ExecuteUbergraph_Buff_TekArmor_Pants(int32* EntryPoint, struct FKey* K2Node_InputActionEvent_Key_1, struct FKey* K2Node_InputActionEvent_Key, enum class E_TekRunningState* K2Node_CustomEvent_newRunState, bool* CallFunc_ValidateRunningState_bStateValid, bool CallFunc_CanStartTekRun_result, bool* CallFunc_AreGlovesEquippedAndActive_result, class ABuff_TekArmor_Gloves_C** CallFunc_AreGlovesEquippedAndActive_glovesRef, bool CallFunc_IsPlayerGrappled_result, bool* CallFunc_PlayerHasFistsEquipped_result, float* K2Node_VariableSet_RunningSpeedModifier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_Pants_C", "ExecuteUbergraph_Buff_TekArmor_Pants");

	Params::ABuff_TekArmor_Pants_C_ExecuteUbergraph_Buff_TekArmor_Pants_Params Parms{};

	Parms.CallFunc_CanStartTekRun_result = CallFunc_CanStartTekRun_result;
	Parms.CallFunc_IsPlayerGrappled_result = CallFunc_IsPlayerGrappled_result;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_InputActionEvent_Key_1 != nullptr)
		*K2Node_InputActionEvent_Key_1 = std::move(Parms.K2Node_InputActionEvent_Key_1);

	if (K2Node_InputActionEvent_Key != nullptr)
		*K2Node_InputActionEvent_Key = std::move(Parms.K2Node_InputActionEvent_Key);

	if (K2Node_CustomEvent_newRunState != nullptr)
		*K2Node_CustomEvent_newRunState = Parms.K2Node_CustomEvent_newRunState;

	if (CallFunc_ValidateRunningState_bStateValid != nullptr)
		*CallFunc_ValidateRunningState_bStateValid = Parms.CallFunc_ValidateRunningState_bStateValid;

	if (CallFunc_AreGlovesEquippedAndActive_result != nullptr)
		*CallFunc_AreGlovesEquippedAndActive_result = Parms.CallFunc_AreGlovesEquippedAndActive_result;

	if (CallFunc_AreGlovesEquippedAndActive_glovesRef != nullptr)
		*CallFunc_AreGlovesEquippedAndActive_glovesRef = Parms.CallFunc_AreGlovesEquippedAndActive_glovesRef;

	if (CallFunc_PlayerHasFistsEquipped_result != nullptr)
		*CallFunc_PlayerHasFistsEquipped_result = Parms.CallFunc_PlayerHasFistsEquipped_result;

	if (K2Node_VariableSet_RunningSpeedModifier_ImplicitCast != nullptr)
		*K2Node_VariableSet_RunningSpeedModifier_ImplicitCast = Parms.K2Node_VariableSet_RunningSpeedModifier_ImplicitCast;

	return Parms.ReturnValue;

}

}


