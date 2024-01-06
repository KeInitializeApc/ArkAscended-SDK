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
	struct FVector                               BoneOffset;                                        // 0x40(0x18)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            NewEventDispatcher;                                // 0x58(0x10)(ConstParm, ExportObject, Parm, Transient, Config, EditConst, SubobjectReference)
	class UNiagaraSystem*                        Niagara_System;                                    // 0x68(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               Distance_To_Test_Collision;                        // 0x70(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         Attach_NS_to_bone;                                 // 0x88(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3887[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              NS_Rotate;                                         // 0x90(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         backwards;                                         // 0xA8(0x1)(Edit, ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         Front;                                             // 0xA9(0x1)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance)
	uint8                                        Pad_3888[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    Footprint_Material;                                // 0xB0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        Render_Index;                                      // 0xB8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bAllowNotifyForPlayerCharacter;                    // 0xBC(0x1)(Edit, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_388A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       MaxCamDistanceForVFX;                              // 0xC0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       MaxCamDistanceForVFXByAPlayer;                     // 0xC8(0x8)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bPlaySound;                                        // 0xD0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_388B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DinoFootprintOpacityScale;                         // 0xD4(0x4)(Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UBP_VFX_Spawn_Footprint_AnimNotify_C* GetDefaultObj();

	bool LR_FB_Offset(double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1);
	bool NewFunction_0(bool* Condition);
	bool Do_Trace(class AActor** InputPin, double BabyScale, bool* IsPlayer, struct FVector* CallFunc_Conv_DoubleToVector_ReturnValue, class ADino_Character_BP_C* K2Node_DynamicCast_AsDino_Character_BP, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, struct FVector* CallFunc_GetForwardVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, struct FTransform* CallFunc_MakeTransform_ReturnValue, struct FVector* CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, struct FVector* CallFunc_Add_VectorVector_ReturnValue, class FName* CallFunc_Conv_StringToName_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FRotator& CallFunc_BreakTransform_Rotation, struct FVector* CallFunc_BreakTransform_Scale, struct FVector* CallFunc_Add_VectorVector_ReturnValue_1, struct FVector* CallFunc_Add_VectorVector_ReturnValue_2, struct FVector* CallFunc_Add_VectorVector_ReturnValue_3, struct FVector* CallFunc_Add_VectorVector_ReturnValue_4);
	float Spawn_Sound(class USceneComponent** Actor, struct FVector* Location, bool* IsPlayer, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, double* CallFunc_FClamp_ReturnValue, double* CallFunc_FClamp_ReturnValue_1, double* CallFunc_FClamp_ReturnValue_2, double* CallFunc_FClamp_ReturnValue_3, double* CallFunc_FClamp_ReturnValue_4, class UAudioComponent** CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent** CallFunc_SpawnSoundAttached_ReturnValue_1, double* CallFunc_FClamp_ReturnValue_5, class UAudioComponent** CallFunc_SpawnSoundAttached_ReturnValue_2, class UAudioComponent** CallFunc_SpawnSoundAttached_ReturnValue_3, class UAudioComponent** CallFunc_SpawnSoundAttached_ReturnValue_4, class UAudioComponent** CallFunc_SpawnSoundAttached_ReturnValue_5);
	void Spawn_Anim_Notify();
	float Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const struct FAnimNotifyEventReference& EventReference, bool* ReturnValue, bool* IsPlayer, class AActor** Owner, double BabyScale, double Total_Amount_Mult, double Sand, double Leaves, double Grass, struct FColor* Color, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* CallFunc_BooleanOR_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, double CallFunc_SelectFloat_ReturnValue, class FName* CallFunc_Conv_StringToName_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, class APrimalWorldSettings* K2Node_DynamicCast_AsPrimal_World_Settings, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, class ADino_Character_BP_C* K2Node_DynamicCast_AsDino_Character_BP, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class FName* CallFunc_Conv_StringToName_ReturnValue_1, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Distance, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, class FName* CallFunc_Conv_StringToName_ReturnValue_2, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast);
	void Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference, bool* ReturnValue);
	void GetNotifyName(class FString* ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue);
	double Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, const struct FAnimNotifyEventReference& EventReference, bool* ReturnValue);
	void NewEventDispatcher__DelegateSignature();
};

}


