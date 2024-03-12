#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9A0 (0xCE8 - 0x348)
// AnimBlueprintGeneratedClass FPVMeleeWeaponAnimBP_Base.FPVMeleeWeaponAnimBP_Base_C
class UFPVMeleeWeaponAnimBP_Base_C : public UAnimInstance
{
public:
	uint8                                        Pad_52F6[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(ConstParm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x368(0x28)(Edit, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x390(0x28)(Edit, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x3B8(0x48)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x400(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x420(0x48)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x468(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x488(0xC8)(Edit, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x550(0x1A0)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x6F0(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x710(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x730(0x48)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x778(0x48)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x7C0(0x28)(Edit, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x7E8(0x28)(Edit, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x810(0x28)(Edit, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x838(0x28)(Edit, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x860(0x28)(Edit, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x888(0x48)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x8D0(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x8F0(0x48)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x938(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x958(0x48)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x9A0(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x9C0(0xC8)(Edit, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xA88(0x20)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0xAA8(0xE0)(Edit, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xB88(0x48)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0xBD0(0xC8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         IsRunning;                                         // 0xC98(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, GlobalConfig)
	bool                                         IsMoving;                                          // 0xC99(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, GlobalConfig)
	bool                                         bIsUsingShield;                                    // 0xC9A(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_52F7[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       UsingShieldWeight;                                 // 0xCA0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsBlockingWithShield;                             // 0xCA8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_52F8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               BlockingShieldTranslation;                         // 0xCB0(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       BlockingShieldWeight;                              // 0xCC8(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              BlockingShieldRotation;                            // 0xCD0(0x18)(Edit, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UFPVMeleeWeaponAnimBP_Base_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& AnimGraph);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	bool ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base(int32* EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, bool* K2Node_DynamicCast_bSuccess, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation, bool* CallFunc_GetBlockingShieldOffsets_ReturnValue, bool* CallFunc_IsBlockingWithShield_ReturnValue, bool CallFunc_IsUsingShield_ReturnValue, struct FVector2D* CallFunc_MakeVector2D_ReturnValue, float* K2Node_Event_DeltaTimeX, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue_3, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_1, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_2, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_3);
};

}


