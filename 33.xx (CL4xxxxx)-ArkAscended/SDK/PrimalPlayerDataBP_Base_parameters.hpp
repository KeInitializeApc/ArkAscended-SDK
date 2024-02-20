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

// 0x12 (0x12 - 0x0)
// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.EndActivityOnBoss
struct UPrimalPlayerDataBP_Base_C_EndActivityOnBoss_Params
{
public:
	class FName                                  Boss;                                              // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class AShooterPlayerController*              SPC;                                               // 0x8(0x8)(Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x29 (0x29 - 0x0)
// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.SetChibiLevels
struct UPrimalPlayerDataBP_Base_C_SetChibiLevels_Params
{
public:
	int32                                        NewLevels;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_31F6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              ForPC;                                             // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x10(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_31F9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test;             // 0x20(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.HasGeneralizedAchievementTag
struct UPrimalPlayerDataBP_Base_C_HasGeneralizedAchievementTag_Params
{
public:
	class FName                                  Tag;                                               // 0x0(0x8)(ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         Ret_val;                                           // 0x9(0x1)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3200[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x10(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x31 (0x31 - 0x0)
// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.GrantGeneralizedAchievementTag
struct UPrimalPlayerDataBP_Base_C_GrantGeneralizedAchievementTag_Params
{
public:
	class FName                                  ObtainedAchievementTag;                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class AShooterPlayerController*              ForPC;                                             // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3212[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x14(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test;             // 0x20(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3214[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x99 (0x99 - 0x0)
// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.BPForceDefeatedBoss
struct UPrimalPlayerDataBP_Base_C_BPForceDefeatedBoss_Params
{
public:
	int32                                        DifficultyIndex;                                   // 0x0(0x4)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  BossName;                                          // 0x4(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_321C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              PlayerController;                                  // 0x10(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class AShooterPlayerState*                   K2Node_DynamicCast_AsShooter_Player_State;         // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_321E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x34(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_3222[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBossEngramsSoftReferenceMapping      CallFunc_Array_Get_Item;                           // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x48(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference, Interp)
	uint8                                        Pad_3223[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEngramsSetSoftReferenceMapping       CallFunc_Array_Get_Item_1;                         // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x60(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3225[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Array_Get_Item_2;                         // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3227[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_BPLoadClass_ReturnValue;                  // 0x80(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x88(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3229[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                K2Node_ClassDynamicCast_AsPrimal_Item;             // 0x90(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x98(0x1)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.SetPlayerHexagonCount
struct UPrimalPlayerDataBP_Base_C_SetPlayerHexagonCount_Params
{
public:
	int32                                        NewHexagonCount;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x4(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.GetPlayerHexagonCount
struct UPrimalPlayerDataBP_Base_C_GetPlayerHexagonCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.DefeatedBoss
struct UPrimalPlayerDataBP_Base_C_DefeatedBoss_Params
{
public:
	class APrimalDinoCharacter*                  BossChar;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        DifficultyIndex;                                   // 0x8(0x4)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  TagOverride;                                       // 0xC(0x8)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_324A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              ForPC;                                             // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetPlayerCharacter_ReturnValue;           // 0x20(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_324D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x30(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_324F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_BPGetItemOfTemplate_ReturnValue;          // 0x40(0x8)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x48(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3253[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x4C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3255[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Array_Get_Item;                           // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x60(0x8)(BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
};

}
}


