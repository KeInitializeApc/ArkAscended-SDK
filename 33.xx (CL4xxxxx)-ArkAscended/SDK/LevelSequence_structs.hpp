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
	bool                                         bOverrideAspectRatioAxisConstraint;                // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EAspectRatioAxisConstraint        AspectRatioAxisConstraint;                         // 0x1(0x1)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
struct FLevelSequenceLegacyObjectReference
{
public:
	uint8                                        Pad_554[0x20];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
struct FLevelSequenceObjectReferenceMap
{
public:
	uint8                                        Pad_555[0x50];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct LevelSequence.BoundActorProxy
struct FBoundActorProxy
{
public:
	uint8                                        Pad_556[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceAnimSequenceLinkItem
struct FLevelSequenceAnimSequenceLinkItem
{
public:
	struct FGuid                                 SkelTrackGuid;                                     // 0x0(0x10)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       PathToAnimSequence;                                // 0x10(0x20)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bExportTransforms;                                 // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bExportMorphTargets;                               // 0x31(0x1)(Edit, ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bExportAttributeCurves;                            // 0x32(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bExportMaterialCurves;                             // 0x33(0x1)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EAnimInterpolationType            Interpolation;                                     // 0x34(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, GlobalConfig, InstancedReference, DuplicateTransient)
	enum class ERichCurveInterpMode              CurveInterpolation;                                // 0x35(0x1)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bRecordInWorldSpace;                               // 0x36(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEvaluateAllSkeletalMeshComponents;                // 0x37(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceBindingReference
struct FLevelSequenceBindingReference
{
public:
	class FString                                PackageName;                                       // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	struct FSoftObjectPath                       ExternalObjectPath;                                // 0x10(0x20)(BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                ObjectPath;                                        // 0x30(0x10)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
struct FLevelSequenceBindingReferenceArray
{
public:
	TArray<struct FLevelSequenceBindingReference> References;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, InstancedReference, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceBindingReferences
struct FLevelSequenceBindingReferences
{
public:
	TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences;                             // 0x0(0x50)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TSet<struct FGuid>                           AnimSequenceInstances;                             // 0x50(0x50)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TSet<struct FGuid>                           PostProcessInstances;                              // 0xA0(0x50)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceObject
struct FLevelSequenceObject
{
public:
	TLazyObjectPtr<class UObject>                ObjectOrOwner;                                     // 0x0(0x1C)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_562[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ComponentName;                                     // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TWeakObjectPtr<class UObject>                CachedComponent;                                   // 0x30(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
struct FLevelSequenceSnapshotSettings
{
public:
	uint8                                        Pad_563[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
struct FLevelSequencePlayerSnapshot
{
public:
	class FString                                RootName;                                          // 0x0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FQualifiedFrameTime                   RootTime;                                          // 0x10(0x10)(Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FQualifiedFrameTime                   SourceTime;                                        // 0x20(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                CurrentShotName;                                   // 0x30(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FQualifiedFrameTime                   CurrentShotLocalTime;                              // 0x40(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FQualifiedFrameTime                   CurrentShotSourceTime;                             // 0x50(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                SourceTimecode;                                    // 0x60(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UCameraComponent>       CameraComponent;                                   // 0x70(0x30)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	class ULevelSequence*                        ActiveShot;                                        // 0xA0(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FMovieSceneSequenceID                 ShotID;                                            // 0xA8(0x4)(ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_564[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                MasterName;                                        // 0xB0(0x10)(ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FQualifiedFrameTime                   MasterTime;                                        // 0xC0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

}


