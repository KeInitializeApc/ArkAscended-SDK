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
// Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
struct UTimeManagementBlueprintLibrary_TransformTime_Params
{
public:
	struct FFrameTime                            SourceTime;                                        // 0x0(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FFrameRate                            SourceRate;                                        // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFrameRate                            DestinationRate;                                   // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFrameTime                            ReturnValue;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
struct UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Params
{
public:
	struct FFrameNumber                          A;                                                 // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	int32                                        B;                                                 // 0x4(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	struct FFrameNumber                          ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
struct UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Params
{
public:
	struct FFrameNumber                          A;                                                 // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	struct FFrameNumber                          B;                                                 // 0x4(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	struct FFrameNumber                          ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
struct UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Params
{
public:
	struct FFrameTime                            SourceTime;                                        // 0x0(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FFrameRate                            SourceRate;                                        // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFrameRate                            SnapToRate;                                        // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFrameTime                            ReturnValue;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
struct UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Params
{
public:
	float                                        TimeInSeconds;                                     // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FFrameRate                            FrameRate;                                         // 0x4(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm)
	struct FFrameTime                            ReturnValue;                                       // 0xC(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
struct UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Params
{
public:
	struct FFrameNumber                          A;                                                 // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	int32                                        B;                                                 // 0x4(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	struct FFrameNumber                          ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
struct UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Params
{
public:
	struct FFrameRate                            InFrameRate;                                       // 0x0(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFrameRate                            OtherFramerate;                                    // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_627[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
struct UTimeManagementBlueprintLibrary_IsValid_Framerate_Params
{
public:
	struct FFrameRate                            InFrameRate;                                       // 0x0(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_62E[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate
struct UTimeManagementBlueprintLibrary_GetTimecodeFrameRate_Params
{
public:
	struct FFrameRate                            ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
struct UTimeManagementBlueprintLibrary_GetTimecode_Params
{
public:
	struct FTimecode                             ReturnValue;                                       // 0x0(0x14)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
struct UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Params
{
public:
	struct FFrameNumber                          A;                                                 // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	int32                                        B;                                                 // 0x4(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	struct FFrameNumber                          ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
struct UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Params
{
public:
	struct FTimecode                             InTimecode;                                        // 0x0(0x14)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bForceSignDisplay;                                 // 0x14(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_646[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
struct UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Params
{
public:
	struct FQualifiedFrameTime                   InFrameTime;                                       // 0x0(0x10)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x10(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
struct UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Params
{
public:
	struct FFrameRate                            InFrameRate;                                       // 0x0(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
struct UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Params
{
public:
	struct FFrameNumber                          InFrameNumber;                                     // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
struct UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Params
{
public:
	struct FFrameNumber                          A;                                                 // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	int32                                        B;                                                 // 0x4(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	struct FFrameNumber                          ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
struct UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Params
{
public:
	struct FFrameNumber                          A;                                                 // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	struct FFrameNumber                          B;                                                 // 0x4(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	struct FFrameNumber                          ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


