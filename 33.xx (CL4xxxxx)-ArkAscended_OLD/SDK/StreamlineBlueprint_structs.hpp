#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EUStreamlineFeature : uint8
{
	DLSSG                          = 0,
	Reflex                         = 1,
	Count                          = 2,
	UStreamlineFeature_MAX         = 3,
};

enum class EUStreamlineFeatureSupport : uint8
{
	Supported                      = 0,
	NotSupported                   = 1,
	NotSupportedIncompatibleHardware = 2,
	NotSupportedDriverOutOfDate    = 3,
	NotSupportedOperatingSystemOutOfDate = 4,
	NotSupportedHardewareSchedulingDisabled = 5,
	NotSupportedByRHI              = 6,
	NotSupportedByPlatformAtBuildTime = 7,
	NotSupportedIncompatibleAPICaptureToolActive = 8,
	UStreamlineFeatureSupport_MAX  = 9,
};

enum class EUStreamlineFeatureRequirementsFlags : uint8
{
	None                           = 0,
	D3D11Supported                 = 1,
	D3D12Supported                 = 2,
	VulkanSupported                = 4,
	VSyncOffRequired               = 8,
	HardwareSchedulingRequired     = 16,
	UStreamlineFeatureRequirementsFlags_MAX = 17,
};

enum class EUStreamlineDLSSGMode : uint8
{
	Off                            = 0,
	On                             = 1,
	Auto                           = 2,
	UStreamlineDLSSGMode_MAX       = 3,
};

enum class EUStreamlineReflexMode : uint8
{
	Disabled                       = 0,
	Enabled                        = 1,
	EnabledPlusBoost               = 3,
	UStreamlineReflexMode_MAX      = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct StreamlineBlueprint.StreamlineVersion
struct FStreamlineVersion
{
public:
	int32                                        Major;                                             // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        Minor;                                             // 0x4(0x4)(Edit, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        Build;                                             // 0x8(0x4)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct StreamlineBlueprint.StreamlineFeatureRequirements
struct FStreamlineFeatureRequirements
{
public:
	enum class EUStreamlineFeatureSupport        Support;                                           // 0x0(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EUStreamlineFeatureRequirementsFlags Requirements;                                      // 0x1(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_13EE[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FStreamlineVersion                    RequiredOperatingSystemVersion;                    // 0x4(0xC)(Edit, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FStreamlineVersion                    DetectedOperatingSystemVersion;                    // 0x10(0xC)(Edit, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FStreamlineVersion                    RequiredDriverVersion;                             // 0x1C(0xC)(Edit, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FStreamlineVersion                    DetectedDriverVersion;                             // 0x28(0xC)(Edit, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

}


