#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C
// (None)

class UClass* UBP_VFX_Spawn_Footprint_AnimNotify_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VFX_Spawn_Footprint_AnimNotify_C");

	return Clss;
}


// BP_VFX_Spawn_Footprint_AnimNotify_C BP_VFX_Spawn_Footprint_AnimNotify.Default__BP_VFX_Spawn_Footprint_AnimNotify_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VFX_Spawn_Footprint_AnimNotify_C* UBP_VFX_Spawn_Footprint_AnimNotify_C::GetDefaultObj()
{
	static class UBP_VFX_Spawn_Footprint_AnimNotify_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VFX_Spawn_Footprint_AnimNotify_C*>(UBP_VFX_Spawn_Footprint_AnimNotify_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.LR_FB Offset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                     Front_Offset                                                     (BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     Back_Offset                                                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     Offset                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
// double                             CallFunc_BreakVector_X                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Split_LeftS                                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_Split_RightS                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Split_ReturnValue                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Right_ReturnValue                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
// class FString                      CallFunc_Left_ReturnValue                                        (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_1                       (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp)

struct FVector UBP_VFX_Spawn_Footprint_AnimNotify_C::LR_FB_Offset(const struct FVector& Back_Offset, class FString* CallFunc_Split_LeftS, class FString* CallFunc_Split_RightS, bool* CallFunc_Split_ReturnValue, class FString* CallFunc_Right_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class FString* CallFunc_Left_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "LR_FB Offset");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_LR_FB_Offset_Params Parms{};

	Parms.Back_Offset = Back_Offset;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Split_LeftS != nullptr)
		*CallFunc_Split_LeftS = std::move(Parms.CallFunc_Split_LeftS);

	if (CallFunc_Split_RightS != nullptr)
		*CallFunc_Split_RightS = std::move(Parms.CallFunc_Split_RightS);

	if (CallFunc_Split_ReturnValue != nullptr)
		*CallFunc_Split_ReturnValue = Parms.CallFunc_Split_ReturnValue;

	if (CallFunc_Right_ReturnValue != nullptr)
		*CallFunc_Right_ReturnValue = std::move(Parms.CallFunc_Right_ReturnValue);

	if (CallFunc_Left_ReturnValue != nullptr)
		*CallFunc_Left_ReturnValue = std::move(Parms.CallFunc_Left_ReturnValue);

	return Parms.ReturnValue;

}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               Condition                                                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               Condition2                                                       (Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UBP_VFX_Spawn_Footprint_AnimNotify_C::NewFunction_0(bool* Condition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "NewFunction_0");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_NewFunction_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Condition != nullptr)
		*Condition = Parms.Condition;

	return Parms.ReturnValue;

}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Do Trace
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      SK_Mesh_Comp                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class AActor*                      InputPin                                                         (ExportObject, EditFixedSize, OutParm, ZeroConstructor)
// double                             BabyScale                                                        (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               IsPlayer                                                         (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// double                             FootPrintSize                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               Hit_Bool                                                         (EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FHitResult                  OutHit                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UMaterialInterface*          FootPrintMaterialBack                                            (BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UMaterialInterface*          FootPrintMaterialFront                                           (BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UMaterialInterface*          MI_Back                                                          (ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UMaterialInterface*          MI_Front                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     Back_Offset                                                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     Front_Offset                                                     (BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             Size                                                             (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class ADino_Character_BP_C*        K2Node_DynamicCast_AsDino_Character_BP                           (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UDinoSettings_Base_C*        K2Node_DynamicCast_AsDino_Settings_Base                          (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// TArray<class AActor*>              Temp_object_Variable                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_LR_FB_Offset_Offset                                     (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_1                       (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FMatrix                     CallFunc_Conv_TransformToMatrix_ReturnValue                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector4                    CallFunc_Matrix_TransformVector_ReturnValue                      (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_2                     (ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_Conv_Vector4ToVector_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_GetSocketBoneName_ReturnValue                           (Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (BlueprintVisible, Net, Parm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location                                 (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (BlueprintVisible, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_4                          (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)

