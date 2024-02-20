#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9A0 (0xCE8 - 0x348)
// AnimBlueprintGeneratedClass FPVClimbPickWeaponAnimBP_Base.FPVClimbPickWeaponAnimBP_Base_C
class UFPVClimbPickWeaponAnimBP_Base_C : public UAnimInstance
{
public:
	uint8                                        Pad_2F36[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0x7)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2F37[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x360(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x368(0x8)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x370(0x20)(Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x390(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x3B8(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x3E0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x408(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x430(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x458(0x48)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x4A0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x4C0(0x48)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x508(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x528(0x48)(ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x570(0x48)(ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x5B8(0x48)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x600(0x48)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x648(0x48)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x690(0x48)(ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x6D8(0x48)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x720(0x48)(ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x768(0x48)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x7B0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x7D0(0xC8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x898(0x48)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x8E0(0x48)(ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x928(0xC8)(Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x9F0(0x48)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xA38(0x48)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0xA80(0x48)(ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0xAC8(0x108)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0xBD0(0x28)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xBF8(0x28)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         IsRunning;                                         // 0xC20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         IsMoving;                                          // 0xC21(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         bIsUsingShield;                                    // 0xC22(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2F3F[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       UsingShieldWeight;                                 // 0xC28(0x8)(ExportObject, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsBlockingWithShield;                             // 0xC30(0x1)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2F41[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               BlockingShieldTranslation;                         // 0xC38(0x18)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       BlockingShieldWeight;                              // 0xC50(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              BlockingShieldRotation;                            // 0xC58(0x18)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsAttachedToClimb;                                // 0xC70(0x1)(ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	bool                                         bClimbingLeftArm;                                  // 0xC71(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F42[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LeftArmTranslation;                                // 0xC78(0x18)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FVector                               RightArmTranslation;                               // 0xC90(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	double                                       ClimbingLookingToSide;                             // 0xCA8(0x8)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsHanging;                                         // 0xCB0(0x1)(ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2F47[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              NewVar;                                            // 0xCB8(0x18)(BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               NewVar0;                                           // 0xCD0(0x18)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UFPVClimbPickWeaponAnimBP_Base_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& AnimGraph);
	float BlueprintUpdateAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_AnimGraphNode_BlendListByBool_3DE4BFF340F0FB0AA29320AF578C8451();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_AnimGraphNode_ApplyAdditive_21FAB2184A08438AA94D02A2394241B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_AnimGraphNode_BlendListByBool_14BA7FC34C87107147CB00ACF072AD06();
	bool ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base(class AActor* CallFunc_GetOwningActor_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, double* CallFunc_VSize2D_ReturnValue, float K2Node_Event_DeltaTimeX, double* CallFunc_Abs_ReturnValue, double* CallFunc_FClamp_ReturnValue, double K2Node_VariableSet_ClimbingLookingToSide_ImplicitCast, float K2Node_StructMemberSet_Alpha_ImplicitCast);
};

}


