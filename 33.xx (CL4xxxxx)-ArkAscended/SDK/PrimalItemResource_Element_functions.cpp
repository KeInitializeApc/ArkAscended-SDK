#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Element.PrimalItemResource_Element_C
// (None)

class UClass* UPrimalItemResource_Element_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Element_C");

	return Clss;
}


// PrimalItemResource_Element_C PrimalItemResource_Element.Default__PrimalItemResource_Element_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Element_C* UPrimalItemResource_Element_C::GetDefaultObj()
{
	static class UPrimalItemResource_Element_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Element_C*>(UPrimalItemResource_Element_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPServerHandleItemNetExecCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerController*    ForPC                                                            (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        CommandName                                                      (Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            ExecParams                                                       (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchName_CmpSuccess                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetPlayerCharacter_ReturnValue                          (Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UPrimalItemResource_Element_C::BPServerHandleItemNetExecCommand(class FName CommandName, const struct FBPNetExecParams& ExecParams, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, class AShooterCharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Element_C", "BPServerHandleItemNetExecCommand");

	Params::UPrimalItemResource_Element_C_BPServerHandleItemNetExecCommand_Params Parms{};

	Parms.CommandName = CommandName;
	Parms.ExecParams = ExecParams;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItemResource_Element.PrimalItemResource_Element_C.FindShapeshifter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalDinoCharacter*        Shapeshifter                                                     (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, EditConst, SubobjectReference)
// bool                               RetMounted                                                       (BlueprintVisible, ExportObject, ReturnParm, EditConst, SubobjectReference)
// bool                               Mounted                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// class APrimalDinoCharacter*        Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams_1                              (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_BPServerHandleNetExecCommand_ReturnValue                (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// TArray<struct FHitResult>          CallFunc_VTraceMultiBP_OutHits                                   (ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_VTraceMultiBP_ReturnValue                               (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// float                              CallFunc_BreakHitResult_Time                                     (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// float                              CallFunc_BreakHitResult_Distance                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ConstParm, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (Edit, BlueprintVisible, ExportObject, Parm, OutParm, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_BreakHitResult_HitItem                                  (Edit, ConstParm, ExportObject, ZeroConstructor, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ConstParm, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_BPServerHandleNetExecCommand_ReturnValue_1              (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsAlive_ReturnValue                                     (Edit, ConstParm, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsAlliedWithOtherTeam_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BPIsTamed_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

double UPrimalItemResource_Element_C::FindShapeshifter(bool* Mounted, class APrimalDinoCharacter** Result, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_BPServerHandleNetExecCommand_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool* CallFunc_IsValid_ReturnValue, TArray<struct FHitResult>* CallFunc_VTraceMultiBP_OutHits, bool* CallFunc_VTraceMultiBP_ReturnValue, struct FHitResult* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float* CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool* CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BPServerHandleNetExecCommand_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, bool* CallFunc_IsAlliedWithOtherTeam_ReturnValue, bool* CallFunc_BPIsTamed_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Element_C", "FindShapeshifter");

	Params::UPrimalItemResource_Element_C_FindShapeshifter_Params Parms{};

	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_BPServerHandleNetExecCommand_ReturnValue = CallFunc_BPServerHandleNetExecCommand_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BPServerHandleNetExecCommand_ReturnValue_1 = CallFunc_BPServerHandleNetExecCommand_ReturnValue_1;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

	if (Mounted != nullptr)
		*Mounted = Parms.Mounted;

	if (Result != nullptr)
		*Result = Parms.Result;

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_Multiply_VectorFloat_ReturnValue != nullptr)
		*CallFunc_Multiply_VectorFloat_ReturnValue = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_VTraceMultiBP_OutHits != nullptr)
		*CallFunc_VTraceMultiBP_OutHits = std::move(Parms.CallFunc_VTraceMultiBP_OutHits);

	if (CallFunc_VTraceMultiBP_ReturnValue != nullptr)
		*CallFunc_VTraceMultiBP_ReturnValue = Parms.CallFunc_VTraceMultiBP_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_BreakHitResult_bBlockingHit != nullptr)
		*CallFunc_BreakHitResult_bBlockingHit = Parms.CallFunc_BreakHitResult_bBlockingHit;

	if (CallFunc_BreakHitResult_bInitialOverlap != nullptr)
		*CallFunc_BreakHitResult_bInitialOverlap = Parms.CallFunc_BreakHitResult_bInitialOverlap;

	if (CallFunc_BreakHitResult_Distance != nullptr)
		*CallFunc_BreakHitResult_Distance = Parms.CallFunc_BreakHitResult_Distance;

	if (CallFunc_BreakHitResult_HitActor != nullptr)
		*CallFunc_BreakHitResult_HitActor = Parms.CallFunc_BreakHitResult_HitActor;

	if (CallFunc_BreakHitResult_HitComponent != nullptr)
		*CallFunc_BreakHitResult_HitComponent = Parms.CallFunc_BreakHitResult_HitComponent;

	if (CallFunc_BreakHitResult_HitBoneName != nullptr)
		*CallFunc_BreakHitResult_HitBoneName = Parms.CallFunc_BreakHitResult_HitBoneName;

	if (CallFunc_BreakHitResult_BoneName != nullptr)
		*CallFunc_BreakHitResult_BoneName = Parms.CallFunc_BreakHitResult_BoneName;

	if (CallFunc_BreakHitResult_ElementIndex != nullptr)
		*CallFunc_BreakHitResult_ElementIndex = Parms.CallFunc_BreakHitResult_ElementIndex;

	if (CallFunc_BreakHitResult_FaceIndex != nullptr)
		*CallFunc_BreakHitResult_FaceIndex = Parms.CallFunc_BreakHitResult_FaceIndex;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_EqualEqual_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_EqualEqual_DoubleDouble_ReturnValue = Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue;

	if (CallFunc_IsAlliedWithOtherTeam_ReturnValue != nullptr)
		*CallFunc_IsAlliedWithOtherTeam_ReturnValue = Parms.CallFunc_IsAlliedWithOtherTeam_ReturnValue;

	if (CallFunc_BPIsTamed_ReturnValue != nullptr)
		*CallFunc_BPIsTamed_ReturnValue = Parms.CallFunc_BPIsTamed_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPPreUseItem
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ENetModeBP              CallFunc_SwitchNetworkMode_OutNetworkMode                        (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue                          (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BPServerHandleNetExecCommand_ReturnValue                (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, EditConst, SubobjectReference)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams_1                              (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BPServerHandleNetExecCommand_ReturnValue_1              (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, EditConst, SubobjectReference, Interp)

struct FBPNetExecParams UPrimalItemResource_Element_C::BPPreUseItem(bool* CallFunc_IsValid_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, enum class ENetModeBP* CallFunc_SwitchNetworkMode_OutNetworkMode, class FString* CallFunc_GetPlayerName_ReturnValue, class APlayerController* CallFunc_GetOwnerController_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, bool CallFunc_BPServerHandleNetExecCommand_ReturnValue, bool CallFunc_BPServerHandleNetExecCommand_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Element_C", "BPPreUseItem");

	Params::UPrimalItemResource_Element_C_BPPreUseItem_Params Parms{};

	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_GetOwnerController_ReturnValue = CallFunc_GetOwnerController_ReturnValue;
	Parms.CallFunc_BPServerHandleNetExecCommand_ReturnValue = CallFunc_BPServerHandleNetExecCommand_ReturnValue;
	Parms.CallFunc_BPServerHandleNetExecCommand_ReturnValue_1 = CallFunc_BPServerHandleNetExecCommand_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_SwitchNetworkMode_OutNetworkMode != nullptr)
		*CallFunc_SwitchNetworkMode_OutNetworkMode = Parms.CallFunc_SwitchNetworkMode_OutNetworkMode;

	if (CallFunc_GetPlayerName_ReturnValue != nullptr)
		*CallFunc_GetPlayerName_ReturnValue = std::move(Parms.CallFunc_GetPlayerName_ReturnValue);

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	return Parms.ReturnValue;

}


// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPCanUse
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIgnoreCooldown                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class APrimalCharacter*            Res                                                              (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig)
// bool                               Ret                                                              (Edit, ExportObject, ReturnParm, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (BlueprintVisible, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue                          (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
// enum class ENetModeBP              CallFunc_SwitchNetworkMode_OutNetworkMode                        (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoCharacter*        CallFunc_FindShapeshifter_Shapeshifter                           (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_FindShapeshifter_RetMounted                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

struct FBPNetExecParams UPrimalItemResource_Element_C::BPCanUse(bool bIgnoreCooldown, class AActor** CallFunc_GetOwner_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue_1, class APlayerController* CallFunc_GetOwnerController_ReturnValue, enum class ENetModeBP* CallFunc_SwitchNetworkMode_OutNetworkMode, bool* K2Node_DynamicCast_bSuccess, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, bool* K2Node_DynamicCast_bSuccess_1, class FString* CallFunc_GetPlayerName_ReturnValue, class APrimalDinoCharacter* CallFunc_FindShapeshifter_Shapeshifter, bool CallFunc_FindShapeshifter_RetMounted, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Element_C", "BPCanUse");

	Params::UPrimalItemResource_Element_C_BPCanUse_Params Parms{};

	Parms.bIgnoreCooldown = bIgnoreCooldown;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetOwnerController_ReturnValue = CallFunc_GetOwnerController_ReturnValue;
	Parms.CallFunc_FindShapeshifter_Shapeshifter = CallFunc_FindShapeshifter_Shapeshifter;
	Parms.CallFunc_FindShapeshifter_RetMounted = CallFunc_FindShapeshifter_RetMounted;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetOwner_ReturnValue_1 != nullptr)
		*CallFunc_GetOwner_ReturnValue_1 = Parms.CallFunc_GetOwner_ReturnValue_1;

	if (CallFunc_SwitchNetworkMode_OutNetworkMode != nullptr)
		*CallFunc_SwitchNetworkMode_OutNetworkMode = Parms.CallFunc_SwitchNetworkMode_OutNetworkMode;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_AsShooter_Player_State != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_State = Parms.K2Node_DynamicCast_AsShooter_Player_State;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_GetPlayerName_ReturnValue != nullptr)
		*CallFunc_GetPlayerName_ReturnValue = std::move(Parms.CallFunc_GetPlayerName_ReturnValue);

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPSupportUseOntoItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               IsValid                                                          (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate)
// TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C>K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_IGet_Max_Ammo_RetVal                                    (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue_1                         (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)

bool UPrimalItemResource_Element_C::BPSupportUseOntoItem(class UPrimalItem* DestinationItem, TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C>* K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, int32* CallFunc_IGet_Max_Ammo_RetVal, int32* CallFunc_GetWeaponClipAmmo_ReturnValue, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess_1, int32* CallFunc_GetWeaponClipAmmo_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Element_C", "BPSupportUseOntoItem");

	Params::UPrimalItemResource_Element_C_BPSupportUseOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IGet_Max_Ammo_RetVal != nullptr)
		*CallFunc_IGet_Max_Ammo_RetVal = Parms.CallFunc_IGet_Max_Ammo_RetVal;

	if (CallFunc_GetWeaponClipAmmo_ReturnValue != nullptr)
		*CallFunc_GetWeaponClipAmmo_ReturnValue = Parms.CallFunc_GetWeaponClipAmmo_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_GetWeaponClipAmmo_ReturnValue_1 != nullptr)
		*CallFunc_GetWeaponClipAmmo_ReturnValue_1 = Parms.CallFunc_GetWeaponClipAmmo_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPUsedOntoItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              AdditionalData                                                   (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C>K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

void UPrimalItemResource_Element_C::BPUsedOntoItem(class UPrimalItem* DestinationItem, int32 AdditionalData, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess, TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C>* K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface, bool* K2Node_DynamicCast_bSuccess_1, bool CallFunc_DoesImplementInterface_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Element_C", "BPUsedOntoItem");

	Params::UPrimalItemResource_Element_C_BPUsedOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.AdditionalData = AdditionalData;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

}

}