struct FVector UBP_VFX_Spawn_Footprint_AnimNotify_C::Do_Trace(class AActor** InputPin, const struct FHitResult& OutHit, const struct FVector& Back_Offset, bool* K2Node_DynamicCast_bSuccess, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_IsValid_ReturnValue, class UPrimalItem** CallFunc_GetEquippedItemOfType_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* K2Node_DynamicCast_bSuccess_2, struct FVector* CallFunc_GetForwardVector_ReturnValue, TArray<class AActor*>* Temp_object_Variable, struct FVector* CallFunc_LR_FB_Offset_Offset, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FMatrix& CallFunc_Conv_TransformToMatrix_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, struct FVector4* CallFunc_Matrix_TransformVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Conv_Vector4ToVector_ReturnValue, class FName* CallFunc_GetSocketBoneName_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, struct FVector* CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, struct FHitResult* CallFunc_LineTraceSingle_OutHit, bool* CallFunc_LineTraceSingle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "Do Trace");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_Do_Trace_Params Parms{};

	Parms.OutHit = OutHit;
	Parms.Back_Offset = Back_Offset;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_TransformToMatrix_ReturnValue = CallFunc_Conv_TransformToMatrix_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_2 = CallFunc_Multiply_VectorVector_ReturnValue_2;
	Parms.CallFunc_Conv_Vector4ToVector_ReturnValue = CallFunc_Conv_Vector4ToVector_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;

	UObject::ProcessEvent(Func, &Parms);

	if (InputPin != nullptr)
		*InputPin = Parms.InputPin;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetEquippedItemOfType_ReturnValue != nullptr)
		*CallFunc_GetEquippedItemOfType_ReturnValue = Parms.CallFunc_GetEquippedItemOfType_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_GetForwardVector_ReturnValue != nullptr)
		*CallFunc_GetForwardVector_ReturnValue = std::move(Parms.CallFunc_GetForwardVector_ReturnValue);

	if (Temp_object_Variable != nullptr)
		*Temp_object_Variable = std::move(Parms.Temp_object_Variable);

	if (CallFunc_LR_FB_Offset_Offset != nullptr)
		*CallFunc_LR_FB_Offset_Offset = std::move(Parms.CallFunc_LR_FB_Offset_Offset);

	if (CallFunc_Matrix_TransformVector_ReturnValue != nullptr)
		*CallFunc_Matrix_TransformVector_ReturnValue = std::move(Parms.CallFunc_Matrix_TransformVector_ReturnValue);

	if (CallFunc_GetSocketBoneName_ReturnValue != nullptr)
		*CallFunc_GetSocketBoneName_ReturnValue = Parms.CallFunc_GetSocketBoneName_ReturnValue;

	if (CallFunc_BreakTransform_Location != nullptr)
		*CallFunc_BreakTransform_Location = std::move(Parms.CallFunc_BreakTransform_Location);

	if (CallFunc_LineTraceSingle_OutHit != nullptr)
		*CallFunc_LineTraceSingle_OutHit = std::move(Parms.CallFunc_LineTraceSingle_OutHit);

	if (CallFunc_LineTraceSingle_ReturnValue != nullptr)
		*CallFunc_LineTraceSingle_ReturnValue = Parms.CallFunc_LineTraceSingle_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Spawn_Sound
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*             Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// double                             Size                                                             (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
// struct FAudio_Ground_Collection    StepSounds                                                       (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               IsPlayer                                                         (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_1                        (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_2                        (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FClamp_ReturnValue_1                                    (Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue_2                                    (Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_3                        (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_4                        (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_FClamp_ReturnValue_3                                    (Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference, NonTransactional)
// double                             CallFunc_FClamp_ReturnValue_4                                    (Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference, RepNotify, NonTransactional)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_5                        (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FClamp_ReturnValue_5                                    (Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference, Interp, NonTransactional)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_2                        (Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_3                        (Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_4                        (Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, NonTransactional)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_5                        (Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp, NonTransactional)

