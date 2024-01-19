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
// struct FVector                     Front_Offset                                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     Back_Offset                                                      (ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     Offset                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
// double                             CallFunc_BreakVector_X                                           (BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Split_LeftS                                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Split_RightS                                            (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Split_ReturnValue                                       (Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ConstParm, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Right_ReturnValue                                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Left_ReturnValue                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_1                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ConstParm, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)

struct FVector UBP_VFX_Spawn_Footprint_AnimNotify_C::LR_FB_Offset(const struct FVector& Front_Offset, struct FVector* Back_Offset, class FString* CallFunc_Right_ReturnValue, class FString* CallFunc_Left_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "LR_FB Offset");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_LR_FB_Offset_Params Parms{};

	Parms.Front_Offset = Front_Offset;

	UObject::ProcessEvent(Func, &Parms);

	if (Back_Offset != nullptr)
		*Back_Offset = std::move(Parms.Back_Offset);

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
// bool                               Condition2                                                       (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

void UBP_VFX_Spawn_Footprint_AnimNotify_C::NewFunction_0(bool* Condition, bool Condition2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "NewFunction_0");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_NewFunction_0_Params Parms{};

	Parms.Condition2 = Condition2;

	UObject::ProcessEvent(Func, &Parms);

	if (Condition != nullptr)
		*Condition = Parms.Condition;

}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Do Trace
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      SK_Mesh_Comp                                                     (Edit, ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AActor*                      InputPin                                                         (ExportObject, EditFixedSize, OutParm, ZeroConstructor)
// double                             BabyScale                                                        (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               IsPlayer                                                         (ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// double                             FootPrintSize                                                    (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Hit_Bool                                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FHitResult                  OutHit                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UMaterialInterface*          FootPrintMaterialBack                                            (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UMaterialInterface*          FootPrintMaterialFront                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UMaterialInterface*          MI_Back                                                          (ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UMaterialInterface*          MI_Front                                                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     Back_Offset                                                      (ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     Front_Offset                                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             Size                                                             (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class ADino_Character_BP_C*        K2Node_DynamicCast_AsDino_Character_BP                           (Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UDinoSettings_Base_C*        K2Node_DynamicCast_AsDino_Settings_Base                          (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (Edit, ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// TArray<class AActor*>              Temp_object_Variable                                             (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_LR_FB_Offset_Offset                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_1                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FMatrix                     CallFunc_Conv_TransformToMatrix_ReturnValue                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector4                    CallFunc_Matrix_TransformVector_ReturnValue                      (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_2                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_Conv_Vector4ToVector_ReturnValue                        (Edit, ConstParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_GetSocketBoneName_ReturnValue                           (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_4                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UBP_VFX_Spawn_Footprint_AnimNotify_C::Do_Trace(class USkeletalMeshComponent* SK_Mesh_Comp, class AActor** InputPin, double BabyScale, double FootPrintSize, bool* Hit_Bool, class UMaterialInterface* FootPrintMaterialBack, class UMaterialInterface* FootPrintMaterialFront, class UMaterialInterface** MI_Back, class UMaterialInterface** MI_Front, struct FVector* Back_Offset, const struct FVector& Front_Offset, class UDinoSettings_Base_C** K2Node_DynamicCast_AsDino_Settings_Base, struct FRotator* CallFunc_Conv_VectorToRotator_ReturnValue, struct FVector* CallFunc_LR_FB_Offset_Offset, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class FName* CallFunc_Conv_StringToName_ReturnValue, struct FVector* CallFunc_BreakTransform_Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "Do Trace");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_Do_Trace_Params Parms{};

	Parms.SK_Mesh_Comp = SK_Mesh_Comp;
	Parms.BabyScale = BabyScale;
	Parms.FootPrintSize = FootPrintSize;
	Parms.FootPrintMaterialBack = FootPrintMaterialBack;
	Parms.FootPrintMaterialFront = FootPrintMaterialFront;
	Parms.Front_Offset = Front_Offset;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InputPin != nullptr)
		*InputPin = Parms.InputPin;

	if (Hit_Bool != nullptr)
		*Hit_Bool = Parms.Hit_Bool;

	if (MI_Back != nullptr)
		*MI_Back = Parms.MI_Back;

	if (MI_Front != nullptr)
		*MI_Front = Parms.MI_Front;

	if (Back_Offset != nullptr)
		*Back_Offset = std::move(Parms.Back_Offset);

	if (K2Node_DynamicCast_AsDino_Settings_Base != nullptr)
		*K2Node_DynamicCast_AsDino_Settings_Base = Parms.K2Node_DynamicCast_AsDino_Settings_Base;

	if (CallFunc_Conv_VectorToRotator_ReturnValue != nullptr)
		*CallFunc_Conv_VectorToRotator_ReturnValue = std::move(Parms.CallFunc_Conv_VectorToRotator_ReturnValue);

	if (CallFunc_LR_FB_Offset_Offset != nullptr)
		*CallFunc_LR_FB_Offset_Offset = std::move(Parms.CallFunc_LR_FB_Offset_Offset);

	if (CallFunc_Conv_StringToName_ReturnValue != nullptr)
		*CallFunc_Conv_StringToName_ReturnValue = Parms.CallFunc_Conv_StringToName_ReturnValue;

	if (CallFunc_BreakTransform_Scale != nullptr)
		*CallFunc_BreakTransform_Scale = std::move(Parms.CallFunc_BreakTransform_Scale);

	return Parms.ReturnValue;

}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Spawn_Sound
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*             Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// double                             Size                                                             (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
// struct FAudio_Ground_Collection    StepSounds                                                       (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               IsPlayer                                                         (ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_1                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_2                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FClamp_ReturnValue_1                                    (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue_2                                    (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_3                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_4                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_FClamp_ReturnValue_3                                    (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_FClamp_ReturnValue_4                                    (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_5                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FClamp_ReturnValue_5                                    (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_2                        (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_3                        (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_4                        (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_5                        (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast        (Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1      (Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2      (Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3      (Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4      (Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5      (Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)

