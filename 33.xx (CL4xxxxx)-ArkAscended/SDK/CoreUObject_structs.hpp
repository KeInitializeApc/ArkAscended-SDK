#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAutomationEventType : uint8
{
	Info                           = 0,
	Warning                        = 1,
	Error                          = 2,
	EAutomationEventType_MAX       = 3,
};

enum class ERangeBoundTypes : uint8
{
	Exclusive                      = 0,
	Inclusive                      = 1,
	Open                           = 2,
	ERangeBoundTypes_MAX           = 3,
};

enum class EInterpCurveMode : uint8
{
	CIM_Linear                     = 0,
	CIM_CurveAuto                  = 1,
	CIM_Constant                   = 2,
	CIM_CurveUser                  = 3,
	CIM_CurveBreak                 = 4,
	CIM_CurveAutoClamped           = 5,
	CIM_MAX                        = 6,
};

enum class EInputDeviceConnectionState : uint8
{
	Invalid                        = 0,
	Unknown                        = 1,
	Disconnected                   = 2,
	Connected                      = 3,
	EInputDeviceConnectionState_MAX = 4,
};

enum class ELocalizedTextSourceCategory : uint8
{
	Game                           = 0,
	Engine                         = 1,
	Editor                         = 2,
	ELocalizedTextSourceCategory_MAX = 3,
};

enum class EMouseCursor : uint8
{
	None                           = 0,
	Default                        = 1,
	TextEditBeam                   = 2,
	ResizeLeftRight                = 3,
	ResizeUpDown                   = 4,
	ResizeSouthEast                = 5,
	ResizeSouthWest                = 6,
	CardinalCross                  = 7,
	Crosshairs                     = 8,
	Hand                           = 9,
	GrabHand                       = 10,
	GrabHandClosed                 = 11,
	SlashedCircle                  = 12,
	EyeDropper                     = 13,
	EMouseCursor_MAX               = 14,
};

enum class ELifetimeCondition : uint8
{
	COND_None                      = 0,
	COND_InitialOnly               = 1,
	COND_OwnerOnly                 = 2,
	COND_SkipOwner                 = 3,
	COND_SimulatedOnly             = 4,
	COND_AutonomousOnly            = 5,
	COND_SimulatedOrPhysics        = 6,
	COND_InitialOrOwner            = 7,
	COND_Custom                    = 8,
	COND_ReplayOrOwner             = 9,
	COND_ReplayOnly                = 10,
	COND_SimulatedOnlyNoReplay     = 11,
	COND_SimulatedOrPhysicsNoReplay = 12,
	COND_SkipReplay                = 13,
	COND_Never                     = 15,
	COND_NetGroup                  = 16,
	COND_Max                       = 17,
};

enum class ESearchCase : uint8
{
	CaseSensitive                  = 0,
	IgnoreCase                     = 1,
	ESearchCase_MAX                = 2,
};

enum class ESearchDir : uint8
{
	FromStart                      = 0,
	FromEnd                        = 1,
	ESearchDir_MAX                 = 2,
};

enum class ELogTimes : uint8
{
	None                           = 0,
	UTC                            = 1,
	SinceGStartTime                = 2,
	Local                          = 3,
	ELogTimes_MAX                  = 4,
};

enum class EAxis : uint8
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	EAxis_MAX                      = 4,
};

enum class EAxisList : uint8
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 4,
	Screen                         = 8,
	XY                             = 3,
	XZ                             = 5,
	YZ                             = 6,
	XYZ                            = 7,
	All                            = 15,
	ZRotation                      = 6,
	Rotate2D                       = 8,
	EAxisList_MAX                  = 16,
};

