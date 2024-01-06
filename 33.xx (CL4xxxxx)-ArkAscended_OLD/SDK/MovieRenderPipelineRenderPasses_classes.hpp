#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x178 - 0x48)
// Class MovieRenderPipelineRenderPasses.MoviePipelineImagePassBase
class UMoviePipelineImagePassBase : public UMoviePipelineRenderPass
{
public:
	uint8                                        Pad_1CB[0x130];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineImagePassBase* GetDefaultObj();

};

// 0xC0 (0x238 - 0x178)
// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPassBase
class UMoviePipelineDeferredPassBase : public UMoviePipelineImagePassBase
{
public:
	bool                                         bAccumulatorIncludesAlpha;                         // 0x178(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDisableMultisampleEffects;                        // 0x179(0x1)(ExportObject, Net, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUse32BitPostProcessMaterials;                     // 0x17A(0x1)(ExportObject, BlueprintReadOnly, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CF[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FMoviePipelinePostProcessPass> AdditionalPostProcessMaterials;                    // 0x180(0x10)(ExportObject, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRenderMainPass;                                   // 0x190(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAddDefaultLayer;                                  // 0x191(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D0[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FActorLayer>                   ActorLayers;                                       // 0x198(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1D1[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FSoftObjectPath>               DataLayers;                                        // 0x1B8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	TArray<class UMaterialInterface*>            ActivePostProcessMaterials;                        // 0x1C8(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    StencilLayerMaterial;                              // 0x1D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D3[0x58];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineDeferredPassBase* GetDefaultObj();

};

// 0x0 (0x238 - 0x238)
// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_Unlit
class UMoviePipelineDeferredPass_Unlit : public UMoviePipelineDeferredPassBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineDeferredPass_Unlit* GetDefaultObj();

};

// 0x0 (0x238 - 0x238)
// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_DetailLighting
class UMoviePipelineDeferredPass_DetailLighting : public UMoviePipelineDeferredPassBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineDeferredPass_DetailLighting* GetDefaultObj();

};

// 0x0 (0x238 - 0x238)
// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_LightingOnly
class UMoviePipelineDeferredPass_LightingOnly : public UMoviePipelineDeferredPassBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineDeferredPass_LightingOnly* GetDefaultObj();

};

// 0x0 (0x238 - 0x238)
// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_ReflectionsOnly
class UMoviePipelineDeferredPass_ReflectionsOnly : public UMoviePipelineDeferredPassBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineDeferredPass_ReflectionsOnly* GetDefaultObj();

};

// 0x8 (0x240 - 0x238)
// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_PathTracer
class UMoviePipelineDeferredPass_PathTracer : public UMoviePipelineDeferredPassBase
{
public:
	bool                                         bReferenceMotionBlur;                              // 0x238(0x1)(BlueprintVisible, EditFixedSize, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E0[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineDeferredPass_PathTracer* GetDefaultObj();

};

// 0x20 (0x68 - 0x48)
// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutputBase
class UMoviePipelineImageSequenceOutputBase : public UMoviePipelineOutputBase
{
public:
	uint8                                        Pad_1E4[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineImageSequenceOutputBase* GetDefaultObj();

};

// 0x8 (0x70 - 0x68)
// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_EXR
class UMoviePipelineImageSequenceOutput_EXR : public UMoviePipelineImageSequenceOutputBase
{
public:
	enum class EEXRCompressionFormat             Compression;                                       // 0x68(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bMultilayer;                                       // 0x69(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EA[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineImageSequenceOutput_EXR* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_BMP
class UMoviePipelineImageSequenceOutput_BMP : public UMoviePipelineImageSequenceOutputBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineImageSequenceOutput_BMP* GetDefaultObj();

};

// 0x8 (0x70 - 0x68)
// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_PNG
class UMoviePipelineImageSequenceOutput_PNG : public UMoviePipelineImageSequenceOutputBase
{
public:
	bool                                         bWriteAlpha;                                       // 0x68(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F1[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineImageSequenceOutput_PNG* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_JPG
class UMoviePipelineImageSequenceOutput_JPG : public UMoviePipelineImageSequenceOutputBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineImageSequenceOutput_JPG* GetDefaultObj();

};

// 0x70 (0xB8 - 0x48)
// Class MovieRenderPipelineRenderPasses.MoviePipelineWaveOutput
class UMoviePipelineWaveOutput : public UMoviePipelineOutputBase
{
public:
	class FString                                FileNameFormatOverride;                            // 0x48(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FF[0x60];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineWaveOutput* GetDefaultObj();

};

}

