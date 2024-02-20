#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFoliageVertexColorMask : uint8
{
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red     = 1,
	FOLIAGEVERTEXCOLORMASK_Green   = 2,
	FOLIAGEVERTEXCOLORMASK_Blue    = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha   = 4,
	FOLIAGEVERTEXCOLORMASK_MAX     = 5,
};

enum class EVertexColorMaskChannel : uint8
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	MAX_None                       = 4,
	EVertexColorMaskChannel_MAX    = 5,
};

enum class EFoliageScaling : uint8
{
	Uniform                        = 0,
	Free                           = 1,
	LockXY                         = 2,
	LockXZ                         = 3,
	LockYZ                         = 4,
	EFoliageScaling_MAX            = 5,
};

enum class ESimulationOverlap : uint8
{
	CollisionOverlap               = 0,
	ShadeOverlap                   = 1,
	None                           = 2,
	ESimulationOverlap_MAX         = 3,
};

enum class ESimulationQuery : uint8
{
	None                           = 0,
	CollisionOverlap               = 1,
	ShadeOverlap                   = 2,
	AnyOverlap                     = 3,
	ESimulationQuery_MAX           = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct Foliage.FoliageVertexColorChannelMask
struct FFoliageVertexColorChannelMask
{
public:
	uint8                                        UseMask : 1;                                       // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_111 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1EF4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MaskThreshold;                                     // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        InvertMask : 1;                                    // Mask: 0x1, PropSize: 0x10x8(0x1)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1EF6[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Foliage.FoliageDensityFalloff
struct FFoliageDensityFalloff
{
public:
	bool                                         bUseFalloffCurve;                                  // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1EF9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRuntimeFloatCurve                    FalloffCurve;                                      // 0x8(0x88)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Foliage.FoliageTypeObject
struct FFoliageTypeObject
{
public:
	class UObject*                               FoliageTypeObject;                                 // 0x0(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	class UFoliageType*                          TypeInstance;                                      // 0x8(0x8)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsAsset;                                          // 0x10(0x1)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1EFC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                Type;                                              // 0x18(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Foliage.ProceduralFoliageInstance
struct FProceduralFoliageInstance
{
public:
	struct FQuat                                 Rotation;                                          // 0x0(0x20)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Location;                                          // 0x20(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        Age;                                               // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1EFE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Normal;                                            // 0x40(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	float                                        Scale;                                             // 0x58(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_1EFF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UFoliageType*                          Type;                                              // 0x60(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
	uint8                                        Pad_1F00[0x18];                                    // Fixing Size Of Struct > TateDumper <
};

}


