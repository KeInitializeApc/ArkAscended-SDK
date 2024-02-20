#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELiveLinkTimecodeProviderEvaluationType : int32
{
	Lerp                           = 0,
	Nearest                        = 1,
	Latest                         = 2,
	ELiveLinkTimecodeProviderEvaluationType_MAX = 3,
};

enum class ELiveLinkAxis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	XNeg                           = 3,
	YNeg                           = 4,
	ZNeg                           = 5,
	ELiveLinkAxis_MAX              = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct LiveLink.LiveLinkRetargetAssetReference
struct FLiveLinkRetargetAssetReference
{
public:
	uint8                                        Pad_F5[0x1];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LiveLink.ProviderPollResult
struct FProviderPollResult
{
public:
	uint8                                        Pad_F6[0x10];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Name;                                              // 0x10(0x10)(ConstParm, Net, OutParm)
	class FString                                MachineName;                                       // 0x20(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       MachineTimeOffset;                                 // 0x30(0x8)(Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsValidProvider;                                  // 0x38(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F7[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct LiveLink.LiveLinkRoleProjectSetting
struct FLiveLinkRoleProjectSetting
{
public:
	class UClass*                                Role;                                              // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
	class UClass*                                SettingClass;                                      // 0x8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                FrameInterpolationProcessor;                       // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	TArray<class UClass*>                        FramePreProcessors;                                // 0x18(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
};

}


