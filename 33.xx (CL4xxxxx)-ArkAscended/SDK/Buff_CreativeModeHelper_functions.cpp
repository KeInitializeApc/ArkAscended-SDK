#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_CreativeModeHelper.Buff_CreativeModeHelper_C
// (Actor)

class UClass* ABuff_CreativeModeHelper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_CreativeModeHelper_C");

	return Clss;
}


// Buff_CreativeModeHelper_C Buff_CreativeModeHelper.Default__Buff_CreativeModeHelper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_CreativeModeHelper_C* ABuff_CreativeModeHelper_C::GetDefaultObj()
{
	static class ABuff_CreativeModeHelper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_CreativeModeHelper_C*>(ABuff_CreativeModeHelper_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPCheckPreventInput
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPrimalCharacterInputTypeInputType                                                        (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ABuff_CreativeModeHelper_C::BPCheckPreventInput(enum class EPrimalCharacterInputType* InputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "BPCheckPreventInput");

	Params::ABuff_CreativeModeHelper_C_BPCheckPreventInput_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InputType != nullptr)
		*InputType = Parms.InputType;

	return Parms.ReturnValue;

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPDrawBuffStatusHUD
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterHUD*                 HUD                                                              (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
// float                              XPos                                                             (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, EditConst, InstancedReference, SubobjectReference)
// float                              YPos                                                             (Edit, ConstParm, ExportObject, EditFixedSize, Parm, EditConst, InstancedReference, SubobjectReference)
// float                              ScaleMult                                                        (Edit, BlueprintVisible, EditFixedSize, Parm, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class FString                      CallFunc_SelectString_ReturnValue                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsEditor_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_DrawText_ScreenY_ImplicitCast                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)

class FString ABuff_CreativeModeHelper_C::BPDrawBuffStatusHUD(float XPos, float YPos, float ScaleMult, double* CallFunc_Add_DoubleDouble_ReturnValue, bool* CallFunc_IsEditor_ReturnValue, double* CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_DrawText_ScreenY_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "BPDrawBuffStatusHUD");

	Params::ABuff_CreativeModeHelper_C_BPDrawBuffStatusHUD_Params Parms{};

	Parms.XPos = XPos;
	Parms.YPos = YPos;
	Parms.ScaleMult = ScaleMult;
	Parms.CallFunc_DrawText_ScreenY_ImplicitCast = CallFunc_DrawText_ScreenY_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (CallFunc_IsEditor_ReturnValue != nullptr)
		*CallFunc_IsEditor_ReturnValue = Parms.CallFunc_IsEditor_ReturnValue;

	if (CallFunc_Add_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Add_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BuffTickServer
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<struct FTransform>          Characters                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, DuplicateTransient)
// TArray<struct FVector>             HitEnds                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FVector>             HitStarts                                                        (ConstParm, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FHitResult>          Hits                                                             (ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class APrimalCharacter*            Player                                                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// TArray<class AActor*>              Temp_object_Variable                                             (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// class AController*                 CallFunc_GetController_ReturnValue                               (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// TArray<class AActor*>              CallFunc_SphereOverlapActors_OutActors                           (Edit, ConstParm, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_SphereOverlapActors_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (Edit, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
// TArray<class AActor*>              CallFunc_ServerOctreeOverlapActors_ReturnValue                   (Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetScaledCapsuleSize_OutRadius                          (ConstParm, BlueprintVisible, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_GetScaledCapsuleSize_OutHalfHeight                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsPrimalDino_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsPlayerAllowedToCheat_ReturnValue                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_4                       (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (Edit, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FHitResult                  CallFunc_VTraceSingleBP_OutHit                                   (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_VTraceSingleBP_ReturnValue                              (ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_MulticastDrawDebugSphere_Duration_ImplicitCast          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast           (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_ServerOctreeOverlapActors_Radius_ImplicitCast           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_MulticastDrawDebugSphere_Radius_ImplicitCast            (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnInstance, SubobjectReference)

int32 ABuff_CreativeModeHelper_C::BuffTickServer(const TArray<struct FVector>& HitEnds, const TArray<struct FVector>& HitStarts, const TArray<struct FHitResult>& Hits, class APrimalCharacter** Player, int32 Temp_int_Loop_Counter_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 Temp_int_Array_Index_Variable, int32* Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, TArray<class AActor*>* Temp_object_Variable, int32* Temp_int_Variable_1, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, TArray<enum class EObjectTypeQuery>* K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<class AActor*>* CallFunc_SphereOverlapActors_OutActors, bool* CallFunc_SphereOverlapActors_ReturnValue, class AActor* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, TArray<class AActor*>* CallFunc_ServerOctreeOverlapActors_ReturnValue, class AActor* CallFunc_Array_Get_Item_1, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float* CallFunc_GetScaledCapsuleSize_OutRadius, float CallFunc_GetScaledCapsuleSize_OutHalfHeight, double CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess_2, bool* CallFunc_IsPlayerAllowedToCheat_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, struct FVector* CallFunc_GreaterGreater_VectorRotator_ReturnValue, struct FHitResult* CallFunc_VTraceSingleBP_OutHit, bool* CallFunc_VTraceSingleBP_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float* CallFunc_MulticastDrawDebugSphere_Duration_ImplicitCast, float* CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast, float* CallFunc_ServerOctreeOverlapActors_Radius_ImplicitCast, float* CallFunc_MulticastDrawDebugSphere_Radius_ImplicitCast, double CallFunc_MakeVector_X_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "BuffTickServer");

	Params::ABuff_CreativeModeHelper_C_BuffTickServer_Params Parms{};

	Parms.HitEnds = HitEnds;
	Parms.HitStarts = HitStarts;
	Parms.Hits = Hits;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetScaledCapsuleSize_OutHalfHeight = CallFunc_GetScaledCapsuleSize_OutHalfHeight;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsShooter_Game_Mode = K2Node_DynamicCast_AsShooter_Game_Mode;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_4 = CallFunc_K2_GetActorLocation_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_MakeVector_X_ImplicitCast = CallFunc_MakeVector_X_ImplicitCast;
	Parms.CallFunc_MakeVector_Y_ImplicitCast = CallFunc_MakeVector_Y_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Player != nullptr)
		*Player = Parms.Player;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (Temp_object_Variable != nullptr)
		*Temp_object_Variable = std::move(Parms.Temp_object_Variable);

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (CallFunc_SphereOverlapActors_OutActors != nullptr)
		*CallFunc_SphereOverlapActors_OutActors = std::move(Parms.CallFunc_SphereOverlapActors_OutActors);

	if (CallFunc_SphereOverlapActors_ReturnValue != nullptr)
		*CallFunc_SphereOverlapActors_ReturnValue = Parms.CallFunc_SphereOverlapActors_ReturnValue;

	if (CallFunc_ServerOctreeOverlapActors_ReturnValue != nullptr)
		*CallFunc_ServerOctreeOverlapActors_ReturnValue = std::move(Parms.CallFunc_ServerOctreeOverlapActors_ReturnValue);

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_GetScaledCapsuleSize_OutRadius != nullptr)
		*CallFunc_GetScaledCapsuleSize_OutRadius = Parms.CallFunc_GetScaledCapsuleSize_OutRadius;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_IsPlayerAllowedToCheat_ReturnValue != nullptr)
		*CallFunc_IsPlayerAllowedToCheat_ReturnValue = Parms.CallFunc_IsPlayerAllowedToCheat_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	if (CallFunc_GreaterGreater_VectorRotator_ReturnValue != nullptr)
		*CallFunc_GreaterGreater_VectorRotator_ReturnValue = std::move(Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue);

	if (CallFunc_VTraceSingleBP_OutHit != nullptr)
		*CallFunc_VTraceSingleBP_OutHit = std::move(Parms.CallFunc_VTraceSingleBP_OutHit);

	if (CallFunc_VTraceSingleBP_ReturnValue != nullptr)
		*CallFunc_VTraceSingleBP_ReturnValue = Parms.CallFunc_VTraceSingleBP_ReturnValue;

	if (CallFunc_MulticastDrawDebugSphere_Duration_ImplicitCast != nullptr)
		*CallFunc_MulticastDrawDebugSphere_Duration_ImplicitCast = Parms.CallFunc_MulticastDrawDebugSphere_Duration_ImplicitCast;

	if (CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast != nullptr)
		*CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast = Parms.CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast;

	if (CallFunc_ServerOctreeOverlapActors_Radius_ImplicitCast != nullptr)
		*CallFunc_ServerOctreeOverlapActors_Radius_ImplicitCast = Parms.CallFunc_ServerOctreeOverlapActors_Radius_ImplicitCast;

	if (CallFunc_MulticastDrawDebugSphere_Radius_ImplicitCast != nullptr)
		*CallFunc_MulticastDrawDebugSphere_Radius_ImplicitCast = Parms.CallFunc_MulticastDrawDebugSphere_Radius_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.IsNotRidingDino
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               NotRidingDino                                                    (ConstParm, BlueprintVisible, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               Riding                                                           (ConstParm, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

bool ABuff_CreativeModeHelper_C::IsNotRidingDino(class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "IsNotRidingDino");

	Params::ABuff_CreativeModeHelper_C_IsNotRidingDino_Params Parms{};

	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ExecConsoleCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Command                                                          (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue                          (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)

bool ABuff_CreativeModeHelper_C::ExecConsoleCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "ExecConsoleCommand");

	Params::ABuff_CreativeModeHelper_C_ExecConsoleCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// enum class ENetworkModeResult      CallFunc_IsRunningOnServer_OutNetworkMode                        (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 CallFunc_BPGetItemOfTemplate_ReturnValue                         (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_BPIncrementItemTemplateQuantity_ReturnValue             (ConstParm, Net, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              K2Node_VariableSet_BrakingDecelerationFlying_ImplicitCast        (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              K2Node_VariableSet_MaxFlySpeed_ImplicitCast                      (ConstParm, ExportObject, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

float ABuff_CreativeModeHelper_C::BPDeactivated(class AActor** ForInstigator, enum class ENetworkModeResult* CallFunc_IsRunningOnServer_OutNetworkMode, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_BPIncrementItemTemplateQuantity_ReturnValue, float* K2Node_VariableSet_BrakingDecelerationFlying_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "BPDeactivated");

	Params::ABuff_CreativeModeHelper_C_BPDeactivated_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BPIncrementItemTemplateQuantity_ReturnValue = CallFunc_BPIncrementItemTemplateQuantity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ForInstigator != nullptr)
		*ForInstigator = Parms.ForInstigator;

	if (CallFunc_IsRunningOnServer_OutNetworkMode != nullptr)
		*CallFunc_IsRunningOnServer_OutNetworkMode = Parms.CallFunc_IsRunningOnServer_OutNetworkMode;

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_VariableSet_BrakingDecelerationFlying_ImplicitCast != nullptr)
		*K2Node_VariableSet_BrakingDecelerationFlying_ImplicitCast = Parms.K2Node_VariableSet_BrakingDecelerationFlying_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPActivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// enum class ENetworkModeResult      CallFunc_IsRunningOnServer_OutNetworkMode                        (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BPIncrementItemTemplateQuantity_ReturnValue             (ConstParm, Net, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetItemTemplateQuantity_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             K2Node_VariableSet_OrigBrakeDecelFlying_ImplicitCast             (Edit, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast                  (ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// double                             K2Node_VariableSet_OrigMaxFlySpeed_ImplicitCast                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              K2Node_VariableSet_BrakingDecelerationFlying_ImplicitCast        (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)

