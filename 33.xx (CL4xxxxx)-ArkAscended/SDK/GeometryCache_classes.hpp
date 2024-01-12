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
	uint8                                        Pad_B19[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UMaterialInterface*>            Materials;                                         // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	TArray<class UGeometryCacheTrack*>           Tracks;                                            // 0x40(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B1A[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        StartFrame;                                        // 0x60(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	int32                                        EndFrame;                                          // 0x64(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint64                                       Hash;                                              // 0x68(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGeometryCache* GetDefaultObj();

};

// 0x8 (0x4D0 - 0x4C8)
// Class GeometryCache.GeometryCacheActor
class AGeometryCacheActor : public AActor
{
public:
	class UGeometryCacheComponent*               GeometryCacheComponent;                            // 0x4C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class AGeometryCacheActor* GetDefaultObj();

	class UGeometryCacheComponent* GetGeometryCacheComponent();
};

// 0x10 (0x38 - 0x28)
// Class GeometryCache.GeometryCacheCodecBase
class UGeometryCacheCodecBase : public UObject
{
public:
	TArray<int32>                                TopologyRanges;                                    // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGeometryCacheCodecBase* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GeometryCache.GeometryCacheCodecRaw
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{
public:
	int32                                        DummyProperty;                                     // 0x38(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B3C[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheCodecRaw* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GeometryCache.GeometryCacheCodecV1
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{
public:
	uint8                                        Pad_B40[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheCodecV1* GetDefaultObj();

};

// 0x88 (0x760 - 0x6D8)
// Class GeometryCache.GeometryCacheComponent
class UGeometryCacheComponent : public UMeshComponent
{
public:
	class UGeometryCache*                        GeometryCache;                                     // 0x6D8(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	bool                                         bRunning;                                          // 0x6E0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bLooping;                                          // 0x6E1(0x1)(Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig)
	bool                                         bExtrapolateFrames;                                // 0x6E2(0x1)(Edit, ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B67[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        StartTimeOffset;                                   // 0x6E4(0x4)(ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        PlaybackSpeed;                                     // 0x6E8(0x4)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        MotionVectorScale;                                 // 0x6EC(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumTracks;                                         // 0x6F0(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ElapsedTime;                                       // 0x6F4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B68[0x4C];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Duration;                                          // 0x744(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, DuplicateTransient)
	bool                                         bManualTick;                                       // 0x748(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bOverrideWireframeColor;                           // 0x749(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B6B[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          WireframeOverrideColor;                            // 0x74C(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B6C[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheComponent* GetDefaultObj();

	bool TickAtThisTime(float Time);
	void Stop();
	void SetWireframeOverrideColor(struct FLinearColor* Color);
	float SetStartTimeOffset();
	float SetPlaybackSpeed();
	bool SetOverrideWireframeColor();
	float SetMotionVectorScale();
	bool SetLooping();
	bool SetGeometryCache();
	bool SetExtrapolateFrames();
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
	float                                        Duration;                                          // 0x28(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_B70[0x2C];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheTrack* GetDefaultObj();

};

// 0x28 (0x80 - 0x58)
// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
public:
	uint32                                       NumMeshSamples;                                    // 0x58(0x4)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B76[0x24];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheTrack_FlipbookAnimation* GetDefaultObj();

	float AddMeshSample();
};

// 0x80 (0xD8 - 0x58)
// Class GeometryCache.GeometryCacheTrackStreamable
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
public:
	class UGeometryCacheCodecBase*               Codec;                                             // 0x58(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B77[0x68];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StartSampleTime;                                   // 0xC8(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B78[0xC];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheTrackStreamable* GetDefaultObj();

};

// 0xC8 (0x120 - 0x58)
// Class GeometryCache.GeometryCacheTrack_TransformAnimation
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{
public:
	uint8                                        Pad_B79[0xC8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheTrack_TransformAnimation* GetDefaultObj();

	struct FGeometryCacheMeshData SetMesh();
};

// 0xC8 (0x120 - 0x58)
// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{
public:
	uint8                                        Pad_B7D[0xC8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometryCacheTrack_TransformGroupAnimation* GetDefaultObj();

	struct FGeometryCacheMeshData SetMesh();
};

// 0x288 (0x368 - 0xE0)
// Class GeometryCache.NiagaraGeometryCacheRendererProperties
class UNiagaraGeometryCacheRendererProperties : public UNiagaraRendererProperties
{
public:
	TArray<struct FNiagaraGeometryCacheReference> GeometryCaches;                                    // 0xE0(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsLooping;                                        // 0xF0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B81[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       ComponentCountLimit;                               // 0xF4(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0xF8(0x58)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      RotationBinding;                                   // 0x150(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      ScaleBinding;                                      // 0x1A8(0x58)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      ElapsedTimeBinding;                                // 0x200(0x58)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      EnabledBinding;                                    // 0x258(0x58)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      ArrayIndexBinding;                                 // 0x2B0(0x58)(Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0x308(0x58)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        RendererVisibility;                                // 0x360(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAssignComponentsOnParticleID;                     // 0x364(0x1)(BlueprintVisible, ExportObject, Net, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B86[0x3];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraGeometryCacheRendererProperties* GetDefaultObj();

};

}


