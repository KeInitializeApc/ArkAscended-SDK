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
	class FString                                BoneName;                                          // 0x30(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	struct FVector                               BoneOffset;                                        // 0x40(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	FMulticastInlineDelegateProperty_            NewEventDispatcher;                                // 0x58(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       Mult_Amount;                                       // 0x68(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UNiagaraSystem*                        Niagara_System;                                    // 0x70(0x8)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Distance_To_Test_Collision;                        // 0x78(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Attach_NS_to_bone;                                 // 0x90(0x1)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2873[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Mult_Size;                                         // 0x98(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Mult_Velocity;                                     // 0xA0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              NS_Rotate;                                         // 0xA8(0x18)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UCurveFloat*                           Curve_foot_size_0;                                 // 0xC0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify)
	bool                                         backwards;                                         // 0xC8(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2877[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       MaxCamDistanceForVFX;                              // 0xD0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       MaxCamDistanceForVFXByAPlayer;                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bPlaySound;                                        // 0xE0(0x1)(Edit, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UBP_VFX_Spawn_on_AnimNotify_C* GetDefaultObj();

	float Spawn_Sound(class USceneComponent** Actor, struct FVector* Location, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character);
	void Spawn_Anim_Notify();
	double Received_NotifyBegin(struct FAnimNotifyEventReference* EventReference, bool ReturnValue, double* Sand, double* Leaves, double* Grass, double* Friction, double Dust, double Bounce, struct FColor* Color, const TArray<class AActor*>& Temp_object_Variable, class FString* CallFunc_GetDisplayName_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, struct FVector* CallFunc_GetForwardVector_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, const struct FVector& CallFunc_GetVelocity_ReturnValue, double* CallFunc_Lerp_ReturnValue, struct FStruct_Ground_Attributes* CallFunc_GetDataTableRowFromName_OutRow, bool* CallFunc_GetDataTableRowFromName_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test_1, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, struct FVector* CallFunc_GetForwardVector_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, struct FVector* CallFunc_GetForwardVector_ReturnValue_2, bool CallFunc_Contains_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, struct FHitResult* CallFunc_LineTraceSingle_OutHit, bool* CallFunc_LineTraceSingle_ReturnValue, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float* CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class FString* CallFunc_GetDisplayName_ReturnValue_1, struct FStruct_Ground_Attributes* CallFunc_GetDataTableRowFromName_OutRow_1, bool* CallFunc_GetDataTableRowFromName_ReturnValue_1);
	class UAnimSequenceBase* Received_NotifyEnd(struct FAnimNotifyEventReference* EventReference, bool ReturnValue);
	class FString GetNotifyName(const class FString& ReturnValue);
	double Received_NotifyTick(struct FAnimNotifyEventReference* EventReference, bool ReturnValue);
	void NewEventDispatcher__DelegateSignature();
};

}


