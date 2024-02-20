#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_TekArmor.Buff_TekArmor_C
// (Actor)

class UClass* ABuff_TekArmor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_TekArmor_C");

	return Clss;
}


// Buff_TekArmor_C Buff_TekArmor.Default__Buff_TekArmor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_TekArmor_C* ABuff_TekArmor_C::GetDefaultObj()
{
	static class ABuff_TekArmor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_TekArmor_C*>(ABuff_TekArmor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buff_TekArmor.Buff_TekArmor_C.GetWeaponMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*      OutMesh                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

class USkeletalMeshComponent* ABuff_TekArmor_C::GetWeaponMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "GetWeaponMesh");

	Params::ABuff_TekArmor_C_GetWeaponMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.HideBoostIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldSet                                                        (ConstParm, BlueprintVisible, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               WithValue                                                        (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool ABuff_TekArmor_C::HideBoostIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "HideBoostIcon");

	Params::ABuff_TekArmor_C_HideBoostIcon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.SetJetpackOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  AddTransform                                                     (Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

struct FTransform ABuff_TekArmor_C::SetJetpackOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "SetJetpackOffset");

	Params::ABuff_TekArmor_C_SetJetpackOffset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.HasRequiredEngrams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasEngrams                                                       (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               OutHasEngrams                                                    (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UClass*                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalItem*                 K2Node_DynamicCast_AsPrimal_Item                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_HasEngram_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)

bool ABuff_TekArmor_C::HasRequiredEngrams(bool HasEngrams, bool* OutHasEngrams, const class FString& CallFunc_MakeLiteralString_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "HasRequiredEngrams");

	Params::ABuff_TekArmor_C_HasRequiredEngrams_Params Parms{};

	Parms.HasEngrams = HasEngrams;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutHasEngrams != nullptr)
		*OutHasEngrams = Parms.OutHasEngrams;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (K2Node_DynamicCast_AsShooter_Player_State != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_State = Parms.K2Node_DynamicCast_AsShooter_Player_State;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.IsTekBuffDisabled
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsDisabled                                                      (ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bRetVal                                                          (Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable_2                       (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Array_Index_Variable_2                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class AShooterPlayerController*    CallFunc_Get_Ref_Owning_PlayerController_controller              (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FName                        CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class APrimalBuff*>         CallFunc_GetAllBuffs_AllBuffs                                    (ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalBuff*                 CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// TArray<class FName>                CallFunc_BPPreventTekArmorBuffs_ReturnValue                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Array_Contains_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FName                        CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character_1                         (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class AMissionType*                CallFunc_GetActiveMission_ReturnValue                            (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference, Interp)

class AMissionType* ABuff_TekArmor_C::IsTekBuffDisabled(bool* bRetVal, class APawn** CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* CallFunc_Array_Contains_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_Array_Contains_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "IsTekBuffDisabled");

	Params::ABuff_TekArmor_C_IsTekBuffDisabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bRetVal != nullptr)
		*bRetVal = Parms.bRetVal;

	if (CallFunc_K2_GetPawn_ReturnValue != nullptr)
		*CallFunc_K2_GetPawn_ReturnValue = Parms.CallFunc_K2_GetPawn_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (CallFunc_Array_Contains_ReturnValue != nullptr)
		*CallFunc_Array_Contains_ReturnValue = Parms.CallFunc_Array_Contains_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Array_Contains_ReturnValue_1 != nullptr)
		*CallFunc_Array_Contains_ReturnValue_1 = Parms.CallFunc_Array_Contains_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.check genesis restrictions for player
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            Player                                                           (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
// bool                               Is_restricted                                                    (Edit, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Ret_val                                                          (Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_BPGetPrimaryMapName_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_HasBuffWithCustomTag_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ENetworkModeResult      CallFunc_IsRunningOnServer_OutNetworkMode                        (Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool ABuff_TekArmor_C::Check_genesis_restrictions_for_player(class APrimalCharacter** Player, bool Ret_val, const class FString& CallFunc_BPGetPrimaryMapName_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, enum class ENetworkModeResult CallFunc_IsRunningOnServer_OutNetworkMode, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "check genesis restrictions for player");

	Params::ABuff_TekArmor_C_Check_genesis_restrictions_for_player_Params Parms{};

	Parms.Ret_val = Ret_val;
	Parms.CallFunc_BPGetPrimaryMapName_ReturnValue = CallFunc_BPGetPrimaryMapName_ReturnValue;
	Parms.CallFunc_IsRunningOnServer_OutNetworkMode = CallFunc_IsRunningOnServer_OutNetworkMode;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Player != nullptr)
		*Player = Parms.Player;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.BPActivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_HasBuffWithCustomTag_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue_1                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference, Interp)
// enum class ENetworkModeResult      CallFunc_IsRunningOnServer_OutNetworkMode                        (Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)

bool ABuff_TekArmor_C::BPActivated(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, enum class ENetworkModeResult CallFunc_IsRunningOnServer_OutNetworkMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "BPActivated");

	Params::ABuff_TekArmor_C_BPActivated_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_IsRunningOnServer_OutNetworkMode = CallFunc_IsRunningOnServer_OutNetworkMode;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.Is Restricted Because Of Genesis Map
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Restricted                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Ret_val                                                          (Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_check_genesis_restrictions_for_player_is_restricted     (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

void ABuff_TekArmor_C::Is_Restricted_Because_Of_Genesis_Map(bool Restricted, bool Ret_val, bool* CallFunc_check_genesis_restrictions_for_player_is_restricted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Is Restricted Because Of Genesis Map");

	Params::ABuff_TekArmor_C_Is_Restricted_Because_Of_Genesis_Map_Params Parms{};

	Parms.Restricted = Restricted;
	Parms.Ret_val = Ret_val;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_check_genesis_restrictions_for_player_is_restricted != nullptr)
		*CallFunc_check_genesis_restrictions_for_player_is_restricted = Parms.CallFunc_check_genesis_restrictions_for_player_is_restricted;

}


// Function Buff_TekArmor.Buff_TekArmor_C.Get Is Player in SealedSpace
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ABuff_TekArmor_C::Get_Is_Player_in_SealedSpace(class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Get Is Player in SealedSpace");

	Params::ABuff_TekArmor_C_Get_Is_Player_in_SealedSpace_Params Parms{};

	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.IsAbilityValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               OutValid                                                         (BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ABuff_TekArmor_C::IsAbilityValid(bool* OutValid, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "IsAbilityValid");

	Params::ABuff_TekArmor_C_IsAbilityValid_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutValid != nullptr)
		*OutValid = Parms.OutValid;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.IsPlayerInWaterVolume
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// double                             WaterVolumeTopZ                                                  (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Get_Is_Player_in_SealedSpace_result                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APhysicsVolume*              CallFunc_GetPhysicsVolume_ReturnValue                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

double ABuff_TekArmor_C::IsPlayerInWaterVolume(bool CallFunc_Get_Is_Player_in_SealedSpace_result, class APhysicsVolume** CallFunc_GetPhysicsVolume_ReturnValue, struct FVector* CallFunc_GetActorBounds_BoxExtent, double* CallFunc_Add_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "IsPlayerInWaterVolume");

	Params::ABuff_TekArmor_C_IsPlayerInWaterVolume_Params Parms{};

	Parms.CallFunc_Get_Is_Player_in_SealedSpace_result = CallFunc_Get_Is_Player_in_SealedSpace_result;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetPhysicsVolume_ReturnValue != nullptr)
		*CallFunc_GetPhysicsVolume_ReturnValue = Parms.CallFunc_GetPhysicsVolume_ReturnValue;

	if (CallFunc_GetActorBounds_BoxExtent != nullptr)
		*CallFunc_GetActorBounds_BoxExtent = std::move(Parms.CallFunc_GetActorBounds_BoxExtent);

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.SpawnFX
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             EmitterTemplate                                                  (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
// class USoundBase*                  Sound                                                            (ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             VolumeMultiplier                                                 (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// double                             PitchMultiplier                                                  (ConstParm, BlueprintVisible, OutParm, Config, EditConst, InstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location                                 (Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (Edit, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_PlaySoundAtLocation_VolumeMultiplier_ImplicitCast       (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_PlaySoundAtLocation_PitchMultiplier_ImplicitCast        (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool ABuff_TekArmor_C::SpawnFX(class UParticleSystem** EmitterTemplate, const struct FTransform& InTransform, class USoundBase* Sound, double* VolumeMultiplier, double* PitchMultiplier, bool* CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, bool* CallFunc_IsValid_ReturnValue_1, float* CallFunc_PlaySoundAtLocation_VolumeMultiplier_ImplicitCast, float* CallFunc_PlaySoundAtLocation_PitchMultiplier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "SpawnFX");

	Params::ABuff_TekArmor_C_SpawnFX_Params Parms{};

	Parms.InTransform = InTransform;
	Parms.Sound = Sound;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;

	UObject::ProcessEvent(Func, &Parms);

	if (EmitterTemplate != nullptr)
		*EmitterTemplate = Parms.EmitterTemplate;

	if (VolumeMultiplier != nullptr)
		*VolumeMultiplier = Parms.VolumeMultiplier;

	if (PitchMultiplier != nullptr)
		*PitchMultiplier = Parms.PitchMultiplier;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_PlaySoundAtLocation_VolumeMultiplier_ImplicitCast != nullptr)
		*CallFunc_PlaySoundAtLocation_VolumeMultiplier_ImplicitCast = Parms.CallFunc_PlaySoundAtLocation_VolumeMultiplier_ImplicitCast;

	if (CallFunc_PlaySoundAtLocation_PitchMultiplier_ImplicitCast != nullptr)
		*CallFunc_PlaySoundAtLocation_PitchMultiplier_ImplicitCast = Parms.CallFunc_PlaySoundAtLocation_PitchMultiplier_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.Should Damage Actor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Victim                                                           (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// bool                               Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               RetVal                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_AreTribesAllied_ReturnValue                             (ConstParm, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)

bool ABuff_TekArmor_C::Should_Damage_Actor(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_AreTribesAllied_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Should Damage Actor");

	Params::ABuff_TekArmor_C_Should_Damage_Actor_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_AreTribesAllied_ReturnValue = CallFunc_AreTribesAllied_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.ResetPlayerFOV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref                  (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_NormalFOV_ImplicitCast                        (Edit, ConstParm, ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

void ABuff_TekArmor_C::ResetPlayerFOV(class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref, float* K2Node_VariableSet_NormalFOV_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "ResetPlayerFOV");

	Params::ABuff_TekArmor_C_ResetPlayerFOV_Params Parms{};

	Parms.CallFunc_Get_RefOwningPlayer_Camera_Manager_ref = CallFunc_Get_RefOwningPlayer_Camera_Manager_ref;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_VariableSet_NormalFOV_ImplicitCast != nullptr)
		*K2Node_VariableSet_NormalFOV_ImplicitCast = Parms.K2Node_VariableSet_NormalFOV_ImplicitCast;

}


// Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreLookInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewIgnore                                                        (Edit, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

void ABuff_TekArmor_C::SetTekIgnoreLookInput(bool NewIgnore, bool* CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "SetTekIgnoreLookInput");

	Params::ABuff_TekArmor_C_SetTekIgnoreLookInput_Params Parms{};

	Parms.NewIgnore = NewIgnore;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_NotEqual_BoolBool_ReturnValue != nullptr)
		*CallFunc_NotEqual_BoolBool_ReturnValue = Parms.CallFunc_NotEqual_BoolBool_ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreMoveInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewIgnore                                                        (Edit, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

void ABuff_TekArmor_C::SetTekIgnoreMoveInput(bool NewIgnore, bool* CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "SetTekIgnoreMoveInput");

	Params::ABuff_TekArmor_C_SetTekIgnoreMoveInput_Params Parms{};

	Parms.NewIgnore = NewIgnore;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_NotEqual_BoolBool_ReturnValue != nullptr)
		*CallFunc_NotEqual_BoolBool_ReturnValue = Parms.CallFunc_NotEqual_BoolBool_ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.AllowPostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ABuff_TekArmor_C::AllowPostProcessEffect(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "AllowPostProcessEffect");

	Params::ABuff_TekArmor_C_AllowPostProcessEffect_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.BPDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

bool ABuff_TekArmor_C::BPDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "BPDeactivated");

	Params::ABuff_TekArmor_C_BPDeactivated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.ResetTargetFOV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_TekArmor_C::ResetTargetFOV()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "ResetTargetFOV");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_TekArmor.Buff_TekArmor_C.IsWarping FOV
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref                  (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

double ABuff_TekArmor_C::IsWarping_FOV(class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "IsWarping FOV");

	Params::ABuff_TekArmor_C_IsWarping_FOV_Params Parms{};

	Parms.CallFunc_Get_RefOwningPlayer_Camera_Manager_ref = CallFunc_Get_RefOwningPlayer_Camera_Manager_ref;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.Get DefaultTekBuff
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuff_TekArmor_C*            Ref                                                              (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_GetDefaultObject_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class ABuff_TekArmor_C*            K2Node_DynamicCast_AsBuff_Tek_Armor                              (ConstParm, Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ABuff_TekArmor_C::Get_DefaultTekBuff(class ABuff_TekArmor_C** K2Node_DynamicCast_AsBuff_Tek_Armor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Get DefaultTekBuff");

	Params::ABuff_TekArmor_C_Get_DefaultTekBuff_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsBuff_Tek_Armor != nullptr)
		*K2Node_DynamicCast_AsBuff_Tek_Armor = Parms.K2Node_DynamicCast_AsBuff_Tek_Armor;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.GetDefaultPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            Ref                                                              (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_GetDefaultObject_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ABuff_TekArmor_C::GetDefaultPlayer(class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "GetDefaultPlayer");

	Params::ABuff_TekArmor_C_GetDefaultPlayer_Params Parms{};

	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.Client_Consume Element After Time
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// int32                              ElementCost                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

double ABuff_TekArmor_C::Client_Consume_Element_After_Time(double* CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Client_Consume Element After Time");

	Params::ABuff_TekArmor_C_Client_Consume_Element_After_Time_Params Parms{};

	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.BPSetupForInstigator
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref                  (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalItemArmor_Base_Tek_C* CallFunc_GetRelatedTekArmorRef_tekArmorRef                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APlayerController*           CallFunc_CastToPlayerController_ReturnValue                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_warpFOV_start_ImplicitCast                    (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_warpFOV_target_ImplicitCast                   (Edit, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

double ABuff_TekArmor_C::BPSetupForInstigator(bool* CallFunc_IsValid_ReturnValue, class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref, class APlayerController* CallFunc_CastToPlayerController_ReturnValue, double K2Node_VariableSet_warpFOV_target_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "BPSetupForInstigator");

	Params::ABuff_TekArmor_C_BPSetupForInstigator_Params Parms{};

	Parms.CallFunc_Get_RefOwningPlayer_Camera_Manager_ref = CallFunc_Get_RefOwningPlayer_Camera_Manager_ref;
	Parms.CallFunc_CastToPlayerController_ReturnValue = CallFunc_CastToPlayerController_ReturnValue;
	Parms.K2Node_VariableSet_warpFOV_target_ImplicitCast = K2Node_VariableSet_warpFOV_target_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.IsPlayerGrounded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// class UCharacterMovementComponent* CallFunc_Get_Ref_Owning_PlayerMovement_movement                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ABuff_TekArmor_C::IsPlayerGrounded(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "IsPlayerGrounded");

	Params::ABuff_TekArmor_C_IsPlayerGrounded_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.Get RefOwningPlayer Camera Manager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AShooterPlayerCameraManager* Ref                                                              (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerCameraManager* K2Node_DynamicCast_AsShooter_Player_Camera_Manager               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ABuff_TekArmor_C::Get_RefOwningPlayer_Camera_Manager(class AShooterPlayerCameraManager* K2Node_DynamicCast_AsShooter_Player_Camera_Manager, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Get RefOwningPlayer Camera Manager");

	Params::ABuff_TekArmor_C_Get_RefOwningPlayer_Camera_Manager_Params Parms{};

	Parms.K2Node_DynamicCast_AsShooter_Player_Camera_Manager = K2Node_DynamicCast_AsShooter_Player_Camera_Manager;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.UpdatePlayerFOV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             IntensityRatio                                                   (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               WarpIn                                                           (ConstParm, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             NewFOV                                                           (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref                  (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref_1                (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue_1                                    (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_NotEqual_DoubleDouble_B_ImplicitCast                    (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast                   (Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// float                              K2Node_VariableSet_NormalFOV_ImplicitCast                        (Edit, ConstParm, ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

double ABuff_TekArmor_C::UpdatePlayerFOV(double* IntensityRatio, double* NewFOV, class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_FClamp_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double* CallFunc_FClamp_ReturnValue_1, double* CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double* CallFunc_Add_DoubleDouble_ReturnValue_1, double* CallFunc_Add_DoubleDouble_A_ImplicitCast, double* CallFunc_Add_DoubleDouble_A_ImplicitCast_1, float* K2Node_VariableSet_NormalFOV_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "UpdatePlayerFOV");

	Params::ABuff_TekArmor_C_UpdatePlayerFOV_Params Parms{};

	Parms.CallFunc_Get_RefOwningPlayer_Camera_Manager_ref = CallFunc_Get_RefOwningPlayer_Camera_Manager_ref;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Get_RefOwningPlayer_Camera_Manager_ref_1 = CallFunc_Get_RefOwningPlayer_Camera_Manager_ref_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IntensityRatio != nullptr)
		*IntensityRatio = Parms.IntensityRatio;

	if (NewFOV != nullptr)
		*NewFOV = Parms.NewFOV;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (CallFunc_FClamp_ReturnValue_1 != nullptr)
		*CallFunc_FClamp_ReturnValue_1 = Parms.CallFunc_FClamp_ReturnValue_1;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (CallFunc_Add_DoubleDouble_ReturnValue_1 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_1 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_1;

	if (CallFunc_Add_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Add_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast;

	if (CallFunc_Add_DoubleDouble_A_ImplicitCast_1 != nullptr)
		*CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1;

	if (K2Node_VariableSet_NormalFOV_ImplicitCast != nullptr)
		*K2Node_VariableSet_NormalFOV_ImplicitCast = Parms.K2Node_VariableSet_NormalFOV_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.Get Ref Owning PlayerMovement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCharacterMovementComponent* Movement                                                         (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

class AShooterCharacter* ABuff_TekArmor_C::Get_Ref_Owning_PlayerMovement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Get Ref Owning PlayerMovement");

	Params::ABuff_TekArmor_C_Get_Ref_Owning_PlayerMovement_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.Get Ref Owning PlayerController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AShooterPlayerController*    Controller                                                       (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ABuff_TekArmor_C::Get_Ref_Owning_PlayerController(class AShooterPlayerController** Controller, class APlayerController* CallFunc_GetOwnerController_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Get Ref Owning PlayerController");

	Params::ABuff_TekArmor_C_Get_Ref_Owning_PlayerController_Params Parms{};

	Parms.CallFunc_GetOwnerController_ReturnValue = CallFunc_GetOwnerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;

	UObject::ProcessEvent(Func, &Parms);

	if (Controller != nullptr)
		*Controller = Parms.Controller;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.GetRef_OwningPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AShooterCharacter*           Player                                                           (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ABuff_TekArmor_C::GetRef_OwningPlayer(class AShooterCharacter** Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "GetRef_OwningPlayer");

	Params::ABuff_TekArmor_C_GetRef_OwningPlayer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Player != nullptr)
		*Player = Parms.Player;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.AreAnyTekAbilitiesActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               RetVal                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsTekArmorUsingAbility__result                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool ABuff_TekArmor_C::AreAnyTekAbilitiesActive(bool CallFunc_IsTekArmorUsingAbility__result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "AreAnyTekAbilitiesActive");

	Params::ABuff_TekArmor_C_AreAnyTekAbilitiesActive_Params Parms{};

	Parms.CallFunc_IsTekArmorUsingAbility__result = CallFunc_IsTekArmorUsingAbility__result;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.IsTekArmorUsingAbility?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              ArmorType                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               RetVal                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UClass*                      CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff            (Edit, ConstParm, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, SubobjectReference)
// class ABuff_TekArmor_C*            K2Node_DynamicCast_AsBuff_Tek_Armor                              (ConstParm, Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool ABuff_TekArmor_C::IsTekArmorUsingAbility_(uint8* CallFunc_GetValidValue_ReturnValue, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, class UClass* CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff, class APrimalBuff* CallFunc_GetBuff_ReturnValue, class ABuff_TekArmor_C** K2Node_DynamicCast_AsBuff_Tek_Armor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "IsTekArmorUsingAbility?");

	Params::ABuff_TekArmor_C_IsTekArmorUsingAbility__Params Parms{};

	Parms.CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff = CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff;
	Parms.CallFunc_GetBuff_ReturnValue = CallFunc_GetBuff_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetValidValue_ReturnValue != nullptr)
		*CallFunc_GetValidValue_ReturnValue = Parms.CallFunc_GetValidValue_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;

	if (K2Node_DynamicCast_AsBuff_Tek_Armor != nullptr)
		*K2Node_DynamicCast_AsBuff_Tek_Armor = Parms.K2Node_DynamicCast_AsBuff_Tek_Armor;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.DisplayTekArmorMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class USoundBase*                  Sound                                                            (ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerController*    CallFunc_Get_Ref_Owning_PlayerController_controller              (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_ClientServerNotificationSingle_DisplayTime_ImplicitCast (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_ClientServerNotificationSingle_DisplayScale_ImplicitCast(Edit, ExportObject, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

float ABuff_TekArmor_C::DisplayTekArmorMessage(class FString* Message, class USoundBase* Sound, const class FString& CallFunc_Conv_NameToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "DisplayTekArmorMessage");

	Params::ABuff_TekArmor_C_DisplayTekArmorMessage_Params Parms{};

	Parms.Sound = Sound;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Message != nullptr)
		*Message = std::move(Parms.Message);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.SetCastedArmorPieceRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_TekArmor_C::SetCastedArmorPieceRef()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "SetCastedArmorPieceRef");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_TekArmor.Buff_TekArmor_C.GetRelatedTekArmorRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItemArmor_Base_Tek_C* TekArmorRef                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalItemArmor_Base_Tek_C* ArmorRef                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ABuff_TekArmor_C::GetRelatedTekArmorRef(class UPrimalItemArmor_Base_Tek_C* TekArmorRef, class UPrimalItemArmor_Base_Tek_C** ArmorRef, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "GetRelatedTekArmorRef");

	Params::ABuff_TekArmor_C_GetRelatedTekArmorRef_Params Parms{};

	Parms.TekArmorRef = TekArmorRef;

	UObject::ProcessEvent(Func, &Parms);

	if (ArmorRef != nullptr)
		*ArmorRef = Parms.ArmorRef;

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.CanUseTekAbility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNotifyIfOutOfElement                                            (ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               bResult                                                          (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               bRetVal                                                          (Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_HasRequiredEngrams_HasEngrams                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsTekBuffDisabled_bIsDisabled                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player_1                            (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player_2                            (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BPIsConscious_ReturnValue                               (BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class ABiomeZoneVolume*            CallFunc_GetMyBiomeZoneVolume_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (Edit, ExportObject, OutParm, ReturnParm, Transient, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Buff                            (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (Edit, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 CallFunc_BPGetItemOfTemplate_ReturnValue                         (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)

bool ABuff_TekArmor_C::CanUseTekAbility(bool* bRetVal, bool* CallFunc_IsTekBuffDisabled_bIsDisabled, bool* CallFunc_BPIsConscious_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class ABiomeZoneVolume** CallFunc_GetMyBiomeZoneVolume_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsPrimal_Buff, bool K2Node_ClassDynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue_2, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "CanUseTekAbility");

	Params::ABuff_TekArmor_C_CanUseTekAbility_Params Parms{};

	Parms.K2Node_ClassDynamicCast_AsPrimal_Buff = K2Node_ClassDynamicCast_AsPrimal_Buff;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue = CallFunc_GetWeaponClipAmmo_ReturnValue;
	Parms.CallFunc_BPGetItemOfTemplate_ReturnValue = CallFunc_BPGetItemOfTemplate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bRetVal != nullptr)
		*bRetVal = Parms.bRetVal;

	if (CallFunc_IsTekBuffDisabled_bIsDisabled != nullptr)
		*CallFunc_IsTekBuffDisabled_bIsDisabled = Parms.CallFunc_IsTekBuffDisabled_bIsDisabled;

	if (CallFunc_BPIsConscious_ReturnValue != nullptr)
		*CallFunc_BPIsConscious_ReturnValue = Parms.CallFunc_BPIsConscious_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetMyBiomeZoneVolume_ReturnValue != nullptr)
		*CallFunc_GetMyBiomeZoneVolume_ReturnValue = Parms.CallFunc_GetMyBiomeZoneVolume_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (CallFunc_IsValid_ReturnValue_4 != nullptr)
		*CallFunc_IsValid_ReturnValue_4 = Parms.CallFunc_IsValid_ReturnValue_4;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)

struct FKey ABuff_TekArmor_C::InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1");

	Params::ABuff_TekArmor_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)

struct FKey ABuff_TekArmor_C::InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_0");

	Params::ABuff_TekArmor_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.Equipped_SetToMaxElement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPrimalEquipmentType    ItemSlot                                                         (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class EPrimalEquipmentType ABuff_TekArmor_C::Equipped_SetToMaxElement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Equipped_SetToMaxElement");

	Params::ABuff_TekArmor_C_Equipped_SetToMaxElement_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.Multi_SpawnFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             ParticleTemplate                                                 (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class USoundBase*                  Sound                                                            (ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// double                             SoundVolume                                                      (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             SoundPitch                                                       (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

void ABuff_TekArmor_C::Multi_SpawnFX(class UParticleSystem** ParticleTemplate, class USoundBase* Sound, struct FTransform* Transform, double* SoundVolume, double SoundPitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Multi_SpawnFX");

	Params::ABuff_TekArmor_C_Multi_SpawnFX_Params Parms{};

	Parms.Sound = Sound;
	Parms.SoundPitch = SoundPitch;

	UObject::ProcessEvent(Func, &Parms);

	if (ParticleTemplate != nullptr)
		*ParticleTemplate = Parms.ParticleTemplate;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (SoundVolume != nullptr)
		*SoundVolume = Parms.SoundVolume;

}


// Function Buff_TekArmor.Buff_TekArmor_C.Equipped_TryToDecreaseElement
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AmountToDecreaseBy                                               (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// enum class EPrimalEquipmentType    ItemSlot                                                         (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class EPrimalEquipmentType ABuff_TekArmor_C::Equipped_TryToDecreaseElement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Equipped_TryToDecreaseElement");

	Params::ABuff_TekArmor_C_Equipped_TryToDecreaseElement_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.CheckForArmorRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_TekArmor_C::CheckForArmorRef()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "CheckForArmorRef");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_TekArmor.Buff_TekArmor_C.Server_SetTekAbilityActive
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewActive                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool ABuff_TekArmor_C::Server_SetTekAbilityActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Server_SetTekAbilityActive");

	Params::ABuff_TekArmor_C_Server_SetTekAbilityActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.RateLimitedGenesisAbilityWarning
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_TekArmor_C::RateLimitedGenesisAbilityWarning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "RateLimitedGenesisAbilityWarning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_TekArmor.Buff_TekArmor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABuff_TekArmor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_TekArmor.Buff_TekArmor_C.ReceiveDestroyed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_TekArmor_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_TekArmor.Buff_TekArmor_C.ExecuteUbergraph_Buff_TekArmor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FKey                        K2Node_InputKeyEvent_Key_1                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FKey                        Temp_struct_Variable                                             (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// enum class EPrimalEquipmentType    K2Node_CustomEvent_ItemSlot_1                                    (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UParticleSystem*             K2Node_CustomEvent_particleTemplate                              (BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class USoundBase*                  K2Node_CustomEvent_sound                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTransform                  K2Node_CustomEvent_transform                                     (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_CustomEvent_soundVolume                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_CustomEvent_soundPitch                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              K2Node_CustomEvent_AmountToDecreaseBy                            (OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// enum class EPrimalEquipmentType    K2Node_CustomEvent_ItemSlot                                      (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue_1                     (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek_1                (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_CustomEvent_newActive                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference)
// float                              CallFunc_TimeSeconds_ReturnValue                                 (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FloatToDouble_ReturnValue                               (ConstParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsCooldownComplete_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FloatToDouble_value_ImplicitCast                        (Edit, ConstParm, ExportObject, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_IsCooldownComplete_CooldownDuration_ImplicitCast        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

float ABuff_TekArmor_C::ExecuteUbergraph_Buff_TekArmor(const struct FKey& K2Node_InputKeyEvent_Key_1, class UParticleSystem** K2Node_CustomEvent_particleTemplate, const struct FTransform& K2Node_CustomEvent_transform, double K2Node_CustomEvent_soundVolume, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, int32* K2Node_CustomEvent_AmountToDecreaseBy, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek_1, class APlayerController* CallFunc_GetOwnerController_ReturnValue, double CallFunc_FloatToDouble_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, const struct FKey& K2Node_InputKeyEvent_Key, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "ExecuteUbergraph_Buff_TekArmor");

	Params::ABuff_TekArmor_C_ExecuteUbergraph_Buff_TekArmor_Params Parms{};

	Parms.K2Node_InputKeyEvent_Key_1 = K2Node_InputKeyEvent_Key_1;
	Parms.K2Node_CustomEvent_transform = K2Node_CustomEvent_transform;
	Parms.K2Node_CustomEvent_soundVolume = K2Node_CustomEvent_soundVolume;
	Parms.CallFunc_GetOwnerController_ReturnValue = CallFunc_GetOwnerController_ReturnValue;
	Parms.CallFunc_FloatToDouble_ReturnValue = CallFunc_FloatToDouble_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_CustomEvent_particleTemplate != nullptr)
		*K2Node_CustomEvent_particleTemplate = Parms.K2Node_CustomEvent_particleTemplate;

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;

	if (K2Node_CustomEvent_AmountToDecreaseBy != nullptr)
		*K2Node_CustomEvent_AmountToDecreaseBy = Parms.K2Node_CustomEvent_AmountToDecreaseBy;

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek_1 != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek_1 = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek_1;

	if (K2Node_DynamicCast_AsShooter_Player_State != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_State = Parms.K2Node_DynamicCast_AsShooter_Player_State;

	return Parms.ReturnValue;

}

}


