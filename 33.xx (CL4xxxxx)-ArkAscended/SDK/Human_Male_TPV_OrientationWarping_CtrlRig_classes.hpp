#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE1 (0x4D9 - 0x3F8)
// RigVMBlueprintGeneratedClass Human_Male_TPV_OrientationWarping_CtrlRig.Human_Male_TPV_OrientationWarping_CtrlRig_C
class UHuman_Male_TPV_OrientationWarping_CtrlRig_C : public UControlRig
{
public:
	double                                       RelativeAngle;                                     // 0x3F8(0x8)(Parm, ZeroConstructor, EditConst, SubobjectReference)
	double                                       HipAngle;                                          // 0x400(0x8)(ConstParm, BlueprintReadOnly, EditConst, SubobjectReference)
	uint8                                        Pad_13E8[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Lfoot;                                             // 0x410(0x60)(BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FTransform                            Rfoot;                                             // 0x470(0x60)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       Multiply_1_1_B;                                    // 0x4D0(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         bApplyIK;                                          // 0x4D8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UHuman_Male_TPV_OrientationWarping_CtrlRig_C* GetDefaultObj();

};

// 0x130 (0x158 - 0x28)
// RigVMMemoryStorageGeneratorClass Human_Male_TPV_OrientationWarping_CtrlRig.RigVMMemory_Literal
class URigVMMemory_Literal : public URigVMMemoryStorage
{
public:
	struct FRigElementKey                        RigVMModel___RigUnit_SetRotation_3_Item__Const;    // 0x28(0xC)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	enum class ERigVMTransformSpace              RigVMModel___RigUnit_SetRotation_3_Space__Const;   // 0x34(0x1)(BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         RigVMModel___RigUnit_SetRotation_3_bInitial__Const; // 0x35(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13EE[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               RigVMModel___RigVMFunction_MathQuaternionFromEuler_1_Euler__Const; // 0x38(0x18)(ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       RigVMModel___Multiply_1_1_B__Const;                // 0x50(0x8)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	enum class EEulerRotationOrder               RigVMModel___RigVMFunction_MathQuaternionFromEuler_1_RotationOrder__Const; // 0x58(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13EF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RigVMModel___RigUnit_SetRotation_3_Weight__Const;  // 0x5C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         RigVMModel___RigUnit_SetRotation_3_bPropagateToChildren__Const; // 0x60(0x1)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13F0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       RigVMModel___Multiply_1_1_1_B__Const;              // 0x68(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	TArray<struct FRigElementKey>                RigVMModel___RigUnit_ItemArray_Items__Const;       // 0x70(0x10)(Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_4_Item__Const;   // 0x80(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_5_Item__Const;   // 0x8C(0xC)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        RigVMModel___RigUnit_SetRotation_Item__Const;      // 0x98(0xC)(Edit, BlueprintVisible, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13F1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       RigVMModel___Multiply_1_B__Const;                  // 0xA8(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        RigVMModel___Interpolate_T__Const;                 // 0xB0(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	class FName                                  RigVMModel___PBIK_Root__Const;                     // 0xB4(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13F2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPBIKEffector>                 RigVMModel___PBIK_Effectors__Const;                // 0xC0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	TArray<struct FPBIKBoneSetting>              RigVMModel___PBIK_BoneSettings__Const;             // 0xD0(0x10)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	TArray<class FName>                          RigVMModel___PBIK_ExcludedBones__Const;            // 0xE0(0x10)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPBIKSolverSettings                   RigVMModel___PBIK_Settings__Const;                 // 0xF0(0x3C)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPBIKDebug                            RigVMModel___PBIK_Debug__Const;                    // 0x12C(0x8)(ConstParm, BlueprintVisible, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13F4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPBIKEffector>                 RigVMModel___PBIK_1_Effectors__Const;              // 0x138(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	TArray<struct FPBIKBoneSetting>              RigVMModel___PBIK_1_BoneSettings__Const;           // 0x148(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal* GetDefaultObj();

};

// 0x798 (0x7C0 - 0x28)
// RigVMMemoryStorageGeneratorClass Human_Male_TPV_OrientationWarping_CtrlRig.RigVMMemory_Work
class URigVMMemory_Work : public URigVMMemoryStorage
{
public:
	uint8                                        Pad_13FA[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 RigVMModel___Multiply_3_Result;                    // 0x30(0x20)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FQuat                                 RigVMModel___RigVMFunction_MathQuaternionFromEuler_1_Result; // 0x50(0x20)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	double                                       RigVMModel___Multiply_1_1_Result;                  // 0x70(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___RigVMFunction_MathQuaternionFromEuler_1_Euler__IO; // 0x78(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_6_Transform;     // 0x90(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_6_CachedIndex;   // 0xF0(0x10)(Edit, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FQuat                                 RigVMModel___Multiply_3_B;                         // 0x100(0x20)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetRotation_3_CachedIndex;    // 0x120(0x10)(Edit, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FRigElementKey                        RigVMModel___DISPATCH_RigVMDispatch_ArrayIterator_Element; // 0x130(0xC)(ExportObject, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1400[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 RigVMModel___Multiply_4_Result;                    // 0x140(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FQuat                                 RigVMModel___RigVMFunction_MathQuaternionFromEuler_1_2_Result; // 0x160(0x20)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       RigVMModel___Multiply_1_1_1_Result;                // 0x180(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___RigVMFunction_MathQuaternionFromEuler_1_2_Euler__IO; // 0x188(0x18)(EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FTransform                            RigVMModel___GetTransform_Transform;               // 0x1A0(0x60)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_CachedIndex;             // 0x200(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FQuat                                 RigVMModel___Multiply_4_B;                         // 0x210(0x20)(ExportObject, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetRotation_4_CachedIndex;    // 0x230(0x10)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	TArray<struct FRigElementKey>                RigVMModel___RigUnit_ItemArray_Items__IO;          // 0x240(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        RigVMModel___DISPATCH_RigVMDispatch_ArrayIterator_Index; // 0x250(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	int32                                        RigVMModel___DISPATCH_RigVMDispatch_ArrayIterator_Count; // 0x254(0x4)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	float                                        RigVMModel___DISPATCH_RigVMDispatch_ArrayIterator_Ratio; // 0x258(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class FName                                  RigVMModel___DISPATCH_RigVMDispatch_ArrayIterator_BlockToRun; // 0x25C(0x8)(Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1407[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RigVMModel___RigUnit_GetTransform_4_Transform;     // 0x270(0x60)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_4_CachedIndex;   // 0x2D0(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_5_Transform;     // 0x2E0(0x60)(BlueprintVisible, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_5_CachedIndex;   // 0x340(0x10)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FQuat                                 RigVMModel___Multiply_Result;                      // 0x350(0x20)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_Transform;       // 0x370(0x60)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_CachedIndex;     // 0x3D0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FQuat                                 RigVMModel___Multiply_A;                           // 0x3E0(0x20)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FQuat                                 RigVMModel___RigVMFunction_MathQuaternionFromEuler_Result; // 0x400(0x20)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	double                                       RigVMModel___Multiply_1_Result;                    // 0x420(0x8)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	double                                       RigVMModel___Subtract_Result;                      // 0x428(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FVector                               RigVMModel___RigVMFunction_MathQuaternionFromEuler_Euler__IO; // 0x430(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetRotation_CachedIndex;      // 0x448(0x10)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_140F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 RigVMModel___Interpolate_Result;                   // 0x460(0x20)(Edit, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FQuat                                 RigVMModel___Interpolate_A;                        // 0x480(0x20)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_4_1_Transform;   // 0x4A0(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_4_1_CachedIndex; // 0x500(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FQuat                                 RigVMModel___Interpolate_B;                        // 0x510(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetRotation_1_CachedIndex;    // 0x530(0x10)(ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FQuat                                 RigVMModel___Interpolate_1_Result;                 // 0x540(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FQuat                                 RigVMModel___Interpolate_1_A;                      // 0x560(0x20)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_5_1_Transform;   // 0x580(0x60)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_5_1_CachedIndex; // 0x5E0(0x10)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	struct FQuat                                 RigVMModel___Interpolate_1_B;                      // 0x5F0(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetRotation_2_CachedIndex;    // 0x610(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_Transform;     // 0x620(0x60)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_CachedIndex;   // 0x680(0x10)(BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	TArray<struct FPBIKEffector>                 RigVMModel___PBIK_Effectors__IO;                   // 0x690(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	TArray<TArray<int32>>                        RigVMModel___PBIK_EffectorSolverIndices;           // 0x6A0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	TArray<TArray<int32>>                        RigVMModel___PBIK_BoneSettingToSolverBoneIndex;    // 0x6B0(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	TArray<TArray<int32>>                        RigVMModel___PBIK_SolverBoneToElementIndex;        // 0x6C0(0x10)(ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	TArray<struct FPBIKSolver>                   RigVMModel___PBIK_Solver;                          // 0x6D0(0x10)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	TArray<bool>                                 RigVMModel___PBIK_bNeedsInit;                      // 0x6E0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_Transform;   // 0x6F0(0x60)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_CachedIndex; // 0x750(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	TArray<struct FPBIKEffector>                 RigVMModel___PBIK_1_Effectors__IO;                 // 0x760(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	TArray<TArray<int32>>                        RigVMModel___PBIK_1_EffectorSolverIndices;         // 0x770(0x10)(Edit, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<TArray<int32>>                        RigVMModel___PBIK_1_BoneSettingToSolverBoneIndex;  // 0x780(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<TArray<int32>>                        RigVMModel___PBIK_1_SolverBoneToElementIndex;      // 0x790(0x10)(Edit, BlueprintVisible, OutParm, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<struct FPBIKSolver>                   RigVMModel___PBIK_1_Solver;                        // 0x7A0(0x10)(Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<bool>                                 RigVMModel___PBIK_1_bNeedsInit;                    // 0x7B0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class URigVMMemory_Work* GetDefaultObj();

};

}