double ABuff_CreativeModeHelper_C::BPActivated(class AActor** ForInstigator, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, class ACharacter** K2Node_DynamicCast_AsCharacter, bool* K2Node_DynamicCast_bSuccess_1, enum class ENetworkModeResult* CallFunc_IsRunningOnServer_OutNetworkMode, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_BPIncrementItemTemplateQuantity_ReturnValue, int32 CallFunc_GetItemTemplateQuantity_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast, float* K2Node_VariableSet_BrakingDecelerationFlying_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "BPActivated");

	Params::ABuff_CreativeModeHelper_C_BPActivated_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BPIncrementItemTemplateQuantity_ReturnValue = CallFunc_BPIncrementItemTemplateQuantity_ReturnValue;
	Parms.CallFunc_GetItemTemplateQuantity_ReturnValue = CallFunc_GetItemTemplateQuantity_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ForInstigator != nullptr)
		*ForInstigator = Parms.ForInstigator;

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_AsCharacter != nullptr)
		*K2Node_DynamicCast_AsCharacter = Parms.K2Node_DynamicCast_AsCharacter;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_IsRunningOnServer_OutNetworkMode != nullptr)
		*CallFunc_IsRunningOnServer_OutNetworkMode = Parms.CallFunc_IsRunningOnServer_OutNetworkMode;

	if (K2Node_VariableSet_BrakingDecelerationFlying_ImplicitCast != nullptr)
		*K2Node_VariableSet_BrakingDecelerationFlying_ImplicitCast = Parms.K2Node_VariableSet_BrakingDecelerationFlying_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPSetupForInstigator
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue                          (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)

