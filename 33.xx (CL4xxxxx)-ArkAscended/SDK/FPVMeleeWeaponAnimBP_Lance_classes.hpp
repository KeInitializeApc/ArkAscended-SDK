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
	uint8                                        Pad_45A2[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0x5)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_45A3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x360(0x8)(ConstParm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x368(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x370(0x28)(Edit, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x398(0x28)(Edit, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x3C0(0x48)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x408(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x428(0x48)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x470(0x48)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x4B8(0x48)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x500(0x48)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x548(0x48)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x590(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x5B0(0xC8)(Edit, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_45A5[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x680(0x1A0)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x820(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x840(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x860(0x48)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x8A8(0x48)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x8F0(0x48)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x938(0x48)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x980(0x48)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x9C8(0x48)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0xA10(0x48)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0xA58(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0xA78(0xC8)(Edit, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xB40(0x20)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0xB60(0xE0)(Edit, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xC40(0x48)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0xC88(0xC8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         IsRunning;                                         // 0xD50(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, GlobalConfig)
	bool                                         IsMoving;                                          // 0xD51(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, GlobalConfig)
	bool                                         bIsUsingShield;                                    // 0xD52(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_45A7[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       UsingShieldWeight;                                 // 0xD58(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsBlockingWithShield;                             // 0xD60(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_45A8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               BlockingShieldTranslation;                         // 0xD68(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       BlockingShieldWeight;                              // 0xD80(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              BlockingShieldRotation;                            // 0xD88(0x18)(Edit, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsAttacking;                                      // 0xDA0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, EditConst, SubobjectReference)
	bool                                         bWantsAttacking;                                   // 0xDA1(0x1)(BlueprintVisible, Net, Parm, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UFPVMeleeWeaponAnimBP_Lance_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& AnimGraph);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	struct FRotator ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance(int32* EntryPoint, float* K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, bool* K2Node_DynamicCast_bSuccess, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, double CallFunc_FInterpTo_ReturnValue, const struct FVector& CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation, bool* CallFunc_GetBlockingShieldOffsets_ReturnValue, bool* CallFunc_IsBlockingWithShield_ReturnValue, bool CallFunc_IsUsingShield_ReturnValue, class AWeapLance_C* K2Node_DynamicCast_AsWeap_Lance, bool* K2Node_DynamicCast_bSuccess_2, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue_3, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_1, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_2, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_3);
};

}


