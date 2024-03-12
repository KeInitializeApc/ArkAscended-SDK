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

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.SetTrigger
struct UMetasoundParameterPack_SetTrigger_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         OnlyIfExists;                                      // 0x8(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ESetParamResult                   ReturnValue;                                       // 0x9(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1BD4[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.SetString
struct UMetasoundParameterPack_SetString_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class FString                                InValue;                                           // 0x8(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         OnlyIfExists;                                      // 0x18(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ESetParamResult                   ReturnValue;                                       // 0x19(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1BDC[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.SetInt
struct UMetasoundParameterPack_SetInt_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	int32                                        InValue;                                           // 0x8(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         OnlyIfExists;                                      // 0xC(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ESetParamResult                   ReturnValue;                                       // 0xD(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1BE8[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.SetFloat
struct UMetasoundParameterPack_SetFloat_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        InValue;                                           // 0x8(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         OnlyIfExists;                                      // 0xC(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ESetParamResult                   ReturnValue;                                       // 0xD(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1BED[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.SetBool
struct UMetasoundParameterPack_SetBool_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         InValue;                                           // 0x8(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         OnlyIfExists;                                      // 0x9(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ESetParamResult                   ReturnValue;                                       // 0xA(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1BF1[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.MakeMetasoundParameterPack
struct UMetasoundParameterPack_MakeMetasoundParameterPack_Params
{
public:
	class UMetasoundParameterPack*               ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.HasTrigger
struct UMetasoundParameterPack_HasTrigger_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1BF5[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.HasString
struct UMetasoundParameterPack_HasString_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1BFA[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.HasInt
struct UMetasoundParameterPack_HasInt_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1BFD[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.HasFloat
struct UMetasoundParameterPack_HasFloat_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1C00[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.HasBool
struct UMetasoundParameterPack_HasBool_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1C05[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.GetTrigger
struct UMetasoundParameterPack_GetTrigger_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	enum class ESetParamResult                   Result;                                            // 0x8(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1C0A[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.GetString
struct UMetasoundParameterPack_GetString_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	enum class ESetParamResult                   Result;                                            // 0x8(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_1C0D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.GetInt
struct UMetasoundParameterPack_GetInt_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	enum class ESetParamResult                   Result;                                            // 0x8(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_1C0F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ReturnValue;                                       // 0xC(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.GetFloat
struct UMetasoundParameterPack_GetFloat_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	enum class ESetParamResult                   Result;                                            // 0x8(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_1C14[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ReturnValue;                                       // 0xC(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.GetBool
struct UMetasoundParameterPack_GetBool_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	enum class ESetParamResult                   Result;                                            // 0x8(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1C2F[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

}
}


