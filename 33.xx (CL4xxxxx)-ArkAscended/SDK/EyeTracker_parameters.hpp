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
// Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
struct UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
};

// 0x1 (0x1 - 0x0)
// Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
struct UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
struct UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
struct UEyeTrackerFunctionLibrary_GetStereoGazeData_Params
{
public:
	struct FEyeTrackerStereoGazeData             OutGazeData;                                       // 0x0(0x80)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x80(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1D19[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
struct UEyeTrackerFunctionLibrary_GetGazeData_Params
{
public:
	struct FEyeTrackerGazeData                   OutGazeData;                                       // 0x0(0x58)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x58(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1D20[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

}
}


