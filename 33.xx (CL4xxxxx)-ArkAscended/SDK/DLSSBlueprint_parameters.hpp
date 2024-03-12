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
	float                                        Sharpness;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.SetDLSSMode
struct UDLSSLibrary_SetDLSSMode_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	enum class EUDLSSMode                        DLSSMode;                                          // 0x8(0x1)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_13E5[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
struct UDLSSLibrary_QueryDLSSSupport_Params
{
public:
	enum class EUDLSSSupport                     ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.QueryDLSSRRSupport
struct UDLSSLibrary_QueryDLSSRRSupport_Params
{
public:
	enum class EUDLSSSupport                     ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported
struct UDLSSLibrary_IsDLSSSupported_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.IsDLSSRRSupported
struct UDLSSLibrary_IsDLSSRRSupported_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.IsDLSSRREnabled
struct UDLSSLibrary_IsDLSSRREnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
struct UDLSSLibrary_IsDLSSModeSupported_Params
{
public:
	enum class EUDLSSMode                        DLSSMode;                                          // 0x0(0x1)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.IsDLSSEnabled
struct UDLSSLibrary_IsDLSSEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
struct UDLSSLibrary_IsDLAAEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
struct UDLSSLibrary_GetSupportedDLSSModes_Params
{
public:
	TArray<enum class EUDLSSMode>                ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
struct UDLSSLibrary_GetDLSSSharpness_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
struct UDLSSLibrary_GetDLSSScreenPercentageRange_Params
{
public:
	float                                        MinScreenPercentage;                               // 0x0(0x4)(ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MaxScreenPercentage;                               // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.GetDLSSRRMinimumDriverVersion
struct UDLSSLibrary_GetDLSSRRMinimumDriverVersion_Params
{
public:
	int32                                        MinDriverVersionMajor;                             // 0x0(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MinDriverVersionMinor;                             // 0x4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
struct UDLSSLibrary_GetDLSSModeInformation_Params
{
public:
	enum class EUDLSSMode                        DLSSMode;                                          // 0x0(0x1)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1416[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ScreenResolution;                                  // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate)
	bool                                         bIsSupported;                                      // 0x18(0x1)(Edit, ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1418[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        OptimalScreenPercentage;                           // 0x1C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsFixedScreenPercentage;                          // 0x20(0x1)(Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1419[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinScreenPercentage;                               // 0x24(0x4)(ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MaxScreenPercentage;                               // 0x28(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        OptimalSharpness;                                  // 0x2C(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.GetDLSSMode
struct UDLSSLibrary_GetDLSSMode_Params
{
public:
	enum class EUDLSSMode                        ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
struct UDLSSLibrary_GetDLSSMinimumDriverVersion_Params
{
public:
	int32                                        MinDriverVersionMajor;                             // 0x0(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MinDriverVersionMinor;                             // 0x4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
struct UDLSSLibrary_GetDefaultDLSSMode_Params
{
public:
	enum class EUDLSSMode                        ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.EnableDLSSRR
struct UDLSSLibrary_EnableDLSSRR_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.EnableDLSS
struct UDLSSLibrary_EnableDLSS_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.EnableDLAA
struct UDLSSLibrary_EnableDLAA_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
};

}
}


