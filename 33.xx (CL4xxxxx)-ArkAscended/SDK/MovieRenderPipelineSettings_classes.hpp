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
	struct FSoftClassPath                        BurnInClass;                                       // 0x48(0x20)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bCompositeOntoFinalImage;                          // 0x68(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_D55[0x2F];                                     // Fixing Size After Last Property  > TateDumper <
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x98(0x8)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, InstancedReference)
	TArray<class UMoviePipelineBurnInWidget*>    BurnInWidgetInstances;                             // 0xA0(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoviePipelineBurnInSetting* GetDefaultObj();

};

// 0xB0 (0xF8 - 0x48)
// Class MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting
class UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting
{
public:
	TArray<TScriptInterface<class IMovieSceneConsoleVariableTrackInterface>> ConsoleVariablePresets;                            // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, InstancedReference, SubobjectReference)
	TMap<class FString, float>                   ConsoleVariables;                                  // 0x58(0x50)(Edit, BlueprintVisible, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	TArray<class FString>                        StartConsoleCommands;                              // 0xA8(0x10)(ExportObject, Parm, ReturnParm, InstancedReference, SubobjectReference)
	TArray<class FString>                        EndConsoleCommands;                                // 0xB8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	TArray<struct FMoviePipelineConsoleVariableEntry> CVars;                                             // 0xC8(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_D73[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineConsoleVariableSetting* GetDefaultObj();

	void UpdateConsoleVariableEnableState(class FString* Name, bool* bIsEnabled, bool ReturnValue);
	bool RemoveConsoleVariable(class FString* Name, bool ReturnValue);
	void GetConsoleVariables(const TArray<struct FMoviePipelineConsoleVariableEntry>& ReturnValue);
	void AddOrUpdateConsoleVariable(class FString* Name, float* Value, bool ReturnValue);
	void AddConsoleVariable(class FString* Name, float* Value, bool ReturnValue);
};

// 0x20 (0x68 - 0x48)
// Class MovieRenderPipelineSettings.MoviePipelineWidgetRenderer
class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass
{
public:
	bool                                         bCompositeOntoFinalImage;                          // 0x48(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_D76[0x17];                                     // Fixing Size After Last Property  > TateDumper <
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x60(0x8)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, InstancedReference)

	static class UClass* StaticClass();
	static class UMoviePipelineWidgetRenderer* GetDefaultObj();

};

}