class APlayerController* ABuff_CreativeModeHelper_C::BPSetupForInstigator(class AActor** ForInstigator, class APawn** K2Node_DynamicCast_AsPawn, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "BPSetupForInstigator");

	Params::ABuff_CreativeModeHelper_C_BPSetupForInstigator_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ForInstigator != nullptr)
		*ForInstigator = Parms.ForInstigator;

	if (K2Node_DynamicCast_AsPawn != nullptr)
		*K2Node_DynamicCast_AsPawn = Parms.K2Node_DynamicCast_AsPawn;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Jump_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)

void ABuff_CreativeModeHelper_C::InpActEvt_Jump_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "InpActEvt_Jump_K2Node_InputActionEvent_5");

	Params::ABuff_CreativeModeHelper_C_InpActEvt_Jump_K2Node_InputActionEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)

void ABuff_CreativeModeHelper_C::InpActEvt_Run_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "InpActEvt_Run_K2Node_InputActionEvent_4");

	Params::ABuff_CreativeModeHelper_C_InpActEvt_Run_K2Node_InputActionEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)

void ABuff_CreativeModeHelper_C::InpActEvt_Run_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "InpActEvt_Run_K2Node_InputActionEvent_3");

	Params::ABuff_CreativeModeHelper_C_InpActEvt_Run_K2Node_InputActionEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)

