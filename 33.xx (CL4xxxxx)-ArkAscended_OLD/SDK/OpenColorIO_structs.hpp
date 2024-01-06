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
	class FString                                ColorSpaceName;                                    // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        ColorSpaceIndex;                                   // 0x10(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_6A1[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                FamilyName;                                        // 0x18(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OpenColorIO.OpenColorIODisplayView
struct FOpenColorIODisplayView
{
public:
	class FString                                Display;                                           // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class FString                                View;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct OpenColorIO.OpenColorIOColorConversionSettings
struct FOpenColorIOColorConversionSettings
{
public:
	class UOpenColorIOConfiguration*             ConfigurationSource;                               // 0x0(0x8)(Edit, ExportObject, Net, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FOpenColorIOColorSpace                SourceColorSpace;                                  // 0x8(0x28)(Net, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FOpenColorIOColorSpace                DestinationColorSpace;                             // 0x30(0x28)(BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FOpenColorIODisplayView               DestinationDisplayView;                            // 0x58(0x20)(ExportObject, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	enum class EOpenColorIOViewTransformDirection DisplayViewDirection;                              // 0x78(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_6A9[0x1F];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct OpenColorIO.OpenColorIODisplayConfiguration
struct FOpenColorIODisplayConfiguration
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_6AA[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FOpenColorIOColorConversionSettings   ColorConfiguration;                                // 0x8(0x98)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, InstancedReference, SubobjectReference)
};

}


