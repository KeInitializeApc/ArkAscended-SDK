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

// 0x8 (0x8 - 0x0)
// Function TypedElementFramework.TypedElementHandleLibrary.Release
struct UTypedElementHandleLibrary_Release_Params
{
public:
	struct FScriptTypedElementHandle             ElementHandle;                                     // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function TypedElementFramework.TypedElementHandleLibrary.NotEqual
struct UTypedElementHandleLibrary_NotEqual_Params
{
public:
	struct FScriptTypedElementHandle             LHS;                                               // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FScriptTypedElementHandle             RHS;                                               // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_CA5[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function TypedElementFramework.TypedElementHandleLibrary.IsSet
struct UTypedElementHandleLibrary_IsSet_Params
{
public:
	struct FScriptTypedElementHandle             ElementHandle;                                     // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_CAF[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function TypedElementFramework.TypedElementHandleLibrary.Equal
struct UTypedElementHandleLibrary_Equal_Params
{
public:
	struct FScriptTypedElementHandle             LHS;                                               // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FScriptTypedElementHandle             RHS;                                               // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_CC1[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.Shrink
struct UTypedElementListLibrary_Shrink_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.Reset
struct UTypedElementListLibrary_Reset_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.Reserve
struct UTypedElementListLibrary_Reserve_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Size;                                              // 0x10(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	uint8                                        Pad_CD5[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.Remove
struct UTypedElementListLibrary_Remove_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FScriptTypedElementHandle             ElementHandle;                                     // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_CDB[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.Num
struct UTypedElementListLibrary_Num_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_CE1[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.IsValidIndex
struct UTypedElementListLibrary_IsValidIndex_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_CEC[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.HasElementsOfType
struct UTypedElementListLibrary_HasElementsOfType_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  ElementTypeName;                                   // 0x10(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_CF1[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.HasElements
struct UTypedElementListLibrary_HasElements_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                BaseInterfaceType;                                 // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_CF6[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.GetElementInterface
struct UTypedElementListLibrary_GetElementInterface_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FScriptTypedElementHandle             ElementHandle;                                     // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                BaseInterfaceType;                                 // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	class UObject*                               ReturnValue;                                       // 0x20(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.GetElementHandles
struct UTypedElementListLibrary_GetElementHandles_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                BaseInterfaceType;                                 // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FScriptTypedElementHandle>     ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.GetElementHandleAt
struct UTypedElementListLibrary_GetElementHandleAt_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_D0A[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FScriptTypedElementHandle             ReturnValue;                                       // 0x18(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.Empty
struct UTypedElementListLibrary_Empty_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Slack;                                             // 0x10(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_D0E[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.CreateScriptElementList
struct UTypedElementListLibrary_CreateScriptElementList_Params
{
public:
	class UTypedElementRegistry*                 Registry;                                          // 0x0(0x8)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FScriptTypedElementListProxy          ReturnValue;                                       // 0x8(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.CountElementsOfType
struct UTypedElementListLibrary_CountElementsOfType_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  ElementTypeName;                                   // 0x10(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_D1A[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.CountElements
struct UTypedElementListLibrary_CountElements_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                BaseInterfaceType;                                 // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_D23[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.Contains
struct UTypedElementListLibrary_Contains_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FScriptTypedElementHandle             ElementHandle;                                     // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_D27[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.Clone
struct UTypedElementListLibrary_Clone_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FScriptTypedElementListProxy          ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.AppendList
struct UTypedElementListLibrary_AppendList_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FScriptTypedElementListProxy          OtherElementList;                                  // 0x10(0x10)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.Append
struct UTypedElementListLibrary_Append_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FScriptTypedElementHandle>     ElementHandles;                                    // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.Add
struct UTypedElementListLibrary_Add_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FScriptTypedElementHandle             ElementHandle;                                     // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_D4A[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function TypedElementFramework.TypedElementRegistry.GetInstance
struct UTypedElementRegistry_GetInstance_Params
{
public:
	class UTypedElementRegistry*                 ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function TypedElementFramework.TypedElementRegistry.GetElementInterface
struct UTypedElementRegistry_GetElementInterface_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UClass*                                InBaseInterfaceType;                               // 0x8(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UObject*                               ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName
struct ITestTypedElementInterfaceA_SetDisplayName_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FText                                  InNewName;                                         // 0x8(0x18)(ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bNotify;                                           // 0x20(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_D68[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName
struct ITestTypedElementInterfaceA_GetDisplayName_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function TypedElementFramework.TestTypedElementInterfaceB.MarkAsTested
struct ITestTypedElementInterfaceB_MarkAsTested_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_D78[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function TypedElementFramework.TestTypedElementInterfaceC.GetIsTested
struct ITestTypedElementInterfaceC_GetIsTested_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_D84[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

}
}