enum class EPixelFormat : uint8
{
	PF_Unknown                     = 0,
	PF_A32B32G32R32F               = 1,
	PF_B8G8R8A8                    = 2,
	PF_G8                          = 3,
	PF_G16                         = 4,
	PF_DXT1                        = 5,
	PF_DXT3                        = 6,
	PF_DXT5                        = 7,
	PF_UYVY                        = 8,
	PF_FloatRGB                    = 9,
	PF_FloatRGBA                   = 10,
	PF_DepthStencil                = 11,
	PF_ShadowDepth                 = 12,
	PF_R32_FLOAT                   = 13,
	PF_G16R16                      = 14,
	PF_G16R16F                     = 15,
	PF_G16R16F_FILTER              = 16,
	PF_G32R32F                     = 17,
	PF_A2B10G10R10                 = 18,
	PF_A16B16G16R16                = 19,
	PF_D24                         = 20,
	PF_R16F                        = 21,
	PF_R16F_FILTER                 = 22,
	PF_BC5                         = 23,
	PF_V8U8                        = 24,
	PF_A1                          = 25,
	PF_FloatR11G11B10              = 26,
	PF_A8                          = 27,
	PF_R32_UINT                    = 28,
	PF_R32_SINT                    = 29,
	PF_PVRTC2                      = 30,
	PF_PVRTC4                      = 31,
	PF_R16_UINT                    = 32,
	PF_R16_SINT                    = 33,
	PF_R16G16B16A16_UINT           = 34,
	PF_R16G16B16A16_SINT           = 35,
	PF_R5G6B5_UNORM                = 36,
	PF_R8G8B8A8                    = 37,
	PF_A8R8G8B8                    = 38,
	PF_BC4                         = 39,
	PF_R8G8                        = 40,
	PF_ATC_RGB                     = 41,
	PF_ATC_RGBA_E                  = 42,
	PF_ATC_RGBA_I                  = 43,
	PF_X24_G8                      = 44,
	PF_ETC1                        = 45,
	PF_ETC2_RGB                    = 46,
	PF_ETC2_RGBA                   = 47,
	PF_R32G32B32A32_UINT           = 48,
	PF_R16G16_UINT                 = 49,
	PF_ASTC_4x4                    = 50,
	PF_ASTC_6x6                    = 51,
	PF_ASTC_8x8                    = 52,
	PF_ASTC_10x10                  = 53,
	PF_ASTC_12x12                  = 54,
	PF_BC6H                        = 55,
	PF_BC7                         = 56,
	PF_R8_UINT                     = 57,
	PF_L8                          = 58,
	PF_XGXR8                       = 59,
	PF_R8G8B8A8_UINT               = 60,
	PF_R8G8B8A8_SNORM              = 61,
	PF_R16G16B16A16_UNORM          = 62,
	PF_R16G16B16A16_SNORM          = 63,
	PF_PLATFORM_HDR_0              = 64,
	PF_PLATFORM_HDR_1              = 65,
	PF_PLATFORM_HDR_2              = 66,
	PF_NV12                        = 67,
	PF_R32G32_UINT                 = 68,
	PF_ETC2_R11_EAC                = 69,
	PF_ETC2_RG11_EAC               = 70,
	PF_R8                          = 71,
	PF_B5G5R5A1_UNORM              = 72,
	PF_ASTC_4x4_HDR                = 73,
	PF_ASTC_6x6_HDR                = 74,
	PF_ASTC_8x8_HDR                = 75,
	PF_ASTC_10x10_HDR              = 76,
	PF_ASTC_12x12_HDR              = 77,
	PF_G16R16_SNORM                = 78,
	PF_R8G8_UINT                   = 79,
	PF_R32G32B32_UINT              = 80,
	PF_R32G32B32_SINT              = 81,
	PF_R32G32B32F                  = 82,
	PF_R8_SINT                     = 83,
	PF_R64_UINT                    = 84,
	PF_R9G9B9EXP5                  = 85,
	PF_P010                        = 86,
	PF_MAX_                        = 87,
};

enum class EUnit : uint8
{
	Micrometers                    = 0,
	Millimeters                    = 1,
	Centimeters                    = 2,
	Meters                         = 3,
	Kilometers                     = 4,
	Inches                         = 5,
	Feet                           = 6,
	Yards                          = 7,
	Miles                          = 8,
	Lightyears                     = 9,
	Degrees                        = 10,
	Radians                        = 11,
	CentimetersPerSecond           = 12,
	MetersPerSecond                = 13,
	KilometersPerHour              = 14,
	MilesPerHour                   = 15,
	Celsius                        = 16,
	Farenheit                      = 17,
	Kelvin                         = 18,
	Micrograms                     = 19,
	Milligrams                     = 20,
	Grams                          = 21,
	Kilograms                      = 22,
	MetricTons                     = 23,
	Ounces                         = 24,
	Pounds                         = 25,
	Stones                         = 26,
	Newtons                        = 27,
	PoundsForce                    = 28,
	KilogramsForce                 = 29,
	Hertz                          = 30,
	Kilohertz                      = 31,
	Megahertz                      = 32,
	Gigahertz                      = 33,
	RevolutionsPerMinute           = 34,
	Bytes                          = 35,
	Kilobytes                      = 36,
	Megabytes                      = 37,
	Gigabytes                      = 38,
	Terabytes                      = 39,
	Lumens                         = 40,
	Milliseconds                   = 46,
	Seconds                        = 47,
	Minutes                        = 48,
	Hours                          = 49,
	Days                           = 50,
	Months                         = 51,
	Years                          = 52,
	Multiplier                     = 55,
	Percentage                     = 54,
	Unspecified                    = 56,
	EUnit_MAX                      = 57,
};

enum class EPropertyAccessChangeNotifyMode : uint8
{
	Default                        = 0,
	Never                          = 1,
	Always                         = 2,
	EPropertyAccessChangeNotifyMode_MAX = 3,
};

enum class EAppReturnType : uint8
{
	No                             = 0,
	Yes                            = 1,
	YesAll                         = 2,
	NoAll                          = 3,
	Cancel                         = 4,
	Ok                             = 5,
	Retry                          = 6,
	Continue                       = 7,
	EAppReturnType_MAX             = 8,
};

enum class EAppMsgType : uint8
{
	Ok                             = 0,
	YesNo                          = 1,
	OkCancel                       = 2,
	YesNoCancel                    = 3,
	CancelRetryContinue            = 4,
	YesNoYesAllNoAll               = 5,
	YesNoYesAllNoAllCancel         = 6,
	YesNoYesAll                    = 7,
	EAppMsgType_MAX                = 8,
};

