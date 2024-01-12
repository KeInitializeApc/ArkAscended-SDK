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

// 0x18 (0x18 - 0x0)
// Function Constraints.ConstraintsScriptingLibrary.RemoveThisConstraint
struct UConstraintsScriptingLibrary_RemoveThisConstraint_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UTickableConstraint*                   InTickableConstraint;                              // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_EA1[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function Constraints.ConstraintsScriptingLibrary.RemoveConstraint
struct UConstraintsScriptingLibrary_RemoveConstraint_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	int32                                        InIndex;                                           // 0x8(0x4)(BlueprintVisible, Net, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_EA9[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function Constraints.ConstraintsScriptingLibrary.GetManager
struct UConstraintsScriptingLibrary_GetManager_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UConstraintsManager*                   ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Constraints.ConstraintsScriptingLibrary.GetConstraintsArray
struct UConstraintsScriptingLibrary_GetConstraintsArray_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<class UTickableConstraint*>           ReturnValue;                                       // 0x8(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Constraints.ConstraintsScriptingLibrary.CreateTransformableHandle
struct UConstraintsScriptingLibrary_CreateTransformableHandle_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UObject*                               InObject;                                          // 0x8(0x8)(Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class FName                                  InAttachmentName;                                  // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UTransformableHandle*                  ReturnValue;                                       // 0x18(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Constraints.ConstraintsScriptingLibrary.CreateTransformableComponentHandle
struct UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class USceneComponent*                       InSceneComponent;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  InSocketName;                                      // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTransformableComponentHandle*         ReturnValue;                                       // 0x18(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Constraints.ConstraintsScriptingLibrary.CreateFromType
struct UConstraintsScriptingLibrary_CreateFromType_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class ETransformConstraintType          InType;                                            // 0x8(0x1)(EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_EC1[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UTickableTransformConstraint*          ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Constraints.ConstraintsScriptingLibrary.AddConstraint
struct UConstraintsScriptingLibrary_AddConstraint_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UTransformableHandle*                  InParentHandle;                                    // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UTransformableHandle*                  InChildHandle;                                     // 0x10(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UTickableTransformConstraint*          InConstraint;                                      // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bMaintainOffset;                                   // 0x20(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_EC9[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

}
}