void ABuff_CreativeModeHelper_C::InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_2");

	Params::ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)

void ABuff_CreativeModeHelper_C::InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_1");

	Params::ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)

void ABuff_CreativeModeHelper_C::InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_3");

	Params::ABuff_CreativeModeHelper_C_InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)

void ABuff_CreativeModeHelper_C::InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_2");

	Params::ABuff_CreativeModeHelper_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)

void ABuff_CreativeModeHelper_C::InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_1");

	Params::ABuff_CreativeModeHelper_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_G_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)

void ABuff_CreativeModeHelper_C::InpActEvt_G_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "InpActEvt_G_K2Node_InputKeyEvent_0");

	Params::ABuff_CreativeModeHelper_C_InpActEvt_G_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)

void ABuff_CreativeModeHelper_C::InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_0");

	Params::ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerSetFlight
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFlying                                                         (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)

void ABuff_CreativeModeHelper_C::ServerSetFlight(bool IsFlying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "ServerSetFlight");

	Params::ABuff_CreativeModeHelper_C_ServerSetFlight_Params Parms{};

	Parms.IsFlying = IsFlying;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerSetFlySpeed
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewSpeed                                                         (Edit, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

double ABuff_CreativeModeHelper_C::ServerSetFlySpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "ServerSetFlySpeed");

	Params::ABuff_CreativeModeHelper_C_ServerSetFlySpeed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.SetFlySpeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             New_Speed                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

