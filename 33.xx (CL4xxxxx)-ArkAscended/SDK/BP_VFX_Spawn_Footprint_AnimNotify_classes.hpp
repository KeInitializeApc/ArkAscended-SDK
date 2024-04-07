#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0xD8 - 0x30)
// BlueprintGeneratedClass BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C
class UBP_VFX_Spawn_Footprint_AnimNotify_C : public UAnimNotifyState
{
public:
	class FString                                BoneName;                                          // 0x30(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	struct FVector                               BoneOffset;                                        // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	FMulticastInlineDelegateProperty_            NewEventDispatcher;                                // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UNiagaraSystem*                        Niagara_System;                                    // 0x68(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Distance_To_Test_Collision;                        // 0x70(0x18)(ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Attach_NS_to_bone;                                 // 0x88(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4B84[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              NS_Rotate;                                         // 0x90(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         backwards;                                         // 0xA8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Front;                                             // 0xA9(0x1)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)
	uint8                                        Pad_4B86[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    Footprint_Material;                                // 0xB0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	int32                                        Render_Index;                                      // 0xB8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bAllowNotifyForPlayerCharacter;                    // 0xBC(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_4B87[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       MaxCamDistanceForVFX;                              // 0xC0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       MaxCamDistanceForVFXByAPlayer;                     // 0xC8(0x8)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bPlaySound;                                        // 0xD0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4B88[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DinoFootprintOpacityScale;                         // 0xD4(0x4)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UBP_VFX_Spawn_Footprint_AnimNotify_C* GetDefaultObj();

	double LR_FB_Offset(const struct FVector& Back_Offset, const struct FVector& CallFunc_MakeVector_ReturnValue, class FString* CallFunc_Right_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, class FString* CallFunc_Left_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1);
	void NewFunction_0(bool Condition, bool* Condition2);
	bool Do_Trace(class AActor** InputPin, bool* IsPlayer, const struct FVector& Back_Offset, class ADino_Character_BP_C** K2Node_DynamicCast_AsDino_Character_BP, bool* K2Node_DynamicCast_bSuccess, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, bool* K2Node_DynamicCast_bSuccess_2, TArray<class AActor*>* Temp_object_Variable, struct FVector* CallFunc_LR_FB_Offset_Offset, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, struct FMatrix* CallFunc_Conv_TransformToMatrix_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector4& CallFunc_Matrix_TransformVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, struct FVector* CallFunc_Conv_Vector4ToVector_ReturnValue, class FName CallFunc_GetSocketBoneName_ReturnValue, struct FTransform* CallFunc_GetSocketTransform_ReturnValue, struct FRotator* CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale);
	float Spawn_Sound(class USceneComponent** Actor, struct FVector* Location, bool* IsPlayer, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsLocallyControlled_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double CallFunc_FClamp_ReturnValue_2, double CallFunc_FClamp_ReturnValue_3, double CallFunc_FClamp_ReturnValue_4, double CallFunc_FClamp_ReturnValue_5, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void Spawn_Anim_Notify();
	double Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration, struct FAnimNotifyEventReference* EventReference, bool* IsPlayer, double* Foot_Print_Size, class AActor** Owner, double Foot_Velocity_Mult, class UCurveFloat* Curve_foot_vel, class UCurveFloat* Curve_foot_size, double Foot_Size_Mult, double* Friction, double* Dust, double Bounce, struct FColor* Color, class UNiagaraComponent** Niagara_Component, bool* DebugPrint_, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_IsShooterCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, float* CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, bool* K2Node_DynamicCast_bSuccess_1, class AWorldSettings** CallFunc_K2_GetWorldSettings_ReturnValue, class APrimalWorldSettings* K2Node_DynamicCast_AsPrimal_World_Settings, bool* K2Node_DynamicCast_bSuccess_2, struct FRotator* CallFunc_GetSocketRotation_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_3, class UNiagaraComponent* CallFunc_Array_Get_Item, bool CallFunc_CanSpawnGloballyLimitedParticle_ReturnValue, class ADino_Character_BP_C** K2Node_DynamicCast_AsDino_Character_BP, bool* K2Node_DynamicCast_bSuccess_4, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsConsoleBuild_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class FString* CallFunc_Right_ReturnValue, class FString* CallFunc_Left_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, struct FVector* CallFunc_GreaterGreater_VectorRotator_ReturnValue, struct FRotator* CallFunc_GetSocketRotation_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, struct FVector* CallFunc_GreaterGreater_VectorRotator_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, double* CallFunc_Do_Trace_FootPrintSize, bool* CallFunc_Do_Trace_Hit_Bool, struct FHitResult* CallFunc_Do_Trace_OutHit, class UMaterialInterface* CallFunc_Do_Trace_FootPrintMaterialBack, class UMaterialInterface** CallFunc_Do_Trace_FootPrintMaterialFront, bool CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Distance, struct FVector* CallFunc_BreakHitResult_Location, struct FVector* CallFunc_BreakHitResult_ImpactPoint, struct FVector* CallFunc_BreakHitResult_Normal, struct FVector* CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial** CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, struct FHitResult* CallFunc_K2_SetWorldLocation_SweepHitResult, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float* CallFunc_SetFloatParameter_Param_ImplicitCast);
	bool Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, struct FAnimNotifyEventReference* EventReference);
	class FString GetNotifyName(const class FString& CallFunc_Concat_StrStr_ReturnValue);
	class USkeletalMeshComponent* Received_NotifyTick(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* FrameDeltaTime, struct FAnimNotifyEventReference* EventReference, double* Line_End_Distance);
	void NewEventDispatcher__DelegateSignature();
};

}

