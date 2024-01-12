#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x320 - 0x320)
// Class MovieRenderPipelineSettings.MoviePipelineBurnInWidget
class UMoviePipelineBurnInWidget : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineBurnInWidget* GetDefaultObj();

	class UMoviePipeline* OnOutputFrameStarted();
};

// 0x68 (0xB0 - 0x48)
// Class MovieRenderPipelineSettings.MoviePipelineBurnInSetting
class UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass
{
public:
	struct FSoftClassPath                        BurnInClass;                                       // 0x48(0x20)(BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCompositeOntoFinalImage;                          // 0x68(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1425[0x2F];                                    // Fixing Size After Last Property  > TateDumper <
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x98(0x8)(Edit, BlueprintVisible, Parm, Config, DisableEditOnInstance)
	TArray<class UMoviePipelineBurnInWidget*>    BurnInWidgetInstances;                             // 0xA0(0x10)(Edit, ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoviePipelineBurnInSetting* GetDefaultObj();

};

// 0xB0 (0xF8 - 0x48)
// Class MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting
class UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting
{
public:
	TArray<TScriptInterface<class IMovieSceneConsoleVariableTrackInterface>> ConsoleVariablePresets;                            // 0x48(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TMap<class FString, float>                   ConsoleVariables;                                  // 0x58(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
	TArray<class FString>                        StartConsoleCommands;                              // 0xA8(0x10)(EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<class FString>                        EndConsoleCommands;                                // 0xB8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FMoviePipelineConsoleVariableEntry> CVars;                                             // 0xC8(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, EditConst, SubobjectReference)
	uint8                                        Pad_1440[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineConsoleVariableSetting* GetDefaultObj();

	bool UpdateConsoleVariableEnableState(class FString* Name);
	bool RemoveConsoleVariable(class FString* Name);
	TArray<struct FMoviePipelineConsoleVariableEntry> GetConsoleVariables();
	bool AddOrUpdateConsoleVariable(class FString* Name, float Value);
	bool AddConsoleVariable(class FString* Name, float Value);
};

// 0x20 (0x68 - 0x48)
// Class MovieRenderPipelineSettings.MoviePipelineWidgetRenderer
class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass
{
public:
	bool                                         bCompositeOntoFinalImage;                          // 0x48(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1448[0x17];                                    // Fixing Size After Last Property  > TateDumper <
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x60(0x8)(Edit, BlueprintVisible, Parm, Config, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UMoviePipelineWidgetRenderer* GetDefaultObj();

};

}