double ABuff_CreativeModeHelper_C::SetFlySpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "SetFlySpeed");

	Params::ABuff_CreativeModeHelper_C_SetFlySpeed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.NetServerDestroyStructure
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalStructure*            StructureToDestroy                                               (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

class APrimalStructure* ABuff_CreativeModeHelper_C::NetServerDestroyStructure()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "NetServerDestroyStructure");

	Params::ABuff_CreativeModeHelper_C_NetServerDestroyStructure_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ClientUpdateFlightStatus
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFlying                                                         (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)

void ABuff_CreativeModeHelper_C::ClientUpdateFlightStatus(bool IsFlying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "ClientUpdateFlightStatus");

	Params::ABuff_CreativeModeHelper_C_ClientUpdateFlightStatus_Params Parms{};

	Parms.IsFlying = IsFlying;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.MultiReplicationDebugData
// (Net, NetReliable, NetMulticast, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>          Hits                                                             (ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FVector>             HitStarts                                                        (ConstParm, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FVector>             HitEnds                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTransform>          Chars                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FVector                     Player                                                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst)

void ABuff_CreativeModeHelper_C::MultiReplicationDebugData(const TArray<struct FHitResult>& Hits, const TArray<struct FVector>& HitStarts, const TArray<struct FVector>& HitEnds, const TArray<struct FTransform>& Chars, struct FVector* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "MultiReplicationDebugData");

	Params::ABuff_CreativeModeHelper_C_MultiReplicationDebugData_Params Parms{};

	Parms.Hits = Hits;
	Parms.HitStarts = HitStarts;
	Parms.HitEnds = HitEnds;
	Parms.Chars = Chars;

	UObject::ProcessEvent(Func, &Parms);

	if (Player != nullptr)
		*Player = std::move(Parms.Player);

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BuffTickClient
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float ABuff_CreativeModeHelper_C::BuffTickClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "BuffTickClient");

	Params::ABuff_CreativeModeHelper_C_BuffTickClient_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerRequestReplicationDebugging
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)

void ABuff_CreativeModeHelper_C::ServerRequestReplicationDebugging(bool* Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "ServerRequestReplicationDebugging");

	Params::ABuff_CreativeModeHelper_C_ServerRequestReplicationDebugging_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ExecuteUbergraph_Buff_CreativeModeHelper
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// TArray<class AActor*>              Temp_object_Variable                                             (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue                               (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FKey                        Temp_struct_Variable                                             (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               K2Node_CustomEvent_IsFlying_1                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsPlayerAllowedToCheat_ReturnValue                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp)
// double                             K2Node_CustomEvent_NewSpeed                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// double                             K2Node_CustomEvent_New_Speed                                     (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FKey                        K2Node_InputActionEvent_Key                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character_1                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsClient_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class APrimalStructure*            K2Node_CustomEvent_StructureToDestroy                            (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// struct FKey                        K2Node_InputActionEvent_Key_2                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_1                 (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsNotRidingDino_NotRidingDino                           (Edit, ConstParm, ExportObject, Net, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsNotRidingDino_NotRidingDino_1                         (Edit, ConstParm, ExportObject, Net, OutParm, Transient, EditConst, InstancedReference, SubobjectReference, Interp)
// class APrimalStructure*            K2Node_DynamicCast_AsPrimal_Structure                            (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
// bool                               K2Node_CustomEvent_IsFlying                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character_2                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FHitResult>          K2Node_CustomEvent_Hits                                          (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FVector>             K2Node_CustomEvent_HitStarts                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FVector>             K2Node_CustomEvent_HitEnds                                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTransform>          K2Node_CustomEvent_Chars                                         (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     K2Node_CustomEvent_player                                        (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// struct FVector                     CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// struct FHitResult                  CallFunc_Array_Get_Item_2                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// enum class ENetworkModeResult      CallFunc_CanRunCosmeticEvents_OutNetworkMode                     (BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// struct FKey                        Temp_struct_Variable_1                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// struct FKey                        K2Node_InputKeyEvent_Key_1                                       (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// float                              K2Node_Event_DeltaTime                                           (Edit, BlueprintVisible, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
// struct FTransform                  CallFunc_Array_Get_Item_3                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ConstParm, ExportObject, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FKey                        K2Node_InputActionEvent_Key_3                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// bool                               K2Node_CustomEvent_Enabled                                       (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// struct FKey                        K2Node_InputKeyEvent_Key_2                                       (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FKey                        K2Node_InputKeyEvent_Key_3                                       (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// TArray<class AActor*>              CallFunc_SphereOverlapActors_OutActors                           (Edit, ConstParm, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_SphereOverlapActors_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_Array_Get_Item_4                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character_3                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, EditorOnly)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FKey                        K2Node_InputActionEvent_Key_4                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class AController*                 CallFunc_GetController_ReturnValue_3                             (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_2                 (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, EditorOnly)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_3                 (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_IsInputKeyDown_ReturnValue                              (ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue_1                             (ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsInputKeyDown_ReturnValue_1                            (ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// class APrimalStructure*            K2Node_DynamicCast_AsPrimal_Structure_1                          (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, EditorOnly)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue_2                             (ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FKey                        K2Node_InputActionEvent_Key_5                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// class APrimalStructure*            K2Node_DynamicCast_AsPrimal_Structure_2                          (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional, EditorOnly)
// float                              K2Node_VariableSet_MaxFlySpeed_ImplicitCast                      (ConstParm, ExportObject, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              K2Node_VariableSet_MaxFlySpeed_ImplicitCast_1                    (ConstParm, ExportObject, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_DrawDebugLineTraceHitResult_Duration_ImplicitCast       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast           (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)

