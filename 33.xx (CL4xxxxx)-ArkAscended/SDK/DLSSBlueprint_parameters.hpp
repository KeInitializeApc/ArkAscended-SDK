#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
struct UDLSSLibrary_SetDLSSSharpness_Params
{
public:
	float                                        Sharpness;                                         // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.SetDLSSMode
struct UDLSSLibrary_SetDLSSMode_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EUDLSSMode                        DLSSMode;                                          // 0x8(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_128D[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
struct UDLSSLibrary_QueryDLSSSupport_Params
{
public:
	enum class EUDLSSSupport                     ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.QueryDLSSRRSupport
struct UDLSSLibrary_QueryDLSSRRSupport_Params
{
public:
	enum class EUDLSSSupport                     ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported
struct UDLSSLibrary_IsDLSSSupported_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.IsDLSSRRSupported
struct UDLSSLibrary_IsDLSSRRSupported_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.IsDLSSRREnabled
struct UDLSSLibrary_IsDLSSRREnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
struct UDLSSLibrary_IsDLSSModeSupported_Params
{
public:
	enum class EUDLSSMode                        DLSSMode;                                          // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.IsDLSSEnabled
struct UDLSSLibrary_IsDLSSEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
struct UDLSSLibrary_IsDLAAEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
struct UDLSSLibrary_GetSupportedDLSSModes_Params
{
public:
	TArray<enum class EUDLSSMode>                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
struct UDLSSLibrary_GetDLSSSharpness_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
struct UDLSSLibrary_GetDLSSScreenPercentageRange_Params
{
public:
	float                                        MinScreenPercentage;                               // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxScreenPercentage;                               // 0x4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.GetDLSSRRMinimumDriverVersion
struct UDLSSLibrary_GetDLSSRRMinimumDriverVersion_Params
{
public:
	int32                                        MinDriverVersionMajor;                             // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        MinDriverVersionMinor;                             // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
struct UDLSSLibrary_GetDLSSModeInformation_Params
{
public:
	enum class EUDLSSMode                        DLSSMode;                                          // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12CE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ScreenResolution;                                  // 0x8(0x10)(Net, OutParm)
	bool                                         bIsSupported;                                      // 0x18(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12CF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        OptimalScreenPercentage;                           // 0x1C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsFixedScreenPercentage;                          // 0x20(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12D2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinScreenPercentage;                               // 0x24(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxScreenPercentage;                               // 0x28(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        OptimalSharpness;                                  // 0x2C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.GetDLSSMode
struct UDLSSLibrary_GetDLSSMode_Params
{
public:
	enum class EUDLSSMode                        ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
struct UDLSSLibrary_GetDLSSMinimumDriverVersion_Params
{
public:
	int32                                        MinDriverVersionMajor;                             // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        MinDriverVersionMinor;                             // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
struct UDLSSLibrary_GetDefaultDLSSMode_Params
{
public:
	enum class EUDLSSMode                        ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.EnableDLSSRR
struct UDLSSLibrary_EnableDLSSRR_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.EnableDLSS
struct UDLSSLibrary_EnableDLSS_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.EnableDLAA
struct UDLSSLibrary_EnableDLAA_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
};

}
}

