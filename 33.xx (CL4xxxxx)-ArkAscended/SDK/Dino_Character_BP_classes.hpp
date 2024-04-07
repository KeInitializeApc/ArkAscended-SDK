#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x34F8 - 0x3428)
// BlueprintGeneratedClass Dino_Character_BP.Dino_Character_BP_C
class ADino_Character_BP_C : public APrimalDinoCharacter
{
public:
	uint8                                        Pad_4C0E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3430(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class USphereComponent*                      StasisComponent;                                   // 0x3438(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UAnimSequence*>                 AlternateDeathAnims;                               // 0x3440(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FDinoContentData                      ContentData;                                       // 0x3450(0x20)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       BabySpeedMult_WildBaby;                            // 0x3470(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       BabySpeedMult_NotWildBaby;                         // 0x3478(0x8)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       FollowingRunDistance_BabyLong;                     // 0x3480(0x8)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       FollowingRunDistance_BabyShort;                    // 0x3488(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       FollowingRunDistance_Adult;                        // 0x3490(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       AIFollowStoppingDistance_Baby;                     // 0x3498(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       AIFollowStoppingDistance_Adult;                    // 0x34A0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        AiAccessFails;                                     // 0x34A8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4C12[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       WildBaby_NextRunTime;                              // 0x34B0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       WildBaby_MinTimeBetweenRuns;                       // 0x34B8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UBlendSpace*                           WalkingIdleDeathBlendSpace;                        // 0x34C0(0x8)(ConstParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UBlendSpace*                           WalkingMovingDeathBlendSpace;                      // 0x34C8(0x8)(BlueprintReadOnly, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UBlendSpace*                           SwimmingDeathBlendSpace;                           // 0x34D0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UBlendSpace*                           FallingDeathBlendSpace;                            // 0x34D8(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UBlendSpace*                           TorpidDeathBlendSpace;                             // 0x34E0(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         GeneratedBlendSpaces;                              // 0x34E8(0x1)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4C15[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       PostDestructionFootstepLifespan;                   // 0x34F0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class ADino_Character_BP_C* GetDefaultObj();

	bool BPOverrideCameraDesiredPivotLocation(struct FVector* CurrentCameraPivotLocation, struct FVector* DesiredCameraPivotLocation);
	struct FRotator BPOverrideCameraDesiredPivotRotation(struct FRotator* CurrentCameraPivotRotation, struct FRotator* DesiredCameraPivotRotation, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw);
	bool BPOverrideCameraDesiredPivotOffset(struct FVector* DesiredCameraOffset);
	bool BPOverrideCameraPivotLocationInterpParams(struct FPrimalCameraPivotZInterpOverrides* PivotZInterpOverrides, struct FPrimalCameraInterpParams* LastInterpParamsX, struct FPrimalCameraInterpParams* LastInterpParamsY, struct FPrimalCameraInterpParams* LastInterpParamsZ, struct FPrimalCameraInterpParams* OutInterpParamsX, struct FPrimalCameraInterpParams* OutInterpParamsY, struct FPrimalCameraInterpParams* OutInterpParamsZ);
	bool BPOverrideCameraArmLengthInterpParams(struct FPrimalCameraInterpParams* OutInterpParams);
	double BPOverrideCameraArmLength(float CurrentCameraArmLength, float DesiredCameraArmLength);
	bool GetFXBloodColor(bool K2Node_SwitchString_CmpSuccess, const struct FLinearColor& CallFunc_GetFXBloodColor_ReturnValue);
	float BlueprintOverrideWantsToRun(bool bInputWantsToRun, bool* RetVal, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	float UpdateBabyAndRunValues(bool* K2Node_DynamicCast_bSuccess, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess);
	struct FHitResult BPControlRigNotify(class FName* NotifyName, class FName* NotifyCustomTag, const struct FVector& Velocity);
	struct FDinoContentData GetDinoContentData();
	int32 BPHandleRightShoulderButton(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class APrimalBuff* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess);
	void UpdateWildBabyNextRunTime();
	void BlendSpaceGenerated(class UBlendSpace* BlendSpace);
	void ReceiveBeginPlay();
	void EditorBeginPlay();
	void BP_OnSetDeath();
	void BPBecomeBaby();
	void ReceiveDestroyed();
	void BPTriggerStasisEvent();
	class APrimalCharacter* BPSpawnAttackerDamageImpactFX(class FName* SocketName);
	void BPBecomeAdult();
	void BPNotifyClaimed();
	double ExecuteUbergraph_Dino_Character_BP(int32* EntryPoint, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, class ADino_Character_BP_C** K2Node_DynamicCast_AsDino_Character_BP, bool* K2Node_DynamicCast_bSuccess, double CallFunc_SelectFloat_ReturnValue, class FString* CallFunc_GetObjectName_ReturnValue, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UActorComponent* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess_1, class FName* K2Node_Event_SocketName, class APrimalCharacter** K2Node_Event_VictimChar, const struct FLinearColor& CallFunc_GetFXBloodColor_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, class UNiagaraComponent** CallFunc_SpawnSystemAttached_ReturnValue, int32 Temp_int_Loop_Counter_Variable, double CallFunc_SelectFloat_ReturnValue_2, double CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast_1, float* CallFunc_SetVariableFloat_InValue_ImplicitCast);
};

}


