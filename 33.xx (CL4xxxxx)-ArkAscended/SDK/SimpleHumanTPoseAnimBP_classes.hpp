#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x358 (0x6A0 - 0x348)
// AnimBlueprintGeneratedClass SimpleHumanTPoseAnimBP.SimpleHumanTPoseAnimBP_C
class USimpleHumanTPoseAnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_357A[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(ConstParm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_357C[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x370(0x1A0)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x510(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x530(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x550(0x20)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_ApplyBoneMods               AnimGraphNode_ApplyBoneMods;                       // 0x570(0xD0)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              RootRotOffset;                                     // 0x640(0x18)(Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               RootLocOffset;                                     // 0x658(0x18)(ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       AimOffsetAlpha;                                    // 0x670(0x8)(ExportObject, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	FMulticastInlineDelegateProperty_            NewEventDispatcher;                                // 0x678(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              RootRotOffset_Interpolated;                        // 0x688(0x18)(ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class USimpleHumanTPoseAnimBP_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& AnimGraph);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SimpleHumanTPoseAnimBP(int32* EntryPoint, float* K2Node_Event_DeltaTimeX);
	void NewEventDispatcher__DelegateSignature();
};

}


