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
	uint8                                        Pad_39DF[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x368(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x388(0x470)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, EditConst, SubobjectReference)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x7F8(0xC8)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         __CustomProperty_bShouldReset_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8C0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_39E0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       __CustomProperty_CharacterCreatorFatBelly_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8C8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, EditConst, SubobjectReference)
	double                                       __CustomProperty_CharacterCreatorFatChest_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8D0(0x8)(Edit, Net, EditFixedSize, ReturnParm, Config, EditConst, SubobjectReference)
	bool                                         __CustomProperty_bFemale_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8D8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	uint8                                        Pad_39E1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       __CustomProperty_PhysicsFactor_Breast_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8E0(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	double                                       __CustomProperty_PhysicsFactor_Belly_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8E8(0x8)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	double                                       __CustomProperty_OverallFat_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8F0(0x8)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	float                                        Character_Creator_Overall_Fat;                     // 0x8F8(0x4)(ExportObject, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_39E2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Item_Based_Physics_Factor_Belly;                   // 0x900(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	double                                       Item_Based_Physics_Factor_Breast;                  // 0x908(0x8)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	bool                                         Is_Female;                                         // 0x910(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_39E3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Character_Creator_Fat_01Chest;                     // 0x914(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	float                                        Character_Creator_Fat_01Belly;                     // 0x918(0x4)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	bool                                         WasFirstPerson;                                    // 0x91C(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	bool                                         ShouldReset;                                       // 0x91D(0x1)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
	uint8                                        Pad_39E4[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       ShouldResetFor;                                    // 0x920(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UHuman_Male_TPV_PPAnimBP_C* GetDefaultObj();

	struct FPoseLink AnimGraph(const struct FPoseLink& InPose);
	float BlueprintUpdateAnimation();
	double ExecuteUbergraph_Human_Male_TPV_PPAnimBP(float K2Node_Event_DeltaTimeX, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, double CallFunc_FMax_ReturnValue);
};

}


