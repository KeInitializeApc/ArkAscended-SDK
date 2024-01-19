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
	uint8                                        Pad_34BF[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0x5)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_34C1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x360(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x368(0x8)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x370(0x28)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference, Interp)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x398(0x28)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x3C0(0x48)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference, EditorOnly)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x408(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference, RepNotify, Interp)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x428(0x48)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x470(0x48)(Edit, ExportObject, Net, ReturnParm, Transient, Config, EditConst, SubobjectReference, NonTransactional)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x4B8(0x48)(Edit, ExportObject, Net, ReturnParm, Transient, Config, EditConst, SubobjectReference, RepNotify, Interp)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x500(0x48)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference, Interp, NonTransactional)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x548(0x48)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference, RepNotify, NonTransactional)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x590(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference, Interp)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x5B0(0xC8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_34C2[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x680(0x1A0)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x820(0x20)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x840(0x20)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x860(0x48)(Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference, Interp)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x8A8(0x48)(Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x8F0(0x48)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference, NonTransactional)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x938(0x48)(Edit, ExportObject, Net, ReturnParm, Transient, Config, EditConst, SubobjectReference, Interp)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x980(0x48)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference, RepNotify, Interp)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x9C8(0x48)(Edit, ExportObject, Net, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0xA10(0x48)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference, Interp)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0xA58(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0xA78(0xC8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xB40(0x20)(Edit, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0xB60(0xE0)(Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xC40(0x48)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0xC88(0xC8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	bool                                         IsRunning;                                         // 0xD50(0x1)(Edit, ConstParm, ExportObject, OutParm, SubobjectReference)
	bool                                         IsMoving;                                          // 0xD51(0x1)(ExportObject, Net, Parm, SubobjectReference)
	bool                                         bIsUsingShield;                                    // 0xD52(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_34C4[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       UsingShieldWeight;                                 // 0xD58(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsBlockingWithShield;                             // 0xD60(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_34C5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               BlockingShieldTranslation;                         // 0xD68(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       BlockingShieldWeight;                              // 0xD80(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              BlockingShieldRotation;                            // 0xD88(0x18)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsAttacking;                                      // 0xDA0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bWantsAttacking;                                   // 0xDA1(0x1)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UFPVMeleeWeaponAnimBP_Lance_C* GetDefaultObj();

	struct FPoseLink AnimGraph();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	double ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance(int32 EntryPoint, class AShooterWeapon** K2Node_DynamicCast_AsShooter_Weapon, class AShooterCharacter** CallFunc_GetPawnOwner_ReturnValue, struct FRotator* CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation, bool* CallFunc_GetBlockingShieldOffsets_ReturnValue, bool CallFunc_IsBlockingWithShield_ReturnValue, class AWeapLance_C** K2Node_DynamicCast_AsWeap_Lance);
};

}