enum class EInputDeviceTriggerMask : uint8
{
	None                           = 0,
	Left                           = 1,
	Right                          = 2,
	All                            = 3,
	EInputDeviceTriggerMask_MAX    = 4,
};

enum class EDataValidationResult : uint8
{
	Invalid                        = 0,
	Valid                          = 1,
	NotValidated                   = 2,
	EDataValidationResult_MAX      = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.TopLevelAssetPath
struct FTopLevelAssetPath
{
public:
	class FName                                  PackageName;                                       // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference)
	class FName                                  AssetName;                                         // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CoreUObject.SoftObjectPath
struct FSoftObjectPath
{
public:
	struct FTopLevelAssetPath                    AssetPath;                                         // 0x0(0x10)(BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                SubPathString;                                     // 0x10(0x10)(ExportObject, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x150 (0x150 - 0x0)
// ScriptStruct CoreUObject.ARFilter
struct FARFilter
{
public:
	TArray<class FName>                          PackageNames;                                      // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<class FName>                          PackagePaths;                                      // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<struct FSoftObjectPath>               SoftObjectPaths;                                   // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<class FName>                          ClassNames;                                        // 0x30(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<struct FTopLevelAssetPath>            ClassPaths;                                        // 0x40(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_35[0x50];                                      // Fixing Size After Last Property  > TateDumper <
	TSet<class FName>                            RecursiveClassesExclusionSet;                      // 0xA0(0x50)(BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	TSet<struct FTopLevelAssetPath>              RecursiveClassPathsExclusionSet;                   // 0xF0(0x50)(Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bRecursivePaths;                                   // 0x140(0x1)(BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bRecursiveClasses;                                 // 0x141(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bIncludeOnlyOnDiskAssets;                          // 0x142(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_36[0xD];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.AssetBundleEntry
struct FAssetBundleEntry
{
public:
	class FName                                  BundleName;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference)
	TArray<struct FTopLevelAssetPath>            AssetPaths;                                        // 0x8(0x10)(Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.AssetBundleData
struct FAssetBundleData
{
public:
	TArray<struct FAssetBundleEntry>             Bundles;                                           // 0x0(0x10)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct CoreUObject.AssetData
struct FAssetData
{
public:
	class FName                                  PackageName;                                       // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference)
	class FName                                  PackagePath;                                       // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  AssetName;                                         // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  AssetClass;                                        // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FTopLevelAssetPath                    AssetClassPath;                                    // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_3C[0x38];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Guid
struct FGuid
{
public:
	int32                                        A;                                                 // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	int32                                        B;                                                 // 0x4(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	int32                                        C;                                                 // 0x8(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance)
	int32                                        D;                                                 // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance)

	inline bool operator==(const FGuid& Other) const
	{
		return A == Other.A && B == Other.B && C == Other.C && D == Other.D;
	}

	inline bool operator!=(const FGuid& Other) const
	{
		return A != Other.A || B != Other.B || C != Other.C || D != Other.D;
	}

};

// 0x38 (0x38 - 0x0)
// ScriptStruct CoreUObject.AutomationEvent
struct FAutomationEvent
{
public:
	enum class EAutomationEventType              Type;                                              // 0x0(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_3F[0x7];                                       // Fixing Size After Last Property  > TateDumper <
	class FString                                Message;                                           // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                Context;                                           // 0x18(0x10)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FGuid                                 Artifact;                                          // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.DateTime
struct FDateTime
{
public:
	uint8                                        Pad_40[0x8];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// ScriptStruct CoreUObject.AutomationExecutionEntry
struct FAutomationExecutionEntry
{
public:
	struct FAutomationEvent                      Event;                                             // 0x0(0x38)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                Filename;                                          // 0x38(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
	int32                                        LineNumber;                                        // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_42[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	struct FDateTime                             Timestamp;                                         // 0x50(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.Vector
struct FVector
{
public:
	double                                       X;                                                 // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	double                                       Y;                                                 // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	double                                       Z;                                                 // 0x10(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)

	inline FVector()
		: X(0.0), Y(0.0), Z(0.0)
	{
	}

	inline FVector(decltype(X) Value)
		: X(Value), Y(Value), Z(Value)
	{
	}

	inline FVector(decltype(X) x, decltype(Y) y, decltype(Z) z)
		: X(x), Y(y), Z(z)
	{
	}

	inline bool operator==(const FVector& Other) const
	{
		return X == Other.X && Y == Other.Y && Z == Other.Z;
	}

	inline bool operator!=(const FVector& Other) const
	{
		return X != Other.X || Y != Other.Y || Z != Other.Z;
	}

	FVector operator+(const FVector& Other) const;

	FVector operator-(const FVector& Other) const;

	FVector operator*(decltype(X) Scalar) const;

