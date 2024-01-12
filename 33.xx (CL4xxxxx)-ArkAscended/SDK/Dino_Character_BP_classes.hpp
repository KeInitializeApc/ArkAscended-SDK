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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x33C0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class USphereComponent*                      StasisComponent;                                   // 0x33C8(0x8)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance)
	TArray<class UAnimSequence*>                 AlternateDeathAnims;                               // 0x33D0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FDinoContentData                      ContentData;                                       // 0x33E0(0x20)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       BabySpeedMult_WildBaby;                            // 0x3400(0x8)(ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       BabySpeedMult_NotWildBaby;                         // 0x3408(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	double                                       FollowingRunDistance_BabyLong;                     // 0x3410(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       FollowingRunDistance_BabyShort;                    // 0x3418(0x8)(Edit, Net, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       FollowingRunDistance_Adult;                        // 0x3420(0x8)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       AIFollowStoppingDistance_Baby;                     // 0x3428(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	double                                       AIFollowStoppingDistance_Adult;                    // 0x3430(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	int32                                        AiAccessFails;                                     // 0x3438(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A4E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       WildBaby_NextRunTime;                              // 0x3440(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       WildBaby_MinTimeBetweenRuns;                       // 0x3448(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UBlendSpace*                           WalkingIdleDeathBlendSpace;                        // 0x3450(0x8)(ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UBlendSpace*                           WalkingMovingDeathBlendSpace;                      // 0x3458(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UBlendSpace*                           SwimmingDeathBlendSpace;                           // 0x3460(0x8)(Edit, ConstParm, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UBlendSpace*                           FallingDeathBlendSpace;                            // 0x3468(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	class UBlendSpace*                           TorpidDeathBlendSpace;                             // 0x3470(0x8)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         GeneratedBlendSpaces;                              // 0x3478(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4A4F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       PostDestructionFootstepLifespan;                   // 0x3480(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class ADino_Character_BP_C* GetDefaultObj();

	bool BPOverrideCameraDesiredPivotLocation();
	bool BPOverrideCameraDesiredPivotRotation(float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, struct FRotator* CallFunc_MakeRotator_ReturnValue);
	bool BPOverrideCameraDesiredPivotOffset(const struct FPrimalCameraParams& CameraParams);
	bool BPOverrideCameraPivotLocationInterpParams(const struct FPrimalCameraParams& CameraParams);
	bool BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraParams& CameraParams);
	bool BPOverrideCameraArmLength(const struct FPrimalCameraParams& CameraParams, double CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast, double* CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast);
	struct FLinearColor GetFXBloodColor(class FString* CallFunc_GetDisplayName_ReturnValue, class FString* CallFunc_Split_LeftS, class FString* CallFunc_Split_RightS, bool* CallFunc_Split_ReturnValue);
	float BlueprintOverrideWantsToRun(bool* bInputWantsToRun, bool* CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_K2_TimerExists_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class ENetModeBP* CallFunc_SwitchNetworkMode_OutNetworkMode);
	float UpdateBabyAndRunValues(int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool* K2Node_DynamicCast_bSuccess, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess_1, enum class ENetModeBP* CallFunc_SwitchNetworkMode_OutNetworkMode);
	struct FVector BPControlRigNotify(class FName NotifyName, struct FHitResult* WorldSpaceHitResult);
	struct FDinoContentData GetDinoContentData();
	bool BPHandleRightShoulderButton(class APrimalBuff** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void UpdateWildBabyNextRunTime();
	void BlendSpaceGenerated(class UBlendSpace** BlendSpace);
	void ReceiveBeginPlay();
	void EditorBeginPlay();
	void BP_OnSetDeath();
	void BPBecomeBaby();
	void ReceiveDestroyed();
	void BPTriggerStasisEvent();
	class APrimalCharacter* BPSpawnAttackerDamageImpactFX(class FName* SocketName);
	void BPBecomeAdult();
	void BPNotifyClaimed();
	double ExecuteUbergraph_Dino_Character_BP(struct FVector* CallFunc_GetVelocity_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, float* CallFunc_TimeSeconds_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, bool CallFunc_Contains_ReturnValue_4, enum class ENetModeBP* CallFunc_SwitchNetworkMode_OutNetworkMode, class UActorComponent** CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess_1, int32* CallFunc_Array_Length_ReturnValue, class UNiagaraComponent** CallFunc_SpawnSystemAttached_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, class FName* Temp_name_Variable, class FName* Temp_name_Variable_1, class FName* Temp_name_Variable_2, class FName* Temp_name_Variable_3, class FName* Temp_name_Variable_4, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_SelectFloat_B_ImplicitCast, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast_2, double CallFunc_SelectFloat_B_ImplicitCast_1, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast_3, float CallFunc_SetVariableFloat_InValue_ImplicitCast);
};

}


