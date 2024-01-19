#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5E0 (0x928 - 0x348)
// AnimBlueprintGeneratedClass Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C
class UHuman_Male_TPV_PPAnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_2245[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x368(0x20)(Edit, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x388(0x470)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x7F8(0xC8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         __CustomProperty_bShouldReset_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8C0(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2246[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       __CustomProperty_CharacterCreatorFatBelly_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8C8(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       __CustomProperty_CharacterCreatorFatChest_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8D0(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         __CustomProperty_bFemale_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8D8(0x1)(Edit, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2247[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       __CustomProperty_PhysicsFactor_Breast_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8E0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       __CustomProperty_PhysicsFactor_Belly_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8E8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       __CustomProperty_OverallFat_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8F0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	float                                        Character_Creator_Overall_Fat;                     // 0x8F8(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2248[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Item_Based_Physics_Factor_Belly;                   // 0x900(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Item_Based_Physics_Factor_Breast;                  // 0x908(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Is_Female;                                         // 0x910(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2249[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Character_Creator_Fat_01Chest;                     // 0x914(0x4)(Edit, ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	float                                        Character_Creator_Fat_01Belly;                     // 0x918(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         WasFirstPerson;                                    // 0x91C(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         ShouldReset;                                       // 0x91D(0x1)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
	uint8                                        Pad_224A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       ShouldResetFor;                                    // 0x920(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UHuman_Male_TPV_PPAnimBP_C* GetDefaultObj();

	struct FPoseLink AnimGraph(const struct FPoseLink& InPose);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	double ExecuteUbergraph_Human_Male_TPV_PPAnimBP(int32 EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double* CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue);
};

}


