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

// 0x2 (0x2 - 0x0)
// Function StreamlineBlueprint.StreamlineLibrary.QueryStreamlineFeatureSupport
struct UStreamlineLibrary_QueryStreamlineFeatureSupport_Params
{
public:
	enum class EUStreamlineFeature               Feature;                                           // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class EUStreamlineFeatureSupport        ReturnValue;                                       // 0x1(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function StreamlineBlueprint.StreamlineLibrary.IsStreamlineFeatureSupported
struct UStreamlineLibrary_IsStreamlineFeatureSupported_Params
{
public:
	enum class EUStreamlineFeature               Feature;                                           // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function StreamlineBlueprint.StreamlineLibrary.GetStreamlineFeatureInformation
struct UStreamlineLibrary_GetStreamlineFeatureInformation_Params
{
public:
	enum class EUStreamlineFeature               Feature;                                           // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_10AB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FStreamlineFeatureRequirements        ReturnValue;                                       // 0x4(0x34)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x6 (0x6 - 0x0)
// Function StreamlineBlueprint.StreamlineLibrary.BreakStreamlineFeatureRequirements
struct UStreamlineLibrary_BreakStreamlineFeatureRequirements_Params
{
public:
	enum class EUStreamlineFeatureRequirementsFlags Requirements;                                      // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         D3D11Supported;                                    // 0x1(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         D3D12Supported;                                    // 0x2(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         VulkanSupported;                                   // 0x3(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         VSyncOffRequired;                                  // 0x4(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         HardwareSchedulingRequired;                        // 0x5(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGMode
struct UStreamlineLibraryDLSSG_SetDLSSGMode_Params
{
public:
	enum class EUStreamlineDLSSGMode             DLSSGMode;                                         // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function StreamlineBlueprint.StreamlineLibraryDLSSG.QueryDLSSGSupport
struct UStreamlineLibraryDLSSG_QueryDLSSGSupport_Params
{
public:
	enum class EUStreamlineFeatureSupport        ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGSupported
struct UStreamlineLibraryDLSSG_IsDLSSGSupported_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGModeSupported
struct UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Params
{
public:
	enum class EUStreamlineDLSSGMode             DLSSGMode;                                         // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetSupportedDLSSGModes
struct UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Params
{
public:
	TArray<enum class EUStreamlineDLSSGMode>     ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMode
struct UStreamlineLibraryDLSSG_GetDLSSGMode_Params
{
public:
	enum class EUStreamlineDLSSGMode             ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrameTiming
struct UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Params
{
public:
	float                                        FrameRateInHertz;                                  // 0x0(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	int32                                        FramesPresented;                                   // 0x4(0x4)(ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDefaultDLSSGMode
struct UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Params
{
public:
	enum class EUStreamlineDLSSGMode             ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function StreamlineBlueprint.StreamlineLibraryReflex.SetReflexMode
struct UStreamlineLibraryReflex_SetReflexMode_Params
{
public:
	enum class EUStreamlineReflexMode            Mode;                                              // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function StreamlineBlueprint.StreamlineLibraryReflex.QueryReflexSupport
struct UStreamlineLibraryReflex_QueryReflexSupport_Params
{
public:
	enum class EUStreamlineFeatureSupport        ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function StreamlineBlueprint.StreamlineLibraryReflex.IsReflexSupported
struct UStreamlineLibraryReflex_IsReflexSupported_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function StreamlineBlueprint.StreamlineLibraryReflex.GetRenderLatencyInMs
struct UStreamlineLibraryReflex_GetRenderLatencyInMs_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function StreamlineBlueprint.StreamlineLibraryReflex.GetReflexMode
struct UStreamlineLibraryReflex_GetReflexMode_Params
{
public:
	enum class EUStreamlineReflexMode            ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameToRenderLatencyInMs
struct UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameLatencyInMs
struct UStreamlineLibraryReflex_GetGameLatencyInMs_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function StreamlineBlueprint.StreamlineLibraryReflex.GetDefaultReflexMode
struct UStreamlineLibraryReflex_GetDefaultReflexMode_Params
{
public:
	enum class EUStreamlineReflexMode            ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