	FVector operator/(decltype(X) Scalar) const;
};

// 0x38 (0x38 - 0x0)
// ScriptStruct CoreUObject.Box
struct FBox
{
public:
	struct FVector                               Min;                                               // 0x0(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FVector                               Max;                                               // 0x18(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	bool                                         IsValid;                                           // 0x30(0x1)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate)
	uint8                                        Pad_43[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Vector2D
struct FVector2D
{
public:
	double                                       X;                                                 // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	double                                       Y;                                                 // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)

	inline FVector2D()
		: X(0.0), Y(0.0)
	{
	}

	inline FVector2D(decltype(X) Value)
		: X(Value), Y(Value)
	{
	}

	inline FVector2D(decltype(X) x, decltype(Y) y)
		: X(x), Y(y)
	{
	}

	inline bool operator==(const FVector2D& Other) const
	{
		return X == Other.X && Y == Other.Y;
	}

	inline bool operator!=(const FVector2D& Other) const
	{
		return X != Other.X || Y != Other.Y;
	}

	FVector2D operator+(const FVector2D& Other) const;

	FVector2D operator-(const FVector2D& Other) const;

	FVector2D operator*(decltype(X) Scalar) const;

	FVector2D operator/(decltype(X) Scalar) const;
};

// 0x28 (0x28 - 0x0)
// ScriptStruct CoreUObject.Box2D
struct FBox2D
{
public:
	struct FVector2D                             Min;                                               // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FVector2D                             Max;                                               // 0x10(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	bool                                         bIsValid;                                          // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_44[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.Vector2f
struct FVector2f
{
public:
	float                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct CoreUObject.Box2f
struct FBox2f
{
public:
	struct FVector2f                             Min;                                               // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FVector2f                             Max;                                               // 0x8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	bool                                         bIsValid;                                          // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_45[0x3];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.Vector3d
struct FVector3d
{
public:
	double                                       X;                                                 // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	double                                       Y;                                                 // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	double                                       Z;                                                 // 0x10(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct CoreUObject.Box3d
struct FBox3d
{
public:
	struct FVector3d                             Min;                                               // 0x0(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FVector3d                             Max;                                               // 0x18(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	bool                                         IsValid;                                           // 0x30(0x1)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate)
	uint8                                        Pad_46[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct CoreUObject.Vector3f
struct FVector3f
{
public:
	float                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        Z;                                                 // 0x8(0x4)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct CoreUObject.Box3f
struct FBox3f
{
public:
	struct FVector3f                             Min;                                               // 0x0(0xC)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FVector3f                             Max;                                               // 0xC(0xC)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	bool                                         IsValid;                                           // 0x18(0x1)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate)
	uint8                                        Pad_47[0x3];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct CoreUObject.BoxSphereBounds
struct FBoxSphereBounds
{
public:
	struct FVector                               Origin;                                            // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               BoxExtent;                                         // 0x18(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	double                                       SphereRadius;                                      // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct CoreUObject.BoxSphereBounds3d
struct FBoxSphereBounds3d
{
public:
	struct FVector3d                             Origin;                                            // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector3d                             BoxExtent;                                         // 0x18(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	double                                       SphereRadius;                                      // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct CoreUObject.BoxSphereBounds3f
struct FBoxSphereBounds3f
{
public:
	struct FVector3f                             Origin;                                            // 0x0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector3f                             BoxExtent;                                         // 0xC(0xC)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        SphereRadius;                                      // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct CoreUObject.Color
struct FColor
{
public:
	uint8                                        B;                                                 // 0x0(0x1)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	uint8                                        G;                                                 // 0x1(0x1)(Edit, ConstParm, EditFixedSize, ReturnParm, Transient, Config)
	uint8                                        R;                                                 // 0x2(0x1)(Edit, EditFixedSize, ReturnParm, Transient, Config)
	uint8                                        A;                                                 // 0x3(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.DirectoryPath
struct FDirectoryPath
{
public:
	class FString                                Path;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.DoubleRangeBound
struct FDoubleRangeBound
{
public:
	enum class ERangeBoundTypes                  Type;                                              // 0x0(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_4A[0x7];                                       // Fixing Size After Last Property  > TateDumper <
	double                                       Value;                                             // 0x8(0x8)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CoreUObject.DoubleRange
struct FDoubleRange
{
public:
	struct FDoubleRangeBound                     LowerBound;                                        // 0x0(0x10)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FDoubleRangeBound                     UpperBound;                                        // 0x10(0x10)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct CoreUObject.FallbackStruct
struct FFallbackStruct
{
public:
	uint8                                        Pad_4B[0x1];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.FilePath
struct FFilePath
{
public:
	class FString                                FilePath;                                          // 0x0(0x10)(ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.FloatInterval
struct FFloatInterval
{
public:
	float                                        Min;                                               // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	float                                        Max;                                               // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.FloatRangeBound
struct FFloatRangeBound
{
public:
	enum class ERangeBoundTypes                  Type;                                              // 0x0(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_4D[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	float                                        Value;                                             // 0x4(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.FloatRange
struct FFloatRange
{
public:
	struct FFloatRangeBound                      LowerBound;                                        // 0x0(0x8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FFloatRangeBound                      UpperBound;                                        // 0x8(0x8)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct CoreUObject.FrameNumber
struct FFrameNumber
{
public:
	int32                                        Value;                                             // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.FrameNumberRangeBound
struct FFrameNumberRangeBound
{
public:
	enum class ERangeBoundTypes                  Type;                                              // 0x0(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_4E[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	struct FFrameNumber                          Value;                                             // 0x4(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.FrameNumberRange
struct FFrameNumberRange
{
public:
	struct FFrameNumberRangeBound                LowerBound;                                        // 0x0(0x8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FFrameNumberRangeBound                UpperBound;                                        // 0x8(0x8)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.FrameRate
struct FFrameRate
{
public:
	int32                                        Numerator;                                         // 0x0(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        Denominator;                                       // 0x4(0x4)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.FrameTime
struct FFrameTime
{
public:
	struct FFrameNumber                          FrameNumber;                                       // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	float                                        SubFrame;                                          // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct CoreUObject.InputDeviceId
struct FInputDeviceId
{
public:
	int32                                        InternalId;                                        // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.Int32Interval
struct FInt32Interval
{
public:
	int32                                        Min;                                               // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	int32                                        Max;                                               // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.Int32Point
struct FInt32Point
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.Int32RangeBound
struct FInt32RangeBound
{
public:
	enum class ERangeBoundTypes                  Type;                                              // 0x0(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_4F[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        Value;                                             // 0x4(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Int32Range
struct FInt32Range
{
public:
	struct FInt32RangeBound                      LowerBound;                                        // 0x0(0x8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FInt32RangeBound                      UpperBound;                                        // 0x8(0x8)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct CoreUObject.Int32Vector
struct FInt32Vector
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	int32                                        Z;                                                 // 0x8(0x4)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.Int32Vector2
struct FInt32Vector2
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Int32Vector4
struct FInt32Vector4
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	int32                                        Z;                                                 // 0x8(0x4)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	int32                                        W;                                                 // 0xC(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Int64Point
struct FInt64Point
{
public:
	int64                                        X;                                                 // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	int64                                        Y;                                                 // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.Int64Vector
struct FInt64Vector
{
public:
	int64                                        X;                                                 // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	int64                                        Y;                                                 // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	int64                                        Z;                                                 // 0x10(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Int64Vector2
struct FInt64Vector2
{
public:
	int64                                        X;                                                 // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	int64                                        Y;                                                 // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CoreUObject.Int64Vector4
struct FInt64Vector4
{
public:
	int64                                        X;                                                 // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	int64                                        Y;                                                 // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	int64                                        Z;                                                 // 0x10(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	int64                                        W;                                                 // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct CoreUObject.InterpCurvePointFloat
struct FInterpCurvePointFloat
{
public:
	float                                        InVal;                                             // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        OutVal;                                            // 0x4(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ArriveTangent;                                     // 0x8(0x4)(ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        LeaveTangent;                                      // 0xC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EInterpCurveMode                  InterpMode;                                        // 0x10(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_52[0x3];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.InterpCurveFloat
struct FInterpCurveFloat
{
public:
	TArray<struct FInterpCurvePointFloat>        Points;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_53[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.LinearColor
struct FLinearColor
{
public:
	float                                        R;                                                 // 0x0(0x4)(Edit, EditFixedSize, ReturnParm, Transient, Config)
	float                                        G;                                                 // 0x4(0x4)(Edit, ConstParm, EditFixedSize, ReturnParm, Transient, Config)
	float                                        B;                                                 // 0x8(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	float                                        A;                                                 // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct CoreUObject.InterpCurvePointLinearColor
struct FInterpCurvePointLinearColor
{
public:
	float                                        InVal;                                             // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FLinearColor                          OutVal;                                            // 0x4(0x10)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FLinearColor                          ArriveTangent;                                     // 0x14(0x10)(ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FLinearColor                          LeaveTangent;                                      // 0x24(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EInterpCurveMode                  InterpMode;                                        // 0x34(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_54[0x3];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.InterpCurveLinearColor
struct FInterpCurveLinearColor
{
public:
	TArray<struct FInterpCurvePointLinearColor>  Points;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_55[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CoreUObject.Quat
struct FQuat
{
public:
	double                                       X;                                                 // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	double                                       Y;                                                 // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	double                                       Z;                                                 // 0x10(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	double                                       W;                                                 // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)

	inline FQuat()
		: X(0.0), Y(0.0), Z(0.0), W(0.0)
	{
	}

	inline FQuat(decltype(X) Value)
		: X(Value), Y(Value), Z(Value), W(Value)
	{
	}

	inline FQuat(decltype(X) x, decltype(Y) y, decltype(Z) z, decltype(W) w)
		: X(x), Y(y), Z(z), W(w)
	{
	}

	inline bool operator==(const FQuat& Other) const
	{
		return X == Other.X && Y == Other.Y && Z == Other.Z && W == Other.W;
	}

	inline bool operator!=(const FQuat& Other) const
	{
		return X != Other.X || Y != Other.Y || Z != Other.Z || W != Other.W;
	}

	FQuat operator+(const FQuat& Other) const;

	FQuat operator-(const FQuat& Other) const;

	FQuat operator*(decltype(X) Scalar) const;

	FQuat operator/(decltype(X) Scalar) const;
};

// 0x80 (0x80 - 0x0)
// ScriptStruct CoreUObject.InterpCurvePointQuat
struct FInterpCurvePointQuat
{
public:
	float                                        InVal;                                             // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_56[0xC];                                       // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 OutVal;                                            // 0x10(0x20)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FQuat                                 ArriveTangent;                                     // 0x30(0x20)(ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FQuat                                 LeaveTangent;                                      // 0x50(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EInterpCurveMode                  InterpMode;                                        // 0x70(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_57[0xF];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CoreUObject.TwoVectors
struct FTwoVectors
{
public:
	struct FVector                               V1;                                                // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               V2;                                                // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
struct FInterpCurvePointTwoVectors
{
public:
	float                                        InVal;                                             // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_58[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	struct FTwoVectors                           OutVal;                                            // 0x8(0x30)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FTwoVectors                           ArriveTangent;                                     // 0x38(0x30)(ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FTwoVectors                           LeaveTangent;                                      // 0x68(0x30)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EInterpCurveMode                  InterpMode;                                        // 0x98(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_59[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// ScriptStruct CoreUObject.InterpCurvePointVector
struct FInterpCurvePointVector
{
public:
	float                                        InVal;                                             // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_5A[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OutVal;                                            // 0x8(0x18)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               ArriveTangent;                                     // 0x20(0x18)(ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               LeaveTangent;                                      // 0x38(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EInterpCurveMode                  InterpMode;                                        // 0x50(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_5B[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct CoreUObject.InterpCurvePointVector2D
struct FInterpCurvePointVector2D
{
public:
	float                                        InVal;                                             // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_5D[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             OutVal;                                            // 0x8(0x10)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector2D                             ArriveTangent;                                     // 0x18(0x10)(ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector2D                             LeaveTangent;                                      // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EInterpCurveMode                  InterpMode;                                        // 0x38(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_5E[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.InterpCurveQuat
struct FInterpCurveQuat
{
public:
	TArray<struct FInterpCurvePointQuat>         Points;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_5F[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.InterpCurveTwoVectors
struct FInterpCurveTwoVectors
{
public:
	TArray<struct FInterpCurvePointTwoVectors>   Points;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_60[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.InterpCurveVector
struct FInterpCurveVector
{
public:
	TArray<struct FInterpCurvePointVector>       Points;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_61[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.InterpCurveVector2D
struct FInterpCurveVector2D
{
public:
	TArray<struct FInterpCurvePointVector2D>     Points;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_62[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.IntPoint
struct FIntPoint
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
};

// 0xC (0xC - 0x0)
// ScriptStruct CoreUObject.IntVector
struct FIntVector
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	int32                                        Z;                                                 // 0x8(0x4)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.IntVector2
struct FIntVector2
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.IntVector4
struct FIntVector4
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	int32                                        Z;                                                 // 0x8(0x4)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	int32                                        W;                                                 // 0xC(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x8 (0x20 - 0x18)
// ScriptStruct CoreUObject.Plane
struct FPlane : public FVector
{
public:
	double                                       W;                                                 // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct CoreUObject.Matrix
struct FMatrix
{
public:
	struct FPlane                                XPlane;                                            // 0x0(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FPlane                                YPlane;                                            // 0x20(0x20)(Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FPlane                                ZPlane;                                            // 0x40(0x20)(Edit, ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FPlane                                WPlane;                                            // 0x60(0x20)(Edit, ConstParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x20 - 0x18)
// ScriptStruct CoreUObject.Plane4d
struct FPlane4d : public FVector3d
{
public:
	double                                       W;                                                 // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct CoreUObject.Matrix44d
struct FMatrix44d
{
public:
	struct FPlane4d                              XPlane;                                            // 0x0(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FPlane4d                              YPlane;                                            // 0x20(0x20)(Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FPlane4d                              ZPlane;                                            // 0x40(0x20)(Edit, ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FPlane4d                              WPlane;                                            // 0x60(0x20)(Edit, ConstParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x10 - 0xC)
// ScriptStruct CoreUObject.Plane4f
struct FPlane4f : public FVector3f
{
public:
	float                                        W;                                                 // 0xC(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct CoreUObject.Matrix44f
struct FMatrix44f
{
public:
	struct FPlane4f                              XPlane;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FPlane4f                              YPlane;                                            // 0x10(0x10)(Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FPlane4f                              ZPlane;                                            // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FPlane4f                              WPlane;                                            // 0x30(0x10)(Edit, ConstParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct CoreUObject.OrientedBox
struct FOrientedBox
{
public:
	struct FVector                               Center;                                            // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	struct FVector                               AxisX;                                             // 0x18(0x18)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FVector                               AxisY;                                             // 0x30(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FVector                               AxisZ;                                             // 0x48(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	double                                       ExtentX;                                           // 0x60(0x8)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	double                                       ExtentY;                                           // 0x68(0x8)(Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	double                                       ExtentZ;                                           // 0x70(0x8)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct CoreUObject.PackedNormal
struct FPackedNormal
{
public:
	uint8                                        X;                                                 // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Y;                                                 // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Z;                                                 // 0x2(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	uint8                                        W;                                                 // 0x3(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct CoreUObject.PackedRGB10A2N
struct FPackedRGB10A2N
{
public:
	int32                                        Packed;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.PackedRGBA16N
struct FPackedRGBA16N
{
public:
	int32                                        XY;                                                // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	int32                                        ZW;                                                // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct CoreUObject.PlatformUserId
struct FPlatformUserId
{
public:
	int32                                        InternalId;                                        // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.PlatformInputDeviceState
struct FPlatformInputDeviceState
{
public:
	struct FPlatformUserId                       OwningPlatformUser;                                // 0x0(0x4)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EInputDeviceConnectionState       ConnectionState;                                   // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_66[0x3];                                       // Fixing Size Of Struct > TateDumper <
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct CoreUObject.PolyglotTextData
struct FPolyglotTextData
{
public:
	enum class ELocalizedTextSourceCategory      Category;                                          // 0x0(0x1)(ConstParm, BlueprintReadOnly, OutParm, Transient)
	uint8                                        Pad_67[0x7];                                       // Fixing Size After Last Property  > TateDumper <
	class FString                                NativeCulture;                                     // 0x8(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                Namespace;                                         // 0x18(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, InstancedReference)
	class FString                                Key;                                               // 0x28(0x10)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class FString                                NativeString;                                      // 0x38(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	TMap<class FString, class FString>           LocalizedStrings;                                  // 0x48(0x50)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bIsMinimalPatch;                                   // 0x98(0x1)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_68[0x7];                                       // Fixing Size After Last Property  > TateDumper <
	class FText                                  CachedText;                                        // 0xA0(0x18)(BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.PrimaryAssetType
struct FPrimaryAssetType
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.PrimaryAssetId
struct FPrimaryAssetId
{
public:
	struct FPrimaryAssetType                     PrimaryAssetType;                                  // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class FName                                  PrimaryAssetName;                                  // 0x8(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.QualifiedFrameTime
struct FQualifiedFrameTime
{
public:
	struct FFrameTime                            Time;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FFrameRate                            Rate;                                              // 0x8(0x8)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CoreUObject.Quat4d
struct FQuat4d
{
public:
	double                                       X;                                                 // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	double                                       Y;                                                 // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	double                                       Z;                                                 // 0x10(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	double                                       W;                                                 // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Quat4f
struct FQuat4f
{
public:
	float                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        Z;                                                 // 0x8(0x4)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	float                                        W;                                                 // 0xC(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.RandomStream
struct FRandomStream
{
public:
	int32                                        InitialSeed;                                       // 0x0(0x4)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        Seed;                                              // 0x4(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CoreUObject.Ray
struct FRay
{
public:
	struct FVector                               Origin;                                            // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               Direction;                                         // 0x18(0x18)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CoreUObject.Ray3d
struct FRay3d
{
public:
	struct FVector3d                             Origin;                                            // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector3d                             Direction;                                         // 0x18(0x18)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.Ray3f
struct FRay3f
{
public:
	struct FVector3f                             Origin;                                            // 0x0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector3f                             Direction;                                         // 0xC(0xC)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.Rotator
struct FRotator
{
public:
	double                                       Pitch;                                             // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	double                                       Yaw;                                               // 0x8(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)
	double                                       Roll;                                              // 0x10(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)

	inline FRotator()
		: Pitch(0.0), Yaw(0.0), Roll(0.0)
	{
	}

	inline FRotator(decltype(Pitch) Value)
		: Pitch(Value), Yaw(Value), Roll(Value)
	{
	}

	inline FRotator(decltype(Pitch) pitch, decltype(Yaw) yaw, decltype(Roll) roll)
		: Pitch(pitch), Yaw(yaw), Roll(roll)
	{
	}

	inline bool operator==(const FRotator& Other) const
	{
		return Pitch == Other.Pitch && Yaw == Other.Yaw && Roll == Other.Roll;
	}

	inline bool operator!=(const FRotator& Other) const
	{
		return Pitch != Other.Pitch || Yaw != Other.Yaw || Roll != Other.Roll;
	}

	FRotator operator+(const FRotator& Other) const;

	FRotator operator-(const FRotator& Other) const;

	FRotator operator*(decltype(Pitch) Scalar) const;

	FRotator operator/(decltype(Pitch) Scalar) const;
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.Rotator3d
struct FRotator3d
{
public:
	double                                       Pitch;                                             // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	double                                       Yaw;                                               // 0x8(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)
	double                                       Roll;                                              // 0x10(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)
};

// 0xC (0xC - 0x0)
// ScriptStruct CoreUObject.Rotator3f
struct FRotator3f
{
public:
	float                                        Pitch;                                             // 0x0(0x4)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	float                                        Yaw;                                               // 0x4(0x4)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)
	float                                        Roll;                                              // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct CoreUObject.SoftClassPath
struct FSoftClassPath : public FSoftObjectPath
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CoreUObject.Sphere
struct FSphere
{
public:
	struct FVector                               Center;                                            // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	double                                       W;                                                 // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CoreUObject.Sphere3d
struct FSphere3d
{
public:
	struct FVector3d                             Center;                                            // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	double                                       W;                                                 // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Sphere3f
struct FSphere3f
{
public:
	struct FVector3f                             Center;                                            // 0x0(0xC)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	float                                        W;                                                 // 0xC(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.TemplateString
struct FTemplateString
{
public:
	class FString                                Template;                                          // 0x0(0x10)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.TestUninitializedScriptStructMembersTest
struct FTestUninitializedScriptStructMembersTest
{
public:
	class UObject*                               UninitializedObjectReference;                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UObject*                               InitializedObjectReference;                        // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        UnusedValue;                                       // 0x10(0x4)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_6C[0x4];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x14 (0x14 - 0x0)
// ScriptStruct CoreUObject.Timecode
struct FTimecode
{
public:
	int32                                        Hours;                                             // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        Minutes;                                           // 0x4(0x4)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        Seconds;                                           // 0x8(0x4)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        Frames;                                            // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bDropFrameFormat;                                  // 0x10(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_6E[0x3];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.Timespan
struct FTimespan
{
public:
	uint8                                        Pad_6F[0x8];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct CoreUObject.Transform
struct FTransform
{
public:
	struct FQuat                                 Rotation;                                          // 0x0(0x20)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Translation;                                       // 0x20(0x18)(ConstParm, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_70[0x8];                                       // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Scale3D;                                           // 0x40(0x18)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_71[0x8];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct CoreUObject.Transform3d
struct FTransform3d
{
public:
	struct FQuat4d                               Rotation;                                          // 0x0(0x20)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector3d                             Translation;                                       // 0x20(0x18)(ConstParm, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_72[0x8];                                       // Fixing Size After Last Property  > TateDumper <
	struct FVector3d                             Scale3D;                                           // 0x40(0x18)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_73[0x8];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CoreUObject.Transform3f
struct FTransform3f
{
public:
	struct FQuat4f                               Rotation;                                          // 0x0(0x10)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector3f                             Translation;                                       // 0x10(0xC)(ConstParm, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_74[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	struct FVector3f                             Scale3D;                                           // 0x20(0xC)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_75[0x4];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.Uint32Point
struct FUint32Point
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
};

// 0xC (0xC - 0x0)
// ScriptStruct CoreUObject.Uint32Vector
struct FUint32Vector
{
public:
	uint32                                       X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint32                                       Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint32                                       Z;                                                 // 0x8(0x4)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.Uint32Vector2
struct FUint32Vector2
{
public:
	uint32                                       X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint32                                       Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Uint32Vector4
struct FUint32Vector4
{
public:
	uint32                                       X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint32                                       Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint32                                       Z;                                                 // 0x8(0x4)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	uint32                                       W;                                                 // 0xC(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Uint64Point
struct FUint64Point
{
public:
	int64                                        X;                                                 // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	int64                                        Y;                                                 // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.Uint64Vector
struct FUint64Vector
{
public:
	uint64                                       X;                                                 // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint64                                       Y;                                                 // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint64                                       Z;                                                 // 0x10(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Uint64Vector2
struct FUint64Vector2
{
public:
	uint64                                       X;                                                 // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint64                                       Y;                                                 // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CoreUObject.Uint64Vector4
struct FUint64Vector4
{
public:
	uint64                                       X;                                                 // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint64                                       Y;                                                 // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint64                                       Z;                                                 // 0x10(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	uint64                                       W;                                                 // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.UintPoint
struct FUintPoint
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
};

// 0xC (0xC - 0x0)
// ScriptStruct CoreUObject.UintVector
struct FUintVector
{
public:
	uint32                                       X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint32                                       Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint32                                       Z;                                                 // 0x8(0x4)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.UintVector2
struct FUintVector2
{
public:
	uint32                                       X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint32                                       Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.UintVector4
struct FUintVector4
{
public:
	uint32                                       X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint32                                       Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint32                                       Z;                                                 // 0x8(0x4)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	uint32                                       W;                                                 // 0xC(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CoreUObject.Vector4
struct FVector4
{
public:
	double                                       X;                                                 // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	double                                       Y;                                                 // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	double                                       Z;                                                 // 0x10(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	double                                       W;                                                 // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)

	inline FVector4()
		: X(0.0), Y(0.0), Z(0.0), W(0.0)
	{
	}

	inline FVector4(decltype(X) Value)
		: X(Value), Y(Value), Z(Value), W(Value)
	{
	}

	inline FVector4(decltype(X) x, decltype(Y) y, decltype(Z) z, decltype(W) w)
		: X(x), Y(y), Z(z), W(w)
	{
	}

	inline bool operator==(const FVector4& Other) const
	{
		return X == Other.X && Y == Other.Y && Z == Other.Z && W == Other.W;
	}

	inline bool operator!=(const FVector4& Other) const
	{
		return X != Other.X || Y != Other.Y || Z != Other.Z || W != Other.W;
	}

	FVector4 operator+(const FVector4& Other) const;

	FVector4 operator-(const FVector4& Other) const;

	FVector4 operator*(decltype(X) Scalar) const;

	FVector4 operator/(decltype(X) Scalar) const;
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CoreUObject.Vector4d
struct FVector4d
{
public:
	double                                       X;                                                 // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	double                                       Y;                                                 // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	double                                       Z;                                                 // 0x10(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	double                                       W;                                                 // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Vector4f
struct FVector4f
{
public:
	float                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        Z;                                                 // 0x8(0x4)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	float                                        W;                                                 // 0xC(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

}

