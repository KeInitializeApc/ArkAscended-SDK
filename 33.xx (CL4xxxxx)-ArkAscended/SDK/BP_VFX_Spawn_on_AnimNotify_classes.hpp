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
	struct FVector                               BoneOffset;                                        // 0x40(0x18)(ConstParm, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	FMulticastInlineDelegateProperty_            NewEventDispatcher;                                // 0x58(0x10)(ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Mult_Amount;                                       // 0x68(0x8)(Edit, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UNiagaraSystem*                        Niagara_System;                                    // 0x70(0x8)(EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Distance_To_Test_Collision;                        // 0x78(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         Attach_NS_to_bone;                                 // 0x90(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4A5D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Mult_Size;                                         // 0x98(0x8)(ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       Mult_Velocity;                                     // 0xA0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              NS_Rotate;                                         // 0xA8(0x18)(Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UCurveFloat*                           Curve_foot_size_0;                                 // 0xC0(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify)
	bool                                         backwards;                                         // 0xC8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4A5E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       MaxCamDistanceForVFX;                              // 0xD0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       MaxCamDistanceForVFXByAPlayer;                     // 0xD8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bPlaySound;                                        // 0xE0(0x1)(ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UBP_VFX_Spawn_on_AnimNotify_C* GetDefaultObj();

	float Spawn_Sound(class USceneComponent** Actor, struct FVector* Location, double* Speed, const struct FAudio_Ground_Collection& StepSounds, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool CallFunc_IsLocallyControlled_ReturnValue, double* CallFunc_Divide_DoubleFloat_ReturnValue, double* CallFunc_Divide_DoubleFloat_ReturnValue_1, double* CallFunc_Divide_DoubleFloat_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double* CallFunc_Divide_DoubleFloat_ReturnValue_3, double* CallFunc_Divide_DoubleFloat_ReturnValue_4, double* CallFunc_Divide_DoubleFloat_ReturnValue_5, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void Spawn_Anim_Notify();
	double Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase* Animation, float* TotalDuration, struct FAnimNotifyEventReference* EventReference, bool ReturnValue, bool ShowFootprints, class UNiagaraSystem* Niagara_System_To_Play, class UNiagaraSystem* Niagara_System_Player, const struct FAudio_Ground_Collection& StepSounds, double Total_Amount_Mult, double Sand, double Leaves, double Grass, double Friction, double Dust, double* Bounce, class USkeletalMeshComponent* SK_Mesh_Comp, struct FColor* Color, class UNiagaraComponent* Niagara_Component, const class FString& NewLocalVar, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool* CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, double* CallFunc_SelectFloat_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, struct FVector* CallFunc_GetVelocity_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, struct FStruct_Ground_Attributes* CallFunc_GetDataTableRowFromName_OutRow, float* CallFunc_GetFloatValue_ReturnValue, float* CallFunc_GetFloatValue_ReturnValue_1, struct FLinearColor* CallFunc_Conv_ColorToLinearColor_ReturnValue, struct FVector* CallFunc_GetVelocity_ReturnValue_1, struct FRotator* CallFunc_Conv_VectorToRotator_ReturnValue, bool* CallFunc_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class FName* CallFunc_Conv_StringToName_ReturnValue, struct FVector* CallFunc_BreakTransform_Scale, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial** CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, struct FVector* CallFunc_BreakHitResult_TraceStart, struct FVector* CallFunc_BreakHitResult_TraceEnd, class FName* CallFunc_Conv_StringToName_ReturnValue_1, struct FRotator* CallFunc_ComposeRotators_ReturnValue, struct FStruct_Ground_Attributes* CallFunc_GetDataTableRowFromName_OutRow_1, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1);
	void Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference* EventReference, bool ReturnValue);
	class FString GetNotifyName(const class FString& ReturnValue);
	double Received_NotifyTick(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase* Animation, float* FrameDeltaTime, struct FAnimNotifyEventReference* EventReference, bool ReturnValue);
	void NewEventDispatcher__DelegateSignature();
};

}


