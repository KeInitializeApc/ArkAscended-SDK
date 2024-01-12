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
	class FName                                  Boss;                                              // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class AShooterPlayerController*              SPC;                                               // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x29 (0x29 - 0x0)
// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.SetChibiLevels
struct UPrimalPlayerDataBP_Base_C_SetChibiLevels_Params
{
public:
	int32                                        NewLevels;                                         // 0x0(0x4)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2684[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              ForPC;                                             // 0x8(0x8)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x10(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2685[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test;             // 0x20(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.HasGeneralizedAchievementTag
struct UPrimalPlayerDataBP_Base_C_HasGeneralizedAchievementTag_Params
{
public:
	class FName                                  Tag;                                               // 0x0(0x8)(Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         Ret_val;                                           // 0x9(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2686[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
};

// 0x31 (0x31 - 0x0)
// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.GrantGeneralizedAchievementTag
struct UPrimalPlayerDataBP_Base_C_GrantGeneralizedAchievementTag_Params
{
public:
	class FName                                  ObtainedAchievementTag;                            // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class AShooterPlayerController*              ForPC;                                             // 0x8(0x8)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2694[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x14(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test;             // 0x20(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2699[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x2C(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
};

// 0x99 (0x99 - 0x0)
// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.BPForceDefeatedBoss
struct UPrimalPlayerDataBP_Base_C_BPForceDefeatedBoss_Params
{
public:
	int32                                        DifficultyIndex;                                   // 0x0(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  BossName;                                          // 0x4(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_26AF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              PlayerController;                                  // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class AShooterPlayerState*                   K2Node_DynamicCast_AsShooter_Player_State;         // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_26B0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x30(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x34(0x1)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_26B1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBossEngramsSoftReferenceMapping      CallFunc_Array_Get_Item;                           // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x48(0x1)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_26B2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEngramsSetSoftReferenceMapping       CallFunc_Array_Get_Item_1;                         // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x60(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_26B4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Array_Get_Item_2;                         // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_26B5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_BPLoadClass_ReturnValue;                  // 0x80(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x88(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_26B6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                K2Node_ClassDynamicCast_AsPrimal_Item;             // 0x90(0x8)(Edit, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x98(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.SetPlayerHexagonCount
struct UPrimalPlayerDataBP_Base_C_SetPlayerHexagonCount_Params
{
public:
	int32                                        NewHexagonCount;                                   // 0x0(0x4)(ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.GetPlayerHexagonCount
struct UPrimalPlayerDataBP_Base_C_GetPlayerHexagonCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.DefeatedBoss
struct UPrimalPlayerDataBP_Base_C_DefeatedBoss_Params
{
public:
	class APrimalDinoCharacter*                  BossChar;                                          // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        DifficultyIndex;                                   // 0x8(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  TagOverride;                                       // 0xC(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_26BD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              ForPC;                                             // 0x18(0x8)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetPlayerCharacter_ReturnValue;           // 0x20(0x8)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_26BE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_26BF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_BPGetItemOfTemplate_ReturnValue;          // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x48(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_26C0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x4C(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x50(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_26C1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Array_Get_Item;                           // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x60(0x8)(ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
};

}
}


