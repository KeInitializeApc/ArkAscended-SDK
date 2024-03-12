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
// Function MovieRenderPipelineSettings.MoviePipelineBurnInWidget.OnOutputFrameStarted
struct UMoviePipelineBurnInWidget_OnOutputFrameStarted_Params
{
public:
	class UMoviePipeline*                        ForPipeline;                                       // 0x0(0x8)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.UpdateConsoleVariableEnableState
struct UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	bool                                         bIsEnabled;                                        // 0x10(0x1)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C99[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.RemoveConsoleVariable
struct UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	bool                                         bRemoveAllInstances;                               // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C9F[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.GetConsoleVariables
struct UMoviePipelineConsoleVariableSetting_GetConsoleVariables_Params
{
public:
	TArray<struct FMoviePipelineConsoleVariableEntry> ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.AddOrUpdateConsoleVariable
struct UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	float                                        Value;                                             // 0x10(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_CAD[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.AddConsoleVariable
struct UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	float                                        Value;                                             // 0x10(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_CB6[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

}
}


