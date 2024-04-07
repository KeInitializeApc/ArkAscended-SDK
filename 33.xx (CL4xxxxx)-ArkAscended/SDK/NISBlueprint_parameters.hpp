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
// Function NISBlueprint.NISLibrary.SetNISSharpness
struct UNISLibrary_SetNISSharpness_Params
{
public:
	float                                        Sharpness;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function NISBlueprint.NISLibrary.SetNISMode
struct UNISLibrary_SetNISMode_Params
{
public:
	enum class EUNISMode                         NISMode;                                           // 0x0(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NISBlueprint.NISLibrary.SetNISCustomScreenPercentage
struct UNISLibrary_SetNISCustomScreenPercentage_Params
{
public:
	float                                        CustomScreenPercentage;                            // 0x0(0x4)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function NISBlueprint.NISLibrary.IsNISSupported
struct UNISLibrary_IsNISSupported_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function NISBlueprint.NISLibrary.IsNISModeSupported
struct UNISLibrary_IsNISModeSupported_Params
{
public:
	enum class EUNISMode                         NISMode;                                           // 0x0(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function NISBlueprint.NISLibrary.GetSupportedNISModes
struct UNISLibrary_GetSupportedNISModes_Params
{
public:
	TArray<enum class EUNISMode>                 ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function NISBlueprint.NISLibrary.GetNISScreenPercentageRange
struct UNISLibrary_GetNISScreenPercentageRange_Params
{
public:
	float                                        MinScreenPercentage;                               // 0x0(0x4)(ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MaxScreenPercentage;                               // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function NISBlueprint.NISLibrary.GetNISRecommendedScreenPercentage
struct UNISLibrary_GetNISRecommendedScreenPercentage_Params
{
public:
	enum class EUNISMode                         NISMode;                                           // 0x0(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1461[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function NISBlueprint.NISLibrary.GetDefaultNISMode
struct UNISLibrary_GetDefaultNISMode_Params
{
public:
	enum class EUNISMode                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