float UBP_VFX_Spawn_Footprint_AnimNotify_C::Spawn_Sound(class USceneComponent** Actor, struct FVector* Location, const struct FAudio_Ground_Collection& StepSounds, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool CallFunc_IsLocallyControlled_ReturnValue, double* CallFunc_Divide_DoubleFloat_ReturnValue, double* CallFunc_FClamp_ReturnValue, double* CallFunc_Divide_DoubleFloat_ReturnValue_1, double* CallFunc_Divide_DoubleFloat_ReturnValue_2, double* CallFunc_FClamp_ReturnValue_1, double* CallFunc_FClamp_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double* CallFunc_Divide_DoubleFloat_ReturnValue_3, double* CallFunc_Divide_DoubleFloat_ReturnValue_4, double* CallFunc_FClamp_ReturnValue_3, double* CallFunc_FClamp_ReturnValue_4, double* CallFunc_Divide_DoubleFloat_ReturnValue_5, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, double* CallFunc_FClamp_ReturnValue_5, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "Spawn_Sound");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_Spawn_Sound_Params Parms{};

	Parms.StepSounds = StepSounds;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_3 = CallFunc_Greater_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Actor != nullptr)
		*Actor = Parms.Actor;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (CallFunc_Divide_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Divide_DoubleFloat_ReturnValue = Parms.CallFunc_Divide_DoubleFloat_ReturnValue;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (CallFunc_Divide_DoubleFloat_ReturnValue_1 != nullptr)
		*CallFunc_Divide_DoubleFloat_ReturnValue_1 = Parms.CallFunc_Divide_DoubleFloat_ReturnValue_1;

	if (CallFunc_Divide_DoubleFloat_ReturnValue_2 != nullptr)
		*CallFunc_Divide_DoubleFloat_ReturnValue_2 = Parms.CallFunc_Divide_DoubleFloat_ReturnValue_2;

	if (CallFunc_FClamp_ReturnValue_1 != nullptr)
		*CallFunc_FClamp_ReturnValue_1 = Parms.CallFunc_FClamp_ReturnValue_1;

	if (CallFunc_FClamp_ReturnValue_2 != nullptr)
		*CallFunc_FClamp_ReturnValue_2 = Parms.CallFunc_FClamp_ReturnValue_2;

	if (CallFunc_Divide_DoubleFloat_ReturnValue_3 != nullptr)
		*CallFunc_Divide_DoubleFloat_ReturnValue_3 = Parms.CallFunc_Divide_DoubleFloat_ReturnValue_3;

	if (CallFunc_Divide_DoubleFloat_ReturnValue_4 != nullptr)
		*CallFunc_Divide_DoubleFloat_ReturnValue_4 = Parms.CallFunc_Divide_DoubleFloat_ReturnValue_4;

	if (CallFunc_FClamp_ReturnValue_3 != nullptr)
		*CallFunc_FClamp_ReturnValue_3 = Parms.CallFunc_FClamp_ReturnValue_3;

	if (CallFunc_FClamp_ReturnValue_4 != nullptr)
		*CallFunc_FClamp_ReturnValue_4 = Parms.CallFunc_FClamp_ReturnValue_4;

	if (CallFunc_Divide_DoubleFloat_ReturnValue_5 != nullptr)
		*CallFunc_Divide_DoubleFloat_ReturnValue_5 = Parms.CallFunc_Divide_DoubleFloat_ReturnValue_5;

	if (CallFunc_FClamp_ReturnValue_5 != nullptr)
		*CallFunc_FClamp_ReturnValue_5 = Parms.CallFunc_FClamp_ReturnValue_5;

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
// class USkeletalMeshComponent*      MeshComp                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)
// float                              TotalDuration                                                    (Edit, ConstParm, BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FAnimNotifyEventReference   EventReference                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               IsPlayer                                                         (ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UMaterialInterface*          Material_Front                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UMaterialInterface*          Material_Back                                                    (ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             Foot_Print_Size                                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AActor*                      Owner                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
// struct FVector                     Direction                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             BabyScale                                                        (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FAudio_Ground_Collection    StepSounds                                                       (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             Total_Amount_Mult                                                (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             Foot_Velocity_Mult                                               (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UCurveFloat*                 Curve_foot_vel                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UCurveFloat*                 Curve_foot_size                                                  (Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             Foot_Size_Mult                                                   (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             Thatch                                                           (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             Sand                                                             (Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Pebbles                                                          (Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             Leaves                                                           (ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Grass                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Friction                                                         (Edit, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             Dust                                                             (BlueprintReadOnly, Parm, ZeroConstructor, EditConst, InstancedReference)
// double                             Bounce                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class USkeletalMeshComponent*      SK_Mesh_Comp                                                     (Edit, ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FColor                      Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// class UNiagaraComponent*           Niagara_Component                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      NewLocalVar                                                      (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               DebugPrint_                                                      (ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Contains_ReturnValue                                    (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_TimeSince_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsShooterCharacter_ReturnValue                          (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_TimeSince_ReturnValue_1                                 (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Contains_ReturnValue_1                                  (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue   (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (ConstParm, Transient, DisableEditOnInstance, SubobjectReference)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class AWorldSettings*              CallFunc_K2_GetWorldSettings_ReturnValue                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalWorldSettings*        K2Node_DynamicCast_AsPrimal_World_Settings                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FRotator                    CallFunc_GetSocketRotation_ReturnValue                           (ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// TArray<class UNiagaraComponent*>   CallFunc_GetComponentsByTag_ReturnValue                          (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UNiagaraComponent*           CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_CanSpawnGloballyLimitedParticle_ReturnValue             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class ADino_Character_BP_C*        K2Node_DynamicCast_AsDino_Character_BP                           (Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Lerp_ReturnValue                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsConsoleBuild_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Split_LeftS                                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Split_RightS                                            (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Split_ReturnValue                                       (Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Right_ReturnValue                                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Left_ReturnValue                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_1                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ConstParm, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ConstParm, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_GetSocketRotation_ReturnValue_1                         (ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue_1              (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Do_Trace_FootPrintSize                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Do_Trace_Hit_Bool                                       (Edit, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FHitResult                  CallFunc_Do_Trace_OutHit                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UMaterialInterface*          CallFunc_Do_Trace_FootPrintMaterialBack                          (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UMaterialInterface*          CallFunc_Do_Trace_FootPrintMaterialFront                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ConstParm, Net, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakHitResult_Time                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakHitResult_Distance                                 (ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ConstParm, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BreakHitResult_HitItem                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FStruct_Ground_Attributes   CallFunc_GetDataTableRowFromName_OutRow                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (Edit, ConstParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

float UBP_VFX_Spawn_Footprint_AnimNotify_C::Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase* Animation, float* TotalDuration, struct FAnimNotifyEventReference* EventReference, bool ReturnValue, class UMaterialInterface** Material_Front, class UMaterialInterface** Material_Back, double Foot_Print_Size, class AActor** Owner, double BabyScale, const struct FAudio_Ground_Collection& StepSounds, double Total_Amount_Mult, double Sand, double Leaves, double Grass, double Friction, double Dust, double* Bounce, class USkeletalMeshComponent* SK_Mesh_Comp, struct FColor* Color, class UNiagaraComponent* Niagara_Component, const class FString& NewLocalVar, bool DebugPrint_, bool* CallFunc_Contains_ReturnValue, bool* CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool* CallFunc_Contains_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, double* CallFunc_SelectFloat_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class FName* CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class AWorldSettings** CallFunc_K2_GetWorldSettings_ReturnValue, class APrimalWorldSettings* K2Node_DynamicCast_AsPrimal_World_Settings, struct FRotator* CallFunc_GetSocketRotation_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, const TArray<class UNiagaraComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class UNiagaraComponent* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_CanSpawnGloballyLimitedParticle_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class FString* CallFunc_Right_ReturnValue, class FString* CallFunc_Left_ReturnValue, class FName* CallFunc_Conv_StringToName_ReturnValue_1, struct FVector* CallFunc_GreaterGreater_VectorRotator_ReturnValue, struct FRotator* CallFunc_GetSocketRotation_ReturnValue_1, struct FVector* CallFunc_GreaterGreater_VectorRotator_ReturnValue_1, double* CallFunc_Do_Trace_FootPrintSize, bool* CallFunc_Do_Trace_Hit_Bool, struct FHitResult* CallFunc_Do_Trace_OutHit, class UMaterialInterface** CallFunc_Do_Trace_FootPrintMaterialBack, class UMaterialInterface** CallFunc_Do_Trace_FootPrintMaterialFront, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial** CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, struct FVector* CallFunc_BreakHitResult_TraceStart, struct FVector* CallFunc_BreakHitResult_TraceEnd, class FName* CallFunc_Conv_StringToName_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, struct FStruct_Ground_Attributes* CallFunc_GetDataTableRowFromName_OutRow, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_Less_DoubleDouble_A_ImplicitCast, float* CallFunc_SetFloatParameter_Param_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "Received_NotifyBegin");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_Received_NotifyBegin_Params Parms{};

	Parms.Animation = Animation;
	Parms.ReturnValue = ReturnValue;
	Parms.Foot_Print_Size = Foot_Print_Size;
	Parms.BabyScale = BabyScale;
	Parms.StepSounds = StepSounds;
	Parms.Total_Amount_Mult = Total_Amount_Mult;
	Parms.Sand = Sand;
	Parms.Leaves = Leaves;
	Parms.Grass = Grass;
	Parms.Friction = Friction;
	Parms.Dust = Dust;
	Parms.SK_Mesh_Comp = SK_Mesh_Comp;
	Parms.Niagara_Component = Niagara_Component;
	Parms.NewLocalVar = NewLocalVar;
	Parms.DebugPrint_ = DebugPrint_;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_World_Settings = K2Node_DynamicCast_AsPrimal_World_Settings;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.CallFunc_GetComponentsByTag_ReturnValue = CallFunc_GetComponentsByTag_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (MeshComp != nullptr)
		*MeshComp = Parms.MeshComp;

	if (TotalDuration != nullptr)
		*TotalDuration = Parms.TotalDuration;

	if (EventReference != nullptr)
		*EventReference = std::move(Parms.EventReference);

	if (Material_Front != nullptr)
		*Material_Front = Parms.Material_Front;

	if (Material_Back != nullptr)
		*Material_Back = Parms.Material_Back;

	if (Owner != nullptr)
		*Owner = Parms.Owner;

	if (Bounce != nullptr)
		*Bounce = Parms.Bounce;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (CallFunc_Contains_ReturnValue != nullptr)
		*CallFunc_Contains_ReturnValue = Parms.CallFunc_Contains_ReturnValue;

	if (CallFunc_EqualEqual_ObjectObject_ReturnValue != nullptr)
		*CallFunc_EqualEqual_ObjectObject_ReturnValue = Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue;

	if (CallFunc_Contains_ReturnValue_1 != nullptr)
		*CallFunc_Contains_ReturnValue_1 = Parms.CallFunc_Contains_ReturnValue_1;

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	if (CallFunc_SelectFloat_ReturnValue != nullptr)
		*CallFunc_SelectFloat_ReturnValue = Parms.CallFunc_SelectFloat_ReturnValue;

	if (CallFunc_Conv_StringToName_ReturnValue != nullptr)
		*CallFunc_Conv_StringToName_ReturnValue = Parms.CallFunc_Conv_StringToName_ReturnValue;

	if (CallFunc_K2_GetWorldSettings_ReturnValue != nullptr)
		*CallFunc_K2_GetWorldSettings_ReturnValue = Parms.CallFunc_K2_GetWorldSettings_ReturnValue;

	if (CallFunc_GetSocketRotation_ReturnValue != nullptr)
		*CallFunc_GetSocketRotation_ReturnValue = std::move(Parms.CallFunc_GetSocketRotation_ReturnValue);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_CanSpawnGloballyLimitedParticle_ReturnValue != nullptr)
		*CallFunc_CanSpawnGloballyLimitedParticle_ReturnValue = Parms.CallFunc_CanSpawnGloballyLimitedParticle_ReturnValue;

	if (CallFunc_Right_ReturnValue != nullptr)
		*CallFunc_Right_ReturnValue = std::move(Parms.CallFunc_Right_ReturnValue);

	if (CallFunc_Left_ReturnValue != nullptr)
		*CallFunc_Left_ReturnValue = std::move(Parms.CallFunc_Left_ReturnValue);

	if (CallFunc_Conv_StringToName_ReturnValue_1 != nullptr)
		*CallFunc_Conv_StringToName_ReturnValue_1 = Parms.CallFunc_Conv_StringToName_ReturnValue_1;

	if (CallFunc_GreaterGreater_VectorRotator_ReturnValue != nullptr)
		*CallFunc_GreaterGreater_VectorRotator_ReturnValue = std::move(Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue);

	if (CallFunc_GetSocketRotation_ReturnValue_1 != nullptr)
		*CallFunc_GetSocketRotation_ReturnValue_1 = std::move(Parms.CallFunc_GetSocketRotation_ReturnValue_1);

	if (CallFunc_GreaterGreater_VectorRotator_ReturnValue_1 != nullptr)
		*CallFunc_GreaterGreater_VectorRotator_ReturnValue_1 = std::move(Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue_1);

	if (CallFunc_Do_Trace_FootPrintSize != nullptr)
		*CallFunc_Do_Trace_FootPrintSize = Parms.CallFunc_Do_Trace_FootPrintSize;

	if (CallFunc_Do_Trace_Hit_Bool != nullptr)
		*CallFunc_Do_Trace_Hit_Bool = Parms.CallFunc_Do_Trace_Hit_Bool;

	if (CallFunc_Do_Trace_OutHit != nullptr)
		*CallFunc_Do_Trace_OutHit = std::move(Parms.CallFunc_Do_Trace_OutHit);

	if (CallFunc_Do_Trace_FootPrintMaterialBack != nullptr)
		*CallFunc_Do_Trace_FootPrintMaterialBack = Parms.CallFunc_Do_Trace_FootPrintMaterialBack;

	if (CallFunc_Do_Trace_FootPrintMaterialFront != nullptr)
		*CallFunc_Do_Trace_FootPrintMaterialFront = Parms.CallFunc_Do_Trace_FootPrintMaterialFront;

	if (CallFunc_BreakHitResult_Time != nullptr)
		*CallFunc_BreakHitResult_Time = Parms.CallFunc_BreakHitResult_Time;

	if (CallFunc_BreakHitResult_PhysMat != nullptr)
		*CallFunc_BreakHitResult_PhysMat = Parms.CallFunc_BreakHitResult_PhysMat;

	if (CallFunc_BreakHitResult_TraceStart != nullptr)
		*CallFunc_BreakHitResult_TraceStart = std::move(Parms.CallFunc_BreakHitResult_TraceStart);

	if (CallFunc_BreakHitResult_TraceEnd != nullptr)
		*CallFunc_BreakHitResult_TraceEnd = std::move(Parms.CallFunc_BreakHitResult_TraceEnd);

	if (CallFunc_Conv_StringToName_ReturnValue_2 != nullptr)
		*CallFunc_Conv_StringToName_ReturnValue_2 = Parms.CallFunc_Conv_StringToName_ReturnValue_2;

	if (CallFunc_GetDataTableRowFromName_OutRow != nullptr)
		*CallFunc_GetDataTableRowFromName_OutRow = std::move(Parms.CallFunc_GetDataTableRowFromName_OutRow);

	if (CallFunc_SetFloatParameter_Param_ImplicitCast != nullptr)
		*CallFunc_SetFloatParameter_Param_ImplicitCast = Parms.CallFunc_SetFloatParameter_Param_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Received_NotifyEnd
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)
// struct FAnimNotifyEventReference   EventReference                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBP_VFX_Spawn_Footprint_AnimNotify_C::Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference* EventReference, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "Received_NotifyEnd");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_Received_NotifyEnd_Params Parms{};

	Parms.Animation = Animation;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MeshComp != nullptr)
		*MeshComp = Parms.MeshComp;

	if (EventReference != nullptr)
		*EventReference = std::move(Parms.EventReference);

}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

class FString UBP_VFX_Spawn_Footprint_AnimNotify_C::GetNotifyName(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "GetNotifyName");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_GetNotifyName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Received_NotifyTick
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)
// float                              FrameDeltaTime                                                   (BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FAnimNotifyEventReference   EventReference                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USkeletalMeshComponent*      Mesh_Comp                                                        (ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             Line_End_Distance                                                (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

double UBP_VFX_Spawn_Footprint_AnimNotify_C::Received_NotifyTick(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase* Animation, float* FrameDeltaTime, struct FAnimNotifyEventReference* EventReference, bool ReturnValue, class USkeletalMeshComponent** Mesh_Comp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "Received_NotifyTick");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_Received_NotifyTick_Params Parms{};

	Parms.Animation = Animation;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MeshComp != nullptr)
		*MeshComp = Parms.MeshComp;

	if (FrameDeltaTime != nullptr)
		*FrameDeltaTime = Parms.FrameDeltaTime;

	if (EventReference != nullptr)
		*EventReference = std::move(Parms.EventReference);

	if (Mesh_Comp != nullptr)
		*Mesh_Comp = Parms.Mesh_Comp;

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


