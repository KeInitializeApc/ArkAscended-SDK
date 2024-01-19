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

	void OnOutputFrameStarted(class UMoviePipeline* ForPipeline);
};

// 0x68 (0xB0 - 0x48)
// Class MovieRenderPipelineSettings.MoviePipelineBurnInSetting
class UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass
{
public:
	struct FSoftClassPath                        BurnInClass;                                       // 0x48(0x20)(ConstParm, Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCompositeOntoFinalImage;                          // 0x68(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_10EC[0x2F];                                    // Fixing Size After Last Property  > TateDumper <
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x98(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference)
	TArray<class UMoviePipelineBurnInWidget*>    BurnInWidgetInstances;                             // 0xA0(0x10)(Edit, ExportObject, EditFixedSize, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoviePipelineBurnInSetting* GetDefaultObj();

};

// 0xB0 (0xF8 - 0x48)
// Class MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting
class UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting
{
public:
	TArray<TScriptInterface<class IMovieSceneConsoleVariableTrackInterface>> ConsoleVariablePresets;                            // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, EditConst, InstancedReference, SubobjectReference)
	TMap<class FString, float>                   ConsoleVariables;                                  // 0x58(0x50)(BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
	TArray<class FString>                        StartConsoleCommands;                              // 0xA8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	TArray<class FString>                        EndConsoleCommands;                                // 0xB8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FMoviePipelineConsoleVariableEntry> CVars;                                             // 0xC8(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, SubobjectReference)
	uint8                                        Pad_1114[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineConsoleVariableSetting* GetDefaultObj();

	bool UpdateConsoleVariableEnableState(class FString* Name, bool ReturnValue);
	void RemoveConsoleVariable(class FString* Name, bool bRemoveAllInstances, bool ReturnValue);
	void GetConsoleVariables(const TArray<struct FMoviePipelineConsoleVariableEntry>& ReturnValue);
	void AddOrUpdateConsoleVariable(class FString* Name, float Value, bool ReturnValue);
	void AddConsoleVariable(class FString* Name, float Value, bool ReturnValue);
};

// 0x20 (0x68 - 0x48)
// Class MovieRenderPipelineSettings.MoviePipelineWidgetRenderer
class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass
{
public:
	bool                                         bCompositeOntoFinalImage;                          // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1118[0x17];                                    // Fixing Size After Last Property  > TateDumper <
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x60(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference)

	static class UClass* StaticClass();
	static class UMoviePipelineWidgetRenderer* GetDefaultObj();

};

}


