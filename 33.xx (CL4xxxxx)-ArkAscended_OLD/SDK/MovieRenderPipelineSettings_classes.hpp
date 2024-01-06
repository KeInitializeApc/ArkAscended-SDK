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
	struct FSoftClassPath                        BurnInClass;                                       // 0x48(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCompositeOntoFinalImage;                          // 0x68(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_E4D[0x2F];                                     // Fixing Size After Last Property  > TateDumper <
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x98(0x8)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance)
	TArray<class UMoviePipelineBurnInWidget*>    BurnInWidgetInstances;                             // 0xA0(0x10)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoviePipelineBurnInSetting* GetDefaultObj();

};

// 0xB0 (0xF8 - 0x48)
// Class MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting
class UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting
{
public:
	TArray<TScriptInterface<class IMovieSceneConsoleVariableTrackInterface>> ConsoleVariablePresets;                            // 0x48(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TMap<class FString, float>                   ConsoleVariables;                                  // 0x58(0x50)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Transient, EditConst, SubobjectReference)
	TArray<class FString>                        StartConsoleCommands;                              // 0xA8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TArray<class FString>                        EndConsoleCommands;                                // 0xB8(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FMoviePipelineConsoleVariableEntry> CVars;                                             // 0xC8(0x10)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_E97[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineConsoleVariableSetting* GetDefaultObj();

	bool UpdateConsoleVariableEnableState(class FString* Name, bool* ReturnValue);
	bool RemoveConsoleVariable(class FString* Name, bool* ReturnValue);
	void GetConsoleVariables(TArray<struct FMoviePipelineConsoleVariableEntry>* ReturnValue);
	void AddOrUpdateConsoleVariable(class FString* Name, float Value, bool* ReturnValue);
	void AddConsoleVariable(class FString* Name, float Value, bool* ReturnValue);
};

// 0x20 (0x68 - 0x48)
// Class MovieRenderPipelineSettings.MoviePipelineWidgetRenderer
class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass
{
public:
	bool                                         bCompositeOntoFinalImage;                          // 0x48(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_EAA[0x17];                                     // Fixing Size After Last Property  > TateDumper <
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x60(0x8)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UMoviePipelineWidgetRenderer* GetDefaultObj();

};

}


