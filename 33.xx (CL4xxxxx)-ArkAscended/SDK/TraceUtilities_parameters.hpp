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

// 0x10 (0x10 - 0x0)
// Function TraceUtilities.TraceUtilLibrary.TraceMarkRegionStart
struct UTraceUtilLibrary_TraceMarkRegionStart_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
};

// 0x10 (0x10 - 0x0)
// Function TraceUtilities.TraceUtilLibrary.TraceMarkRegionEnd
struct UTraceUtilLibrary_TraceMarkRegionEnd_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
};

// 0x10 (0x10 - 0x0)
// Function TraceUtilities.TraceUtilLibrary.TraceBookmark
struct UTraceUtilLibrary_TraceBookmark_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
};

// 0x18 (0x18 - 0x0)
// Function TraceUtilities.TraceUtilLibrary.ToggleChannel
struct UTraceUtilLibrary_ToggleChannel_Params
{
public:
	class FString                                ChannelName;                                       // 0x0(0x10)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Enabled;                                           // 0x10(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x11(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_18F0[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function TraceUtilities.TraceUtilLibrary.StopTracing
struct UTraceUtilLibrary_StopTracing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function TraceUtilities.TraceUtilLibrary.StartTraceToFile
struct UTraceUtilLibrary_StartTraceToFile_Params
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
	TArray<class FString>                        Channels;                                          // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x20(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_18F5[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function TraceUtilities.TraceUtilLibrary.StartTraceSendTo
struct UTraceUtilLibrary_StartTraceSendTo_Params
{
public:
	class FString                                Target;                                            // 0x0(0x10)(Edit, ConstParm, ReturnParm, Transient, Config)
	TArray<class FString>                        Channels;                                          // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x20(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1907[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function TraceUtilities.TraceUtilLibrary.ResumeTracing
struct UTraceUtilLibrary_ResumeTracing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function TraceUtilities.TraceUtilLibrary.PauseTracing
struct UTraceUtilLibrary_PauseTracing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function TraceUtilities.TraceUtilLibrary.IsTracing
struct UTraceUtilLibrary_IsTracing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function TraceUtilities.TraceUtilLibrary.IsChannelEnabled
struct UTraceUtilLibrary_IsChannelEnabled_Params
{
public:
	class FString                                ChannelName;                                       // 0x0(0x10)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_191B[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function TraceUtilities.TraceUtilLibrary.GetEnabledChannels
struct UTraceUtilLibrary_GetEnabledChannels_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function TraceUtilities.TraceUtilLibrary.GetAllChannels
struct UTraceUtilLibrary_GetAllChannels_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


