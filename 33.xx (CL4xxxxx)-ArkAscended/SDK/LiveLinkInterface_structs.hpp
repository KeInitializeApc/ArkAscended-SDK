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
	struct FGuid                                 Source;                                            // 0x0(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, EditConst)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSubjectPreset
struct FLiveLinkSubjectPreset
{
public:
	struct FLiveLinkSubjectKey                   Key;                                               // 0x0(0x18)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UClass*                                Role;                                              // 0x18(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
	class ULiveLinkSubjectSettings*              Settings;                                          // 0x20(0x8)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	class ULiveLinkVirtualSubject*               VirtualSubject;                                    // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	bool                                         bEnabled;                                          // 0x30(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1064[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSourceHandle
struct FLiveLinkSourceHandle
{
public:
	uint8                                        Pad_1065[0x18];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkBaseStaticData
struct FLiveLinkBaseStaticData
{
public:
	TArray<class FName>                          PropertyNames;                                     // 0x0(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
};

// 0x20 (0x30 - 0x10)
// ScriptStruct LiveLinkInterface.LiveLinkSkeletonStaticData
struct FLiveLinkSkeletonStaticData : public FLiveLinkBaseStaticData
{
public:
	TArray<class FName>                          BoneNames;                                         // 0x10(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                BoneParents;                                       // 0x20(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkWorldTime
struct FLiveLinkWorldTime
{
public:
	double                                       Time;                                              // 0x0(0x8)(Edit, ConstParm, Net, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       Offset;                                            // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkMetaData
struct FLiveLinkMetaData
{
public:
	TMap<class FName, class FString>             StringMetaData;                                    // 0x0(0x50)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FQualifiedFrameTime                   SceneTime;                                         // 0x50(0x10)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkBaseFrameData
struct FLiveLinkBaseFrameData
{
public:
	struct FLiveLinkWorldTime                    WorldTime;                                         // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLiveLinkMetaData                     MetaData;                                          // 0x10(0x60)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	TArray<float>                                PropertyValues;                                    // 0x70(0x10)(BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_106F[0x20];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0xB0 - 0xA0)
// ScriptStruct LiveLinkInterface.LiveLinkAnimationFrameData
struct FLiveLinkAnimationFrameData : public FLiveLinkBaseFrameData
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0xA0(0x10)(Edit, ConstParm, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkBaseBlueprintData
struct FLiveLinkBaseBlueprintData
{
public:
	uint8                                        Pad_1071[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xB0 (0xB8 - 0x8)
// ScriptStruct LiveLinkInterface.LiveLinkBasicBlueprintData
struct FLiveLinkBasicBlueprintData : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkBaseStaticData               StaticData;                                        // 0x8(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLiveLinkBaseFrameData                FrameData;                                         // 0x18(0xA0)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x18 - 0x10)
// ScriptStruct LiveLinkInterface.LiveLinkTransformStaticData
struct FLiveLinkTransformStaticData : public FLiveLinkBaseStaticData
{
public:
	bool                                         bIsLocationSupported;                              // 0x10(0x1)(Edit, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsRotationSupported;                              // 0x11(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsScaleSupported;                                 // 0x12(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1074[0x5];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x28 - 0x18)
// ScriptStruct LiveLinkInterface.LiveLinkCameraStaticData
struct FLiveLinkCameraStaticData : public FLiveLinkTransformStaticData
{
public:
	bool                                         bIsFieldOfViewSupported;                           // 0x18(0x1)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsAspectRatioSupported;                           // 0x19(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsFocalLengthSupported;                           // 0x1A(0x1)(BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsProjectionModeSupported;                        // 0x1B(0x1)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        FilmBackWidth;                                     // 0x1C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        FilmBackHeight;                                    // 0x20(0x4)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsApertureSupported;                              // 0x24(0x1)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsFocusDistanceSupported;                         // 0x25(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsDepthOfFieldSupported;                          // 0x26(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_107A[0x1];                                     // Fixing Size Of Struct > TateDumper <
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
	float                                        FieldOfView;                                       // 0x100(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        AspectRatio;                                       // 0x104(0x4)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FocalLength;                                       // 0x108(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        Aperture;                                          // 0x10C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        FocusDistance;                                     // 0x110(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	enum class ELiveLinkCameraProjectionMode     ProjectionMode;                                    // 0x114(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1081[0xB];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x148 (0x150 - 0x8)
// ScriptStruct LiveLinkInterface.LiveLinkCameraBlueprintData
struct FLiveLinkCameraBlueprintData : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkCameraStaticData             StaticData;                                        // 0x8(0x28)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLiveLinkCameraFrameData              FrameData;                                         // 0x30(0x120)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x28 - 0x18)
// ScriptStruct LiveLinkInterface.LiveLinkLightStaticData
struct FLiveLinkLightStaticData : public FLiveLinkTransformStaticData
{
public:
	bool                                         bIsTemperatureSupported;                           // 0x18(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsIntensitySupported;                             // 0x19(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsLightColorSupported;                            // 0x1A(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsInnerConeAngleSupported;                        // 0x1B(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsOuterConeAngleSupported;                        // 0x1C(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsAttenuationRadiusSupported;                     // 0x1D(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsSourceLenghtSupported;                          // 0x1E(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsSourceRadiusSupported;                          // 0x1F(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsSoftSourceRadiusSupported;                      // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_108C[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x130 - 0x100)
// ScriptStruct LiveLinkInterface.LiveLinkLightFrameData
struct FLiveLinkLightFrameData : public FLiveLinkTransformFrameData
{
public:
	float                                        Temperature;                                       // 0x100(0x4)(Net, EditFixedSize, OutParm, Config)
	float                                        Intensity;                                         // 0x104(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, Config)
	struct FColor                                LightColor;                                        // 0x108(0x4)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, Config)
	float                                        InnerConeAngle;                                    // 0x10C(0x4)(BlueprintVisible, Parm, OutParm, Config)
	float                                        OuterConeAngle;                                    // 0x110(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config)
	float                                        AttenuationRadius;                                 // 0x114(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        SourceRadius;                                      // 0x118(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config)
	float                                        SoftSourceRadius;                                  // 0x11C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        SourceLength;                                      // 0x120(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1090[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x158 (0x160 - 0x8)
// ScriptStruct LiveLinkInterface.LiveLinkLightBlueprintData
struct FLiveLinkLightBlueprintData : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkLightStaticData              StaticData;                                        // 0x8(0x28)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLiveLinkLightFrameData               FrameData;                                         // 0x30(0x130)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSourcePreset
struct FLiveLinkSourcePreset
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class ULiveLinkSourceSettings*               Settings;                                          // 0x10(0x8)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	class FText                                  SourceType;                                        // 0x18(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
struct FLiveLinkRefSkeleton
{
public:
	TArray<class FName>                          BoneNames;                                         // 0x0(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                BoneParents;                                       // 0x10(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSubjectRepresentation
struct FLiveLinkSubjectRepresentation
{
public:
	struct FLiveLinkSubjectName                  Subject;                                           // 0x0(0x8)(ExportObject, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UClass*                                Role;                                              // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
};

// 0x118 (0x120 - 0x8)
// ScriptStruct LiveLinkInterface.LiveLinkTransformBlueprintData
struct FLiveLinkTransformBlueprintData : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkTransformStaticData          StaticData;                                        // 0x8(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLiveLinkTransformFrameData           FrameData;                                         // 0x20(0x100)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings
struct FLiveLinkCurveConversionSettings
{
public:
	TMap<class FString, struct FSoftObjectPath>  CurveConversionAssetMap;                           // 0x0(0x50)(ExportObject, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSourceBufferManagementSettings
struct FLiveLinkSourceBufferManagementSettings
{
public:
	bool                                         bValidEngineTimeEnabled;                           // 0x0(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_109E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ValidEngineTime;                                   // 0x4(0x4)(Edit, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        EngineTimeOffset;                                  // 0x8(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_109F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       EngineTimeClockOffset;                             // 0x10(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       SmoothEngineTimeOffset;                            // 0x18(0x8)(Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bGenerateSubFrame;                                 // 0x20(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10A1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFrameRate                            DetectedFrameRate;                                 // 0x24(0x8)(BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseTimecodeSmoothLatest;                          // 0x2C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10A3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFrameRate                            SourceTimecodeFrameRate;                           // 0x30(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bValidTimecodeFrameEnabled;                        // 0x38(0x1)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10A7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ValidTimecodeFrame;                                // 0x3C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        TimecodeFrameOffset;                               // 0x40(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10AA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       TimecodeClockOffset;                               // 0x48(0x8)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        LatestOffset;                                      // 0x50(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MaxNumberOfFrameToBuffered;                        // 0x54(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bKeepAtLeastOneFrame;                              // 0x58(0x1)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10AB[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSourceDebugInfo
struct FLiveLinkSourceDebugInfo
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, EditConst)
	int32                                        SnapshotIndex;                                     // 0x8(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumberOfBufferAtSnapshot;                          // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
struct FLiveLinkTimeSynchronizationSettings
{
public:
	struct FFrameRate                            FrameRate;                                         // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm)
	struct FFrameNumber                          FrameOffset;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
struct FLiveLinkInterpolationSettings
{
public:
	bool                                         bUseInterpolation;                                 // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10B6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        InterpolationOffset;                               // 0x4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkTime
struct FLiveLinkTime
{
public:
	double                                       WorldTime;                                         // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FQualifiedFrameTime                   SceneTime;                                         // 0x8(0x10)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
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
	int32                                        Seconds;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        Frames;                                            // 0x4(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
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
	class FName                                  CurveName;                                         // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        CurveValue;                                        // 0x8(0x4)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkFrameData
struct FLiveLinkFrameData
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x0(0x10)(Edit, ConstParm, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLiveLinkCurveElement>         CurveElements;                                     // 0x10(0x10)(ExportObject, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLiveLinkWorldTime                    WorldTime;                                         // 0x20(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLiveLinkMetaData                     MetaData;                                          // 0x30(0x60)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct LiveLinkInterface.SubjectMetadata
struct FSubjectMetadata
{
public:
	TMap<class FName, class FString>             StringMetaData;                                    // 0x0(0x50)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FTimecode                             SceneTimecode;                                     // 0x50(0x14)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FFrameRate                            SceneFramerate;                                    // 0x64(0x8)(BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10C4[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x160 (0x160 - 0x0)
// ScriptStruct LiveLinkInterface.CachedSubjectFrame
struct FCachedSubjectFrame
{
public:
	uint8                                        Pad_10C5[0x160];                                   // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkTransform
struct FLiveLinkTransform
{
public:
	uint8                                        Pad_10C6[0x20];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x18 - 0x8)
// ScriptStruct LiveLinkInterface.SubjectFrameHandle
struct FSubjectFrameHandle : public FLiveLinkBaseBlueprintData
{
public:
	uint8                                        Pad_10C8[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

}


