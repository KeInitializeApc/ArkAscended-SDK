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
	bool                                         bOverrideAspectRatioAxisConstraint;                // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EAspectRatioAxisConstraint        AspectRatioAxisConstraint;                         // 0x1(0x1)(ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
struct FLevelSequenceLegacyObjectReference
{
public:
	uint8                                        Pad_40B[0x20];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
struct FLevelSequenceObjectReferenceMap
{
public:
	uint8                                        Pad_40C[0x50];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct LevelSequence.BoundActorProxy
struct FBoundActorProxy
{
public:
	uint8                                        Pad_40D[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceAnimSequenceLinkItem
struct FLevelSequenceAnimSequenceLinkItem
{
public:
	struct FGuid                                 SkelTrackGuid;                                     // 0x0(0x10)(ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSoftObjectPath                       PathToAnimSequence;                                // 0x10(0x20)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bExportTransforms;                                 // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bExportMorphTargets;                               // 0x31(0x1)(Edit, ConstParm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bExportAttributeCurves;                            // 0x32(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bExportMaterialCurves;                             // 0x33(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EAnimInterpolationType            Interpolation;                                     // 0x34(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, DuplicateTransient)
	enum class ERichCurveInterpMode              CurveInterpolation;                                // 0x35(0x1)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRecordInWorldSpace;                               // 0x36(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEvaluateAllSkeletalMeshComponents;                // 0x37(0x1)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceBindingReference
struct FLevelSequenceBindingReference
{
public:
	class FString                                PackageName;                                       // 0x0(0x10)(ExportObject, OutParm, Transient, Config, SubobjectReference)
	struct FSoftObjectPath                       ExternalObjectPath;                                // 0x10(0x20)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ObjectPath;                                        // 0x30(0x10)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
struct FLevelSequenceBindingReferenceArray
{
public:
	TArray<struct FLevelSequenceBindingReference> References;                                        // 0x0(0x10)(Edit, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceBindingReferences
struct FLevelSequenceBindingReferences
{
public:
	TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences;                             // 0x0(0x50)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSet<struct FGuid>                           AnimSequenceInstances;                             // 0x50(0x50)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSet<struct FGuid>                           PostProcessInstances;                              // 0xA0(0x50)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceObject
struct FLevelSequenceObject
{
public:
	TLazyObjectPtr<class UObject>                ObjectOrOwner;                                     // 0x0(0x1C)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_41A[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ComponentName;                                     // 0x20(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TWeakObjectPtr<class UObject>                CachedComponent;                                   // 0x30(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
struct FLevelSequenceSnapshotSettings
{
public:
	uint8                                        Pad_41E[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
struct FLevelSequencePlayerSnapshot
{
public:
	class FString                                RootName;                                          // 0x0(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FQualifiedFrameTime                   RootTime;                                          // 0x10(0x10)(EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FQualifiedFrameTime                   SourceTime;                                        // 0x20(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CurrentShotName;                                   // 0x30(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FQualifiedFrameTime                   CurrentShotLocalTime;                              // 0x40(0x10)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FQualifiedFrameTime                   CurrentShotSourceTime;                             // 0x50(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                SourceTimecode;                                    // 0x60(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftObjectPtr<class UCameraComponent>       CameraComponent;                                   // 0x70(0x30)(Edit, BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class ULevelSequence*                        ActiveShot;                                        // 0xA0(0x8)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneSequenceID                 ShotID;                                            // 0xA8(0x4)(ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_42B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                MasterName;                                        // 0xB0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FQualifiedFrameTime                   MasterTime;                                        // 0xC0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


