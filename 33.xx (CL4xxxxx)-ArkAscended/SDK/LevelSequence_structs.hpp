#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x2 (0x2 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceCameraSettings
struct FLevelSequenceCameraSettings
{
public:
	bool                                         bOverrideAspectRatioAxisConstraint;                // 0x0(0x1)(BlueprintReadOnly, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	enum class EAspectRatioAxisConstraint        AspectRatioAxisConstraint;                         // 0x1(0x1)(ExportObject, Net, EditFixedSize, Config, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
struct FLevelSequenceLegacyObjectReference
{
public:
	uint8                                        Pad_52E[0x20];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
struct FLevelSequenceObjectReferenceMap
{
public:
	uint8                                        Pad_52F[0x50];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct LevelSequence.BoundActorProxy
struct FBoundActorProxy
{
public:
	uint8                                        Pad_530[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceAnimSequenceLinkItem
struct FLevelSequenceAnimSequenceLinkItem
{
public:
	struct FGuid                                 SkelTrackGuid;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       PathToAnimSequence;                                // 0x10(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bExportTransforms;                                 // 0x30(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bExportMorphTargets;                               // 0x31(0x1)(Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bExportAttributeCurves;                            // 0x32(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bExportMaterialCurves;                             // 0x33(0x1)(ExportObject, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EAnimInterpolationType            Interpolation;                                     // 0x34(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	enum class ERichCurveInterpMode              CurveInterpolation;                                // 0x35(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bRecordInWorldSpace;                               // 0x36(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEvaluateAllSkeletalMeshComponents;                // 0x37(0x1)(Edit, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceBindingReference
struct FLevelSequenceBindingReference
{
public:
	class FString                                PackageName;                                       // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FSoftObjectPath                       ExternalObjectPath;                                // 0x10(0x20)(Edit, BlueprintVisible, ExportObject, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                ObjectPath;                                        // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
struct FLevelSequenceBindingReferenceArray
{
public:
	TArray<struct FLevelSequenceBindingReference> References;                                        // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceBindingReferences
struct FLevelSequenceBindingReferences
{
public:
	TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences;                             // 0x0(0x50)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	TSet<struct FGuid>                           AnimSequenceInstances;                             // 0x50(0x50)(ConstParm, Net, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	TSet<struct FGuid>                           PostProcessInstances;                              // 0xA0(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceObject
struct FLevelSequenceObject
{
public:
	TLazyObjectPtr<class UObject>                ObjectOrOwner;                                     // 0x0(0x1C)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_536[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ComponentName;                                     // 0x20(0x10)(Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TWeakObjectPtr<class UObject>                CachedComponent;                                   // 0x30(0x8)(ExportObject, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
struct FLevelSequenceSnapshotSettings
{
public:
	uint8                                        Pad_538[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
struct FLevelSequencePlayerSnapshot
{
public:
	class FString                                RootName;                                          // 0x0(0x10)(ConstParm, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FQualifiedFrameTime                   RootTime;                                          // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FQualifiedFrameTime                   SourceTime;                                        // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                CurrentShotName;                                   // 0x30(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FQualifiedFrameTime                   CurrentShotLocalTime;                              // 0x40(0x10)(Edit, ConstParm, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FQualifiedFrameTime                   CurrentShotSourceTime;                             // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                SourceTimecode;                                    // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UCameraComponent>       CameraComponent;                                   // 0x70(0x30)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class ULevelSequence*                        ActiveShot;                                        // 0xA0(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FMovieSceneSequenceID                 ShotID;                                            // 0xA8(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_539[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                MasterName;                                        // 0xB0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FQualifiedFrameTime                   MasterTime;                                        // 0xC0(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

}