class UAudioComponent* UBP_VFX_Spawn_Footprint_AnimNotify_C::Spawn_Sound(class USceneComponent** Actor, struct FVector* Location, class AActor** CallFunc_GetOwner_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, double* CallFunc_FClamp_ReturnValue, double* CallFunc_FClamp_ReturnValue_1, double* CallFunc_FClamp_ReturnValue_2, double* CallFunc_FClamp_ReturnValue_3, double* CallFunc_FClamp_ReturnValue_4, double* CallFunc_FClamp_ReturnValue_5, struct FVector* CallFunc_K2_GetComponentLocation_ReturnValue, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "Spawn_Sound");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_Spawn_Sound_Params Parms{};

	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (Actor != nullptr)
		*Actor = Parms.Actor;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (CallFunc_FClamp_ReturnValue_1 != nullptr)
		*CallFunc_FClamp_ReturnValue_1 = Parms.CallFunc_FClamp_ReturnValue_1;

	if (CallFunc_FClamp_ReturnValue_2 != nullptr)
		*CallFunc_FClamp_ReturnValue_2 = Parms.CallFunc_FClamp_ReturnValue_2;

	if (CallFunc_FClamp_ReturnValue_3 != nullptr)
		*CallFunc_FClamp_ReturnValue_3 = Parms.CallFunc_FClamp_ReturnValue_3;

	if (CallFunc_FClamp_ReturnValue_4 != nullptr)
		*CallFunc_FClamp_ReturnValue_4 = Parms.CallFunc_FClamp_ReturnValue_4;

	if (CallFunc_FClamp_ReturnValue_5 != nullptr)
		*CallFunc_FClamp_ReturnValue_5 = Parms.CallFunc_FClamp_ReturnValue_5;

	if (CallFunc_K2_GetComponentLocation_ReturnValue != nullptr)
		*CallFunc_K2_GetComponentLocation_ReturnValue = std::move(Parms.CallFunc_K2_GetComponentLocation_ReturnValue);

	if (CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast != nullptr)
		*CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast = Parms.CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast;

	if (CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1 != nullptr)
		*CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1 = Parms.CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1;

	if (CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2 != nullptr)
		*CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2 = Parms.CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2;

	if (CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3 != nullptr)
		*CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3 = Parms.CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3;

	if (CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4 != nullptr)
		*CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4 = Parms.CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4;

	if (CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5 != nullptr)
		*CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5 = Parms.CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5;

	return Parms.ReturnValue;

}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Spawn_Anim_Notify
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:

