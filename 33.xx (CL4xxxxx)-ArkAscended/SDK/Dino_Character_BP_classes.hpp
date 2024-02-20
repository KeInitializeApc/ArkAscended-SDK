#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x3498 - 0x33D0)
// BlueprintGeneratedClass Dino_Character_BP.Dino_Character_BP_C
class ADino_Character_BP_C : public APrimalDinoCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x33D0(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class USphereComponent*                      StasisComponent;                                   // 0x33D8(0x8)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UAnimSequence*>                 AlternateDeathAnims;                               // 0x33E0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	struct FDinoContentData                      ContentData;                                       // 0x33F0(0x20)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       BabySpeedMult_WildBaby;                            // 0x3410(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       BabySpeedMult_NotWildBaby;                         // 0x3418(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       FollowingRunDistance_BabyLong;                     // 0x3420(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       FollowingRunDistance_BabyShort;                    // 0x3428(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       FollowingRunDistance_Adult;                        // 0x3430(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       AIFollowStoppingDistance_Baby;                     // 0x3438(0x8)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       AIFollowStoppingDistance_Adult;                    // 0x3440(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        AiAccessFails;                                     // 0x3448(0x4)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2279[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       WildBaby_NextRunTime;                              // 0x3450(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       WildBaby_MinTimeBetweenRuns;                       // 0x3458(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UBlendSpace*                           WalkingIdleDeathBlendSpace;                        // 0x3460(0x8)(Edit, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UBlendSpace*                           WalkingMovingDeathBlendSpace;                      // 0x3468(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UBlendSpace*                           SwimmingDeathBlendSpace;                           // 0x3470(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UBlendSpace*                           FallingDeathBlendSpace;                            // 0x3478(0x8)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UBlendSpace*                           TorpidDeathBlendSpace;                             // 0x3480(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         GeneratedBlendSpaces;                              // 0x3488(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_227A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       PostDestructionFootstepLifespan;                   // 0x3490(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class ADino_Character_BP_C* GetDefaultObj();

	struct FVector BPOverrideCameraDesiredPivotLocation(bool ReturnValue);
	struct FRotator BPOverrideCameraDesiredPivotRotation(bool ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, struct FRotator* CallFunc_MakeRotator_ReturnValue);
	struct FVector BPOverrideCameraDesiredPivotOffset(const struct FPrimalCameraParams& CameraParams, bool ReturnValue);
	struct FPrimalCameraInterpParams BPOverrideCameraPivotLocationInterpParams(const struct FPrimalCameraParams& CameraParams, bool ReturnValue);
	struct FPrimalCameraInterpParams BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraParams& CameraParams, bool ReturnValue);
	float BPOverrideCameraArmLength(const struct FPrimalCameraParams& CameraParams, bool ReturnValue, double* CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast, double CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast);
	struct FLinearColor GetFXBloodColor(const struct FLinearColor& ReturnValue, class FString* CallFunc_GetDisplayName_ReturnValue, class FString* CallFunc_Split_LeftS, class FString* CallFunc_Split_RightS, bool* CallFunc_Split_ReturnValue);
	float BlueprintOverrideWantsToRun(bool bInputWantsToRun, bool ReturnValue, bool* CallFunc_BlueprintOverrideWantsToRun_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_K2_TimerExists_ReturnValue, enum class ENetModeBP CallFunc_SwitchNetworkMode_OutNetworkMode);
	float UpdateBabyAndRunValues(class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, enum class ENetModeBP CallFunc_SwitchNetworkMode_OutNetworkMode);
	struct FVector BPControlRigNotify(class FName NotifyName, const struct FHitResult& WorldSpaceHitResult);
	void GetDinoContentData(const struct FDinoContentData& DinoContentData);
	int32 BPHandleRightShoulderButton(bool ReturnValue);
	void UpdateWildBabyNextRunTime();
	class UBlendSpace* BlendSpaceGenerated();
	void ReceiveBeginPlay();
	void EditorBeginPlay();
	void BP_OnSetDeath();
	void BPBecomeBaby();
	void ReceiveDestroyed();
	void BPTriggerStasisEvent();
	class APrimalCharacter* BPSpawnAttackerDamageImpactFX(class FName* SocketName);
	void BPBecomeAdult();
	void BPNotifyClaimed();
	float ExecuteUbergraph_Dino_Character_BP(const struct FVector& CallFunc_GetVelocity_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, bool CallFunc_Contains_ReturnValue_4, enum class ENetModeBP CallFunc_SwitchNetworkMode_OutNetworkMode, class AActor** CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast_1);
};

}


