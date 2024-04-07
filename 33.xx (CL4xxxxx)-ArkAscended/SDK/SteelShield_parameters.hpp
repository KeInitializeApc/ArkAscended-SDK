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

// 0x8 (0x8 - 0x0)
// Function SteelShield.SteelShieldSubsystem.Start
struct USteelShieldSubsystem_Start_Params
{
public:
	int32                                        TokenNum;                                          // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_13B0[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function SteelShield.SteelShieldSubsystem.SetTokenProvider
struct USteelShieldSubsystem_SetTokenProvider_Params
{
public:
	class UClass*                                TokenProviderClass;                                // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	class USteelShieldTokenProvider*             ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction SteelShield.SteelShieldSubsystem.OnInitializedBP__DelegateSignature
struct USteelShieldSubsystem_OnInitializedBP__DelegateSignature_Params
{
public:
	bool                                         bSuccessful;                                       // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function SteelShield.SteelShieldSubsystem.IsRolloverInProgress
struct USteelShieldSubsystem_IsRolloverInProgress_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function SteelShield.SteelShieldSubsystem.IsEnabled
struct USteelShieldSubsystem_IsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function SteelShield.SteelShieldSubsystem.GetTokenProvider
struct USteelShieldSubsystem_GetTokenProvider_Params
{
public:
	class USteelShieldTokenProvider*             ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


