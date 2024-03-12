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
	uint8                                        Pad_502[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UMaterialInterface*>            Materials;                                         // 0x30(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	TArray<class UGeometryCacheTrack*>           Tracks;                                            // 0x40(0x10)(ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_503[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        StartFrame;                                        // 0x60(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        EndFrame;                                          // 0x64(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint64                                       Hash;                                              // 0x68(0x8)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UGeometryCache* GetDefaultObj();

};

// 0x8 (0x4C8 - 0x4C0)
// Class GeometryCache.GeometryCacheActor
class AGeometryCacheActor : public AActor
{
public:
	class UGeometryCacheComponent*               GeometryCacheComponent;                            // 0x4C0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class AGeometryCacheActor* GetDefaultObj();

	class UGeometryCacheComponent* GetGeometryCacheComponent();
};

// 0x10 (0x38 - 0x28)
// Class GeometryCache.GeometryCacheCodecBase
class UGeometryCacheCodecBase : public UObject
{
public:
	TArray<int32>                                TopologyRanges;                                    // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGeometryCacheCodecBase* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GeometryCache.GeometryCacheCodecRaw
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{
public:
	int32                                        DummyProperty;                                     // 0x38(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_513[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheCodecRaw* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GeometryCache.GeometryCacheCodecV1
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{
public:
	uint8                                        Pad_516[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheCodecV1* GetDefaultObj();

};

// 0x90 (0x760 - 0x6D0)
// Class GeometryCache.GeometryCacheComponent
class UGeometryCacheComponent : public UMeshComponent
{
public:
	class UGeometryCache*                        GeometryCache;                                     // 0x6D0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst)
	bool                                         bRunning;                                          // 0x6D8(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bLooping;                                          // 0x6D9(0x1)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	bool                                         bExtrapolateFrames;                                // 0x6DA(0x1)(ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_564[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        StartTimeOffset;                                   // 0x6DC(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        PlaybackSpeed;                                     // 0x6E0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        MotionVectorScale;                                 // 0x6E4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumTracks;                                         // 0x6E8(0x4)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ElapsedTime;                                       // 0x6EC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_566[0x4C];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Duration;                                          // 0x73C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	bool                                         bManualTick;                                       // 0x740(0x1)(ConstParm, Net, Parm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bOverrideWireframeColor;                           // 0x741(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_567[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          WireframeOverrideColor;                            // 0x744(0x10)(Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_568[0xC];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheComponent* GetDefaultObj();

	float TickAtThisTime(bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
	void Stop();
	void SetWireframeOverrideColor(struct FLinearColor* Color);
	void SetStartTimeOffset(float NewStartTimeOffset);
	void SetPlaybackSpeed(float NewPlaybackSpeed);
	void SetOverrideWireframeColor(bool* bOverride);
	void SetMotionVectorScale(float NewMotionVectorScale);
	void SetLooping(bool bNewLooping);
	bool SetGeometryCache(class UGeometryCache* NewGeomCache);
	void SetExtrapolateFrames(bool bNewExtrapolating);
	void PlayReversedFromEnd();
	void PlayReversed();
	void PlayFromStart();
	void Play();
	void Pause();
	bool IsPlayingReversed();
	bool IsPlaying();
	bool IsLooping();
	bool IsExtrapolatingFrames();
	struct FLinearColor GetWireframeOverrideColor();
	float GetStartTimeOffset();
	float GetPlaybackSpeed();
	float GetPlaybackDirection();
	bool GetOverrideWireframeColor();
	int32 GetNumberOfFrames();
	float GetMotionVectorScale();
	float GetDuration();
	float GetAnimationTime();
};

// 0x30 (0x58 - 0x28)
// Class GeometryCache.GeometryCacheTrack
class UGeometryCacheTrack : public UObject
{
public:
	float                                        Duration;                                          // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_570[0x2C];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheTrack* GetDefaultObj();

};

// 0x28 (0x80 - 0x58)
// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
public:
	uint32                                       NumMeshSamples;                                    // 0x58(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_574[0x24];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheTrack_FlipbookAnimation* GetDefaultObj();

	void AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime);
};

// 0x80 (0xD8 - 0x58)
// Class GeometryCache.GeometryCacheTrackStreamable
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
public:
	class UGeometryCacheCodecBase*               Codec;                                             // 0x58(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_576[0x68];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StartSampleTime;                                   // 0xC8(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_577[0xC];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheTrackStreamable* GetDefaultObj();

};

// 0xC8 (0x120 - 0x58)
// Class GeometryCache.GeometryCacheTrack_TransformAnimation
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{
public:
	uint8                                        Pad_57B[0xC8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheTrack_TransformAnimation* GetDefaultObj();

	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};

// 0xC8 (0x120 - 0x58)
// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{
public:
	uint8                                        Pad_581[0xC8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheTrack_TransformGroupAnimation* GetDefaultObj();

	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};

// 0x288 (0x368 - 0xE0)
// Class GeometryCache.NiagaraGeometryCacheRendererProperties
class UNiagaraGeometryCacheRendererProperties : public UNiagaraRendererProperties
{
public:
	TArray<struct FNiagaraGeometryCacheReference> GeometryCaches;                                    // 0xE0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsLooping;                                        // 0xF0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_589[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       ComponentCountLimit;                               // 0xF4(0x4)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0xF8(0x58)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      RotationBinding;                                   // 0x150(0x58)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      ScaleBinding;                                      // 0x1A8(0x58)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      ElapsedTimeBinding;                                // 0x200(0x58)(ConstParm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      EnabledBinding;                                    // 0x258(0x58)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      ArrayIndexBinding;                                 // 0x2B0(0x58)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0x308(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	int32                                        RendererVisibility;                                // 0x360(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bAssignComponentsOnParticleID;                     // 0x364(0x1)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_58C[0x3];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraGeometryCacheRendererProperties* GetDefaultObj();

};

}


