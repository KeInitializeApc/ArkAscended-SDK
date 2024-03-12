#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELiveLinkCameraProjectionMode : uint8
{
	Perspective                    = 0,
	Orthographic                   = 1,
	ELiveLinkCameraProjectionMode_MAX = 2,
};

enum class ELiveLinkSourceMode : uint8
{
	Latest                         = 0,
	EngineTime                     = 1,
	Timecode                       = 2,
	ELiveLinkSourceMode_MAX        = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSubjectName
struct FLiveLinkSubjectName
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSubjectKey
struct FLiveLinkSubjectKey
{
public:
	struct FGuid                                 Source;                                            // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x10(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSubjectPreset
struct FLiveLinkSubjectPreset
{
public:
	struct FLiveLinkSubjectKey                   Key;                                               // 0x0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class UClass*                                Role;                                              // 0x18(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
	class ULiveLinkSubjectSettings*              Settings;                                          // 0x20(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class ULiveLinkVirtualSubject*               VirtualSubject;                                    // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnabled;                                          // 0x30(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_1051[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSourceHandle
struct FLiveLinkSourceHandle
{
public:
	uint8                                        Pad_1052[0x18];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkBaseStaticData
struct FLiveLinkBaseStaticData
{
public:
	TArray<class FName>                          PropertyNames;                                     // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x30 - 0x10)
// ScriptStruct LiveLinkInterface.LiveLinkSkeletonStaticData
struct FLiveLinkSkeletonStaticData : public FLiveLinkBaseStaticData
{
public:
	TArray<class FName>                          BoneNames;                                         // 0x10(0x10)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                BoneParents;                                       // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkWorldTime
struct FLiveLinkWorldTime
{
public:
	double                                       Time;                                              // 0x0(0x8)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       Offset;                                            // 0x8(0x8)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkMetaData
struct FLiveLinkMetaData
{
public:
	TMap<class FName, class FString>             StringMetaData;                                    // 0x0(0x50)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FQualifiedFrameTime                   SceneTime;                                         // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkBaseFrameData
struct FLiveLinkBaseFrameData
{
public:
	struct FLiveLinkWorldTime                    WorldTime;                                         // 0x0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FLiveLinkMetaData                     MetaData;                                          // 0x10(0x60)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, GlobalConfig)
	TArray<float>                                PropertyValues;                                    // 0x70(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_105F[0x20];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0xB0 - 0xA0)
// ScriptStruct LiveLinkInterface.LiveLinkAnimationFrameData
struct FLiveLinkAnimationFrameData : public FLiveLinkBaseFrameData
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0xA0(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkBaseBlueprintData
struct FLiveLinkBaseBlueprintData
{
public:
	uint8                                        Pad_1062[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xB0 (0xB8 - 0x8)
// ScriptStruct LiveLinkInterface.LiveLinkBasicBlueprintData
struct FLiveLinkBasicBlueprintData : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkBaseStaticData               StaticData;                                        // 0x8(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FLiveLinkBaseFrameData                FrameData;                                         // 0x18(0xA0)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
};

// 0x8 (0x18 - 0x10)
// ScriptStruct LiveLinkInterface.LiveLinkTransformStaticData
struct FLiveLinkTransformStaticData : public FLiveLinkBaseStaticData
{
public:
	bool                                         bIsLocationSupported;                              // 0x10(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bIsRotationSupported;                              // 0x11(0x1)(ExportObject, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bIsScaleSupported;                                 // 0x12(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_1068[0x5];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x28 - 0x18)
// ScriptStruct LiveLinkInterface.LiveLinkCameraStaticData
struct FLiveLinkCameraStaticData : public FLiveLinkTransformStaticData
{
public:
	bool                                         bIsFieldOfViewSupported;                           // 0x18(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bIsAspectRatioSupported;                           // 0x19(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bIsFocalLengthSupported;                           // 0x1A(0x1)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bIsProjectionModeSupported;                        // 0x1B(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        FilmBackWidth;                                     // 0x1C(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        FilmBackHeight;                                    // 0x20(0x4)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bIsApertureSupported;                              // 0x24(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bIsFocusDistanceSupported;                         // 0x25(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bIsDepthOfFieldSupported;                          // 0x26(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_106E[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x100 - 0xA0)
// ScriptStruct LiveLinkInterface.LiveLinkTransformFrameData
struct FLiveLinkTransformFrameData : public FLiveLinkBaseFrameData
{
public:
	struct FTransform                            Transform;                                         // 0xA0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
};

// 0x20 (0x120 - 0x100)
// ScriptStruct LiveLinkInterface.LiveLinkCameraFrameData
struct FLiveLinkCameraFrameData : public FLiveLinkTransformFrameData
{
public:
	float                                        FieldOfView;                                       // 0x100(0x4)(Edit, ExportObject, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        AspectRatio;                                       // 0x104(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        FocalLength;                                       // 0x108(0x4)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Aperture;                                          // 0x10C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FocusDistance;                                     // 0x110(0x4)(Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ELiveLinkCameraProjectionMode     ProjectionMode;                                    // 0x114(0x1)(Edit, ExportObject, Net, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_1076[0xB];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x148 (0x150 - 0x8)
// ScriptStruct LiveLinkInterface.LiveLinkCameraBlueprintData
struct FLiveLinkCameraBlueprintData : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkCameraStaticData             StaticData;                                        // 0x8(0x28)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FLiveLinkCameraFrameData              FrameData;                                         // 0x30(0x120)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
};

// 0x10 (0x28 - 0x18)
// ScriptStruct LiveLinkInterface.LiveLinkLightStaticData
struct FLiveLinkLightStaticData : public FLiveLinkTransformStaticData
{
public:
	bool                                         bIsTemperatureSupported;                           // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bIsIntensitySupported;                             // 0x19(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bIsLightColorSupported;                            // 0x1A(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bIsInnerConeAngleSupported;                        // 0x1B(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bIsOuterConeAngleSupported;                        // 0x1C(0x1)(Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bIsAttenuationRadiusSupported;                     // 0x1D(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bIsSourceLenghtSupported;                          // 0x1E(0x1)(BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bIsSourceRadiusSupported;                          // 0x1F(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bIsSoftSourceRadiusSupported;                      // 0x20(0x1)(BlueprintReadOnly, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_107F[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x130 - 0x100)
// ScriptStruct LiveLinkInterface.LiveLinkLightFrameData
struct FLiveLinkLightFrameData : public FLiveLinkTransformFrameData
{
public:
	float                                        Temperature;                                       // 0x100(0x4)(BlueprintReadOnly, OutParm, ZeroConstructor, Config)
	float                                        Intensity;                                         // 0x104(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config)
	struct FColor                                LightColor;                                        // 0x108(0x4)(Edit, OutParm, ZeroConstructor, Config)
	float                                        InnerConeAngle;                                    // 0x10C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config)
	float                                        OuterConeAngle;                                    // 0x110(0x4)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Config)
	float                                        AttenuationRadius;                                 // 0x114(0x4)(Edit, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        SourceRadius;                                      // 0x118(0x4)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, Config)
	float                                        SoftSourceRadius;                                  // 0x11C(0x4)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        SourceLength;                                      // 0x120(0x4)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_1080[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x158 (0x160 - 0x8)
// ScriptStruct LiveLinkInterface.LiveLinkLightBlueprintData
struct FLiveLinkLightBlueprintData : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkLightStaticData              StaticData;                                        // 0x8(0x28)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FLiveLinkLightFrameData               FrameData;                                         // 0x30(0x130)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSourcePreset
struct FLiveLinkSourcePreset
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance)
	class ULiveLinkSourceSettings*               Settings;                                          // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class FText                                  SourceType;                                        // 0x18(0x18)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
struct FLiveLinkRefSkeleton
{
public:
	TArray<class FName>                          BoneNames;                                         // 0x0(0x10)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                BoneParents;                                       // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSubjectRepresentation
struct FLiveLinkSubjectRepresentation
{
public:
	struct FLiveLinkSubjectName                  Subject;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                Role;                                              // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
};

// 0x118 (0x120 - 0x8)
// ScriptStruct LiveLinkInterface.LiveLinkTransformBlueprintData
struct FLiveLinkTransformBlueprintData : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkTransformStaticData          StaticData;                                        // 0x8(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FLiveLinkTransformFrameData           FrameData;                                         // 0x20(0x100)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings
struct FLiveLinkCurveConversionSettings
{
public:
	TMap<class FString, struct FSoftObjectPath>  CurveConversionAssetMap;                           // 0x0(0x50)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSourceBufferManagementSettings
struct FLiveLinkSourceBufferManagementSettings
{
public:
	bool                                         bValidEngineTimeEnabled;                           // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_108C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ValidEngineTime;                                   // 0x4(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        EngineTimeOffset;                                  // 0x8(0x4)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_108E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       EngineTimeClockOffset;                             // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	double                                       SmoothEngineTimeOffset;                            // 0x18(0x8)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bGenerateSubFrame;                                 // 0x20(0x1)(ExportObject, Net, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_1092[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFrameRate                            DetectedFrameRate;                                 // 0x24(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bUseTimecodeSmoothLatest;                          // 0x2C(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_1097[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFrameRate                            SourceTimecodeFrameRate;                           // 0x30(0x8)(BlueprintVisible, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bValidTimecodeFrameEnabled;                        // 0x38(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_109A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ValidTimecodeFrame;                                // 0x3C(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        TimecodeFrameOffset;                               // 0x40(0x4)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_109C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       TimecodeClockOffset;                               // 0x48(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	int32                                        LatestOffset;                                      // 0x50(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	int32                                        MaxNumberOfFrameToBuffered;                        // 0x54(0x4)(Edit, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bKeepAtLeastOneFrame;                              // 0x58(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_109F[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSourceDebugInfo
struct FLiveLinkSourceDebugInfo
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	int32                                        SnapshotIndex;                                     // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	int32                                        NumberOfBufferAtSnapshot;                          // 0xC(0x4)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
struct FLiveLinkTimeSynchronizationSettings
{
public:
	struct FFrameRate                            FrameRate;                                         // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm)
	struct FFrameNumber                          FrameOffset;                                       // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
struct FLiveLinkInterpolationSettings
{
public:
	bool                                         bUseInterpolation;                                 // 0x0(0x1)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_10A8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        InterpolationOffset;                               // 0x4(0x4)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkTime
struct FLiveLinkTime
{
public:
	double                                       WorldTime;                                         // 0x0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FQualifiedFrameTime                   SceneTime;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct LiveLinkInterface.LiveLinkFrameRate
struct FLiveLinkFrameRate : public FFrameRate
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
struct FLiveLinkTimeCode_Base_DEPRECATED
{
public:
	int32                                        Seconds;                                           // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	int32                                        Frames;                                            // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	struct FLiveLinkFrameRate                    FrameRate;                                         // 0x8(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct LiveLinkInterface.LiveLinkTimeCode
struct FLiveLinkTimeCode : public FLiveLinkTimeCode_Base_DEPRECATED
{
public:
};

// 0xC (0xC - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkCurveElement
struct FLiveLinkCurveElement
{
public:
	class FName                                  CurveName;                                         // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CurveValue;                                        // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkFrameData
struct FLiveLinkFrameData
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLiveLinkCurveElement>         CurveElements;                                     // 0x10(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FLiveLinkWorldTime                    WorldTime;                                         // 0x20(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FLiveLinkMetaData                     MetaData;                                          // 0x30(0x60)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, GlobalConfig)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct LiveLinkInterface.SubjectMetadata
struct FSubjectMetadata
{
public:
	TMap<class FName, class FString>             StringMetaData;                                    // 0x0(0x50)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FTimecode                             SceneTimecode;                                     // 0x50(0x14)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FFrameRate                            SceneFramerate;                                    // 0x64(0x8)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_10BB[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x160 (0x160 - 0x0)
// ScriptStruct LiveLinkInterface.CachedSubjectFrame
struct FCachedSubjectFrame
{
public:
	uint8                                        Pad_10BD[0x160];                                   // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkTransform
struct FLiveLinkTransform
{
public:
	uint8                                        Pad_10BE[0x20];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x18 - 0x8)
// ScriptStruct LiveLinkInterface.SubjectFrameHandle
struct FSubjectFrameHandle : public FLiveLinkBaseBlueprintData
{
public:
	uint8                                        Pad_10C0[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

}


