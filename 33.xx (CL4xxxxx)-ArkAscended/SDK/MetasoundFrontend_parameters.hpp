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
	class FName                                  ParameterName;                                     // 0x0(0x8)(BlueprintVisible, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         OnlyIfExists;                                      // 0x8(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ESetParamResult                   ReturnValue;                                       // 0x9(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_25EB[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.SetString
struct UMetasoundParameterPack_SetString_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(BlueprintVisible, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                InValue;                                           // 0x8(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         OnlyIfExists;                                      // 0x18(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ESetParamResult                   ReturnValue;                                       // 0x19(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_25EC[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.SetInt
struct UMetasoundParameterPack_SetInt_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(BlueprintVisible, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        InValue;                                           // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         OnlyIfExists;                                      // 0xC(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ESetParamResult                   ReturnValue;                                       // 0xD(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_25ED[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.SetFloat
struct UMetasoundParameterPack_SetFloat_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(BlueprintVisible, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InValue;                                           // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         OnlyIfExists;                                      // 0xC(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ESetParamResult                   ReturnValue;                                       // 0xD(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_25EE[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.SetBool
struct UMetasoundParameterPack_SetBool_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(BlueprintVisible, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         InValue;                                           // 0x8(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         OnlyIfExists;                                      // 0x9(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ESetParamResult                   ReturnValue;                                       // 0xA(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_25EF[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.MakeMetasoundParameterPack
struct UMetasoundParameterPack_MakeMetasoundParameterPack_Params
{
public:
	class UMetasoundParameterPack*               ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.HasTrigger
struct UMetasoundParameterPack_HasTrigger_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(BlueprintVisible, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_25F4[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.HasString
struct UMetasoundParameterPack_HasString_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(BlueprintVisible, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_25F9[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.HasInt
struct UMetasoundParameterPack_HasInt_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(BlueprintVisible, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_25FB[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.HasFloat
struct UMetasoundParameterPack_HasFloat_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(BlueprintVisible, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_25FD[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.HasBool
struct UMetasoundParameterPack_HasBool_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(BlueprintVisible, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_25FF[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.GetTrigger
struct UMetasoundParameterPack_GetTrigger_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(BlueprintVisible, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ESetParamResult                   Result;                                            // 0x8(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2600[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.GetString
struct UMetasoundParameterPack_GetString_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(BlueprintVisible, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ESetParamResult                   Result;                                            // 0x8(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_2605[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.GetInt
struct UMetasoundParameterPack_GetInt_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(BlueprintVisible, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ESetParamResult                   Result;                                            // 0x8(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_260D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ReturnValue;                                       // 0xC(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.GetFloat
struct UMetasoundParameterPack_GetFloat_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(BlueprintVisible, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ESetParamResult                   Result;                                            // 0x8(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_260F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ReturnValue;                                       // 0xC(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.GetBool
struct UMetasoundParameterPack_GetBool_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(BlueprintVisible, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ESetParamResult                   Result;                                            // 0x8(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2610[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

}
}


