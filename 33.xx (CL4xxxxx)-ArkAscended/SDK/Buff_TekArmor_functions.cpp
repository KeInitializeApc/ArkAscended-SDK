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
// class USkeletalMeshComponent*      OutMesh                                                          (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

void ABuff_TekArmor_C::GetWeaponMesh(class USkeletalMeshComponent** OutMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "GetWeaponMesh");

	Params::ABuff_TekArmor_C_GetWeaponMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutMesh != nullptr)
		*OutMesh = Parms.OutMesh;

}


// Function Buff_TekArmor.Buff_TekArmor_C.HideBoostIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldSet                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// bool                               WithValue                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

bool ABuff_TekArmor_C::HideBoostIcon(bool WithValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "HideBoostIcon");

	Params::ABuff_TekArmor_C_HideBoostIcon_Params Parms{};

	Parms.WithValue = WithValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.SetJetpackOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  AddTransform                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)

void ABuff_TekArmor_C::SetJetpackOffset(struct FTransform* AddTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "SetJetpackOffset");

	Params::ABuff_TekArmor_C_SetJetpackOffset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AddTransform != nullptr)
		*AddTransform = std::move(Parms.AddTransform);

}


// Function Buff_TekArmor.Buff_TekArmor_C.HasRequiredEngrams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasEngrams                                                       (ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               OutHasEngrams                                                    (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UClass*                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 K2Node_DynamicCast_AsPrimal_Item                                 (ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_HasEngram_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)

