#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA5A (0xDA2 - 0x348)
// AnimBlueprintGeneratedClass FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C
class UFPVMeleeWeaponAnimBP_Lance_C : public UAnimInstance
{
public:
	uint8                                        Pad_322A[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0x5)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_322E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x360(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x368(0x8)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x370(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x398(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x3C0(0x48)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x408(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x428(0x48)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x470(0x48)(ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x4B8(0x48)(ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x500(0x48)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x548(0x48)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x590(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x5B0(0xC8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_3235[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x680(0x1A0)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x820(0x20)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x840(0x20)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x860(0x48)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x8A8(0x48)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x8F0(0x48)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x938(0x48)(ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x980(0x48)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x9C8(0x48)(ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0xA10(0x48)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0xA58(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0xA78(0xC8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xB40(0x20)(Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0xB60(0xE0)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xC40(0x48)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0xC88(0xC8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         IsRunning;                                         // 0xD50(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         IsMoving;                                          // 0xD51(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         bIsUsingShield;                                    // 0xD52(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3242[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       UsingShieldWeight;                                 // 0xD58(0x8)(ExportObject, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsBlockingWithShield;                             // 0xD60(0x1)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3243[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               BlockingShieldTranslation;                         // 0xD68(0x18)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       BlockingShieldWeight;                              // 0xD80(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              BlockingShieldRotation;                            // 0xD88(0x18)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsAttacking;                                      // 0xDA0(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bWantsAttacking;                                   // 0xDA1(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UFPVMeleeWeaponAnimBP_Lance_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& AnimGraph);
	float BlueprintUpdateAnimation();
	double ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance(float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation, bool* CallFunc_IsBlockingWithShield_ReturnValue);
};

}


