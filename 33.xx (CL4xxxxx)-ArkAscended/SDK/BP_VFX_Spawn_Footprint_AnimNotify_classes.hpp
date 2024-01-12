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
	class FString                                BoneName;                                          // 0x30(0x10)(ConstParm, Net, DisableEditOnTemplate, Config)
	struct FVector                               BoneOffset;                                        // 0x40(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            NewEventDispatcher;                                // 0x58(0x10)(ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class UNiagaraSystem*                        Niagara_System;                                    // 0x68(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               Distance_To_Test_Collision;                        // 0x70(0x18)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         Attach_NS_to_bone;                                 // 0x88(0x1)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A85[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              NS_Rotate;                                         // 0x90(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         backwards;                                         // 0xA8(0x1)(Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         Front;                                             // 0xA9(0x1)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance)
	uint8                                        Pad_4A86[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    Footprint_Material;                                // 0xB0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        Render_Index;                                      // 0xB8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bAllowNotifyForPlayerCharacter;                    // 0xBC(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A87[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       MaxCamDistanceForVFX;                              // 0xC0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       MaxCamDistanceForVFXByAPlayer;                     // 0xC8(0x8)(ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bPlaySound;                                        // 0xD0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A88[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DinoFootprintOpacityScale;                         // 0xD4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UBP_VFX_Spawn_Footprint_AnimNotify_C* GetDefaultObj();

	struct FVector LR_FB_Offset(const struct FVector& Back_Offset, class FString* CallFunc_Split_LeftS, class FString* CallFunc_Split_RightS, bool* CallFunc_Split_ReturnValue, class FString* CallFunc_Right_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class FString* CallFunc_Left_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1);
	bool NewFunction_0(bool* Condition);
	struct FVector Do_Trace(class AActor** InputPin, const struct FHitResult& OutHit, const struct FVector& Back_Offset, bool* K2Node_DynamicCast_bSuccess, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_IsValid_ReturnValue, class UPrimalItem** CallFunc_GetEquippedItemOfType_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* K2Node_DynamicCast_bSuccess_2, struct FVector* CallFunc_GetForwardVector_ReturnValue, TArray<class AActor*>* Temp_object_Variable, struct FVector* CallFunc_LR_FB_Offset_Offset, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FMatrix& CallFunc_Conv_TransformToMatrix_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, struct FVector4* CallFunc_Matrix_TransformVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Conv_Vector4ToVector_ReturnValue, class FName* CallFunc_GetSocketBoneName_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, struct FVector* CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, struct FHitResult* CallFunc_LineTraceSingle_OutHit, bool* CallFunc_LineTraceSingle_ReturnValue);
	class UAudioComponent* Spawn_Sound(class USceneComponent** Actor, struct FVector* Location, class AActor** CallFunc_GetOwner_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, double* CallFunc_FClamp_ReturnValue, double* CallFunc_FClamp_ReturnValue_1, double* CallFunc_FClamp_ReturnValue_2, double* CallFunc_FClamp_ReturnValue_3, double* CallFunc_FClamp_ReturnValue_4, double* CallFunc_FClamp_ReturnValue_5, struct FVector* CallFunc_K2_GetComponentLocation_ReturnValue, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5);
	void Spawn_Anim_Notify();
	float Received_NotifyBegin(class UAnimSequenceBase* Animation, class AActor** Owner, struct FVector* Direction, double* Sand, double* Leaves, double Grass, double* Friction, double Bounce, struct FColor* Color, class FString* CallFunc_GetDisplayName_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, bool CallFunc_Contains_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsShooterCharacter_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, struct FVector* CallFunc_K2_GetComponentLocation_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue_1, float* CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, class AWorldSettings** CallFunc_K2_GetWorldSettings_ReturnValue, class APrimalWorldSettings* K2Node_DynamicCast_AsPrimal_World_Settings, bool* K2Node_DynamicCast_bSuccess_2, struct FRotator* CallFunc_GetSocketRotation_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_3, class UNiagaraComponent** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_CanSpawnGloballyLimitedParticle_ReturnValue, bool* K2Node_DynamicCast_bSuccess_4, double CallFunc_Lerp_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_IsConsoleBuild_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class FString* CallFunc_Split_LeftS, class FString* CallFunc_Split_RightS, bool* CallFunc_Split_ReturnValue, class FString* CallFunc_Right_ReturnValue, class FString* CallFunc_Left_ReturnValue, struct FRotator* CallFunc_GetSocketRotation_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, double CallFunc_Do_Trace_FootPrintSize, bool* CallFunc_Do_Trace_Hit_Bool, struct FHitResult* CallFunc_Do_Trace_OutHit, class UMaterialInterface* CallFunc_Do_Trace_FootPrintMaterialBack, class UMaterialInterface* CallFunc_Do_Trace_FootPrintMaterialFront, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float* CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class FString* CallFunc_GetDisplayName_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, struct FStruct_Ground_Attributes* CallFunc_GetDataTableRowFromName_OutRow, bool* CallFunc_GetDataTableRowFromName_ReturnValue, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double* CallFunc_Less_DoubleDouble_A_ImplicitCast, double* CallFunc_Lerp_A_ImplicitCast, double* CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast);
	bool Received_NotifyEnd(class UAnimSequenceBase* Animation);
	class FString GetNotifyName(const class FString& CallFunc_Concat_StrStr_ReturnValue);
	double Received_NotifyTick(class UAnimSequenceBase* Animation);
	void NewEventDispatcher__DelegateSignature();
};

}