class UPrimalItem* ABuff_TekArmor_C::HasRequiredEngrams(class AShooterCharacter** CallFunc_GetRef_OwningPlayer_player, int32 CallFunc_Add_IntInt_ReturnValue, class FString* CallFunc_MakeLiteralString_ReturnValue, class UClass** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, bool* K2Node_DynamicCast_bSuccess_2, bool CallFunc_BooleanAND_ReturnValue_1, bool* CallFunc_HasEngram_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "HasRequiredEngrams");

	Params::ABuff_TekArmor_C_HasRequiredEngrams_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetRef_OwningPlayer_player != nullptr)
		*CallFunc_GetRef_OwningPlayer_player = Parms.CallFunc_GetRef_OwningPlayer_player;

	if (CallFunc_MakeLiteralString_ReturnValue != nullptr)
		*CallFunc_MakeLiteralString_ReturnValue = std::move(Parms.CallFunc_MakeLiteralString_ReturnValue);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (K2Node_DynamicCast_AsShooter_Player_State != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_State = Parms.K2Node_DynamicCast_AsShooter_Player_State;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_HasEngram_ReturnValue != nullptr)
		*CallFunc_HasEngram_ReturnValue = Parms.CallFunc_HasEngram_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.IsTekBuffDisabled
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsDisabled                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bRetVal                                                          (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable_2                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Array_Index_Variable_2                                  (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class AShooterPlayerController*    CallFunc_Get_Ref_Owning_PlayerController_controller              (Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FName                        CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// TArray<class APrimalBuff*>         CallFunc_GetAllBuffs_AllBuffs                                    (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class APrimalBuff*                 CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// TArray<class FName>                CallFunc_BPPreventTekArmorBuffs_ReturnValue                      (ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FName                        CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class AMissionType*                CallFunc_GetActiveMission_ReturnValue                            (ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)

bool ABuff_TekArmor_C::IsTekBuffDisabled(bool bRetVal, int32 CallFunc_Add_IntInt_ReturnValue, class AShooterPlayerController** CallFunc_Get_Ref_Owning_PlayerController_controller, class AShooterCharacter** CallFunc_GetRef_OwningPlayer_player, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName* CallFunc_Array_Get_Item, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, int32* CallFunc_Array_Length_ReturnValue, const TArray<class APrimalBuff*>& CallFunc_GetAllBuffs_AllBuffs, class APrimalBuff** CallFunc_Array_Get_Item_1, const TArray<class FName>& CallFunc_BPPreventTekArmorBuffs_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class FName* CallFunc_Array_Get_Item_2, int32* CallFunc_Array_Length_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool* K2Node_DynamicCast_bSuccess_2, class AMissionType** CallFunc_GetActiveMission_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "IsTekBuffDisabled");

	Params::ABuff_TekArmor_C_IsTekBuffDisabled_Params Parms{};

	Parms.bRetVal = bRetVal;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_GetAllBuffs_AllBuffs = CallFunc_GetAllBuffs_AllBuffs;
	Parms.CallFunc_BPPreventTekArmorBuffs_ReturnValue = CallFunc_BPPreventTekArmorBuffs_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsShooter_Character_1 = K2Node_DynamicCast_AsShooter_Character_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Get_Ref_Owning_PlayerController_controller != nullptr)
		*CallFunc_Get_Ref_Owning_PlayerController_controller = Parms.CallFunc_Get_Ref_Owning_PlayerController_controller;

	if (CallFunc_GetRef_OwningPlayer_player != nullptr)
		*CallFunc_GetRef_OwningPlayer_player = Parms.CallFunc_GetRef_OwningPlayer_player;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = Parms.CallFunc_Array_Get_Item_1;

	if (CallFunc_Array_Length_ReturnValue_1 != nullptr)
		*CallFunc_Array_Length_ReturnValue_1 = Parms.CallFunc_Array_Length_ReturnValue_1;

	if (CallFunc_Array_Get_Item_2 != nullptr)
		*CallFunc_Array_Get_Item_2 = Parms.CallFunc_Array_Get_Item_2;

	if (CallFunc_Array_Length_ReturnValue_2 != nullptr)
		*CallFunc_Array_Length_ReturnValue_2 = Parms.CallFunc_Array_Length_ReturnValue_2;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_GetActiveMission_ReturnValue != nullptr)
		*CallFunc_GetActiveMission_ReturnValue = Parms.CallFunc_GetActiveMission_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.check genesis restrictions for player
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            Player                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
// bool                               Is_restricted                                                    (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               Ret_val                                                          (Edit, ConstParm, BlueprintReadOnly, Net, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_BPGetPrimaryMapName_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_HasBuffWithCustomTag_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ENetworkModeResult      CallFunc_IsRunningOnServer_OutNetworkMode                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

bool ABuff_TekArmor_C::Check_genesis_restrictions_for_player(bool Is_restricted, bool Ret_val, const class FString& CallFunc_BPGetPrimaryMapName_ReturnValue, bool CallFunc_HasBuffWithCustomTag_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "check genesis restrictions for player");

	Params::ABuff_TekArmor_C_Check_genesis_restrictions_for_player_Params Parms{};

	Parms.Is_restricted = Is_restricted;
	Parms.Ret_val = Ret_val;
	Parms.CallFunc_BPGetPrimaryMapName_ReturnValue = CallFunc_BPGetPrimaryMapName_ReturnValue;
	Parms.CallFunc_HasBuffWithCustomTag_ReturnValue = CallFunc_HasBuffWithCustomTag_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.BPActivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_HasBuffWithCustomTag_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue_1                       (ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// enum class ENetworkModeResult      CallFunc_IsRunningOnServer_OutNetworkMode                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)

bool ABuff_TekArmor_C::BPActivated(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_HasBuffWithCustomTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "BPActivated");

	Params::ABuff_TekArmor_C_BPActivated_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_HasBuffWithCustomTag_ReturnValue = CallFunc_HasBuffWithCustomTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.Is Restricted Because Of Genesis Map
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Restricted                                                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               Ret_val                                                          (Edit, ConstParm, BlueprintReadOnly, Net, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_check_genesis_restrictions_for_player_is_restricted     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

bool ABuff_TekArmor_C::Is_Restricted_Because_Of_Genesis_Map(bool Ret_val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Is Restricted Because Of Genesis Map");

	Params::ABuff_TekArmor_C_Is_Restricted_Because_Of_Genesis_Map_Params Parms{};

	Parms.Ret_val = Ret_val;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.Get Is Player in SealedSpace
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

void ABuff_TekArmor_C::Get_Is_Player_in_SealedSpace(bool* Result, class AActor** CallFunc_GetOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Get Is Player in SealedSpace");

	Params::ABuff_TekArmor_C_Get_Is_Player_in_SealedSpace_Params Parms{};

	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

}


// Function Buff_TekArmor.Buff_TekArmor_C.IsAbilityValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               OutValid                                                         (BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool ABuff_TekArmor_C::IsAbilityValid(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "IsAbilityValid");

	Params::ABuff_TekArmor_C_IsAbilityValid_Params Parms{};

	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.IsPlayerInWaterVolume
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// double                             WaterVolumeTopZ                                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_Get_Is_Player_in_SealedSpace_result                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APhysicsVolume*              CallFunc_GetPhysicsVolume_ReturnValue                            (BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

double ABuff_TekArmor_C::IsPlayerInWaterVolume(bool* Result, double WaterVolumeTopZ, bool* CallFunc_Get_Is_Player_in_SealedSpace_result, class AShooterCharacter** CallFunc_GetRef_OwningPlayer_player, struct FVector* CallFunc_GetActorBounds_Origin, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "IsPlayerInWaterVolume");

	Params::ABuff_TekArmor_C_IsPlayerInWaterVolume_Params Parms{};

	Parms.WaterVolumeTopZ = WaterVolumeTopZ;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (CallFunc_Get_Is_Player_in_SealedSpace_result != nullptr)
		*CallFunc_Get_Is_Player_in_SealedSpace_result = Parms.CallFunc_Get_Is_Player_in_SealedSpace_result;

	if (CallFunc_GetRef_OwningPlayer_player != nullptr)
		*CallFunc_GetRef_OwningPlayer_player = Parms.CallFunc_GetRef_OwningPlayer_player;

	if (CallFunc_GetActorBounds_Origin != nullptr)
		*CallFunc_GetActorBounds_Origin = std::move(Parms.CallFunc_GetActorBounds_Origin);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.SpawnFX
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             EmitterTemplate                                                  (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class USoundBase*                  Sound                                                            (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             VolumeMultiplier                                                 (Edit, ExportObject, Transient, Config, DisableEditOnInstance, EditConst, DuplicateTransient)
// double                             PitchMultiplier                                                  (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location                                 (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (BlueprintVisible, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_PlaySoundAtLocation_VolumeMultiplier_ImplicitCast       (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// float                              CallFunc_PlaySoundAtLocation_PitchMultiplier_ImplicitCast        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

float ABuff_TekArmor_C::SpawnFX(class UParticleSystem** EmitterTemplate, class USoundBase** Sound, double VolumeMultiplier, double PitchMultiplier, bool* CallFunc_IsValid_ReturnValue, struct FVector* CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, class UParticleSystemComponent** CallFunc_SpawnEmitterAtLocation_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "SpawnFX");

	Params::ABuff_TekArmor_C_SpawnFX_Params Parms{};

	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;

	UObject::ProcessEvent(Func, &Parms);

	if (EmitterTemplate != nullptr)
		*EmitterTemplate = Parms.EmitterTemplate;

	if (Sound != nullptr)
		*Sound = Parms.Sound;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_BreakTransform_Location != nullptr)
		*CallFunc_BreakTransform_Location = std::move(Parms.CallFunc_BreakTransform_Location);

	if (CallFunc_SpawnEmitterAtLocation_ReturnValue != nullptr)
		*CallFunc_SpawnEmitterAtLocation_ReturnValue = Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.Should Damage Actor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Victim                                                           (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               RetVal                                                           (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_AreTribesAllied_ReturnValue                             (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool ABuff_TekArmor_C::Should_Damage_Actor(class AActor** Victim, bool* Result, class AShooterCharacter** CallFunc_GetRef_OwningPlayer_player, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_AreTribesAllied_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Should Damage Actor");

	Params::ABuff_TekArmor_C_Should_Damage_Actor_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Victim != nullptr)
		*Victim = Parms.Victim;

	if (Result != nullptr)
		*Result = Parms.Result;

	if (CallFunc_GetRef_OwningPlayer_player != nullptr)
		*CallFunc_GetRef_OwningPlayer_player = Parms.CallFunc_GetRef_OwningPlayer_player;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_AreTribesAllied_ReturnValue != nullptr)
		*CallFunc_AreTribesAllied_ReturnValue = Parms.CallFunc_AreTribesAllied_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.ResetPlayerFOV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              K2Node_VariableSet_NormalFOV_ImplicitCast                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

float ABuff_TekArmor_C::ResetPlayerFOV()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "ResetPlayerFOV");

	Params::ABuff_TekArmor_C_ResetPlayerFOV_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreLookInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewIgnore                                                        (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)

bool ABuff_TekArmor_C::SetTekIgnoreLookInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "SetTekIgnoreLookInput");

	Params::ABuff_TekArmor_C_SetTekIgnoreLookInput_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreMoveInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewIgnore                                                        (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)

bool ABuff_TekArmor_C::SetTekIgnoreMoveInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "SetTekIgnoreMoveInput");

	Params::ABuff_TekArmor_C_SetTekIgnoreMoveInput_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.AllowPostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool ABuff_TekArmor_C::AllowPostProcessEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "AllowPostProcessEffect");

	Params::ABuff_TekArmor_C_AllowPostProcessEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.BPDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

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
// bool                               Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

double ABuff_TekArmor_C::IsWarping_FOV(bool* Result, bool* CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "IsWarping FOV");

	Params::ABuff_TekArmor_C_IsWarping_FOV_Params Parms{};

	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (CallFunc_EqualEqual_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_EqualEqual_DoubleDouble_ReturnValue = Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.Get DefaultTekBuff
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuff_TekArmor_C*            Ref                                                              (ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UObject*                     CallFunc_GetDefaultObject_ReturnValue                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class ABuff_TekArmor_C*            K2Node_DynamicCast_AsBuff_Tek_Armor                              (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class ABuff_TekArmor_C* ABuff_TekArmor_C::Get_DefaultTekBuff(class ABuff_TekArmor_C* Ref, class UObject** CallFunc_GetDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Get DefaultTekBuff");

	Params::ABuff_TekArmor_C_Get_DefaultTekBuff_Params Parms{};

	Parms.Ref = Ref;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetDefaultObject_ReturnValue != nullptr)
		*CallFunc_GetDefaultObject_ReturnValue = Parms.CallFunc_GetDefaultObject_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.GetDefaultPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            Ref                                                              (ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UObject*                     CallFunc_GetDefaultObject_ReturnValue                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

void ABuff_TekArmor_C::GetDefaultPlayer(class APrimalCharacter* Ref, class UObject** CallFunc_GetDefaultObject_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "GetDefaultPlayer");

	Params::ABuff_TekArmor_C_GetDefaultPlayer_Params Parms{};

	Parms.Ref = Ref;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetDefaultObject_ReturnValue != nullptr)
		*CallFunc_GetDefaultObject_ReturnValue = Parms.CallFunc_GetDefaultObject_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

}


// Function Buff_TekArmor.Buff_TekArmor_C.Client_Consume Element After Time
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              ElementCost                                                      (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)

double ABuff_TekArmor_C::Client_Consume_Element_After_Time(double* DeltaTime, int32 ElementCost, double CallFunc_Add_DoubleDouble_ReturnValue, bool* CallFunc_GreaterEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Client_Consume Element After Time");

	Params::ABuff_TekArmor_C_Client_Consume_Element_After_Time_Params Parms{};

	Parms.ElementCost = ElementCost;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DeltaTime != nullptr)
		*DeltaTime = Parms.DeltaTime;

	if (CallFunc_GreaterEqual_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_DoubleDouble_ReturnValue = Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.BPSetupForInstigator
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UPrimalItemArmor_Base_Tek_C* CallFunc_GetRelatedTekArmorRef_tekArmorRef                       (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_CastToPlayerController_ReturnValue                      (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             K2Node_VariableSet_warpFOV_start_ImplicitCast                    (BlueprintVisible, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             K2Node_VariableSet_warpFOV_target_ImplicitCast                   (Edit, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

double ABuff_TekArmor_C::BPSetupForInstigator(bool* CallFunc_IsValid_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class AController** CallFunc_GetController_ReturnValue, double K2Node_VariableSet_warpFOV_start_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "BPSetupForInstigator");

	Params::ABuff_TekArmor_C_BPSetupForInstigator_Params Parms{};

	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_VariableSet_warpFOV_start_ImplicitCast = K2Node_VariableSet_warpFOV_start_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetController_ReturnValue != nullptr)
		*CallFunc_GetController_ReturnValue = Parms.CallFunc_GetController_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.IsPlayerGrounded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// class UCharacterMovementComponent* CallFunc_Get_Ref_Owning_PlayerMovement_movement                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool ABuff_TekArmor_C::IsPlayerGrounded(bool* Result, class UCharacterMovementComponent* CallFunc_Get_Ref_Owning_PlayerMovement_movement, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "IsPlayerGrounded");

	Params::ABuff_TekArmor_C_IsPlayerGrounded_Params Parms{};

	Parms.CallFunc_Get_Ref_Owning_PlayerMovement_movement = CallFunc_Get_Ref_Owning_PlayerMovement_movement;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.Get RefOwningPlayer Camera Manager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AShooterPlayerCameraManager* Ref                                                              (ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AShooterPlayerCameraManager* K2Node_DynamicCast_AsShooter_Player_Camera_Manager               (BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class AShooterPlayerCameraManager* ABuff_TekArmor_C::Get_RefOwningPlayer_Camera_Manager(class AShooterPlayerCameraManager* Ref, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Get RefOwningPlayer Camera Manager");

	Params::ABuff_TekArmor_C_Get_RefOwningPlayer_Camera_Manager_Params Parms{};

	Parms.Ref = Ref;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.UpdatePlayerFOV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             IntensityRatio                                                   (BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               WarpIn                                                           (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// double                             NewFOV                                                           (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref_1                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue_1                                    (Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_NotEqual_DoubleDouble_B_ImplicitCast                    (ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// float                              K2Node_VariableSet_NormalFOV_ImplicitCast                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

float ABuff_TekArmor_C::UpdatePlayerFOV(double* NewFOV, bool* CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double* CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_FClamp_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double* CallFunc_FClamp_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double* CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "UpdatePlayerFOV");

	Params::ABuff_TekArmor_C_UpdatePlayerFOV_Params Parms{};

	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_NotEqual_DoubleDouble_B_ImplicitCast = CallFunc_NotEqual_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast = CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = CallFunc_Add_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (NewFOV != nullptr)
		*NewFOV = Parms.NewFOV;

	if (CallFunc_GreaterEqual_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_DoubleDouble_ReturnValue = Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	if (CallFunc_Multiply_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Multiply_DoubleDouble_ReturnValue = Parms.CallFunc_Multiply_DoubleDouble_ReturnValue;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (CallFunc_FClamp_ReturnValue_1 != nullptr)
		*CallFunc_FClamp_ReturnValue_1 = Parms.CallFunc_FClamp_ReturnValue_1;

	if (CallFunc_Multiply_DoubleDouble_ReturnValue_1 != nullptr)
		*CallFunc_Multiply_DoubleDouble_ReturnValue_1 = Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.Get Ref Owning PlayerMovement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCharacterMovementComponent* Movement                                                         (Net, Parm, OutParm, DisableEditOnInstance, EditConst)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

void ABuff_TekArmor_C::Get_Ref_Owning_PlayerMovement(class UCharacterMovementComponent** Movement, class AShooterCharacter** CallFunc_GetRef_OwningPlayer_player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Get Ref Owning PlayerMovement");

	Params::ABuff_TekArmor_C_Get_Ref_Owning_PlayerMovement_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Movement != nullptr)
		*Movement = Parms.Movement;

	if (CallFunc_GetRef_OwningPlayer_player != nullptr)
		*CallFunc_GetRef_OwningPlayer_player = Parms.CallFunc_GetRef_OwningPlayer_player;

}


// Function Buff_TekArmor.Buff_TekArmor_C.Get Ref Owning PlayerController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AShooterPlayerController*    Controller                                                       (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue                          (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class AShooterPlayerController* ABuff_TekArmor_C::Get_Ref_Owning_PlayerController(class AShooterPlayerController** Controller, class APlayerController* CallFunc_GetOwnerController_ReturnValue, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Get Ref Owning PlayerController");

	Params::ABuff_TekArmor_C_Get_Ref_Owning_PlayerController_Params Parms{};

	Parms.CallFunc_GetOwnerController_ReturnValue = CallFunc_GetOwnerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Controller != nullptr)
		*Controller = Parms.Controller;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.GetRef_OwningPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AShooterCharacter*           Player                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class AShooterCharacter* ABuff_TekArmor_C::GetRef_OwningPlayer(class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "GetRef_OwningPlayer");

	Params::ABuff_TekArmor_C_GetRef_OwningPlayer_Params Parms{};

	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.AreAnyTekAbilitiesActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               RetVal                                                           (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsTekArmorUsingAbility__result                          (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

bool ABuff_TekArmor_C::AreAnyTekAbilitiesActive(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "AreAnyTekAbilitiesActive");

	Params::ABuff_TekArmor_C_AreAnyTekAbilitiesActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.IsTekArmorUsingAbility?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              ArmorType                                                        (ConstParm, Net, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               RetVal                                                           (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (EditFixedSize, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UClass*                      CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
// class ABuff_TekArmor_C*            K2Node_DynamicCast_AsBuff_Tek_Armor                              (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

class ABuff_TekArmor_C* ABuff_TekArmor_C::IsTekArmorUsingAbility_(bool* Result, uint8 CallFunc_GetValidValue_ReturnValue, class UPrimalItem** CallFunc_GetEquippedItemOfType_ReturnValue, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess, class APrimalBuff** CallFunc_GetBuff_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "IsTekArmorUsingAbility?");

	Params::ABuff_TekArmor_C_IsTekArmorUsingAbility__Params Parms{};

	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (CallFunc_GetEquippedItemOfType_ReturnValue != nullptr)
		*CallFunc_GetEquippedItemOfType_ReturnValue = Parms.CallFunc_GetEquippedItemOfType_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetBuff_ReturnValue != nullptr)
		*CallFunc_GetBuff_ReturnValue = Parms.CallFunc_GetBuff_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.DisplayTekArmorMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundBase*                  Sound                                                            (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class AShooterPlayerController*    CallFunc_Get_Ref_Owning_PlayerController_controller              (Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_ClientServerNotificationSingle_DisplayTime_ImplicitCast (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_ClientServerNotificationSingle_DisplayScale_ImplicitCast(Edit, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, EditConst, SubobjectReference)

class FString ABuff_TekArmor_C::DisplayTekArmorMessage(class USoundBase** Sound, class AShooterPlayerController** CallFunc_Get_Ref_Owning_PlayerController_controller, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, float* CallFunc_ClientServerNotificationSingle_DisplayTime_ImplicitCast, float CallFunc_ClientServerNotificationSingle_DisplayScale_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "DisplayTekArmorMessage");

	Params::ABuff_TekArmor_C_DisplayTekArmorMessage_Params Parms{};

	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_ClientServerNotificationSingle_DisplayScale_ImplicitCast = CallFunc_ClientServerNotificationSingle_DisplayScale_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Sound != nullptr)
		*Sound = Parms.Sound;

	if (CallFunc_Get_Ref_Owning_PlayerController_controller != nullptr)
		*CallFunc_Get_Ref_Owning_PlayerController_controller = Parms.CallFunc_Get_Ref_Owning_PlayerController_controller;

	if (CallFunc_ClientServerNotificationSingle_DisplayTime_ImplicitCast != nullptr)
		*CallFunc_ClientServerNotificationSingle_DisplayTime_ImplicitCast = Parms.CallFunc_ClientServerNotificationSingle_DisplayTime_ImplicitCast;

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
// class UPrimalItemArmor_Base_Tek_C* TekArmorRef                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UPrimalItemArmor_Base_Tek_C* ArmorRef                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class UPrimalItemArmor_Base_Tek_C* ABuff_TekArmor_C::GetRelatedTekArmorRef(class UPrimalItemArmor_Base_Tek_C** TekArmorRef, class UPrimalItem** CallFunc_GetEquippedItemOfType_ReturnValue, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "GetRelatedTekArmorRef");

	Params::ABuff_TekArmor_C_GetRelatedTekArmorRef_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TekArmorRef != nullptr)
		*TekArmorRef = Parms.TekArmorRef;

	if (CallFunc_GetEquippedItemOfType_ReturnValue != nullptr)
		*CallFunc_GetEquippedItemOfType_ReturnValue = Parms.CallFunc_GetEquippedItemOfType_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.CanUseTekAbility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNotifyIfOutOfElement                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               bResult                                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               bRetVal                                                          (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_HasRequiredEngrams_HasEngrams                           (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsTekBuffDisabled_bIsDisabled                           (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player_1                            (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player_2                            (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BPIsConscious_ReturnValue                               (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class ABiomeZoneVolume*            CallFunc_GetMyBiomeZoneVolume_ReturnValue                        (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Buff                            (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// class UPrimalItem*                 CallFunc_BPGetItemOfTemplate_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)

bool ABuff_TekArmor_C::CanUseTekAbility(bool bNotifyIfOutOfElement, bool bResult, bool bRetVal, bool CallFunc_HasRequiredEngrams_HasEngrams, class AShooterCharacter** CallFunc_GetRef_OwningPlayer_player, class AShooterCharacter** CallFunc_GetRef_OwningPlayer_player_1, class AShooterCharacter** CallFunc_GetRef_OwningPlayer_player_2, bool* CallFunc_BPIsConscious_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool* CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, class FString* CallFunc_MakeLiteralString_ReturnValue, int32* CallFunc_GetWeaponClipAmmo_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "CanUseTekAbility");

	Params::ABuff_TekArmor_C_CanUseTekAbility_Params Parms{};

	Parms.bNotifyIfOutOfElement = bNotifyIfOutOfElement;
	Parms.bResult = bResult;
	Parms.bRetVal = bRetVal;
	Parms.CallFunc_HasRequiredEngrams_HasEngrams = CallFunc_HasRequiredEngrams_HasEngrams;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BPGetItemOfTemplate_ReturnValue = CallFunc_BPGetItemOfTemplate_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetRef_OwningPlayer_player != nullptr)
		*CallFunc_GetRef_OwningPlayer_player = Parms.CallFunc_GetRef_OwningPlayer_player;

	if (CallFunc_GetRef_OwningPlayer_player_1 != nullptr)
		*CallFunc_GetRef_OwningPlayer_player_1 = Parms.CallFunc_GetRef_OwningPlayer_player_1;

	if (CallFunc_GetRef_OwningPlayer_player_2 != nullptr)
		*CallFunc_GetRef_OwningPlayer_player_2 = Parms.CallFunc_GetRef_OwningPlayer_player_2;

	if (CallFunc_BPIsConscious_ReturnValue != nullptr)
		*CallFunc_BPIsConscious_ReturnValue = Parms.CallFunc_BPIsConscious_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_ClassIsChildOf_ReturnValue != nullptr)
		*CallFunc_ClassIsChildOf_ReturnValue = Parms.CallFunc_ClassIsChildOf_ReturnValue;

	if (CallFunc_MakeLiteralString_ReturnValue != nullptr)
		*CallFunc_MakeLiteralString_ReturnValue = std::move(Parms.CallFunc_MakeLiteralString_ReturnValue);

	if (CallFunc_GetWeaponClipAmmo_ReturnValue != nullptr)
		*CallFunc_GetWeaponClipAmmo_ReturnValue = Parms.CallFunc_GetWeaponClipAmmo_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (CallFunc_IsValid_ReturnValue_4 != nullptr)
		*CallFunc_IsValid_ReturnValue_4 = Parms.CallFunc_IsValid_ReturnValue_4;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void ABuff_TekArmor_C::InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1");

	Params::ABuff_TekArmor_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void ABuff_TekArmor_C::InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_0");

	Params::ABuff_TekArmor_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.Equipped_SetToMaxElement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPrimalEquipmentType    ItemSlot                                                         (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UParticleSystem*             ParticleTemplate                                                 (ConstParm, ExportObject, Net, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class USoundBase*                  Sound                                                            (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// double                             SoundVolume                                                      (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// double                             SoundPitch                                                       (BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

double ABuff_TekArmor_C::Multi_SpawnFX(class UParticleSystem* ParticleTemplate, class USoundBase** Sound, struct FTransform* Transform, double* SoundVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Multi_SpawnFX");

	Params::ABuff_TekArmor_C_Multi_SpawnFX_Params Parms{};

	Parms.ParticleTemplate = ParticleTemplate;

	UObject::ProcessEvent(Func, &Parms);

	if (Sound != nullptr)
		*Sound = Parms.Sound;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (SoundVolume != nullptr)
		*SoundVolume = Parms.SoundVolume;

	return Parms.ReturnValue;

}


// Function Buff_TekArmor.Buff_TekArmor_C.Equipped_TryToDecreaseElement
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AmountToDecreaseBy                                               (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
// enum class EPrimalEquipmentType    ItemSlot                                                         (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// bool                               NewActive                                                        (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)

void ABuff_TekArmor_C::Server_SetTekAbilityActive(bool* NewActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Server_SetTekAbilityActive");

	Params::ABuff_TekArmor_C_Server_SetTekAbilityActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewActive != nullptr)
		*NewActive = Parms.NewActive;

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
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FKey                        K2Node_InputKeyEvent_Key_1                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// struct FKey                        Temp_struct_Variable                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// enum class EPrimalEquipmentType    K2Node_CustomEvent_ItemSlot_1                                    (Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// class UParticleSystem*             K2Node_CustomEvent_particleTemplate                              (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class USoundBase*                  K2Node_CustomEvent_sound                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FTransform                  K2Node_CustomEvent_transform                                     (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             K2Node_CustomEvent_soundVolume                                   (ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             K2Node_CustomEvent_soundPitch                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              K2Node_CustomEvent_AmountToDecreaseBy                            (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
// enum class EPrimalEquipmentType    K2Node_CustomEvent_ItemSlot                                      (Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue_1                     (Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek_1                (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               K2Node_CustomEvent_newActive                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              CallFunc_TimeSeconds_ReturnValue                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue                          (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
// double                             CallFunc_FloatToDouble_ReturnValue                               (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsCooldownComplete_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_FloatToDouble_value_ImplicitCast                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_IsCooldownComplete_CooldownDuration_ImplicitCast        (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)

struct FKey ABuff_TekArmor_C::ExecuteUbergraph_Buff_TekArmor(enum class EPrimalEquipmentType* K2Node_CustomEvent_ItemSlot_1, class UPrimalItem** CallFunc_GetEquippedItemOfType_ReturnValue, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess, enum class EPrimalEquipmentType* K2Node_CustomEvent_ItemSlot, class UPrimalItem** CallFunc_GetEquippedItemOfType_ReturnValue_1, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek_1, bool* K2Node_DynamicCast_bSuccess_1, bool* K2Node_CustomEvent_newActive, float* CallFunc_TimeSeconds_ReturnValue, class APlayerController* CallFunc_GetOwnerController_ReturnValue, bool* K2Node_DynamicCast_bSuccess_2, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_3, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, bool* K2Node_DynamicCast_bSuccess_4, bool* CallFunc_IsCooldownComplete_ReturnValue, double CallFunc_FloatToDouble_value_ImplicitCast, float CallFunc_IsCooldownComplete_CooldownDuration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "ExecuteUbergraph_Buff_TekArmor");

	Params::ABuff_TekArmor_C_ExecuteUbergraph_Buff_TekArmor_Params Parms{};

	Parms.CallFunc_GetOwnerController_ReturnValue = CallFunc_GetOwnerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_FloatToDouble_value_ImplicitCast = CallFunc_FloatToDouble_value_ImplicitCast;
	Parms.CallFunc_IsCooldownComplete_CooldownDuration_ImplicitCast = CallFunc_IsCooldownComplete_CooldownDuration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_CustomEvent_ItemSlot_1 != nullptr)
		*K2Node_CustomEvent_ItemSlot_1 = Parms.K2Node_CustomEvent_ItemSlot_1;

	if (CallFunc_GetEquippedItemOfType_ReturnValue != nullptr)
		*CallFunc_GetEquippedItemOfType_ReturnValue = Parms.CallFunc_GetEquippedItemOfType_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_CustomEvent_ItemSlot != nullptr)
		*K2Node_CustomEvent_ItemSlot = Parms.K2Node_CustomEvent_ItemSlot;

	if (CallFunc_GetEquippedItemOfType_ReturnValue_1 != nullptr)
		*CallFunc_GetEquippedItemOfType_ReturnValue_1 = Parms.CallFunc_GetEquippedItemOfType_ReturnValue_1;

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek_1 != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek_1 = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek_1;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_CustomEvent_newActive != nullptr)
		*K2Node_CustomEvent_newActive = Parms.K2Node_CustomEvent_newActive;

	if (CallFunc_TimeSeconds_ReturnValue != nullptr)
		*CallFunc_TimeSeconds_ReturnValue = Parms.CallFunc_TimeSeconds_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	if (K2Node_DynamicCast_AsShooter_Player_State != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_State = Parms.K2Node_DynamicCast_AsShooter_Player_State;

	if (K2Node_DynamicCast_bSuccess_4 != nullptr)
		*K2Node_DynamicCast_bSuccess_4 = Parms.K2Node_DynamicCast_bSuccess_4;

	if (CallFunc_IsCooldownComplete_ReturnValue != nullptr)
		*CallFunc_IsCooldownComplete_ReturnValue = Parms.CallFunc_IsCooldownComplete_ReturnValue;

	return Parms.ReturnValue;

}

}


