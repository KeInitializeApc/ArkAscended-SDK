#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x498 - 0x3F8)
// RigVMBlueprintGeneratedClass Human_FixVB_CtrlRig.Human_FixVB_CtrlRig_C
class UHuman_FixVB_CtrlRig_C : public UControlRig
{
public:
	struct FVector                               ElbowOffset;                                       // 0x3F8(0x18)(ConstParm, Net, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        RightHandIKAlpha;                                  // 0x410(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	bool                                         IsFemale;                                          // 0x414(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A9F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LeftHandIKAlpha;                                   // 0x418(0x8)(ConstParm, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	double                                       ShoulderWidthScale;                                // 0x420(0x8)(BlueprintVisible, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        PV_OffsetFactor;                                   // 0x428(0x4)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2AA2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PV_L;                                              // 0x430(0x18)(ConstParm, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               PV_R;                                              // 0x448(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         TimerTest;                                         // 0x460(0x1)(ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2AA3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               WeaponPositionOffset;                              // 0x468(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       BoneModifier_ArmLength;                            // 0x480(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	double                                       BoneModifier_TorsoSize;                            // 0x488(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       BoneModifier_Shoulders;                            // 0x490(0x8)(ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UHuman_FixVB_CtrlRig_C* GetDefaultObj();

};

// 0x64 (0x8C - 0x28)
// RigVMMemoryStorageGeneratorClass Human_FixVB_CtrlRig.RigVMMemory_Literal
class URigVMMemory_Literal : public URigVMMemoryStorage
{
public:
	struct FRigElementKey                        RigVMModel___RigUnit_SetTranslation_3_1_Item__Const; // 0x28(0xC)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	enum class ERigVMTransformSpace              RigVMModel___RigUnit_SetTranslation_3_1_Space__Const; // 0x34(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         RigVMModel___RigUnit_SetTranslation_3_1_bInitial__Const; // 0x35(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2AA5[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_True__Const; // 0x38(0x4)(ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_False__Const; // 0x3C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         RigVMModel___RigUnit_SetTranslation_3_1_bPropagateToChildren__Const; // 0x40(0x1)(ConstParm, BlueprintVisible, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2AA7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKey                        RigVMModel___RigUnit_SetTranslation_4_1_Item__Const; // 0x44(0xC)(Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTranslation_3_1_1_Item__Const; // 0x50(0xC)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_1_True__Const; // 0x5C(0x4)(Net, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Add_1_B__Const;                       // 0x60(0x18)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_1_1_True__Const; // 0x78(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_1_1_False__Const; // 0x7C(0x4)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTranslation_4_1_1_Item__Const; // 0x80(0xC)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal* GetDefaultObj();

};

// 0x350 (0x378 - 0x28)
// RigVMMemoryStorageGeneratorClass Human_FixVB_CtrlRig.RigVMMemory_Work
class URigVMMemory_Work : public URigVMMemoryStorage
{
public:
	struct FVector                               RigVMModel___Scale_4_Result;                       // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_11_1_Transform;  // 0x40(0x60)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_11_1_CachedIndex; // 0xA0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Scale_4_Value;                        // 0xB0(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_Result;     // 0xC8(0x4)(ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2AAB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTranslation_3_1_CachedIndex; // 0xD0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Scale_4_1_Result;                     // 0xE0(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_2AAC[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RigVMModel___RigUnit_GetTransform_12_2_Transform;  // 0x100(0x60)(BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_12_2_CachedIndex; // 0x160(0x10)(BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Scale_4_1_Value;                      // 0x170(0x18)(Edit, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTranslation_4_1_CachedIndex; // 0x188(0x10)(Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Add_1_Result;                         // 0x198(0x18)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               RigVMModel___Scale_4_2_Result;                     // 0x1B0(0x18)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2AB1[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RigVMModel___RigUnit_GetTransform_11_1_1_Transform; // 0x1D0(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_11_1_1_CachedIndex; // 0x230(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               RigVMModel___Scale_4_2_Value;                      // 0x240(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_1_Result;   // 0x258(0x4)(Edit, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_1_1_Result; // 0x25C(0x4)(Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Add_1_B__IO;                          // 0x260(0x18)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTranslation_3_1_1_CachedIndex; // 0x278(0x10)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               RigVMModel___Add_1_2_Result;                       // 0x288(0x18)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Scale_4_1_1_Result;                   // 0x2A0(0x18)(ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2AB6[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RigVMModel___RigUnit_GetTransform_12_2_1_Transform; // 0x2C0(0x60)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_12_2_1_CachedIndex; // 0x320(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Scale_4_1_1_Value;                    // 0x330(0x18)(Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Add_1_2_B__IO;                        // 0x348(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTranslation_4_1_1_CachedIndex; // 0x360(0x10)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class FName                                  RigVMModel___RigVMFunction_ControlFlowBranch_BlockToRun; // 0x370(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class URigVMMemory_Work* GetDefaultObj();

};

}


