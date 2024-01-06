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
	struct FVector                               ElbowOffset;                                       // 0x3F8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, GlobalConfig, SubobjectReference)
	float                                        RightHandIKAlpha;                                  // 0x410(0x4)(Net, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	bool                                         IsFemale;                                          // 0x414(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D3F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LeftHandIKAlpha;                                   // 0x418(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	double                                       ShoulderWidthScale;                                // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	float                                        PV_OffsetFactor;                                   // 0x428(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D41[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PV_L;                                              // 0x430(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, GlobalConfig, SubobjectReference)
	struct FVector                               PV_R;                                              // 0x448(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         TimerTest;                                         // 0x460(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D43[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               WeaponPositionOffset;                              // 0x468(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	double                                       BoneModifier_ArmLength;                            // 0x480(0x8)(ConstParm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	double                                       BoneModifier_TorsoSize;                            // 0x488(0x8)(ConstParm, OutParm, Transient, Config, EditConst, SubobjectReference)
	double                                       BoneModifier_Shoulders;                            // 0x490(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UHuman_FixVB_CtrlRig_C* GetDefaultObj();

};

// 0x64 (0x8C - 0x28)
// RigVMMemoryStorageGeneratorClass Human_FixVB_CtrlRig.RigVMMemory_Literal
class URigVMMemory_Literal : public URigVMMemoryStorage
{
public:
	struct FRigElementKey                        RigVMModel___RigUnit_SetTranslation_3_1_Item__Const; // 0x28(0xC)(Edit, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ERigVMTransformSpace              RigVMModel___RigUnit_SetTranslation_3_1_Space__Const; // 0x34(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         RigVMModel___RigUnit_SetTranslation_3_1_bInitial__Const; // 0x35(0x1)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D4D[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_True__Const; // 0x38(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_False__Const; // 0x3C(0x4)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         RigVMModel___RigUnit_SetTranslation_3_1_bPropagateToChildren__Const; // 0x40(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D52[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigElementKey                        RigVMModel___RigUnit_SetTranslation_4_1_Item__Const; // 0x44(0xC)(Edit, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTranslation_3_1_1_Item__Const; // 0x50(0xC)(BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_1_True__Const; // 0x5C(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Add_1_B__Const;                       // 0x60(0x18)(ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_1_1_True__Const; // 0x78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_1_1_False__Const; // 0x7C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTranslation_4_1_1_Item__Const; // 0x80(0xC)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal* GetDefaultObj();

};

// 0x350 (0x378 - 0x28)
// RigVMMemoryStorageGeneratorClass Human_FixVB_CtrlRig.RigVMMemory_Work
class URigVMMemory_Work : public URigVMMemoryStorage
{
public:
	struct FVector                               RigVMModel___Scale_4_Result;                       // 0x28(0x18)(Edit, ConstParm, BlueprintVisible, Parm, Config, GlobalConfig, SubobjectReference)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_11_1_Transform;  // 0x40(0x60)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_11_1_CachedIndex; // 0xA0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Scale_4_Value;                        // 0xB0(0x18)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_Result;     // 0xC8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D66[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTranslation_3_1_CachedIndex; // 0xD0(0x10)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Scale_4_1_Result;                     // 0xE0(0x18)(BlueprintReadOnly, OutParm, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D69[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RigVMModel___RigUnit_GetTransform_12_2_Transform;  // 0x100(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_12_2_CachedIndex; // 0x160(0x10)(ExportObject, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Scale_4_1_Value;                      // 0x170(0x18)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTranslation_4_1_CachedIndex; // 0x188(0x10)(Edit, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Add_1_Result;                         // 0x198(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Scale_4_2_Result;                     // 0x1B0(0x18)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D6F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RigVMModel___RigUnit_GetTransform_11_1_1_Transform; // 0x1D0(0x60)(Edit, Net, Parm, Transient, Config, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_11_1_1_CachedIndex; // 0x230(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Scale_4_2_Value;                      // 0x240(0x18)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_1_Result;   // 0x258(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        RigVMModel___DISPATCH_RigVMDispatch_If_1_1_Result; // 0x25C(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Add_1_B__IO;                          // 0x260(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTranslation_3_1_1_CachedIndex; // 0x278(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Add_1_2_Result;                       // 0x288(0x18)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Scale_4_1_1_Result;                   // 0x2A0(0x18)(ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D72[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RigVMModel___RigUnit_GetTransform_12_2_1_Transform; // 0x2C0(0x60)(Edit, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_12_2_1_CachedIndex; // 0x320(0x10)(ConstParm, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Scale_4_1_1_Value;                    // 0x330(0x18)(Edit, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___Add_1_2_B__IO;                        // 0x348(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTranslation_4_1_1_CachedIndex; // 0x360(0x10)(BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FName                                  RigVMModel___RigVMFunction_ControlFlowBranch_BlockToRun; // 0x370(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class URigVMMemory_Work* GetDefaultObj();

};

}


