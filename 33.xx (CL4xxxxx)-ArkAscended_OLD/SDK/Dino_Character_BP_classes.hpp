#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x3488 - 0x33C0)
// BlueprintGeneratedClass Dino_Character_BP.Dino_Character_BP_C
class ADino_Character_BP_C : public APrimalDinoCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x33C0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class USphereComponent*                      StasisComponent;                                   // 0x33C8(0x8)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance)
	TArray<class UAnimSequence*>                 AlternateDeathAnims;                               // 0x33D0(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	struct FDinoContentData                      ContentData;                                       // 0x33E0(0x20)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       BabySpeedMult_WildBaby;                            // 0x3400(0x8)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       BabySpeedMult_NotWildBaby;                         // 0x3408(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       FollowingRunDistance_BabyLong;                     // 0x3410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       FollowingRunDistance_BabyShort;                    // 0x3418(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       FollowingRunDistance_Adult;                        // 0x3420(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       AIFollowStoppingDistance_Baby;                     // 0x3428(0x8)(ConstParm, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       AIFollowStoppingDistance_Adult;                    // 0x3430(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	int32                                        AiAccessFails;                                     // 0x3438(0x4)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3BB9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       WildBaby_NextRunTime;                              // 0x3440(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       WildBaby_MinTimeBetweenRuns;                       // 0x3448(0x8)(ConstParm, ExportObject, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UBlendSpace*                           WalkingIdleDeathBlendSpace;                        // 0x3450(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UBlendSpace*                           WalkingMovingDeathBlendSpace;                      // 0x3458(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UBlendSpace*                           SwimmingDeathBlendSpace;                           // 0x3460(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UBlendSpace*                           FallingDeathBlendSpace;                            // 0x3468(0x8)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UBlendSpace*                           TorpidDeathBlendSpace;                             // 0x3470(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         GeneratedBlendSpaces;                              // 0x3478(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3BBA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       PostDestructionFootstepLifespan;                   // 0x3480(0x8)(ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class ADino_Character_BP_C* GetDefaultObj();

	void BPOverrideCameraDesiredPivotLocation(const struct FVector& CurrentCameraPivotLocation, const struct FVector& DesiredCameraPivotLocation, bool* ReturnValue);
	void BPOverrideCameraDesiredPivotRotation(const struct FRotator& CurrentCameraPivotRotation, const struct FRotator& DesiredCameraPivotRotation, bool* ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, struct FRotator* CallFunc_MakeRotator_ReturnValue);
	struct FPrimalCameraParams BPOverrideCameraDesiredPivotOffset(const struct FVector& DesiredCameraOffset, bool* ReturnValue);
	struct FPrimalCameraParams BPOverrideCameraPivotLocationInterpParams(struct FPrimalCameraPivotZInterpOverrides* PivotZInterpOverrides, struct FPrimalCameraInterpParams* LastInterpParamsX, const struct FPrimalCameraInterpParams& LastInterpParamsY, const struct FPrimalCameraInterpParams& LastInterpParamsZ, const struct FPrimalCameraInterpParams& OutInterpParamsX, const struct FPrimalCameraInterpParams& OutInterpParamsY, const struct FPrimalCameraInterpParams& OutInterpParamsZ, bool* ReturnValue);
	struct FPrimalCameraParams BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraInterpParams& OutInterpParams, bool* ReturnValue);
	double BPOverrideCameraArmLength(float CurrentCameraArmLength, float DesiredCameraArmLength, bool* ReturnValue, double* CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast);
	struct FLinearColor GetFXBloodColor(struct FLinearColor* ReturnValue, bool K2Node_SwitchString_CmpSuccess);
	float BlueprintOverrideWantsToRun(bool* ReturnValue, bool* RetVal, bool CallFunc_K2_TimerExists_ReturnValue, struct FTimerHandle* CallFunc_K2_SetTimer_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, float* CallFunc_K2_SetTimer_Time_ImplicitCast);
	float UpdateBabyAndRunValues(int32* CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue_1, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController);
	struct FHitResult BPControlRigNotify(class FName NotifyCustomTag, struct FVector* Velocity);
	struct FDinoContentData GetDinoContentData();
	bool BPHandleRightShoulderButton(bool* ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue);
	void UpdateWildBabyNextRunTime();
	void BlendSpaceGenerated(class UBlendSpace** BlendSpace);
	void ReceiveBeginPlay();
	void EditorBeginPlay();
	void BP_OnSetDeath();
	void BPBecomeBaby();
	void ReceiveDestroyed();
	void BPTriggerStasisEvent();
	class FName BPSpawnAttackerDamageImpactFX(class APrimalCharacter** VictimChar);
	void BPBecomeAdult();
	void BPNotifyClaimed();
	double ExecuteUbergraph_Dino_Character_BP(int32* EntryPoint, struct FVector* CallFunc_GetVelocity_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, float CallFunc_TimeSeconds_ReturnValue, double* CallFunc_SelectFloat_ReturnValue, double* CallFunc_SelectFloat_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, double* CallFunc_SelectFloat_ReturnValue_2, double* CallFunc_FMin_ReturnValue, double* CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, double* CallFunc_SelectFloat_B_ImplicitCast_1, double CallFunc_SelectFloat_A_ImplicitCast_1, float CallFunc_SetVariableFloat_InValue_ImplicitCast);
};

}


