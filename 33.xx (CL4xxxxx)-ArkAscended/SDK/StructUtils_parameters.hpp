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

// 0x18 (0x18 - 0x0)
// Function StructUtils.StructUtilsFunctionLibrary.SetInstancedStructValue
struct UStructUtilsFunctionLibrary_SetInstancedStructValue_Params
{
public:
	struct FInstancedStruct                      InstancedStruct;                                   // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config)
	int32                                        Value;                                             // 0x10(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_ED3[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function StructUtils.StructUtilsFunctionLibrary.Reset
struct UStructUtilsFunctionLibrary_Reset_Params
{
public:
	struct FInstancedStruct                      InstancedStruct;                                   // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config)
	class UScriptStruct*                         StructType;                                        // 0x10(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function StructUtils.StructUtilsFunctionLibrary.NotEqual_InstancedStruct
struct UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Params
{
public:
	struct FInstancedStruct                      A;                                                 // 0x0(0x10)(Edit, Parm, OutParm, ReturnParm, Transient, Config)
	struct FInstancedStruct                      B;                                                 // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config)
	bool                                         ReturnValue;                                       // 0x20(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_ED8[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function StructUtils.StructUtilsFunctionLibrary.MakeInstancedStruct
struct UStructUtilsFunctionLibrary_MakeInstancedStruct_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_EDD[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FInstancedStruct                      ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function StructUtils.StructUtilsFunctionLibrary.IsValid_InstancedStruct
struct UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Params
{
public:
	struct FInstancedStruct                      InstancedStruct;                                   // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_EE9[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function StructUtils.StructUtilsFunctionLibrary.IsInstancedStructValid
struct UStructUtilsFunctionLibrary_IsInstancedStructValid_Params
{
public:
	struct FInstancedStruct                      InstancedStruct;                                   // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config)
	enum class EStructUtilsResult                ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_EF3[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function StructUtils.StructUtilsFunctionLibrary.GetInstancedStructValue
struct UStructUtilsFunctionLibrary_GetInstancedStructValue_Params
{
public:
	enum class EStructUtilsResult                ExecResult;                                        // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_EF8[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FInstancedStruct                      InstancedStruct;                                   // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config)
	int32                                        Value;                                             // 0x18(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_EFB[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function StructUtils.StructUtilsFunctionLibrary.EqualEqual_InstancedStruct
struct UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Params
{
public:
	struct FInstancedStruct                      A;                                                 // 0x0(0x10)(Edit, Parm, OutParm, ReturnParm, Transient, Config)
	struct FInstancedStruct                      B;                                                 // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config)
	bool                                         ReturnValue;                                       // 0x20(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_F05[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

}
}


