#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// Function RigVM.RigVMHost.SupportsEvent
struct URigVMHost_SupportsEvent_Params
{
public:
	class FName                                  InEventName;                                       // 0x0(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C1E[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function RigVM.RigVMHost.SetVariableFromString
struct URigVMHost_SetVariableFromString_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                InValue;                                           // 0x8(0x10)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C20[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function RigVM.RigVMHost.SetFramesPerSecond
struct URigVMHost_SetFramesPerSecond_Params
{
public:
	float                                        InFramesPerSecond;                                 // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function RigVM.RigVMHost.SetDeltaTime
struct URigVMHost_SetDeltaTime_Params
{
public:
	float                                        InDeltaTime;                                       // 0x0(0x4)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function RigVM.RigVMHost.SetAbsoluteTime
struct URigVMHost_SetAbsoluteTime_Params
{
public:
	float                                        InAbsoluteTime;                                    // 0x0(0x4)(Edit, ExportObject, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         InSetDeltaTimeZero;                                // 0x4(0x1)(Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_C23[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function RigVM.RigVMHost.SetAbsoluteAndDeltaTime
struct URigVMHost_SetAbsoluteAndDeltaTime_Params
{
public:
	float                                        InAbsoluteTime;                                    // 0x0(0x4)(Edit, ExportObject, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x4(0x4)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function RigVM.RigVMHost.RequestRunOnceEvent
struct URigVMHost_RequestRunOnceEvent_Params
{
public:
	class FName                                  InEventName;                                       // 0x0(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        InEventIndex;                                      // 0x8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function RigVM.RigVMHost.RemoveRunOnceEvent
struct URigVMHost_RemoveRunOnceEvent_Params
{
public:
	class FName                                  InEventName;                                       // 0x0(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C28[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function RigVM.RigVMHost.GetVM
struct URigVMHost_GetVM_Params
{
public:
	class URigVM*                                ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVMHost.GetVariableType
struct URigVMHost_GetVariableType_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function RigVM.RigVMHost.GetVariableAsString
struct URigVMHost_GetVariableAsString_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVMHost.GetSupportedEvents
struct URigVMHost_GetSupportedEvents_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVMHost.GetScriptAccessibleVariables
struct URigVMHost_GetScriptAccessibleVariables_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function RigVM.RigVMHost.GetDeltaTime
struct URigVMHost_GetDeltaTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function RigVM.RigVMHost.GetCurrentFramesPerSecond
struct URigVMHost_GetCurrentFramesPerSecond_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function RigVM.RigVMHost.GetAbsoluteTime
struct URigVMHost_GetAbsoluteTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function RigVM.RigVMHost.FindRigVMHosts
struct URigVMHost_FindRigVMHosts_Params
{
public:
	class UObject*                               Outer;                                             // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
	class UClass*                                OptionalClass;                                     // 0x8(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<class URigVMHost*>                    ReturnValue;                                       // 0x10(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function RigVM.RigVMHost.ExecuteEvent
struct URigVMHost_ExecuteEvent_Params
{
public:
	class FName                                  InEventName;                                       // 0x0(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C3A[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function RigVM.RigVMHost.Execute
struct URigVMHost_Execute_Params
{
public:
	class FName                                  InEventName;                                       // 0x0(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C3D[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function RigVM.RigVMHost.CanExecute
struct URigVMHost_CanExecute_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function RigVM.RigVMUserWorkflowOptions.RequiresDialog
struct URigVMUserWorkflowOptions_RequiresDialog_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVMUserWorkflowOptions.ReportWarning
struct URigVMUserWorkflowOptions_ReportWarning_Params
{
public:
	class FString                                InMessage;                                         // 0x0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVMUserWorkflowOptions.ReportInfo
struct URigVMUserWorkflowOptions_ReportInfo_Params
{
public:
	class FString                                InMessage;                                         // 0x0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVMUserWorkflowOptions.ReportError
struct URigVMUserWorkflowOptions_ReportError_Params
{
public:
	class FString                                InMessage;                                         // 0x0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function RigVM.RigVMUserWorkflowOptions.IsValid
struct URigVMUserWorkflowOptions_IsValid_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function RigVM.RigVM.SetParameterValueVector2D
struct URigVM_SetParameterValueVector2D_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FVector2D                             InValue;                                           // 0x8(0x10)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        InArrayIndex;                                      // 0x18(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_C63[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function RigVM.RigVM.SetParameterValueVector
struct URigVM_SetParameterValueVector_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FVector                               InValue;                                           // 0x8(0x18)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        InArrayIndex;                                      // 0x20(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_C6D[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// Function RigVM.RigVM.SetParameterValueTransform
struct URigVM_SetParameterValueTransform_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_C76[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InValue;                                           // 0x10(0x60)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        InArrayIndex;                                      // 0x70(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_C79[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function RigVM.RigVM.SetParameterValueString
struct URigVM_SetParameterValueString_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	class FString                                InValue;                                           // 0x8(0x10)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        InArrayIndex;                                      // 0x18(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_C82[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function RigVM.RigVM.SetParameterValueQuat
struct URigVM_SetParameterValueQuat_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_C89[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 InValue;                                           // 0x10(0x20)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        InArrayIndex;                                      // 0x30(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_C8B[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x14 (0x14 - 0x0)
// Function RigVM.RigVM.SetParameterValueName
struct URigVM_SetParameterValueName_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	class FName                                  InValue;                                           // 0x8(0x8)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        InArrayIndex;                                      // 0x10(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVM.SetParameterValueInt
struct URigVM_SetParameterValueInt_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	int32                                        InValue;                                           // 0x8(0x4)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        InArrayIndex;                                      // 0xC(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVM.SetParameterValueFloat
struct URigVM_SetParameterValueFloat_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        InValue;                                           // 0x8(0x4)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        InArrayIndex;                                      // 0xC(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function RigVM.RigVM.SetParameterValueDouble
struct URigVM_SetParameterValueDouble_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	double                                       InValue;                                           // 0x8(0x8)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        InArrayIndex;                                      // 0x10(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_CA7[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVM.SetParameterValueBool
struct URigVM_SetParameterValueBool_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         InValue;                                           // 0x8(0x1)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_CAA[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        InArrayIndex;                                      // 0xC(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function RigVM.RigVM.GetStatistics
struct URigVM_GetStatistics_Params
{
public:
	struct FRigVMStatistics                      ReturnValue;                                       // 0x0(0x38)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function RigVM.RigVM.GetRigVMFunctionName
struct URigVM_GetRigVMFunctionName_Params
{
public:
	int32                                        InFunctionIndex;                                   // 0x0(0x4)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_CB4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function RigVM.RigVM.GetParameterValueVector2D
struct URigVM_GetParameterValueVector2D_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	int32                                        InArrayIndex;                                      // 0x8(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_CBB[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ReturnValue;                                       // 0x10(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function RigVM.RigVM.GetParameterValueVector
struct URigVM_GetParameterValueVector_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	int32                                        InArrayIndex;                                      // 0x8(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_CC0[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function RigVM.RigVM.GetParameterValueTransform
struct URigVM_GetParameterValueTransform_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	int32                                        InArrayIndex;                                      // 0x8(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_CC3[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function RigVM.RigVM.GetParameterValueString
struct URigVM_GetParameterValueString_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	int32                                        InArrayIndex;                                      // 0x8(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_CC9[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ReturnValue;                                       // 0x10(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function RigVM.RigVM.GetParameterValueQuat
struct URigVM_GetParameterValueQuat_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	int32                                        InArrayIndex;                                      // 0x8(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_CD0[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 ReturnValue;                                       // 0x10(0x20)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function RigVM.RigVM.GetParameterValueName
struct URigVM_GetParameterValueName_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	int32                                        InArrayIndex;                                      // 0x8(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  ReturnValue;                                       // 0xC(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVM.GetParameterValueInt
struct URigVM_GetParameterValueInt_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	int32                                        InArrayIndex;                                      // 0x8(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0xC(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVM.GetParameterValueFloat
struct URigVM_GetParameterValueFloat_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	int32                                        InArrayIndex;                                      // 0x8(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0xC(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function RigVM.RigVM.GetParameterValueDouble
struct URigVM_GetParameterValueDouble_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	int32                                        InArrayIndex;                                      // 0x8(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_CE5[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVM.GetParameterValueBool
struct URigVM_GetParameterValueBool_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	int32                                        InArrayIndex;                                      // 0x8(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xC(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_CEA[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function RigVM.RigVM.Execute
struct URigVM_Execute_Params
{
public:
	class FName                                  InEntryName;                                       // 0x0(0x8)(Edit, ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_CED[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function RigVM.RigVM.AddRigVMFunction
struct URigVM_AddRigVMFunction_Params
{
public:
	class UScriptStruct*                         InRigVMStruct;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  InMethodName;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x10(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_CF1[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

}
}


