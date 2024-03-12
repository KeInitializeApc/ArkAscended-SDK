#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C
// (None)

class UClass* UPrimalItem_Spawner_HoverSail_Main_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_Spawner_HoverSail_Main_C");

	return Clss;
}


// PrimalItem_Spawner_HoverSail_Main_C PrimalItem_Spawner_HoverSail_Main.Default__PrimalItem_Spawner_HoverSail_Main_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_Spawner_HoverSail_Main_C* UPrimalItem_Spawner_HoverSail_Main_C::GetDefaultObj()
{
	static class UPrimalItem_Spawner_HoverSail_Main_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_Spawner_HoverSail_Main_C*>(UPrimalItem_Spawner_HoverSail_Main_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.BPInitIconMaterial
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      OutColors_Loc                                                    (ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_GetDinoColorizationData_HasAnyColorData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<uint8>                      CallFunc_GetDinoColorizationData_ColorData                       (Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// uint8                              CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

int32 UPrimalItem_Spawner_HoverSail_Main_C::BPInitIconMaterial(const TArray<int32>& OutColors_Loc, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool* CallFunc_GetDinoColorizationData_HasAnyColorData, TArray<uint8>* CallFunc_GetDinoColorizationData_ColorData, uint8 CallFunc_Array_Get_Item, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_Spawner_HoverSail_Main_C", "BPInitIconMaterial");

	Params::UPrimalItem_Spawner_HoverSail_Main_C_BPInitIconMaterial_Params Parms{};

	Parms.OutColors_Loc = OutColors_Loc;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetDinoColorizationData_HasAnyColorData != nullptr)
		*CallFunc_GetDinoColorizationData_HasAnyColorData = Parms.CallFunc_GetDinoColorizationData_HasAnyColorData;

	if (CallFunc_GetDinoColorizationData_ColorData != nullptr)
		*CallFunc_GetDinoColorizationData_ColorData = std::move(Parms.CallFunc_GetDinoColorizationData_ColorData);

	return Parms.ReturnValue;

}


// Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.BlueprintUsed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsIntoxicated                                                   (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue                              (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue_1                            (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class AController*                 CallFunc_GetCharacterController_ReturnValue                      (ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AController*                 CallFunc_GetCharacterController_ReturnValue_1                    (ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_1                 (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue_2                            (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue_3                            (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// class AController*                 CallFunc_GetCharacterController_ReturnValue_2                    (ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class AController*                 CallFunc_GetCharacterController_ReturnValue_3                    (ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_2                 (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_3                 (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue_4                            (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue_5                            (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue_6                            (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue_7                            (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, EditorOnly)
// class APrimalBuff*                 CallFunc_GetBuffWithCustomTag_ReturnValue                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class ABuff_NotifyHoversailFollow_C*K2Node_DynamicCast_AsBuff_Notify_Hoversail_Follow                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue_8                            (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, EditorOnly)
// float                              CallFunc_GetDurabilityPercentage_ReturnValue                     (Edit, ConstParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue_9                            (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// class ATekHoverSail_Character_Base_BP_C*K2Node_DynamicCast_AsTek_Hover_Sail_Character_Base_BP            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional, EditorOnly)
// class ATekHoverSail_Character_Base_BP_C*K2Node_DynamicCast_AsTek_Hover_Sail_Character_Base_BP_1          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue_10                           (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// float                              CallFunc_BPGetPercentStatusValue_ReturnValue                     (Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

double UPrimalItem_Spawner_HoverSail_Main_C::BlueprintUsed(class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_1, class AController** CallFunc_GetCharacterController_ReturnValue, class AController** CallFunc_GetCharacterController_ReturnValue_1, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_1, bool* K2Node_DynamicCast_bSuccess_1, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_2, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_3, class AController** CallFunc_GetCharacterController_ReturnValue_2, class AController** CallFunc_GetCharacterController_ReturnValue_3, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_2, bool* K2Node_DynamicCast_bSuccess_2, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_3, bool* K2Node_DynamicCast_bSuccess_3, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_5, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_6, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_7, bool* K2Node_DynamicCast_bSuccess_4, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_8, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_9, bool* K2Node_DynamicCast_bSuccess_5, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, bool* K2Node_DynamicCast_bSuccess_6, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_10, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, float* CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_Spawner_HoverSail_Main_C", "BlueprintUsed");

	Params::UPrimalItem_Spawner_HoverSail_Main_C_BlueprintUsed_Params Parms{};

	Parms.CallFunc_GetOwnerPlayer_ReturnValue = CallFunc_GetOwnerPlayer_ReturnValue;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue_1 = CallFunc_GetOwnerPlayer_ReturnValue_1;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue_2 = CallFunc_GetOwnerPlayer_ReturnValue_2;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue_3 = CallFunc_GetOwnerPlayer_ReturnValue_3;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue_4 = CallFunc_GetOwnerPlayer_ReturnValue_4;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue_5 = CallFunc_GetOwnerPlayer_ReturnValue_5;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue_6 = CallFunc_GetOwnerPlayer_ReturnValue_6;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue_7 = CallFunc_GetOwnerPlayer_ReturnValue_7;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue_8 = CallFunc_GetOwnerPlayer_ReturnValue_8;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue_9 = CallFunc_GetOwnerPlayer_ReturnValue_9;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue_10 = CallFunc_GetOwnerPlayer_ReturnValue_10;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetCharacterController_ReturnValue != nullptr)
		*CallFunc_GetCharacterController_ReturnValue = Parms.CallFunc_GetCharacterController_ReturnValue;

	if (CallFunc_GetCharacterController_ReturnValue_1 != nullptr)
		*CallFunc_GetCharacterController_ReturnValue_1 = Parms.CallFunc_GetCharacterController_ReturnValue_1;

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_AsShooter_Player_Controller_1 != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller_1 = Parms.K2Node_DynamicCast_AsShooter_Player_Controller_1;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_GetCharacterController_ReturnValue_2 != nullptr)
		*CallFunc_GetCharacterController_ReturnValue_2 = Parms.CallFunc_GetCharacterController_ReturnValue_2;

	if (CallFunc_GetCharacterController_ReturnValue_3 != nullptr)
		*CallFunc_GetCharacterController_ReturnValue_3 = Parms.CallFunc_GetCharacterController_ReturnValue_3;

	if (K2Node_DynamicCast_AsShooter_Player_Controller_2 != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller_2 = Parms.K2Node_DynamicCast_AsShooter_Player_Controller_2;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (K2Node_DynamicCast_AsShooter_Player_Controller_3 != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller_3 = Parms.K2Node_DynamicCast_AsShooter_Player_Controller_3;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	if (K2Node_DynamicCast_bSuccess_4 != nullptr)
		*K2Node_DynamicCast_bSuccess_4 = Parms.K2Node_DynamicCast_bSuccess_4;

	if (K2Node_DynamicCast_bSuccess_5 != nullptr)
		*K2Node_DynamicCast_bSuccess_5 = Parms.K2Node_DynamicCast_bSuccess_5;

	if (K2Node_DynamicCast_bSuccess_6 != nullptr)
		*K2Node_DynamicCast_bSuccess_6 = Parms.K2Node_DynamicCast_bSuccess_6;

	if (CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast != nullptr)
		*CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast = Parms.CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast;

	return Parms.ReturnValue;

}


// Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.OnDinoSpawned
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalDinoCharacter*        NewDino                                                          (ConstParm, BlueprintVisible, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// enum class ENetworkModeResult      CallFunc_CanRunCosmeticEvents_OutNetworkMode                     (BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (ExportObject, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FCustomItemByteArray        CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// uint8                              CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// uint8                              CallFunc_Array_Get_Item_2                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// uint8                              CallFunc_Array_Get_Item_3                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// bool                               CallFunc_RemoveItem_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_4                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Len_ReturnValue                                         (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue                              (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Item                            (ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue                          (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// float                              CallFunc_GetDurabilityPercentage_ReturnValue                     (Edit, ConstParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class ATekHoverSail_Character_Base_BP_C*K2Node_DynamicCast_AsTek_Hover_Sail_Character_Base_BP            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue_1                            (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue_1                        (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             K2Node_VariableSet_CurrentFuelUnitPercent_ImplicitCast           (BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

double UPrimalItem_Spawner_HoverSail_Main_C::OnDinoSpawned(bool K2Node_SwitchEnum_CmpSuccess, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, const struct FCustomItemByteArray& CallFunc_Array_Get_Item, bool* CallFunc_Array_IsValidIndex_ReturnValue, uint8 CallFunc_Array_Get_Item_1, uint8 CallFunc_Array_Get_Item_2, uint8 CallFunc_Array_Get_Item_3, bool CallFunc_RemoveItem_ReturnValue, const class FString& CallFunc_Array_Get_Item_4, bool* CallFunc_Array_IsValidIndex_ReturnValue_1, int32 CallFunc_Len_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, bool* K2Node_DynamicCast_bSuccess, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_1, double K2Node_VariableSet_CurrentFuelUnitPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_Spawner_HoverSail_Main_C", "OnDinoSpawned");

	Params::UPrimalItem_Spawner_HoverSail_Main_C_OnDinoSpawned_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCustomItemData_OutData = CallFunc_GetCustomItemData_OutData;
	Parms.CallFunc_GetCustomItemData_ReturnValue = CallFunc_GetCustomItemData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_RemoveItem_ReturnValue = CallFunc_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue = CallFunc_GetOwnerPlayer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue_1 = CallFunc_GetOwnerPlayer_ReturnValue_1;
	Parms.K2Node_VariableSet_CurrentFuelUnitPercent_ImplicitCast = K2Node_VariableSet_CurrentFuelUnitPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	if (CallFunc_Array_IsValidIndex_ReturnValue_1 != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue_1 = Parms.CallFunc_Array_IsValidIndex_ReturnValue_1;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.BPGetCustomInventoryWidgetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      Local_string                                                     (BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class ATekHoverSail_Character_Base_BP_C*K2Node_DynamicCast_AsTek_Hover_Sail_Character_Base_BP            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue                              (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Split_LeftS                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Split_RightS                                            (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Split_ReturnValue                                       (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// double                             CallFunc_Abs_ReturnValue                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// float                              CallFunc_GetDurabilityPercentage_ReturnValue                     (Edit, ConstParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Split_LeftS_1                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Split_RightS_1                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Split_ReturnValue_1                                     (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// class FString                      CallFunc_GetSubstring_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

bool UPrimalItem_Spawner_HoverSail_Main_C::BPGetCustomInventoryWidgetText(const class FString& Local_string, bool* K2Node_DynamicCast_bSuccess, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class FString* CallFunc_GetSubstring_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class FString* CallFunc_GetSubstring_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_Spawner_HoverSail_Main_C", "BPGetCustomInventoryWidgetText");

	Params::UPrimalItem_Spawner_HoverSail_Main_C_BPGetCustomInventoryWidgetText_Params Parms{};

	Parms.Local_string = Local_string;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue = CallFunc_GetOwnerPlayer_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetSubstring_ReturnValue != nullptr)
		*CallFunc_GetSubstring_ReturnValue = std::move(Parms.CallFunc_GetSubstring_ReturnValue);

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	if (CallFunc_GetSubstring_ReturnValue_1 != nullptr)
		*CallFunc_GetSubstring_ReturnValue_1 = std::move(Parms.CallFunc_GetSubstring_ReturnValue_1);

	return Parms.ReturnValue;

}

}


