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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x33C0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class USphereComponent*                      StasisComponent;                                   // 0x33C8(0x8)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance)
	TArray<class UAnimSequence*>                 AlternateDeathAnims;                               // 0x33D0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FDinoContentData                      ContentData;                                       // 0x33E0(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       BabySpeedMult_WildBaby;                            // 0x3400(0x8)(ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       BabySpeedMult_NotWildBaby;                         // 0x3408(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       FollowingRunDistance_BabyLong;                     // 0x3410(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       FollowingRunDistance_BabyShort;                    // 0x3418(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       FollowingRunDistance_Adult;                        // 0x3420(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       AIFollowStoppingDistance_Baby;                     // 0x3428(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       AIFollowStoppingDistance_Adult;                    // 0x3430(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        AiAccessFails;                                     // 0x3438(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4A2A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       WildBaby_NextRunTime;                              // 0x3440(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       WildBaby_MinTimeBetweenRuns;                       // 0x3448(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UBlendSpace*                           WalkingIdleDeathBlendSpace;                        // 0x3450(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UBlendSpace*                           WalkingMovingDeathBlendSpace;                      // 0x3458(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UBlendSpace*                           SwimmingDeathBlendSpace;                           // 0x3460(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UBlendSpace*                           FallingDeathBlendSpace;                            // 0x3468(0x8)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UBlendSpace*                           TorpidDeathBlendSpace;                             // 0x3470(0x8)(Edit, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         GeneratedBlendSpaces;                              // 0x3478(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4A2B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       PostDestructionFootstepLifespan;                   // 0x3480(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class ADino_Character_BP_C* GetDefaultObj();

	void BPOverrideCameraDesiredPivotLocation(const struct FVector& CurrentCameraPivotLocation, const struct FVector& DesiredCameraPivotLocation, bool ReturnValue);
	struct FRotator BPOverrideCameraDesiredPivotRotation(const struct FRotator& CurrentCameraPivotRotation, const struct FRotator& DesiredCameraPivotRotation, bool ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw);
	struct FPrimalCameraParams BPOverrideCameraDesiredPivotOffset(const struct FVector& DesiredCameraOffset, bool ReturnValue);
	struct FPrimalCameraParams BPOverrideCameraPivotLocationInterpParams(const struct FPrimalCameraPivotZInterpOverrides& PivotZInterpOverrides, const struct FPrimalCameraInterpParams& LastInterpParamsX, const struct FPrimalCameraInterpParams& LastInterpParamsY, const struct FPrimalCameraInterpParams& LastInterpParamsZ, const struct FPrimalCameraInterpParams& OutInterpParamsX, const struct FPrimalCameraInterpParams& OutInterpParamsY, const struct FPrimalCameraInterpParams& OutInterpParamsZ, bool ReturnValue);
	struct FPrimalCameraParams BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraInterpParams& OutInterpParams, bool ReturnValue);
	double BPOverrideCameraArmLength(float CurrentCameraArmLength, float DesiredCameraArmLength, bool ReturnValue);
	struct FLinearColor GetFXBloodColor(const struct FLinearColor& ReturnValue, bool K2Node_SwitchString_CmpSuccess);
	float BlueprintOverrideWantsToRun(bool ReturnValue, bool* RetVal, bool CallFunc_BlueprintOverrideWantsToRun_ReturnValue, struct FTimerHandle* CallFunc_K2_SetTimer_ReturnValue, bool* CallFunc_IsWildSlow_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_GetNetworkTimeInSeconds_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, enum class ENetModeBP* CallFunc_SwitchNetworkMode_OutNetworkMode, bool* K2Node_SwitchEnum_CmpSuccess, float* CallFunc_K2_SetTimer_Time_ImplicitCast);
	float UpdateBabyAndRunValues(bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class AAIController* CallFunc_GetAIController_ReturnValue, bool* CallFunc_IsWildSlow_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue_1, enum class ENetModeBP* CallFunc_SwitchNetworkMode_OutNetworkMode, bool* K2Node_SwitchEnum_CmpSuccess);
	struct FVector BPControlRigNotify(class FName* NotifyCustomTag);
	struct FDinoContentData GetDinoContentData();
	int32 BPHandleRightShoulderButton(bool ReturnValue, int32 Temp_int_Loop_Counter_Variable, const TArray<class APrimalBuff*>& CallFunc_GetBuffs_TheBuffs, class APrimalBuff* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
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
	float ExecuteUbergraph_Dino_Character_BP(int32 EntryPoint, struct FVector* CallFunc_GetVelocity_ReturnValue, class UClass** CallFunc_GetObjectClass_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double* CallFunc_SelectFloat_ReturnValue, double* CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, float* CallFunc_PlayAnimMontage_ReturnValue, bool* CallFunc_Contains_ReturnValue, bool* CallFunc_Contains_ReturnValue_1, bool* CallFunc_Contains_ReturnValue_2, bool* CallFunc_Contains_ReturnValue_3, bool* CallFunc_Contains_ReturnValue_4, enum class ENetModeBP* CallFunc_SwitchNetworkMode_OutNetworkMode, bool* K2Node_SwitchEnum_CmpSuccess, const TArray<class USceneComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, struct FTransform* CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_DoesUseHibernation_ReturnValue, class FName K2Node_Event_SocketName, class APrimalCharacter* K2Node_Event_VictimChar, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, double* CallFunc_SelectFloat_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_GetNetworkTimeInSeconds_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_4, double* CallFunc_SelectFloat_ReturnValue_2, double CallFunc_FMin_ReturnValue, double* CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, float* CallFunc_SetLifeSpan_InLifespan_ImplicitCast, double* CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_2, double* CallFunc_SelectFloat_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_3);
};

}


