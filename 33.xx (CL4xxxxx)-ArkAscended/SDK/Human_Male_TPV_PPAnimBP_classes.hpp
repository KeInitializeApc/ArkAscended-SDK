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
	uint8                                        Pad_2F9E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x368(0x20)(Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x388(0x470)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x7F8(0xC8)(ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         __CustomProperty_bShouldReset_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2FA2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       __CustomProperty_CharacterCreatorFatBelly_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       __CustomProperty_CharacterCreatorFatChest_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8D0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         __CustomProperty_bFemale_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8D8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2FA3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       __CustomProperty_PhysicsFactor_Breast_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8E0(0x8)(BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       __CustomProperty_PhysicsFactor_Belly_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8E8(0x8)(ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       __CustomProperty_OverallFat_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8F0(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        Character_Creator_Overall_Fat;                     // 0x8F8(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2FA4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Item_Based_Physics_Factor_Belly;                   // 0x900(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       Item_Based_Physics_Factor_Breast;                  // 0x908(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         Is_Female;                                         // 0x910(0x1)(ExportObject, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2FA6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Character_Creator_Fat_01Chest;                     // 0x914(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        Character_Creator_Fat_01Belly;                     // 0x918(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         WasFirstPerson;                                    // 0x91C(0x1)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         ShouldReset;                                       // 0x91D(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	uint8                                        Pad_2FA8[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       ShouldResetFor;                                    // 0x920(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UHuman_Male_TPV_PPAnimBP_C* GetDefaultObj();

	struct FPoseLink AnimGraph(const struct FPoseLink& AnimGraph);
	float BlueprintUpdateAnimation();
	double ExecuteUbergraph_Human_Male_TPV_PPAnimBP(float K2Node_Event_DeltaTimeX, bool CallFunc_IsFirstPersonCamera_ReturnValue, bool CallFunc_IsRider_ReturnValue, enum class ENetRole CallFunc_GetLocalRole_ReturnValue, class AActor* CallFunc_GetBasedOnDinoAsActor_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UBaseHumanAnimBP_C** K2Node_DynamicCast_AsBase_Human_Anim_BP, bool* CallFunc_NotEqual_BoolBool_ReturnValue, double CallFunc_FMax_ReturnValue);
};

}


