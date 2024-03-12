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

// 0x20 (0x20 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSetLibrary.SetSelectionFromList
struct UTypedElementSelectionSetLibrary_SetSelectionFromList_Params
{
public:
	class UTypedElementSelectionSet*             SelectionSet;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig)
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTypedElementSelectionOptions         SelectionOptions;                                  // 0x18(0x5)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1D(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_5F4[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSetLibrary.SelectElementsFromList
struct UTypedElementSelectionSetLibrary_SelectElementsFromList_Params
{
public:
	class UTypedElementSelectionSet*             SelectionSet;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig)
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTypedElementSelectionOptions         SelectionOptions;                                  // 0x18(0x5)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1D(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_5FC[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedSelection
struct UTypedElementSelectionSetLibrary_GetNormalizedSelection_Params
{
public:
	class UTypedElementSelectionSet*             SelectionSet;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig)
	struct FTypedElementSelectionNormalizationOptions NormalizationOptions;                              // 0x8(0x2)(Edit, BlueprintVisible, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_603[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FScriptTypedElementListProxy          ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedElementList
struct UTypedElementSelectionSetLibrary_GetNormalizedElementList_Params
{
public:
	class UTypedElementSelectionSet*             SelectionSet;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig)
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTypedElementSelectionNormalizationOptions NormalizationOptions;                              // 0x18(0x2)(Edit, BlueprintVisible, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_60F[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FScriptTypedElementListProxy          ReturnValue;                                       // 0x20(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSetLibrary.DeselectElementsFromList
struct UTypedElementSelectionSetLibrary_DeselectElementsFromList_Params
{
public:
	class UTypedElementSelectionSet*             SelectionSet;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig)
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTypedElementSelectionOptions         SelectionOptions;                                  // 0x18(0x5)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1D(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_61A[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.SetSelection
struct UTypedElementSelectionSet_SetSelection_Params
{
public:
	TArray<struct FScriptTypedElementHandle>     InElementHandles;                                  // 0x0(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x10(0x5)(ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x15(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_62F[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.SelectElements
struct UTypedElementSelectionSet_SelectElements_Params
{
public:
	TArray<struct FScriptTypedElementHandle>     InElementHandles;                                  // 0x0(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x10(0x5)(ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x15(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_643[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.SelectElement
struct UTypedElementSelectionSet_SelectElement_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x8(0x5)(ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xD(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_658[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState
struct UTypedElementSelectionSet_RestoreSelectionState_Params
{
public:
	struct FTypedElementSelectionSetState        InSelectionState;                                  // 0x0(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature
struct UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Params
{
public:
	class UTypedElementSelectionSet*             SelectionSet;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature
struct UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Params
{
public:
	class UTypedElementSelectionSet*             SelectionSet;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig)
};

// 0x18 (0x18 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles
struct UTypedElementSelectionSet_K2_GetSelectedElementHandles_Params
{
public:
	class UClass*                                InBaseInterfaceType;                               // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<struct FScriptTypedElementHandle>     ReturnValue;                                       // 0x8(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.IsElementSelected
struct UTypedElementSelectionSet_IsElementSelected_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FTypedElementIsSelectedOptions        InSelectionOptions;                                // 0x8(0x1)(ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_67C[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects
struct UTypedElementSelectionSet_HasSelectedObjects_Params
{
public:
	class UClass*                                InRequiredClass;                                   // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_682[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements
struct UTypedElementSelectionSet_HasSelectedElements_Params
{
public:
	class UClass*                                InBaseInterfaceType;                               // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_686[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject
struct UTypedElementSelectionSet_GetTopSelectedObject_Params
{
public:
	class UClass*                                InRequiredClass;                                   // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement
struct UTypedElementSelectionSet_GetSelectionElement_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ETypedElementSelectionMethod      InSelectionMethod;                                 // 0x8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_691[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FScriptTypedElementHandle             ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects
struct UTypedElementSelectionSet_GetSelectedObjects_Params
{
public:
	class UClass*                                InRequiredClass;                                   // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<class UObject*>                       ReturnValue;                                       // 0x8(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements
struct UTypedElementSelectionSet_GetNumSelectedElements_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState
struct UTypedElementSelectionSet_GetCurrentSelectionState_Params
{
public:
	struct FTypedElementSelectionSetState        ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject
struct UTypedElementSelectionSet_GetBottomSelectedObject_Params
{
public:
	class UClass*                                InRequiredClass;                                   // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.DeselectElements
struct UTypedElementSelectionSet_DeselectElements_Params
{
public:
	TArray<struct FScriptTypedElementHandle>     InElementHandles;                                  // 0x0(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x10(0x5)(ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x15(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_6A2[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.DeselectElement
struct UTypedElementSelectionSet_DeselectElement_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x8(0x5)(ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xD(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_6A8[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects
struct UTypedElementSelectionSet_CountSelectedObjects_Params
{
public:
	class UClass*                                InRequiredClass;                                   // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_6AC[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements
struct UTypedElementSelectionSet_CountSelectedElements_Params
{
public:
	class UClass*                                InBaseInterfaceType;                               // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_6AF[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x6 (0x6 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.ClearSelection
struct UTypedElementSelectionSet_ClearSelection_Params
{
public:
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x0(0x5)(ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.CanSelectElement
struct UTypedElementSelectionSet_CanSelectElement_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x8(0x5)(ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xD(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_6BA[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement
struct UTypedElementSelectionSet_CanDeselectElement_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x8(0x5)(ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xD(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_6C6[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers
struct UTypedElementSelectionSet_AllowSelectionModifiers_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_6D0[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// Function TypedElementRuntime.TypedElementAssetDataInterface.GetAssetData
struct ITypedElementAssetDataInterface_GetAssetData_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FAssetData                            ReturnValue;                                       // 0x8(0x68)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function TypedElementRuntime.TypedElementAssetDataInterface.GetAllReferencedAssetDatas
struct ITypedElementAssetDataInterface_GetAllReferencedAssetDatas_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<struct FAssetData>                    ReturnValue;                                       // 0x8(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function TypedElementRuntime.TypedElementHierarchyInterface.GetParentElement
struct ITypedElementHierarchyInterface_GetParentElement_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bAllowCreate;                                      // 0x8(0x1)(BlueprintReadOnly, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_6F3[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FScriptTypedElementHandle             ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function TypedElementRuntime.TypedElementHierarchyInterface.GetChildElements
struct ITypedElementHierarchyInterface_GetChildElements_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<struct FScriptTypedElementHandle>     OutElementHandles;                                 // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAllowCreate;                                      // 0x18(0x1)(BlueprintReadOnly, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_700[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementObjectInterface.GetObjectClass
struct ITypedElementObjectInterface_GetObjectClass_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UClass*                                ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementObjectInterface.GetObject
struct ITypedElementObjectInterface_GetObject_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionInterface.SelectElement
struct ITypedElementSelectionInterface_SelectElement_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FScriptTypedElementListProxy          InSelectionSet;                                    // 0x8(0x10)(Edit, Net, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x18(0x5)(ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1D(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_730[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected
struct ITypedElementSelectionInterface_IsElementSelected_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FScriptTypedElementListProxy          InSelectionSet;                                    // 0x8(0x10)(Edit, Net, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTypedElementIsSelectedOptions        InSelectionOptions;                                // 0x18(0x1)(ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x19(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_740[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement
struct ITypedElementSelectionInterface_GetSelectionElement_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FScriptTypedElementListProxy          InCurrentSelection;                                // 0x8(0x10)(Edit, ExportObject, Net, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ETypedElementSelectionMethod      InSelectionMethod;                                 // 0x18(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_74E[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FScriptTypedElementHandle             ReturnValue;                                       // 0x20(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionInterface.DeselectElement
struct ITypedElementSelectionInterface_DeselectElement_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FScriptTypedElementListProxy          InSelectionSet;                                    // 0x8(0x10)(Edit, Net, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x18(0x5)(ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1D(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_754[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement
struct ITypedElementSelectionInterface_CanSelectElement_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x8(0x5)(ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xD(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_75B[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement
struct ITypedElementSelectionInterface_CanDeselectElement_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x8(0x5)(ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xD(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_767[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers
struct ITypedElementSelectionInterface_AllowSelectionModifiers_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FScriptTypedElementListProxy          InSelectionSet;                                    // 0x8(0x10)(Edit, Net, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_773[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

}
}


