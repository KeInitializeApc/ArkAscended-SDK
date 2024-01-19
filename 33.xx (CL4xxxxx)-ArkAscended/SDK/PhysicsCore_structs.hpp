#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECollisionTraceFlag : uint8
{
	CTF_UseDefault                 = 0,
	CTF_UseSimpleAndComplex        = 1,
	CTF_UseSimpleAsComplex         = 2,
	CTF_UseComplexAsSimple         = 3,
	CTF_MAX                        = 4,
};

enum class EPhysicsType : uint8
{
	PhysType_Default               = 0,
	PhysType_Kinematic             = 1,
	PhysType_Simulated             = 2,
	PhysType_MAX                   = 3,
};

enum class EBodyCollisionResponse : uint8
{
	BodyCollision_Enabled          = 0,
	BodyCollision_Disabled         = 1,
	BodyCollision_MAX              = 2,
};

enum class EPhysicalSurface : uint8
{
	SurfaceType_Default            = 0,
	SurfaceType1                   = 1,
	SurfaceType2                   = 2,
	SurfaceType3                   = 3,
	SurfaceType4                   = 4,
	SurfaceType5                   = 5,
	SurfaceType6                   = 6,
	SurfaceType7                   = 7,
	SurfaceType8                   = 8,
	SurfaceType9                   = 9,
	SurfaceType10                  = 10,
	SurfaceType11                  = 11,
	SurfaceType12                  = 12,
	SurfaceType13                  = 13,
	SurfaceType14                  = 14,
	SurfaceType15                  = 15,
	SurfaceType16                  = 16,
	SurfaceType17                  = 17,
	SurfaceType18                  = 18,
	SurfaceType19                  = 19,
	SurfaceType20                  = 20,
	SurfaceType21                  = 21,
	SurfaceType22                  = 22,
	SurfaceType23                  = 23,
	SurfaceType24                  = 24,
	SurfaceType25                  = 25,
	SurfaceType26                  = 26,
	SurfaceType27                  = 27,
	SurfaceType28                  = 28,
	SurfaceType29                  = 29,
	SurfaceType30                  = 30,
	SurfaceType31                  = 31,
	SurfaceType32                  = 32,
	SurfaceType33                  = 33,
	SurfaceType34                  = 34,
	SurfaceType35                  = 35,
	SurfaceType36                  = 36,
	SurfaceType37                  = 37,
	SurfaceType38                  = 38,
	SurfaceType39                  = 39,
	SurfaceType40                  = 40,
	SurfaceType41                  = 41,
	SurfaceType42                  = 42,
	SurfaceType43                  = 43,
	SurfaceType44                  = 44,
	SurfaceType45                  = 45,
	SurfaceType46                  = 46,
	SurfaceType47                  = 47,
	SurfaceType48                  = 48,
	SurfaceType49                  = 49,
	SurfaceType50                  = 50,
	SurfaceType51                  = 51,
	SurfaceType52                  = 52,
	SurfaceType53                  = 53,
	SurfaceType54                  = 54,
	SurfaceType55                  = 55,
	SurfaceType56                  = 56,
	SurfaceType57                  = 57,
	SurfaceType58                  = 58,
	SurfaceType59                  = 59,
	SurfaceType60                  = 60,
	SurfaceType61                  = 61,
	SurfaceType62                  = 62,
	SurfaceType_Max                = 63,
	EPhysicalSurface_MAX           = 64,
};

enum class ERadialImpulseFalloff : uint8
{
	RIF_Constant                   = 0,
	RIF_Linear                     = 1,
	RIF_MAX                        = 2,
};

enum class ESleepFamily : uint8
{
	Normal                         = 0,
	Sensitive                      = 1,
	Custom                         = 2,
	ESleepFamily_MAX               = 3,
};

enum class EAngularConstraintMotion : uint8
{
	ACM_Free                       = 0,
	ACM_Limited                    = 1,
	ACM_Locked                     = 2,
	ACM_MAX                        = 3,
};

