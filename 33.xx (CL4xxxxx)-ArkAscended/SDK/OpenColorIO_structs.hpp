#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOpenColorIOViewTransformDirection : uint8
{
	Forward                        = 0,
	Inverse                        = 1,
	EOpenColorIOViewTransformDirection_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct OpenColorIO.OpenColorIOColorSpace
struct FOpenColorIOColorSpace
{
public:
	class FString                                ColorSpaceName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ColorSpaceIndex;                                   // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_6CD[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                FamilyName;                                        // 0x18(0x10)(ConstParm, BlueprintVisible, ExportObject, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OpenColorIO.OpenColorIODisplayView
struct FOpenColorIODisplayView
{
public:
	class FString                                Display;                                           // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class FString                                View;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct OpenColorIO.OpenColorIOColorConversionSettings
struct FOpenColorIOColorConversionSettings
{
public:
	class UOpenColorIOConfiguration*             ConfigurationSource;                               // 0x0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FOpenColorIOColorSpace                SourceColorSpace;                                  // 0x8(0x28)(ExportObject, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FOpenColorIOColorSpace                DestinationColorSpace;                             // 0x30(0x28)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FOpenColorIODisplayView               DestinationDisplayView;                            // 0x58(0x20)(BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EOpenColorIOViewTransformDirection DisplayViewDirection;                              // 0x78(0x1)(Edit, BlueprintVisible, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_6D4[0x1F];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct OpenColorIO.OpenColorIODisplayConfiguration
struct FOpenColorIODisplayConfiguration
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_6D5[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FOpenColorIOColorConversionSettings   ColorConfiguration;                                // 0x8(0x98)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


