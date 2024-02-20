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
	class FString                                BoneName;                                          // 0x30(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	struct FVector                               BoneOffset;                                        // 0x40(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	FMulticastInlineDelegateProperty_            NewEventDispatcher;                                // 0x58(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UNiagaraSystem*                        Niagara_System;                                    // 0x68(0x8)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Distance_To_Test_Collision;                        // 0x70(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Attach_NS_to_bone;                                 // 0x88(0x1)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_28A5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              NS_Rotate;                                         // 0x90(0x18)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         backwards;                                         // 0xA8(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Front;                                             // 0xA9(0x1)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance)
	uint8                                        Pad_28A7[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    Footprint_Material;                                // 0xB0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        Render_Index;                                      // 0xB8(0x4)(ConstParm, ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bAllowNotifyForPlayerCharacter;                    // 0xBC(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_28A8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       MaxCamDistanceForVFX;                              // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       MaxCamDistanceForVFXByAPlayer;                     // 0xC8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bPlaySound;                                        // 0xD0(0x1)(Edit, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_28AA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DinoFootprintOpacityScale;                         // 0xD4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UBP_VFX_Spawn_Footprint_AnimNotify_C* GetDefaultObj();

	struct FVector LR_FB_Offset(const struct FVector& Front_Offset, const struct FVector& Offset, class FString* CallFunc_Split_LeftS, class FString* CallFunc_Split_RightS, bool* CallFunc_Split_ReturnValue, const class FString& CallFunc_Right_ReturnValue, const class FString& CallFunc_Left_ReturnValue);
	bool NewFunction_0(bool Condition2);
	struct FVector Do_Trace(class AActor** InputPin, double FootPrintSize, bool* Hit_Bool, class UMaterialInterface* FootPrintMaterialBack, class UMaterialInterface* FootPrintMaterialFront, class UMaterialInterface** MI_Back, class UMaterialInterface** MI_Front, const struct FVector& Front_Offset, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class UDinoSettings_Base_C** K2Node_DynamicCast_AsDino_Settings_Base, struct FVector* CallFunc_GetForwardVector_ReturnValue, const TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_LR_FB_Offset_Offset, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, struct FHitResult* CallFunc_LineTraceSingle_OutHit, bool* CallFunc_LineTraceSingle_ReturnValue);
	float Spawn_Sound(class USceneComponent** Actor, struct FVector* Location, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, double* CallFunc_FClamp_ReturnValue, double* CallFunc_FClamp_ReturnValue_1, double* CallFunc_FClamp_ReturnValue_2, double* CallFunc_FClamp_ReturnValue_3, double* CallFunc_FClamp_ReturnValue_4, double* CallFunc_FClamp_ReturnValue_5);
	void Spawn_Anim_Notify();
	float Received_NotifyBegin(struct FAnimNotifyEventReference* EventReference, bool ReturnValue, class UMaterialInterface** Material_Front, class UMaterialInterface** Material_Back, double Foot_Print_Size, class AActor** Owner, double* Sand, double* Leaves, double* Grass, double* Friction, double Dust, double Bounce, struct FColor* Color, bool DebugPrint_, class FString* CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Contains_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool CallFunc_Contains_ReturnValue_1, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, class AWorldSettings* CallFunc_K2_GetWorldSettings_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, double* CallFunc_Lerp_ReturnValue, class FString* CallFunc_Split_LeftS, class FString* CallFunc_Split_RightS, bool* CallFunc_Split_ReturnValue, const class FString& CallFunc_Right_ReturnValue, const class FString& CallFunc_Left_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue_1, double CallFunc_Do_Trace_FootPrintSize, bool CallFunc_Do_Trace_Hit_Bool, const struct FHitResult& CallFunc_Do_Trace_OutHit, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float* CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class FString* CallFunc_GetDisplayName_ReturnValue_1, struct FStruct_Ground_Attributes* CallFunc_GetDataTableRowFromName_OutRow, bool* CallFunc_GetDataTableRowFromName_ReturnValue, float CallFunc_SetFloatParameter_Param_ImplicitCast);
	class UAnimSequenceBase* Received_NotifyEnd(struct FAnimNotifyEventReference* EventReference, bool ReturnValue);
	class FString GetNotifyName(const class FString& ReturnValue);
	double Received_NotifyTick(struct FAnimNotifyEventReference* EventReference, bool ReturnValue, class USkeletalMeshComponent** Mesh_Comp);
	void NewEventDispatcher__DelegateSignature();
};

}


