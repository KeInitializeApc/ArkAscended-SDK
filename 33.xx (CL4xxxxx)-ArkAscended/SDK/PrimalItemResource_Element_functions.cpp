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
// class AShooterPlayerController*    ForPC                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FName                        CommandName                                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            ExecParams                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchName_CmpSuccess                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetPlayerCharacter_ReturnValue                          (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UPrimalItemResource_Element_C::BPServerHandleItemNetExecCommand(bool K2Node_SwitchName_CmpSuccess, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, class AShooterCharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Element_C", "BPServerHandleItemNetExecCommand");

	Params::UPrimalItemResource_Element_C_BPServerHandleItemNetExecCommand_Params Parms{};

	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItemResource_Element.PrimalItemResource_Element_C.FindShapeshifter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalDinoCharacter*        Shapeshifter                                                     (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               RetMounted                                                       (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Mounted                                                          (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoCharacter*        Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams_1                              (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_BPServerHandleNetExecCommand_ReturnValue                (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (Edit, ConstParm, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<struct FHitResult>          CallFunc_VTraceMultiBP_OutHits                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_VTraceMultiBP_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ExportObject, Net, EditFixedSize, OutParm, Config, SubobjectReference)
// float                              CallFunc_BreakHitResult_Time                                     (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
// float                              CallFunc_BreakHitResult_Distance                                 (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (Edit, ConstParm, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (BlueprintVisible, ExportObject, ZeroConstructor, Config, SubobjectReference)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (BlueprintVisible, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ExportObject, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
// int32                              CallFunc_BreakHitResult_HitItem                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, SubobjectReference)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (BlueprintVisible, Parm, ZeroConstructor, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BPServerHandleNetExecCommand_ReturnValue_1              (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsAlive_ReturnValue                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsAlliedWithOtherTeam_ReturnValue                       (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BPIsTamed_ReturnValue                                   (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

double UPrimalItemResource_Element_C::FindShapeshifter(class APrimalDinoCharacter** Shapeshifter, bool* RetMounted, bool* Mounted, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool* CallFunc_BPServerHandleNetExecCommand_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool* CallFunc_IsValid_ReturnValue, const TArray<struct FHitResult>& CallFunc_VTraceMultiBP_OutHits, bool CallFunc_VTraceMultiBP_ReturnValue, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float* CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool* CallFunc_BPServerHandleNetExecCommand_ReturnValue_1, bool CallFunc_IsAlliedWithOtherTeam_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Element_C", "FindShapeshifter");

	Params::UPrimalItemResource_Element_C_FindShapeshifter_Params Parms{};

	Parms.K2Node_MakeStruct_BPNetExecParams = K2Node_MakeStruct_BPNetExecParams;
	Parms.K2Node_MakeStruct_BPNetExecParams_1 = K2Node_MakeStruct_BPNetExecParams_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_VTraceMultiBP_OutHits = CallFunc_VTraceMultiBP_OutHits;
	Parms.CallFunc_VTraceMultiBP_ReturnValue = CallFunc_VTraceMultiBP_ReturnValue;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsAlliedWithOtherTeam_ReturnValue = CallFunc_IsAlliedWithOtherTeam_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Shapeshifter != nullptr)
		*Shapeshifter = Parms.Shapeshifter;

	if (RetMounted != nullptr)
		*RetMounted = Parms.RetMounted;

	if (Mounted != nullptr)
		*Mounted = Parms.Mounted;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (CallFunc_BPServerHandleNetExecCommand_ReturnValue != nullptr)
		*CallFunc_BPServerHandleNetExecCommand_ReturnValue = Parms.CallFunc_BPServerHandleNetExecCommand_ReturnValue;

	if (CallFunc_Multiply_VectorFloat_ReturnValue != nullptr)
		*CallFunc_Multiply_VectorFloat_ReturnValue = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

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

	if (CallFunc_BreakHitResult_HitItem != nullptr)
		*CallFunc_BreakHitResult_HitItem = Parms.CallFunc_BreakHitResult_HitItem;

	if (CallFunc_BreakHitResult_ElementIndex != nullptr)
		*CallFunc_BreakHitResult_ElementIndex = Parms.CallFunc_BreakHitResult_ElementIndex;

	if (CallFunc_BreakHitResult_FaceIndex != nullptr)
		*CallFunc_BreakHitResult_FaceIndex = Parms.CallFunc_BreakHitResult_FaceIndex;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (CallFunc_BPServerHandleNetExecCommand_ReturnValue_1 != nullptr)
		*CallFunc_BPServerHandleNetExecCommand_ReturnValue_1 = Parms.CallFunc_BPServerHandleNetExecCommand_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPPreUseItem
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ENetModeBP              CallFunc_SwitchNetworkMode_OutNetworkMode                        (Edit, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BPServerHandleNetExecCommand_ReturnValue                (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams_1                              (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               CallFunc_BPServerHandleNetExecCommand_ReturnValue_1              (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)

bool UPrimalItemResource_Element_C::BPPreUseItem(const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, bool* CallFunc_IsValid_ReturnValue, enum class ENetModeBP CallFunc_SwitchNetworkMode_OutNetworkMode, const class FString& CallFunc_GetPlayerName_ReturnValue, class APlayerController* CallFunc_GetOwnerController_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool* CallFunc_BPServerHandleNetExecCommand_ReturnValue, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams_1, bool* CallFunc_BPServerHandleNetExecCommand_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Element_C", "BPPreUseItem");

	Params::UPrimalItemResource_Element_C_BPPreUseItem_Params Parms{};

	Parms.K2Node_MakeStruct_BPNetExecParams = K2Node_MakeStruct_BPNetExecParams;
	Parms.CallFunc_SwitchNetworkMode_OutNetworkMode = CallFunc_SwitchNetworkMode_OutNetworkMode;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_GetOwnerController_ReturnValue = CallFunc_GetOwnerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.K2Node_MakeStruct_BPNetExecParams_1 = K2Node_MakeStruct_BPNetExecParams_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_BPServerHandleNetExecCommand_ReturnValue != nullptr)
		*CallFunc_BPServerHandleNetExecCommand_ReturnValue = Parms.CallFunc_BPServerHandleNetExecCommand_ReturnValue;

	if (CallFunc_BPServerHandleNetExecCommand_ReturnValue_1 != nullptr)
		*CallFunc_BPServerHandleNetExecCommand_ReturnValue_1 = Parms.CallFunc_BPServerHandleNetExecCommand_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPCanUse
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIgnoreCooldown                                                  (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class APrimalCharacter*            Res                                                              (BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               Ret                                                              (ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ENetModeBP              CallFunc_SwitchNetworkMode_OutNetworkMode                        (Edit, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference)
// class APrimalDinoCharacter*        CallFunc_FindShapeshifter_Shapeshifter                           (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_FindShapeshifter_RetMounted                             (Edit, Net, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool UPrimalItemResource_Element_C::BPCanUse(bool bIgnoreCooldown, bool ReturnValue, bool* Ret, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class APlayerController* CallFunc_GetOwnerController_ReturnValue, enum class ENetModeBP CallFunc_SwitchNetworkMode_OutNetworkMode, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, const class FString& CallFunc_GetPlayerName_ReturnValue, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, class APrimalDinoCharacter* CallFunc_FindShapeshifter_Shapeshifter, bool CallFunc_FindShapeshifter_RetMounted, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Element_C", "BPCanUse");

	Params::UPrimalItemResource_Element_C_BPCanUse_Params Parms{};

	Parms.bIgnoreCooldown = bIgnoreCooldown;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetOwnerController_ReturnValue = CallFunc_GetOwnerController_ReturnValue;
	Parms.CallFunc_SwitchNetworkMode_OutNetworkMode = CallFunc_SwitchNetworkMode_OutNetworkMode;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.K2Node_MakeStruct_BPNetExecParams = K2Node_MakeStruct_BPNetExecParams;
	Parms.CallFunc_FindShapeshifter_Shapeshifter = CallFunc_FindShapeshifter_Shapeshifter;
	Parms.CallFunc_FindShapeshifter_RetMounted = CallFunc_FindShapeshifter_RetMounted;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_DynamicCast_AsShooter_Player_State != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_State = Parms.K2Node_DynamicCast_AsShooter_Player_State;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPSupportUseOntoItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               IsValid                                                          (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate)
// TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C>K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface(Edit, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_IGet_Max_Ammo_RetVal                                    (Edit, ConstParm, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)

bool UPrimalItemResource_Element_C::BPSupportUseOntoItem(class UPrimalItem* DestinationItem, bool ReturnValue, TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C>* K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface, int32 CallFunc_IGet_Max_Ammo_RetVal, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, int32 CallFunc_GetWeaponClipAmmo_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Element_C", "BPSupportUseOntoItem");

	Params::UPrimalItemResource_Element_C_BPSupportUseOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_IGet_Max_Ammo_RetVal = CallFunc_IGet_Max_Ammo_RetVal;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue = CallFunc_GetWeaponClipAmmo_ReturnValue;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue_1 = CallFunc_GetWeaponClipAmmo_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPUsedOntoItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              AdditionalData                                                   (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C>K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface(Edit, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UPrimalItemResource_Element_C::BPUsedOntoItem(class UPrimalItem* DestinationItem, int32* AdditionalData, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C>* K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Element_C", "BPUsedOntoItem");

	Params::UPrimalItemResource_Element_C_BPUsedOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;

	UObject::ProcessEvent(Func, &Parms);

	if (AdditionalData != nullptr)
		*AdditionalData = Parms.AdditionalData;

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface;

	return Parms.ReturnValue;

}

}


