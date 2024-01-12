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
// Function Buff_TekArmor.Buff_TekArmor_C.GetWeaponMesh
struct ABuff_TekArmor_C_GetWeaponMesh_Params
{
public:
	class USkeletalMeshComponent*                OutMesh;                                           // 0x0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.HideBoostIcon
struct ABuff_TekArmor_C_HideBoostIcon_Params
{
public:
	bool                                         ShouldSet;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         WithValue;                                         // 0x1(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.SetJetpackOffset
struct ABuff_TekArmor_C_SetJetpackOffset_Params
{
public:
	struct FTransform                            AddTransform;                                      // 0x0(0x60)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x9C (0x9C - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.HasRequiredEngrams
struct ABuff_TekArmor_C_HasRequiredEngrams_Params
{
public:
	bool                                         HasEngrams;                                        // 0x0(0x1)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         OutHasEngrams;                                     // 0x1(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x2(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3684[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3685[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x10(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3686[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_MakeLiteralString_ReturnValue;            // 0x20(0x10)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UClass*                                CallFunc_Array_Get_Item;                           // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3687[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x40(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x48(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3688[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           K2Node_DynamicCast_AsPrimal_Item;                  // 0x50(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x59(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3689[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x70(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_368A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x78(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x80(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x88(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x89(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x8A(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_368B[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerState*                   K2Node_DynamicCast_AsShooter_Player_State;         // 0x90(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x98(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x99(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_HasEngram_ReturnValue;                    // 0x9A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x9B(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
};

// 0xDA (0xDA - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.IsTekBuffDisabled
struct ABuff_TekArmor_C_IsTekBuffDisabled_Params
{
public:
	bool                                         bIsDisabled;                                       // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bRetVal;                                           // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x2(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_369F[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_36A0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xC(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         Temp_bool_True_if_break_was_hit_Variable_1;        // 0x10(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x11(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_36A1[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable_2;        // 0x1C(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_36A2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x20(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x24(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_36A3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              CallFunc_Get_Ref_Owning_PlayerController_controller; // 0x28(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x30(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x38(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x40(0x8)(Edit, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x49(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x4A(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_36A4[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x4C(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x50(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x54(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_36A5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x60(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x68(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_36A7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x6C(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	TArray<class APrimalBuff*>                   CallFunc_GetAllBuffs_AllBuffs;                     // 0x70(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class APrimalBuff*                           CallFunc_Array_Get_Item_1;                         // 0x80(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	TArray<class FName>                          CallFunc_BPPreventTekArmorBuffs_ReturnValue;       // 0x88(0x10)(ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x98(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_36A8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x9C(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0xA0(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA4(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA5(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xA6(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xA7(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xA8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FName                                  CallFunc_Array_Get_Item_2;                         // 0xAC(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xB4(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0xB8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0xB9(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_36AA[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character_1;          // 0xC0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xC8(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_36AB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AMissionType*                          CallFunc_GetActiveMission_ReturnValue;             // 0xD0(0x8)(ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD8(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0xD9(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
};

// 0x4B (0x4B - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.check genesis restrictions for player
struct ABuff_TekArmor_C_Check_genesis_restrictions_for_player_Params
{
public:
	class APrimalCharacter*                      Player;                                            // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
	bool                                         Is_restricted;                                     // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         Ret_val;                                           // 0x9(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_36AC[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_BPGetPrimaryMapName_ReturnValue;          // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_HasBuffWithCustomTag_ReturnValue;         // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_36AD[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x28(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x30(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x31(0x1)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x32(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class ENetworkModeResult                CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x33(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x34(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_36AE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x38(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class AShooterGameMode*                      K2Node_DynamicCast_AsShooter_Game_Mode;            // 0x40(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x49(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x4A(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
};

// 0x25 (0x25 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.BPActivated
struct ABuff_TekArmor_C_BPActivated_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x8(0x1)(ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_36AF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class AShooterGameMode*                      K2Node_DynamicCast_AsShooter_Game_Mode;            // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_HasBuffWithCustomTag_ReturnValue;         // 0x21(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x22(0x1)(ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
	enum class ENetworkModeResult                CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x23(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Is Restricted Because Of Genesis Map
struct ABuff_TekArmor_C_Is_Restricted_Because_Of_Genesis_Map_Params
{
public:
	bool                                         Restricted;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         Ret_val;                                           // 0x1(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_check_genesis_restrictions_for_player_is_restricted; // 0x2(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Get Is Player in SealedSpace
struct ABuff_TekArmor_C_Get_Is_Player_in_SealedSpace_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_36B6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x10(0x8)(BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.IsAbilityValid
struct ABuff_TekArmor_C_IsAbilityValid_Params
{
public:
	bool                                         OutValid;                                          // 0x0(0x1)(BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x3(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.IsPlayerInWaterVolume
struct ABuff_TekArmor_C_IsPlayerInWaterVolume_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_36D7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       WaterVolumeTopZ;                                   // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_Get_Is_Player_in_SealedSpace_result;      // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_36D8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x18(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x20(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_36D9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APhysicsVolume*                        CallFunc_GetPhysicsVolume_ReturnValue;             // 0x28(0x8)(BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FVector                               CallFunc_GetActorBounds_Origin;                    // 0x30(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FVector                               CallFunc_GetActorBounds_BoxExtent;                 // 0x48(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       CallFunc_BreakVector_X;                            // 0x60(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x68(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x70(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x78(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_36DB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector_X_1;                          // 0x80(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x88(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x90(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x98(0x8)(ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0xA0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0xEC (0xEC - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.SpawnFX
struct ABuff_TekArmor_C_SpawnFX_Params
{
public:
	class UParticleSystem*                       EmitterTemplate;                                   // 0x0(0x8)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_36E3[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InTransform;                                       // 0x10(0x60)(Edit, BlueprintVisible, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class USoundBase*                            Sound;                                             // 0x70(0x8)(Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	double                                       VolumeMultiplier;                                  // 0x78(0x8)(Edit, ExportObject, Transient, Config, DisableEditOnInstance, EditConst, DuplicateTransient)
	double                                       PitchMultiplier;                                   // 0x80(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x88(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_36E5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x90(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0xA8(0x18)(BlueprintVisible, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0xC0(0x18)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0xD8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xE0(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0xE1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_36E7[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_PlaySoundAtLocation_VolumeMultiplier_ImplicitCast; // 0xE4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	float                                        CallFunc_PlaySoundAtLocation_PitchMultiplier_ImplicitCast; // 0xE8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x2F (0x2F - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Should Damage Actor
struct ABuff_TekArmor_C_Should_Damage_Actor_Params
{
public:
	class AActor*                                Victim;                                            // 0x0(0x8)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         Result;                                            // 0x8(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         RetVal;                                            // 0x9(0x1)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0xA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xB(0x1)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_36EC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x10(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class AShooterGameMode*                      K2Node_DynamicCast_AsShooter_Game_Mode;            // 0x20(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x29(0x1)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_AreTribesAllied_ReturnValue;              // 0x2A(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2B(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2C(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2D(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x2E(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.ResetPlayerFOV
struct ABuff_TekArmor_C_ResetPlayerFOV_Params
{
public:
	class AShooterPlayerCameraManager*           CallFunc_Get_RefOwningPlayer_Camera_Manager_ref;   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        K2Node_VariableSet_NormalFOV_ImplicitCast;         // 0x8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreLookInput
struct ABuff_TekArmor_C_SetTekIgnoreLookInput_Params
{
public:
	bool                                         NewIgnore;                                         // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreMoveInput
struct ABuff_TekArmor_C_SetTekIgnoreMoveInput_Params
{
public:
	bool                                         NewIgnore;                                         // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.AllowPostProcessEffect
struct ABuff_TekArmor_C_AllowPostProcessEffect_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.BPDeactivated
struct ABuff_TekArmor_C_BPDeactivated_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x8(0x1)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.IsWarping FOV
struct ABuff_TekArmor_C_IsWarping_FOV_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_36F5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerCameraManager*           CallFunc_Get_RefOwningPlayer_Camera_Manager_ref;   // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x12(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_36F9[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Get DefaultTekBuff
struct ABuff_TekArmor_C_Get_DefaultTekBuff_Params
{
public:
	class ABuff_TekArmor_C*                      Ref;                                               // 0x0(0x8)(ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UObject*                               CallFunc_GetDefaultObject_ReturnValue;             // 0x8(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class ABuff_TekArmor_C*                      K2Node_DynamicCast_AsBuff_Tek_Armor;               // 0x10(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.GetDefaultPlayer
struct ABuff_TekArmor_C_GetDefaultPlayer_Params
{
public:
	class APrimalCharacter*                      Ref;                                               // 0x0(0x8)(ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UObject*                               CallFunc_GetDefaultObject_ReturnValue;             // 0x8(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x10(0x8)(BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x21 (0x21 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Client_Consume Element After Time
struct ABuff_TekArmor_C_Client_Consume_Element_After_Time_Params
{
public:
	double                                       DeltaTime;                                         // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        ElementCost;                                       // 0x8(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_36FE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x10(0x8)(ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x18(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.BPSetupForInstigator
struct ABuff_TekArmor_C_BPSetupForInstigator_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x9(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0xB(0x1)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3706[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerCameraManager*           CallFunc_Get_RefOwningPlayer_Camera_Manager_ref;   // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UPrimalItemArmor_Base_Tek_C*           CallFunc_GetRelatedTekArmorRef_tekArmorRef;        // 0x18(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x20(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3707[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class APlayerController*                     CallFunc_CastToPlayerController_ReturnValue;       // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       K2Node_VariableSet_warpFOV_start_ImplicitCast;     // 0x48(0x8)(BlueprintVisible, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       K2Node_VariableSet_warpFOV_target_ImplicitCast;    // 0x50(0x8)(Edit, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x12 (0x12 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.IsPlayerGrounded
struct ABuff_TekArmor_C_IsPlayerGrounded_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_370C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCharacterMovementComponent*           CallFunc_Get_Ref_Owning_PlayerMovement_movement;   // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x11(0x1)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x12 (0x12 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Get RefOwningPlayer Camera Manager
struct ABuff_TekArmor_C_Get_RefOwningPlayer_Camera_Manager_Params
{
public:
	class AShooterPlayerCameraManager*           Ref;                                               // 0x0(0x8)(ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class AShooterPlayerCameraManager*           K2Node_DynamicCast_AsShooter_Player_Camera_Manager; // 0x8(0x8)(BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0xC4 (0xC4 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.UpdatePlayerFOV
struct ABuff_TekArmor_C_UpdatePlayerFOV_Params
{
public:
	double                                       IntensityRatio;                                    // 0x0(0x8)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         WarpIn;                                            // 0x8(0x1)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_370D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       NewFOV;                                            // 0x10(0x8)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	class AShooterPlayerCameraManager*           CallFunc_Get_RefOwningPlayer_Camera_Manager_ref;   // 0x18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_370E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerCameraManager*           CallFunc_Get_RefOwningPlayer_Camera_Manager_ref_1; // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x38(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x40(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SubobjectReference)
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0x50(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x58(0x8)(ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x60(0x1)(ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_370F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x68(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x70(0x1)(BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3710[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x78(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_2;      // 0x80(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x88(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x90(0x8)(ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x98(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_NotEqual_DoubleDouble_B_ImplicitCast;     // 0xA0(0x8)(ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast;    // 0xA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0xB0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast_1;        // 0xB8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        K2Node_VariableSet_NormalFOV_ImplicitCast;         // 0xC0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Get Ref Owning PlayerMovement
struct ABuff_TekArmor_C_Get_Ref_Owning_PlayerMovement_Params
{
public:
	class UCharacterMovementComponent*           Movement;                                          // 0x0(0x8)(Net, Parm, OutParm, DisableEditOnInstance, EditConst)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x8(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Get Ref Owning PlayerController
struct ABuff_TekArmor_C_Get_Ref_Owning_PlayerController_Params
{
public:
	class AShooterPlayerController*              Controller;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class APlayerController*                     CallFunc_GetOwnerController_ReturnValue;           // 0x8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x10(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.GetRef_OwningPlayer
struct ABuff_TekArmor_C_GetRef_OwningPlayer_Params
{
public:
	class AShooterCharacter*                     Player;                                            // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.AreAnyTekAbilitiesActive
struct ABuff_TekArmor_C_AreAnyTekAbilitiesActive_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         RetVal;                                            // 0x1(0x1)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsTekArmorUsingAbility__result;           // 0x2(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x39 (0x39 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.IsTekArmorUsingAbility?
struct ABuff_TekArmor_C_IsTekArmorUsingAbility__Params
{
public:
	uint8                                        ArmorType;                                         // 0x0(0x1)(ConstParm, Net, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         Result;                                            // 0x1(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         RetVal;                                            // 0x2(0x1)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x3(0x1)(EditFixedSize, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_3711[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_GetEquippedItemOfType_ReturnValue;        // 0x8(0x8)(Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UPrimalItemArmor_Base_Tek_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;   // 0x10(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3712[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff; // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
	class APrimalBuff*                           CallFunc_GetBuff_ReturnValue;                      // 0x28(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
	class ABuff_TekArmor_C*                      K2Node_DynamicCast_AsBuff_Tek_Armor;               // 0x30(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
};

// 0x58 (0x58 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.DisplayTekArmorMessage
struct ABuff_TekArmor_C_DisplayTekArmorMessage_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundBase*                            Sound;                                             // 0x10(0x8)(Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class AShooterPlayerController*              CallFunc_Get_Ref_Owning_PlayerController_controller; // 0x18(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x20(0x10)(Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	float                                        CallFunc_ClientServerNotificationSingle_DisplayTime_ImplicitCast; // 0x50(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        CallFunc_ClientServerNotificationSingle_DisplayScale_ImplicitCast; // 0x54(0x4)(Edit, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x21 (0x21 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.GetRelatedTekArmorRef
struct ABuff_TekArmor_C_GetRelatedTekArmorRef_Params
{
public:
	class UPrimalItemArmor_Base_Tek_C*           TekArmorRef;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UPrimalItemArmor_Base_Tek_C*           ArmorRef;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UPrimalItem*                           CallFunc_GetEquippedItemOfType_ReturnValue;        // 0x10(0x8)(Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UPrimalItemArmor_Base_Tek_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;   // 0x18(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x92 (0x92 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.CanUseTekAbility
struct ABuff_TekArmor_C_CanUseTekAbility_Params
{
public:
	bool                                         bNotifyIfOutOfElement;                             // 0x0(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bResult;                                           // 0x1(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bRetVal;                                           // 0x2(0x1)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_HasRequiredEngrams_HasEngrams;            // 0x3(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_3716[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x8(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsTekBuffDisabled_bIsDisabled;            // 0x10(0x1)(BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3717[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player_1;             // 0x18(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player_2;             // 0x20(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BPIsConscious_ReturnValue;                // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3718[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class ABiomeZoneVolume*                      CallFunc_GetMyBiomeZoneVolume_ReturnValue;         // 0x30(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x38(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_3719[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class UClass*                                K2Node_ClassDynamicCast_AsPrimal_Buff;             // 0x48(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x50(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x51(0x1)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x52(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x53(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x54(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x55(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x56(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x57(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x58(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x60(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x61(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x62(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_371A[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_MakeLiteralString_ReturnValue;            // 0x68(0x10)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x78(0x4)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	uint8                                        Pad_371B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_BPGetItemOfTemplate_ReturnValue;          // 0x80(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x88(0x1)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x89(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x8A(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x8B(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x8C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x8D(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x8E(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x8F(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x90(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x91(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1
struct ABuff_TekArmor_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_0
struct ABuff_TekArmor_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
};

// 0x1 (0x1 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Equipped_SetToMaxElement
struct ABuff_TekArmor_C_Equipped_SetToMaxElement_Params
{
public:
	enum class EPrimalEquipmentType              ItemSlot;                                          // 0x0(0x1)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Multi_SpawnFX
struct ABuff_TekArmor_C_Multi_SpawnFX_Params
{
public:
	class UParticleSystem*                       ParticleTemplate;                                  // 0x0(0x8)(ConstParm, ExportObject, Net, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class USoundBase*                            Sound;                                             // 0x8(0x8)(Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	double                                       SoundVolume;                                       // 0x70(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       SoundPitch;                                        // 0x78(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Equipped_TryToDecreaseElement
struct ABuff_TekArmor_C_Equipped_TryToDecreaseElement_Params
{
public:
	int32                                        AmountToDecreaseBy;                                // 0x0(0x4)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
	enum class EPrimalEquipmentType              ItemSlot;                                          // 0x4(0x1)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Server_SetTekAbilityActive
struct ABuff_TekArmor_C_Server_SetTekAbilityActive_Params
{
public:
	bool                                         NewActive;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x16C (0x16C - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.ExecuteUbergraph_Buff_TekArmor
struct ABuff_TekArmor_C_ExecuteUbergraph_Buff_TekArmor_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_374B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FKey                                  K2Node_InputKeyEvent_Key_1;                        // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	struct FKey                                  Temp_struct_Variable;                              // 0x20(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	enum class EPrimalEquipmentType              K2Node_CustomEvent_ItemSlot_1;                     // 0x38(0x1)(Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_374C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UParticleSystem*                       K2Node_CustomEvent_particleTemplate;               // 0x40(0x8)(EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class USoundBase*                            K2Node_CustomEvent_sound;                          // 0x48(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FTransform                            K2Node_CustomEvent_transform;                      // 0x50(0x60)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       K2Node_CustomEvent_soundVolume;                    // 0xB0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       K2Node_CustomEvent_soundPitch;                     // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class UPrimalItem*                           CallFunc_GetEquippedItemOfType_ReturnValue;        // 0xC0(0x8)(Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UPrimalItemArmor_Base_Tek_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;   // 0xC8(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_374E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        K2Node_CustomEvent_AmountToDecreaseBy;             // 0xD4(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	enum class EPrimalEquipmentType              K2Node_CustomEvent_ItemSlot;                       // 0xD8(0x1)(Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_374F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_GetEquippedItemOfType_ReturnValue_1;      // 0xE0(0x8)(Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xE8(0x1)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3750[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItemArmor_Base_Tek_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek_1; // 0xF0(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xF8(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         K2Node_CustomEvent_newActive;                      // 0xF9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0xFA(0x1)(ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3751[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_TimeSeconds_ReturnValue;                  // 0xFC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class APlayerController*                     CallFunc_GetOwnerController_ReturnValue;           // 0x100(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
	double                                       CallFunc_FloatToDouble_ReturnValue;                // 0x108(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x110(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x118(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3753[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x120(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FKey                                  K2Node_InputKeyEvent_Key;                          // 0x128(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x140(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x148(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_3755[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerState*                   K2Node_DynamicCast_AsShooter_Player_State;         // 0x150(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x158(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_IsCooldownComplete_ReturnValue;           // 0x159(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_3756[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FloatToDouble_value_ImplicitCast;         // 0x160(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        CallFunc_IsCooldownComplete_CooldownDuration_ImplicitCast; // 0x168(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

}
}


