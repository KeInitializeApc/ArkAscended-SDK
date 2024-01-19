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
	uint8                                        Pad_7F9[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UMaterialInterface*>            Materials;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
	TArray<class UGeometryCacheTrack*>           Tracks;                                            // 0x40(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_7FA[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        StartFrame;                                        // 0x60(0x4)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	int32                                        EndFrame;                                          // 0x64(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint64                                       Hash;                                              // 0x68(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UGeometryCache* GetDefaultObj();

};

// 0x8 (0x4D0 - 0x4C8)
// Class GeometryCache.GeometryCacheActor
class AGeometryCacheActor : public AActor
{
public:
	class UGeometryCacheComponent*               GeometryCacheComponent;                            // 0x4C8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class AGeometryCacheActor* GetDefaultObj();

	void GetGeometryCacheComponent(class UGeometryCacheComponent* ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class GeometryCache.GeometryCacheCodecBase
class UGeometryCacheCodecBase : public UObject
{
public:
	TArray<int32>                                TopologyRanges;                                    // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGeometryCacheCodecBase* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GeometryCache.GeometryCacheCodecRaw
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{
public:
	int32                                        DummyProperty;                                     // 0x38(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_81C[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheCodecRaw* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GeometryCache.GeometryCacheCodecV1
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{
public:
	uint8                                        Pad_81E[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheCodecV1* GetDefaultObj();

};

// 0x88 (0x760 - 0x6D8)
// Class GeometryCache.GeometryCacheComponent
class UGeometryCacheComponent : public UMeshComponent
{
public:
	class UGeometryCache*                        GeometryCache;                                     // 0x6D8(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	bool                                         bRunning;                                          // 0x6E0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bLooping;                                          // 0x6E1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst)
	bool                                         bExtrapolateFrames;                                // 0x6E2(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_8C0[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        StartTimeOffset;                                   // 0x6E4(0x4)(Edit, ExportObject, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        PlaybackSpeed;                                     // 0x6E8(0x4)(ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        MotionVectorScale;                                 // 0x6EC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumTracks;                                         // 0x6F0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ElapsedTime;                                       // 0x6F4(0x4)(Net, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_8C5[0x4C];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Duration;                                          // 0x744(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, DuplicateTransient)
	bool                                         bManualTick;                                       // 0x748(0x1)(ConstParm, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bOverrideWireframeColor;                           // 0x749(0x1)(Edit, BlueprintVisible, Net, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_8C6[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          WireframeOverrideColor;                            // 0x74C(0x10)(Edit, ExportObject, BlueprintReadOnly, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_8C8[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheComponent* GetDefaultObj();

	float TickAtThisTime(bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
	void Stop();
	void SetWireframeOverrideColor(struct FLinearColor* Color);
	float SetStartTimeOffset();
	float SetPlaybackSpeed();
	void SetOverrideWireframeColor(bool* bOverride);
	float SetMotionVectorScale();
	bool SetLooping();
	class UGeometryCache* SetGeometryCache(bool ReturnValue);
	bool SetExtrapolateFrames();
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
	float                                        Duration;                                          // 0x28(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, DuplicateTransient)
	uint8                                        Pad_8D3[0x2C];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheTrack* GetDefaultObj();

};

// 0x28 (0x80 - 0x58)
// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
public:
	uint32                                       NumMeshSamples;                                    // 0x58(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_8DE[0x24];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheTrack_FlipbookAnimation* GetDefaultObj();

	void AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime);
};

// 0x80 (0xD8 - 0x58)
// Class GeometryCache.GeometryCacheTrackStreamable
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
public:
	class UGeometryCacheCodecBase*               Codec;                                             // 0x58(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_8E4[0x68];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StartSampleTime;                                   // 0xC8(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_8E5[0xC];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheTrackStreamable* GetDefaultObj();

};

// 0xC8 (0x120 - 0x58)
// Class GeometryCache.GeometryCacheTrack_TransformAnimation
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{
public:
	uint8                                        Pad_8ED[0xC8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheTrack_TransformAnimation* GetDefaultObj();

	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};

// 0xC8 (0x120 - 0x58)
// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{
public:
	uint8                                        Pad_8F8[0xC8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheTrack_TransformGroupAnimation* GetDefaultObj();

	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};

// 0x288 (0x368 - 0xE0)
// Class GeometryCache.NiagaraGeometryCacheRendererProperties
class UNiagaraGeometryCacheRendererProperties : public UNiagaraRendererProperties
{
public:
	TArray<struct FNiagaraGeometryCacheReference> GeometryCaches;                                    // 0xE0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsLooping;                                        // 0xF0(0x1)(Edit, BlueprintVisible, Net, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_90A[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       ComponentCountLimit;                               // 0xF4(0x4)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0xF8(0x58)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      RotationBinding;                                   // 0x150(0x58)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      ScaleBinding;                                      // 0x1A8(0x58)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      ElapsedTimeBinding;                                // 0x200(0x58)(ConstParm, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      EnabledBinding;                                    // 0x258(0x58)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      ArrayIndexBinding;                                 // 0x2B0(0x58)(ExportObject, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0x308(0x58)(Edit, ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        RendererVisibility;                                // 0x360(0x4)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAssignComponentsOnParticleID;                     // 0x364(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_914[0x3];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraGeometryCacheRendererProperties* GetDefaultObj();

};

}


