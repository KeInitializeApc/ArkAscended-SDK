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
	struct FVector                               ElbowOffset;                                       // 0x3F8(0x18)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	float                                        RightHandIKAlpha;                                  // 0x410(0x4)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         IsFemale;                                          // 0x414(0x1)(Edit, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_25[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	double                                       LeftHandIKAlpha;                                   // 0x418(0x8)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       ShoulderWidthScale;                                // 0x420(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        PV_OffsetFactor;                                   // 0x428(0x4)(Edit, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_28[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PV_L;                                              // 0x430(0x18)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FVector                               PV_R;                                              // 0x448(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	bool                                         TimerTest;                                         // 0x460(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_29[0x7];                                       // Fixing Size After Last Property  > TateDumper <
	struct FVector                               WeaponPositionOffset;                              // 0x468(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	double                                       BoneModifier_ArmLength;                            // 0x480(0x8)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnInstance, SubobjectReference)
	double                                       BoneModifier_TorsoSize;                            // 0x488(0x8)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       BoneModifier_Shoulders;                            // 0x490(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UHuman_FixVB_CtrlRig_C* GetDefaultObj();

};

// 0x64 (0x8C - 0x28)
// RigVMMemoryStorageGeneratorClass Human_FixVB_CtrlRig.RigVMMemory_Literal
class URigVMMemory_Literal : public URigVMMemoryStorage
{
public:
	struct FRigElementKey                        RigVMModel___RigUnit_SetTranslation_3_1_Item__Const; // 0x28(0xC)(Edit, ExportObject, Net, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	enum class ERigVMTransformSpace              RigVMModel___RigUnit_SetTranslation_3_1_Space__Const; // 0x34(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditConst, GlobalConfig, SubobjectReference)
	bool                                         RigVMModel___RigUnit_SetTranslation_3_1_bInitial__Const; // 0x35(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2A[0x2];                                       // Fixing Size After Last Property  > TateDumper <
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_True__Const; // 0x38(0x4)(BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_False__Const; // 0x3C(0x4)(ConstParm, ExportObject, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	bool                                         RigVMModel___RigUnit_SetTranslation_3_1_bPropagateToChildren__Const; // 0x40(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKey                        RigVMModel___RigUnit_SetTranslation_4_1_Item__Const; // 0x44(0xC)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTranslation_3_1_1_Item__Const; // 0x50(0xC)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_1_True__Const; // 0x5C(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Add_1_B__Const;                       // 0x60(0x18)(Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_1_1_True__Const; // 0x78(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_1_1_False__Const; // 0x7C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, EditConst, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTranslation_4_1_1_Item__Const; // 0x80(0xC)(BlueprintVisible, ExportObject, Net, OutParm, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal* GetDefaultObj();

};

// 0x350 (0x378 - 0x28)
// RigVMMemoryStorageGeneratorClass Human_FixVB_CtrlRig.RigVMMemory_Work
class URigVMMemory_Work : public URigVMMemoryStorage
{
public:
	struct FVector                               RigVMModel___Scale_4_Result;                       // 0x28(0x18)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_11_1_Transform;  // 0x40(0x60)(Edit, ConstParm, BlueprintReadOnly, OutParm, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_11_1_CachedIndex; // 0xA0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Scale_4_Value;                        // 0xB0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_Result;     // 0xC8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_30[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTranslation_3_1_CachedIndex; // 0xD0(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Scale_4_1_Result;                     // 0xE0(0x18)(Edit, ConstParm, BlueprintReadOnly, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_31[0x8];                                       // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RigVMModel___RigUnit_GetTransform_12_2_Transform;  // 0x100(0x60)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_12_2_CachedIndex; // 0x160(0x10)(EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Scale_4_1_Value;                      // 0x170(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTranslation_4_1_CachedIndex; // 0x188(0x10)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Add_1_Result;                         // 0x198(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Scale_4_2_Result;                     // 0x1B0(0x18)(Edit, ExportObject, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_33[0x8];                                       // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RigVMModel___RigUnit_GetTransform_11_1_1_Transform; // 0x1D0(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_11_1_1_CachedIndex; // 0x230(0x10)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Scale_4_2_Value;                      // 0x240(0x18)(Edit, BlueprintVisible, Parm, EditConst, GlobalConfig, SubobjectReference)
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_1_Result;   // 0x258(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_1_1_Result; // 0x25C(0x4)(Edit, BlueprintReadOnly, Net, Parm, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Add_1_B__IO;                          // 0x260(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTranslation_3_1_1_CachedIndex; // 0x278(0x10)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Add_1_2_Result;                       // 0x288(0x18)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Scale_4_1_1_Result;                   // 0x2A0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_39[0x8];                                       // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RigVMModel___RigUnit_GetTransform_12_2_1_Transform; // 0x2C0(0x60)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_12_2_1_CachedIndex; // 0x320(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Scale_4_1_1_Value;                    // 0x330(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Add_1_2_B__IO;                        // 0x348(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTranslation_4_1_1_CachedIndex; // 0x360(0x10)(BlueprintVisible, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  RigVMModel___RigVMFunction_ControlFlowBranch_BlockToRun; // 0x370(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class URigVMMemory_Work* GetDefaultObj();

};

}


