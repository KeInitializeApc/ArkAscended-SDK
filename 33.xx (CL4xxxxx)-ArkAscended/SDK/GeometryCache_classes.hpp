#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x70 - 0x28)
// Class GeometryCache.GeometryCache
class UGeometryCache : public UObject
{
public:
	uint8                                        Pad_203[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UMaterialInterface*>            Materials;                                         // 0x30(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, DuplicateTransient)
	TArray<class UGeometryCacheTrack*>           Tracks;                                            // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_204[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        StartFrame;                                        // 0x60(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        EndFrame;                                          // 0x64(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint64                                       Hash;                                              // 0x68(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UGeometryCache* GetDefaultObj();

};

// 0x8 (0x4D0 - 0x4C8)
// Class GeometryCache.GeometryCacheActor
class AGeometryCacheActor : public AActor
{
public:
	class UGeometryCacheComponent*               GeometryCacheComponent;                            // 0x4C8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class AGeometryCacheActor* GetDefaultObj();

	void GetGeometryCacheComponent(class UGeometryCacheComponent* ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class GeometryCache.GeometryCacheCodecBase
class UGeometryCacheCodecBase : public UObject
{
public:
	TArray<int32>                                TopologyRanges;                                    // 0x28(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGeometryCacheCodecBase* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GeometryCache.GeometryCacheCodecRaw
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{
public:
	int32                                        DummyProperty;                                     // 0x38(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_20A[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheCodecRaw* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GeometryCache.GeometryCacheCodecV1
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{
public:
	uint8                                        Pad_20D[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheCodecV1* GetDefaultObj();

};

// 0x88 (0x760 - 0x6D8)
// Class GeometryCache.GeometryCacheComponent
class UGeometryCacheComponent : public UMeshComponent
{
public:
	class UGeometryCache*                        GeometryCache;                                     // 0x6D8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	bool                                         bRunning;                                          // 0x6E0(0x1)(ConstParm, Net, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bLooping;                                          // 0x6E1(0x1)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         bExtrapolateFrames;                                // 0x6E2(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_23E[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        StartTimeOffset;                                   // 0x6E4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	float                                        PlaybackSpeed;                                     // 0x6E8(0x4)(Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        MotionVectorScale;                                 // 0x6EC(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        NumTracks;                                         // 0x6F0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, InstancedReference, SubobjectReference)
	float                                        ElapsedTime;                                       // 0x6F4(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_240[0x4C];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Duration;                                          // 0x744(0x4)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, DuplicateTransient)
	bool                                         bManualTick;                                       // 0x748(0x1)(ExportObject, BlueprintReadOnly, Net, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bOverrideWireframeColor;                           // 0x749(0x1)(Edit, ConstParm, ExportObject, Net, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_243[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          WireframeOverrideColor;                            // 0x74C(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_245[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheComponent* GetDefaultObj();

	bool TickAtThisTime();
	void Stop();
	void SetWireframeOverrideColor(struct FLinearColor* Color);
	float SetStartTimeOffset();
	void SetPlaybackSpeed(float* NewPlaybackSpeed);
	bool SetOverrideWireframeColor();
	void SetMotionVectorScale(float* NewMotionVectorScale);
	void SetLooping(bool* bNewLooping);
	void SetGeometryCache(class UGeometryCache** NewGeomCache, bool ReturnValue);
	void SetExtrapolateFrames(bool* bNewExtrapolating);
	void PlayReversedFromEnd();
	void PlayReversed();
	void PlayFromStart();
	void Play();
	void Pause();
	void IsPlayingReversed(bool ReturnValue);
	void IsPlaying(bool ReturnValue);
	void IsLooping(bool ReturnValue);
	void IsExtrapolatingFrames(bool ReturnValue);
	void GetWireframeOverrideColor(const struct FLinearColor& ReturnValue);
	void GetStartTimeOffset(float ReturnValue);
	void GetPlaybackSpeed(float ReturnValue);
	void GetPlaybackDirection(float ReturnValue);
	void GetOverrideWireframeColor(bool ReturnValue);
	void GetNumberOfFrames(int32 ReturnValue);
	void GetMotionVectorScale(float ReturnValue);
	void GetDuration(float ReturnValue);
	void GetAnimationTime(float ReturnValue);
};

// 0x30 (0x58 - 0x28)
// Class GeometryCache.GeometryCacheTrack
class UGeometryCacheTrack : public UObject
{
public:
	float                                        Duration;                                          // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, DuplicateTransient)
	uint8                                        Pad_251[0x2C];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheTrack* GetDefaultObj();

};

// 0x28 (0x80 - 0x58)
// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
public:
	uint32                                       NumMeshSamples;                                    // 0x58(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_25A[0x24];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheTrack_FlipbookAnimation* GetDefaultObj();

	float AddMeshSample();
};

// 0x80 (0xD8 - 0x58)
// Class GeometryCache.GeometryCacheTrackStreamable
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
public:
	class UGeometryCacheCodecBase*               Codec;                                             // 0x58(0x8)(Edit, ConstParm, Parm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_25C[0x68];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StartSampleTime;                                   // 0xC8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_25D[0xC];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheTrackStreamable* GetDefaultObj();

};

// 0xC8 (0x120 - 0x58)
// Class GeometryCache.GeometryCacheTrack_TransformAnimation
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{
public:
	uint8                                        Pad_25F[0xC8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheTrack_TransformAnimation* GetDefaultObj();

	struct FGeometryCacheMeshData SetMesh();
};

// 0xC8 (0x120 - 0x58)
// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{
public:
	uint8                                        Pad_264[0xC8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheTrack_TransformGroupAnimation* GetDefaultObj();

	struct FGeometryCacheMeshData SetMesh();
};

// 0x288 (0x368 - 0xE0)
// Class GeometryCache.NiagaraGeometryCacheRendererProperties
class UNiagaraGeometryCacheRendererProperties : public UNiagaraRendererProperties
{
public:
	TArray<struct FNiagaraGeometryCacheReference> GeometryCaches;                                    // 0xE0(0x10)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bIsLooping;                                        // 0xF0(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_268[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       ComponentCountLimit;                               // 0xF4(0x4)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0xF8(0x58)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      RotationBinding;                                   // 0x150(0x58)(ConstParm, Net, Parm, ReturnParm, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      ScaleBinding;                                      // 0x1A8(0x58)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      ElapsedTimeBinding;                                // 0x200(0x58)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      EnabledBinding;                                    // 0x258(0x58)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      ArrayIndexBinding;                                 // 0x2B0(0x58)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0x308(0x58)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	int32                                        RendererVisibility;                                // 0x360(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bAssignComponentsOnParticleID;                     // 0x364(0x1)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_26A[0x3];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraGeometryCacheRendererProperties* GetDefaultObj();

};

}