enum class EConstraintFrame : uint8
{
	Frame1                         = 0,
	Frame2                         = 1,
	EConstraintFrame_MAX           = 2,
};

enum class EConstraintPlasticityType : uint8
{
	CCPT_Free                      = 0,
	CCPT_Shrink                    = 1,
	CCPT_Grow                      = 2,
	CCPT_MAX                       = 3,
};

enum class ELinearConstraintMotion : uint8
{
	LCM_Free                       = 0,
	LCM_Limited                    = 1,
	LCM_Locked                     = 2,
	LCM_MAX                        = 3,
};

enum class EFrictionCombineMode : uint8
{
	Average                        = 0,
	Min                            = 1,
	Multiply                       = 2,
	Max                            = 3,
};

enum class ESoilType : uint8
{
	SoilType_None                  = 0,
	SoilType_1                     = 1,
	SoilType_2                     = 2,
	SoilType_3                     = 3,
	SoilType_4                     = 4,
	SoilType_5                     = 5,
	SoilType_6                     = 6,
	SoilType_7                     = 7,
	SoilType_8                     = 8,
	SoilType_9                     = 9,
	SoilType_10                    = 10,
	SoilType_11                    = 11,
	SoilType_12                    = 12,
	SoilType_13                    = 13,
	SoilType_14                    = 14,
	SoilType_15                    = 15,
	SoilType_16                    = 16,
	SoilType_17                    = 17,
	SoilType_18                    = 18,
	SoilType_19                    = 19,
	SoilType_20                    = 20,
	SoilType_21                    = 21,
	SoilType_22                    = 22,
	SoilType_23                    = 23,
	SoilType_24                    = 24,
	SoilType_25                    = 25,
	SoilType_26                    = 26,
	SoilType_27                    = 27,
	SoilType_28                    = 28,
	SoilType_29                    = 29,
	SoilType_30                    = 30,
	SoilType_31                    = 31,
	SoilType_32                    = 32,
	SoilType_33                    = 33,
	SoilType_34                    = 34,
	SoilType_35                    = 35,
	SoilType_36                    = 36,
	SoilType_37                    = 37,
	SoilType_38                    = 38,
	SoilType_39                    = 39,
	SoilType_40                    = 40,
	SoilType_41                    = 41,
	SoilType_42                    = 42,
	SoilType_43                    = 43,
	SoilType_44                    = 44,
	SoilType_45                    = 45,
	SoilType_46                    = 46,
	SoilType_47                    = 47,
	SoilType_48                    = 48,
	SoilType_49                    = 49,
	SoilType_50                    = 50,
	SoilType_51                    = 51,
	SoilType_52                    = 52,
	SoilType_53                    = 53,
	SoilType_54                    = 54,
	SoilType_55                    = 55,
	SoilType_56                    = 56,
	SoilType_57                    = 57,
	SoilType_58                    = 58,
	SoilType_59                    = 59,
	SoilType_60                    = 60,
	SoilType_61                    = 61,
	SoilType_62                    = 62,
	SoilType_63                    = 63,
	SoilType_64                    = 64,
	SoilType_Max                   = 65,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct PhysicsCore.BodyInstanceCore
struct FBodyInstanceCore
{
public:
	uint8                                        Pad_2A24[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        bSimulatePhysics : 1;                              // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOverrideMass : 1;                                 // Mask: 0x2, PropSize: 0x10x10(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEnableGravity : 1;                                // Mask: 0x4, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAutoWeld : 1;                                     // Mask: 0x8, PropSize: 0x10x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bStartAwake : 1;                                   // Mask: 0x10, PropSize: 0x10x10(0x1)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bGenerateWakeEvents : 1;                           // Mask: 0x20, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUpdateMassWhenScaleChanges : 1;                   // Mask: 0x40, PropSize: 0x10x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2A26[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

}


