#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB1 (0xE1 - 0x30)
// BlueprintGeneratedClass BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C
class UBP_VFX_Spawn_on_AnimNotify_C : public UAnimNotifyState
{
public:
	class FString                                BoneName;                                          // 0x30(0x10)(ConstParm, Net, DisableEditOnTemplate, Config)
	struct FVector                               BoneOffset;                                        // 0x40(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            NewEventDispatcher;                                // 0x58(0x10)(ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	double                                       Mult_Amount;                                       // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UNiagaraSystem*                        Niagara_System;                                    // 0x70(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               Distance_To_Test_Collision;                        // 0x78(0x18)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         Attach_NS_to_bone;                                 // 0x90(0x1)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4AA5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Mult_Size;                                         // 0x98(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       Mult_Velocity;                                     // 0xA0(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FRotator                              NS_Rotate;                                         // 0xA8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UCurveFloat*                           Curve_foot_size_0;                                 // 0xC0(0x8)(ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify)
	bool                                         backwards;                                         // 0xC8(0x1)(Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4AA6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       MaxCamDistanceForVFX;                              // 0xD0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       MaxCamDistanceForVFXByAPlayer;                     // 0xD8(0x8)(ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bPlaySound;                                        // 0xE0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UBP_VFX_Spawn_on_AnimNotify_C* GetDefaultObj();

	class UAudioComponent* Spawn_Sound(class USceneComponent** Actor, struct FVector* Location, class AActor** CallFunc_GetOwner_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, double CallFunc_Multiply_DoubleFloat_ReturnValue, struct FVector* CallFunc_K2_GetComponentLocation_ReturnValue, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5);
	void Spawn_Anim_Notify();
	double Received_NotifyBegin(class UAnimSequenceBase* Animation, bool ShowFootprints, double* Sand, double* Leaves, double Grass, double* Friction, double Bounce, struct FColor* Color, TArray<class AActor*>* Temp_object_Variable, class FString* CallFunc_GetDisplayName_ReturnValue, struct FVector* CallFunc_K2_GetComponentLocation_ReturnValue, float* CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsShooterCharacter_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue_1, struct FVector* CallFunc_GetForwardVector_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_2, struct FVector* CallFunc_GetVelocity_ReturnValue, double CallFunc_Lerp_ReturnValue, struct FStruct_Ground_Attributes* CallFunc_GetDataTableRowFromName_OutRow, bool* CallFunc_GetDataTableRowFromName_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue_2, double CallFunc_Multiply_DoubleFloat_ReturnValue_3, double CallFunc_Multiply_DoubleFloat_ReturnValue_4, class AActor** CallFunc_GetOwner_ReturnValue_2, bool* K2Node_DynamicCast_bSuccess_3, bool* K2Node_DynamicCast_bSuccess_4, float* CallFunc_GetFloatValue_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_5, double CallFunc_Multiply_DoubleFloat_ReturnValue_6, float* CallFunc_GetFloatValue_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue_7, double CallFunc_Multiply_DoubleFloat_ReturnValue_8, double CallFunc_Multiply_DoubleFloat_ReturnValue_9, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue_3, struct FVector* CallFunc_GetForwardVector_ReturnValue_1, struct FVector* CallFunc_GetVelocity_ReturnValue_1, struct FVector* CallFunc_GetForwardVector_ReturnValue_2, bool* CallFunc_IsConsoleBuild_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FMatrix& CallFunc_Conv_TransformToMatrix_ReturnValue, struct FVector4* CallFunc_Matrix_TransformVector_ReturnValue, class FName* CallFunc_GetSocketBoneName_ReturnValue, const struct FVector& CallFunc_Conv_Vector4ToVector_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, struct FVector* CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, struct FHitResult* CallFunc_LineTraceSingle_OutHit, bool* CallFunc_LineTraceSingle_ReturnValue, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float* CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class FString* CallFunc_GetDisplayName_ReturnValue_1, struct FStruct_Ground_Attributes* CallFunc_GetDataTableRowFromName_OutRow_1, bool* CallFunc_GetDataTableRowFromName_ReturnValue_1, class UNiagaraComponent** CallFunc_SpawnSystemAtLocation_ReturnValue, double* CallFunc_Less_DoubleDouble_A_ImplicitCast, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double* CallFunc_Lerp_A_ImplicitCast, double* CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast_2, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast_3, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast_4, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1, float CallFunc_SetVariableFloat_InValue_ImplicitCast_2, float CallFunc_SetVariableFloat_InValue_ImplicitCast_3, float CallFunc_SetVariableFloat_InValue_ImplicitCast_4, float CallFunc_SetVariableFloat_InValue_ImplicitCast_5, float CallFunc_SetVariableFloat_InValue_ImplicitCast_6, float CallFunc_SetVariableFloat_InValue_ImplicitCast_7, float CallFunc_SetVariableFloat_InValue_ImplicitCast_8, float CallFunc_SetVariableFloat_InValue_ImplicitCast_9, float CallFunc_SetVariableFloat_InValue_ImplicitCast_10);
	bool Received_NotifyEnd(class UAnimSequenceBase* Animation);
	class FString GetNotifyName(const class FString& CallFunc_Concat_StrStr_ReturnValue);
	double Received_NotifyTick(class UAnimSequenceBase* Animation);
	void NewEventDispatcher__DelegateSignature();
};

}