float ABuff_CreativeModeHelper_C::ExecuteUbergraph_Buff_CreativeModeHelper(int32* EntryPoint, TArray<class AActor*>* Temp_object_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess_1, bool* K2Node_CustomEvent_IsFlying_1, bool* CallFunc_IsPlayerAllowedToCheat_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, struct FKey* K2Node_InputActionEvent_Key_1, double* K2Node_CustomEvent_NewSpeed, double CallFunc_FClamp_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess_2, double* K2Node_CustomEvent_New_Speed, struct FKey* K2Node_InputActionEvent_Key, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character_1, bool* K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsClient_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class APrimalStructure** K2Node_CustomEvent_StructureToDestroy, int32* Temp_int_Variable, struct FKey* K2Node_InputActionEvent_Key_2, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_1, bool* K2Node_DynamicCast_bSuccess_4, bool* CallFunc_IsNotRidingDino_NotRidingDino, bool* CallFunc_IsNotRidingDino_NotRidingDino_1, bool* K2Node_DynamicCast_bSuccess_5, bool* K2Node_CustomEvent_IsFlying, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character_2, bool* K2Node_DynamicCast_bSuccess_6, TArray<struct FHitResult>* K2Node_CustomEvent_Hits, TArray<struct FVector>* K2Node_CustomEvent_HitStarts, TArray<struct FVector>* K2Node_CustomEvent_HitEnds, TArray<struct FTransform>* K2Node_CustomEvent_Chars, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_Array_Get_Item_1, const struct FHitResult& CallFunc_Array_Get_Item_2, int32 CallFunc_Subtract_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue, TArray<enum class EObjectTypeQuery>* K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable_1, float K2Node_Event_DeltaTime, const struct FTransform& CallFunc_Array_Get_Item_3, struct FRotator* CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool* CallFunc_NearlyEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, struct FKey* K2Node_InputActionEvent_Key_3, bool* K2Node_CustomEvent_Enabled, TArray<class AActor*>* CallFunc_SphereOverlapActors_OutActors, bool* CallFunc_SphereOverlapActors_ReturnValue, class AActor* CallFunc_Array_Get_Item_4, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character_3, bool* K2Node_DynamicCast_bSuccess_7, struct FKey* K2Node_InputActionEvent_Key_4, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_2, bool* K2Node_DynamicCast_bSuccess_8, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_3, bool* K2Node_DynamicCast_bSuccess_9, bool* K2Node_DynamicCast_bSuccess_10, struct FKey* K2Node_InputActionEvent_Key_5, bool* K2Node_DynamicCast_bSuccess_11, float CallFunc_DrawDebugLineTraceHitResult_Duration_ImplicitCast, float* CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_CreativeModeHelper_C", "ExecuteUbergraph_Buff_CreativeModeHelper");

	Params::ABuff_CreativeModeHelper_C_ExecuteUbergraph_Buff_CreativeModeHelper_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsShooter_Game_Mode = K2Node_DynamicCast_AsShooter_Game_Mode;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_IsClient_ReturnValue = CallFunc_IsClient_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue = CallFunc_MakeLiteralDouble_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_DrawDebugLineTraceHitResult_Duration_ImplicitCast = CallFunc_DrawDebugLineTraceHitResult_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (Temp_object_Variable != nullptr)
		*Temp_object_Variable = std::move(Parms.Temp_object_Variable);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_CustomEvent_IsFlying_1 != nullptr)
		*K2Node_CustomEvent_IsFlying_1 = Parms.K2Node_CustomEvent_IsFlying_1;

	if (CallFunc_IsPlayerAllowedToCheat_ReturnValue != nullptr)
		*CallFunc_IsPlayerAllowedToCheat_ReturnValue = Parms.CallFunc_IsPlayerAllowedToCheat_ReturnValue;

	if (K2Node_InputActionEvent_Key_1 != nullptr)
		*K2Node_InputActionEvent_Key_1 = std::move(Parms.K2Node_InputActionEvent_Key_1);

	if (K2Node_CustomEvent_NewSpeed != nullptr)
		*K2Node_CustomEvent_NewSpeed = Parms.K2Node_CustomEvent_NewSpeed;

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (K2Node_CustomEvent_New_Speed != nullptr)
		*K2Node_CustomEvent_New_Speed = Parms.K2Node_CustomEvent_New_Speed;

	if (K2Node_InputActionEvent_Key != nullptr)
		*K2Node_InputActionEvent_Key = std::move(Parms.K2Node_InputActionEvent_Key);

	if (K2Node_DynamicCast_AsPrimal_Character_1 != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character_1 = Parms.K2Node_DynamicCast_AsPrimal_Character_1;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	if (K2Node_CustomEvent_StructureToDestroy != nullptr)
		*K2Node_CustomEvent_StructureToDestroy = Parms.K2Node_CustomEvent_StructureToDestroy;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (K2Node_InputActionEvent_Key_2 != nullptr)
		*K2Node_InputActionEvent_Key_2 = std::move(Parms.K2Node_InputActionEvent_Key_2);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (K2Node_DynamicCast_AsShooter_Player_Controller_1 != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller_1 = Parms.K2Node_DynamicCast_AsShooter_Player_Controller_1;

	if (K2Node_DynamicCast_bSuccess_4 != nullptr)
		*K2Node_DynamicCast_bSuccess_4 = Parms.K2Node_DynamicCast_bSuccess_4;

	if (CallFunc_IsNotRidingDino_NotRidingDino != nullptr)
		*CallFunc_IsNotRidingDino_NotRidingDino = Parms.CallFunc_IsNotRidingDino_NotRidingDino;

	if (CallFunc_IsNotRidingDino_NotRidingDino_1 != nullptr)
		*CallFunc_IsNotRidingDino_NotRidingDino_1 = Parms.CallFunc_IsNotRidingDino_NotRidingDino_1;

	if (K2Node_DynamicCast_bSuccess_5 != nullptr)
		*K2Node_DynamicCast_bSuccess_5 = Parms.K2Node_DynamicCast_bSuccess_5;

	if (K2Node_CustomEvent_IsFlying != nullptr)
		*K2Node_CustomEvent_IsFlying = Parms.K2Node_CustomEvent_IsFlying;

	if (K2Node_DynamicCast_AsPrimal_Character_2 != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character_2 = Parms.K2Node_DynamicCast_AsPrimal_Character_2;

	if (K2Node_DynamicCast_bSuccess_6 != nullptr)
		*K2Node_DynamicCast_bSuccess_6 = Parms.K2Node_DynamicCast_bSuccess_6;

	if (K2Node_CustomEvent_Hits != nullptr)
		*K2Node_CustomEvent_Hits = std::move(Parms.K2Node_CustomEvent_Hits);

	if (K2Node_CustomEvent_HitStarts != nullptr)
		*K2Node_CustomEvent_HitStarts = std::move(Parms.K2Node_CustomEvent_HitStarts);

	if (K2Node_CustomEvent_HitEnds != nullptr)
		*K2Node_CustomEvent_HitEnds = std::move(Parms.K2Node_CustomEvent_HitEnds);

	if (K2Node_CustomEvent_Chars != nullptr)
		*K2Node_CustomEvent_Chars = std::move(Parms.K2Node_CustomEvent_Chars);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (CallFunc_BreakTransform_Rotation != nullptr)
		*CallFunc_BreakTransform_Rotation = std::move(Parms.CallFunc_BreakTransform_Rotation);

	if (CallFunc_NearlyEqual_FloatFloat_ReturnValue != nullptr)
		*CallFunc_NearlyEqual_FloatFloat_ReturnValue = Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue;

	if (K2Node_InputActionEvent_Key_3 != nullptr)
		*K2Node_InputActionEvent_Key_3 = std::move(Parms.K2Node_InputActionEvent_Key_3);

	if (K2Node_CustomEvent_Enabled != nullptr)
		*K2Node_CustomEvent_Enabled = Parms.K2Node_CustomEvent_Enabled;

	if (CallFunc_SphereOverlapActors_OutActors != nullptr)
		*CallFunc_SphereOverlapActors_OutActors = std::move(Parms.CallFunc_SphereOverlapActors_OutActors);

	if (CallFunc_SphereOverlapActors_ReturnValue != nullptr)
		*CallFunc_SphereOverlapActors_ReturnValue = Parms.CallFunc_SphereOverlapActors_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Character_3 != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character_3 = Parms.K2Node_DynamicCast_AsPrimal_Character_3;

	if (K2Node_DynamicCast_bSuccess_7 != nullptr)
		*K2Node_DynamicCast_bSuccess_7 = Parms.K2Node_DynamicCast_bSuccess_7;

	if (K2Node_InputActionEvent_Key_4 != nullptr)
		*K2Node_InputActionEvent_Key_4 = std::move(Parms.K2Node_InputActionEvent_Key_4);

	if (K2Node_DynamicCast_AsShooter_Player_Controller_2 != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller_2 = Parms.K2Node_DynamicCast_AsShooter_Player_Controller_2;

	if (K2Node_DynamicCast_bSuccess_8 != nullptr)
		*K2Node_DynamicCast_bSuccess_8 = Parms.K2Node_DynamicCast_bSuccess_8;

	if (K2Node_DynamicCast_AsShooter_Player_Controller_3 != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller_3 = Parms.K2Node_DynamicCast_AsShooter_Player_Controller_3;

	if (K2Node_DynamicCast_bSuccess_9 != nullptr)
		*K2Node_DynamicCast_bSuccess_9 = Parms.K2Node_DynamicCast_bSuccess_9;

	if (K2Node_DynamicCast_bSuccess_10 != nullptr)
		*K2Node_DynamicCast_bSuccess_10 = Parms.K2Node_DynamicCast_bSuccess_10;

	if (K2Node_InputActionEvent_Key_5 != nullptr)
		*K2Node_InputActionEvent_Key_5 = std::move(Parms.K2Node_InputActionEvent_Key_5);

	if (K2Node_DynamicCast_bSuccess_11 != nullptr)
		*K2Node_DynamicCast_bSuccess_11 = Parms.K2Node_DynamicCast_bSuccess_11;

	if (CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast != nullptr)
		*CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast = Parms.CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast;

	return Parms.ReturnValue;

}

}