void UBP_VFX_Spawn_Footprint_AnimNotify_C::Spawn_Anim_Notify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "Spawn_Anim_Notify");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Received_NotifyBegin
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)
// float                              TotalDuration                                                    (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FAnimNotifyEventReference   EventReference                                                   (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               IsPlayer                                                         (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UMaterialInterface*          Material_Front                                                   (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UMaterialInterface*          Material_Back                                                    (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             Foot_Print_Size                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class AActor*                      Owner                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
// struct FVector                     Direction                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// double                             BabyScale                                                        (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FAudio_Ground_Collection    StepSounds                                                       (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             Total_Amount_Mult                                                (Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             Foot_Velocity_Mult                                               (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UCurveFloat*                 Curve_foot_vel                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UCurveFloat*                 Curve_foot_size                                                  (ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             Foot_Size_Mult                                                   (ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             Thatch                                                           (Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             Sand                                                             (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Pebbles                                                          (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             Leaves                                                           (BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Grass                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Friction                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             Dust                                                             (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, InstancedReference)
// double                             Bounce                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class USkeletalMeshComponent*      SK_Mesh_Comp                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FColor                      Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// class UNiagaraComponent*           Niagara_Component                                                (Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      NewLocalVar                                                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               DebugPrint_                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Contains_ReturnValue                                    (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_TimeSince_ReturnValue                                   (Edit, Net, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsShooterCharacter_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              CallFunc_TimeSince_ReturnValue_1                                 (Edit, Net, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_Contains_ReturnValue_1                                  (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue   (Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class AWorldSettings*              CallFunc_K2_GetWorldSettings_ReturnValue                         (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class APrimalWorldSettings*        K2Node_DynamicCast_AsPrimal_World_Settings                       (Edit, ExportObject, BlueprintReadOnly, Net, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FRotator                    CallFunc_GetSocketRotation_ReturnValue                           (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// TArray<class UNiagaraComponent*>   CallFunc_GetComponentsByTag_ReturnValue                          (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// class UNiagaraComponent*           CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_CanSpawnGloballyLimitedParticle_ReturnValue             (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class ADino_Character_BP_C*        K2Node_DynamicCast_AsDino_Character_BP                           (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Lerp_ReturnValue                                        (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsConsoleBuild_ReturnValue                              (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Split_LeftS                                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_Split_RightS                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Split_ReturnValue                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_Right_ReturnValue                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_Left_ReturnValue                                        (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_1                       (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_GetSocketRotation_ReturnValue_1                         (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue_1              (Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Do_Trace_FootPrintSize                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Do_Trace_Hit_Bool                                       (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FHitResult                  CallFunc_Do_Trace_OutHit                                         (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UMaterialInterface*          CallFunc_Do_Trace_FootPrintMaterialBack                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UMaterialInterface*          CallFunc_Do_Trace_FootPrintMaterialFront                         (Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
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
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (Edit, BlueprintReadOnly, ZeroConstructor, Config, EditConst, SubobjectReference)
// struct FStruct_Ground_Attributes   CallFunc_GetDataTableRowFromName_OutRow                          (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (ExportObject, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UBP_VFX_Spawn_Footprint_AnimNotify_C::Received_NotifyBegin(class UAnimSequenceBase* Animation, class AActor** Owner, struct FVector* Direction, double* Sand, double* Leaves, double Grass, double* Friction, double Bounce, struct FColor* Color, class FString* CallFunc_GetDisplayName_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, bool CallFunc_Contains_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsShooterCharacter_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, struct FVector* CallFunc_K2_GetComponentLocation_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue_1, float* CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, class AWorldSettings** CallFunc_K2_GetWorldSettings_ReturnValue, class APrimalWorldSettings* K2Node_DynamicCast_AsPrimal_World_Settings, bool* K2Node_DynamicCast_bSuccess_2, struct FRotator* CallFunc_GetSocketRotation_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_3, class UNiagaraComponent** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_CanSpawnGloballyLimitedParticle_ReturnValue, bool* K2Node_DynamicCast_bSuccess_4, double CallFunc_Lerp_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_IsConsoleBuild_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class FString* CallFunc_Split_LeftS, class FString* CallFunc_Split_RightS, bool* CallFunc_Split_ReturnValue, class FString* CallFunc_Right_ReturnValue, class FString* CallFunc_Left_ReturnValue, struct FRotator* CallFunc_GetSocketRotation_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, double CallFunc_Do_Trace_FootPrintSize, bool* CallFunc_Do_Trace_Hit_Bool, struct FHitResult* CallFunc_Do_Trace_OutHit, class UMaterialInterface* CallFunc_Do_Trace_FootPrintMaterialBack, class UMaterialInterface* CallFunc_Do_Trace_FootPrintMaterialFront, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float* CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class FString* CallFunc_GetDisplayName_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, struct FStruct_Ground_Attributes* CallFunc_GetDataTableRowFromName_OutRow, bool* CallFunc_GetDataTableRowFromName_ReturnValue, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double* CallFunc_Less_DoubleDouble_A_ImplicitCast, double* CallFunc_Lerp_A_ImplicitCast, double* CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "Received_NotifyBegin");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_Received_NotifyBegin_Params Parms{};

	Parms.Animation = Animation;
	Parms.Grass = Grass;
	Parms.Bounce = Bounce;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.CallFunc_Contains_ReturnValue_1 = CallFunc_Contains_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_World_Settings = K2Node_DynamicCast_AsPrimal_World_Settings;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.CallFunc_CanSpawnGloballyLimitedParticle_ReturnValue = CallFunc_CanSpawnGloballyLimitedParticle_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;
	Parms.CallFunc_Do_Trace_FootPrintSize = CallFunc_Do_Trace_FootPrintSize;
	Parms.CallFunc_Do_Trace_FootPrintMaterialBack = CallFunc_Do_Trace_FootPrintMaterialBack;
	Parms.CallFunc_Do_Trace_FootPrintMaterialFront = CallFunc_Do_Trace_FootPrintMaterialFront;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast = CallFunc_Multiply_DoubleFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Owner != nullptr)
		*Owner = Parms.Owner;

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);

	if (Sand != nullptr)
		*Sand = Parms.Sand;

	if (Leaves != nullptr)
		*Leaves = Parms.Leaves;

	if (Friction != nullptr)
		*Friction = Parms.Friction;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (CallFunc_GetDisplayName_ReturnValue != nullptr)
		*CallFunc_GetDisplayName_ReturnValue = std::move(Parms.CallFunc_GetDisplayName_ReturnValue);

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsShooterCharacter_ReturnValue != nullptr)
		*CallFunc_IsShooterCharacter_ReturnValue = Parms.CallFunc_IsShooterCharacter_ReturnValue;

	if (CallFunc_K2_GetComponentLocation_ReturnValue != nullptr)
		*CallFunc_K2_GetComponentLocation_ReturnValue = std::move(Parms.CallFunc_K2_GetComponentLocation_ReturnValue);

	if (CallFunc_GetOwner_ReturnValue_1 != nullptr)
		*CallFunc_GetOwner_ReturnValue_1 = Parms.CallFunc_GetOwner_ReturnValue_1;

	if (CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue != nullptr)
		*CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue = Parms.CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_K2_GetWorldSettings_ReturnValue != nullptr)
		*CallFunc_K2_GetWorldSettings_ReturnValue = Parms.CallFunc_K2_GetWorldSettings_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_GetSocketRotation_ReturnValue != nullptr)
		*CallFunc_GetSocketRotation_ReturnValue = std::move(Parms.CallFunc_GetSocketRotation_ReturnValue);

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_4 != nullptr)
		*K2Node_DynamicCast_bSuccess_4 = Parms.K2Node_DynamicCast_bSuccess_4;

	if (CallFunc_IsConsoleBuild_ReturnValue != nullptr)
		*CallFunc_IsConsoleBuild_ReturnValue = Parms.CallFunc_IsConsoleBuild_ReturnValue;

	if (CallFunc_Split_LeftS != nullptr)
		*CallFunc_Split_LeftS = std::move(Parms.CallFunc_Split_LeftS);

	if (CallFunc_Split_RightS != nullptr)
		*CallFunc_Split_RightS = std::move(Parms.CallFunc_Split_RightS);

	if (CallFunc_Split_ReturnValue != nullptr)
		*CallFunc_Split_ReturnValue = Parms.CallFunc_Split_ReturnValue;

	if (CallFunc_Right_ReturnValue != nullptr)
		*CallFunc_Right_ReturnValue = std::move(Parms.CallFunc_Right_ReturnValue);

	if (CallFunc_Left_ReturnValue != nullptr)
		*CallFunc_Left_ReturnValue = std::move(Parms.CallFunc_Left_ReturnValue);

	if (CallFunc_GetSocketRotation_ReturnValue_1 != nullptr)
		*CallFunc_GetSocketRotation_ReturnValue_1 = std::move(Parms.CallFunc_GetSocketRotation_ReturnValue_1);

	if (CallFunc_Do_Trace_Hit_Bool != nullptr)
		*CallFunc_Do_Trace_Hit_Bool = Parms.CallFunc_Do_Trace_Hit_Bool;

	if (CallFunc_Do_Trace_OutHit != nullptr)
		*CallFunc_Do_Trace_OutHit = std::move(Parms.CallFunc_Do_Trace_OutHit);

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

	if (CallFunc_GetDisplayName_ReturnValue_1 != nullptr)
		*CallFunc_GetDisplayName_ReturnValue_1 = std::move(Parms.CallFunc_GetDisplayName_ReturnValue_1);

	if (CallFunc_GetDataTableRowFromName_OutRow != nullptr)
		*CallFunc_GetDataTableRowFromName_OutRow = std::move(Parms.CallFunc_GetDataTableRowFromName_OutRow);

	if (CallFunc_GetDataTableRowFromName_ReturnValue != nullptr)
		*CallFunc_GetDataTableRowFromName_ReturnValue = Parms.CallFunc_GetDataTableRowFromName_ReturnValue;

	if (CallFunc_Greater_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Greater_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	if (CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 != nullptr)
		*CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;

	if (CallFunc_Less_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Less_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast;

	if (CallFunc_Lerp_A_ImplicitCast != nullptr)
		*CallFunc_Lerp_A_ImplicitCast = Parms.CallFunc_Lerp_A_ImplicitCast;

	if (CallFunc_Lerp_Alpha_ImplicitCast != nullptr)
		*CallFunc_Lerp_Alpha_ImplicitCast = Parms.CallFunc_Lerp_Alpha_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Received_NotifyEnd
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)
// struct FAnimNotifyEventReference   EventReference                                                   (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBP_VFX_Spawn_Footprint_AnimNotify_C::Received_NotifyEnd(class UAnimSequenceBase* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "Received_NotifyEnd");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_Received_NotifyEnd_Params Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class FString UBP_VFX_Spawn_Footprint_AnimNotify_C::GetNotifyName(const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "GetNotifyName");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_GetNotifyName_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Received_NotifyTick
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)
// float                              FrameDeltaTime                                                   (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FAnimNotifyEventReference   EventReference                                                   (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class USkeletalMeshComponent*      Mesh_Comp                                                        (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             Line_End_Distance                                                (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

double UBP_VFX_Spawn_Footprint_AnimNotify_C::Received_NotifyTick(class UAnimSequenceBase* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "Received_NotifyTick");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_Received_NotifyTick_Params Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.NewEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_VFX_Spawn_Footprint_AnimNotify_C::NewEventDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "NewEventDispatcher__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


