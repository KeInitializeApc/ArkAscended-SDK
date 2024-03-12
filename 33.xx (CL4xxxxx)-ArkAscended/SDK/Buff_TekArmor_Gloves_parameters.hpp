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
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Validate Punch State
struct ABuff_TekArmor_Gloves_C_Validate_Punch_State_Params
{
public:
	enum class E_TekGlovePunchState              NewState;                                          // 0x0(0x1)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bValidState;                                       // 0x1(0x1)(Edit, Net, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class E_TekGlovePunchState              MaxPunchState;                                     // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x4(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x8(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xC(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xD(0x1)(BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xE(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0xF(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x10(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x11(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
};

// 0x4 (0x4 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.PreventBlockingWithShield
struct ABuff_TekArmor_Gloves_C_PreventBlockingWithShield_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x2(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x3(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
};

// 0x1D (0x1D - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.HasShield
struct ABuff_TekArmor_Gloves_C_HasShield_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         IsShoulderCannon;                                  // 0x1(0x1)(ConstParm, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsChibi;                                           // 0x2(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsMiniHLNA;                                        // 0x3(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         RetVal;                                            // 0x4(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x5(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x6(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x7(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x8(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimalItem*                           CallFunc_GetEquippedItemOfType_ReturnValue;        // 0x10(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x19(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x1A(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x1B(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x1C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
};

// 0x11 (0x11 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ShieldActive
struct ABuff_TekArmor_Gloves_C_ShieldActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_5A25[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x8(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsBlockingWithShield_ReturnValue;         // 0x10(0x1)(BlueprintVisible, OutParm, Config, DisableEditOnInstance, SubobjectReference)
};

// 0xF (0xF - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BPCheckPreventInput
struct ABuff_TekArmor_Gloves_C_BPCheckPreventInput_Params
{
public:
	enum class EPrimalCharacterInputType         InputType;                                         // 0x0(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Greater_ByteByte_ReturnValue;             // 0x3(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x4(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x5(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x6(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x7(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x8(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x9(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0xA(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0xB(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0xC(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0xD(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xE(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x98 (0x98 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.CanPhysicallyTekPunch
struct ABuff_TekArmor_Gloves_C_CanPhysicallyTekPunch_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	bool                                         RetVal;                                            // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5A28[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x8(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_HasBuff_ReturnValue;                      // 0x10(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsPlayerGrounded_result;                  // 0x11(0x1)(Edit, BlueprintVisible, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsPlayerInWaterVolume_result;             // 0x12(0x1)(BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5A29[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_IsPlayerInWaterVolume_waterVolumeTopZ;    // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player_1;             // 0x20(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x28(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5A2A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x30(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_X;                            // 0x48(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x50(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x58(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x60(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x61(0x1)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x62(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_5A2B[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector_X_1;                          // 0x68(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x70(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x78(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x80(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x81(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x82(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x83(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x84(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x85(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x86(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x87(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	class AWeapFists_C*                          K2Node_DynamicCast_AsWeap_Fists;                   // 0x88(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x90(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsTekArmorUsingAbility__result;           // 0x91(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x92(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x93(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x94(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x95(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x96(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x97(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
};

// 0x27 (0x27 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Should Damage Actor
struct ABuff_TekArmor_Gloves_C_Should_Damage_Actor_Params
{
public:
	class AActor*                                Victim;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	bool                                         Result;                                            // 0x8(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	bool                                         bIsHostile_Loc;                                    // 0x9(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5A2D[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x10(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsDead_ReturnValue;                       // 0x21(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsHostileTo_ReturnValue;                  // 0x22(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x23(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Should_Damage_Actor_result;               // 0x24(0x1)(Edit, ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x25(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x26(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
};

// 0x162 (0x162 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Has Line Of SightToActor
struct ABuff_TekArmor_Gloves_C_Has_Line_Of_SightToActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	bool                                         Result;                                            // 0x8(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_5A2E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x10(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetActorBounds_Origin;                    // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetActorBounds_BoxExtent;                 // 0x30(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	TArray<class AActor*>                        K2Node_MakeArray_Array;                            // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetRelativeCenterOfMass_ReturnValue;      // 0x58(0x18)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x70(0xF0)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x160(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x161(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ArePunchChargeAnimsPlaying
struct ABuff_TekArmor_Gloves_C_ArePunchChargeAnimsPlaying_Params
{
public:
	bool                                         CleanUpAnims;                                      // 0x0(0x1)(Edit, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Result;                                            // 0x1(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	bool                                         RetVal;                                            // 0x2(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5A32[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x8(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UAnimMontage*                          CallFunc_GetOverridenMontage_ReturnValue;          // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class UAnimMontage*                          CallFunc_GetOverridenMontage_ReturnValue_1;        // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
	class UAnimMontage*                          CallFunc_GetOverridenMontage_ReturnValue_2;        // 0x20(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x28(0x8)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue_1;            // 0x30(0x8)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Montage_IsPlaying_ReturnValue;            // 0x38(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Montage_IsPlaying_ReturnValue_1;          // 0x39(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Montage_IsPlaying_ReturnValue_2;          // 0x3A(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Montage_IsPlaying_ReturnValue_3;          // 0x3B(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
};

// 0x40 (0x40 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.PlayPunchAnimsByState
struct ABuff_TekArmor_Gloves_C_PlayPunchAnimsByState_Params
{
public:
	enum class E_TekGlovePunchState              State;                                             // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
	uint8                                        Pad_5A3A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UAnimMontage*                          NewAnimFPV;                                        // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UAnimMontage*                          NewAnimTPV;                                        // 0x10(0x8)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_HasShield_ReturnValue;                    // 0x18(0x1)(Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x19(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5A3B[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FWeaponAnim                           K2Node_MakeStruct_WeaponAnim;                      // 0x20(0x10)(Edit, Parm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x30(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x31(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x32(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsPlayerAboveGround_result;               // 0x33(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsPlayerAboveGround_result_1;             // 0x34(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_5A3C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_PlayAnimEx_ReturnValue;                   // 0x38(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_PlayWeaponAnimation_ReturnValue;          // 0x3C(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
};

// 0x52 (0x52 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.IsPlayerAboveGround
struct ABuff_TekArmor_Gloves_C_IsPlayerAboveGround_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_5A3D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x8(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x20(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x38(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BPFastTrace_ReturnValue;                  // 0x50(0x1)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x51(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x51 (0x51 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.AreTekPantsEquipped
struct ABuff_TekArmor_Gloves_C_AreTekPantsEquipped_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_5A3E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class ABuff_TekArmor_Pants_C*                TekPantsRef;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class ABuff_TekArmor_Pants_C*                buffRef;                                           // 0x10(0x8)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         RetVal;                                            // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5A3F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_GetEquippedItemOfType_ReturnValue;        // 0x20(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimalItemArmor_TekPants_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Pants;  // 0x28(0x8)(ExportObject, Net, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_5A40[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff; // 0x38(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class APrimalBuff*                           CallFunc_GetBuff_ReturnValue;                      // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class ABuff_TekArmor_Pants_C*                K2Node_DynamicCast_AsBuff_Tek_Armor_Pants;         // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
};

// 0x8C (0x8C - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.GetBuffPostprocessIntensity
struct ABuff_TekArmor_Gloves_C_GetBuffPostprocessIntensity_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_5A41[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CurrentIntensity;                                  // 0x8(0x8)(Edit, ConstParm, ExportObject, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_AreTekPantsEquipped_result;               // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5A42[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class ABuff_TekArmor_Pants_C*                CallFunc_AreTekPantsEquipped_tekPantsRef;          // 0x18(0x8)(ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_Get_Player_Max_Tek_Run_Velocity_maxSpeed; // 0x20(0x8)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x28(0x18)(ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x40(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5A43[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_VSize_ReturnValue;                        // 0x48(0x8)(Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x50(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x58(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x60(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x68(0x1)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_5A44[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x70(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x78(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0x80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x88(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BPDeactivated
struct ABuff_TekArmor_Gloves_C_BPDeactivated_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_ArePunchChargeAnimsPlaying_result;        // 0xA(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0xB(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_5A45[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x10(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x18C (0x18C - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Update Local Vars by State
struct ABuff_TekArmor_Gloves_C_Update_Local_Vars_by_State_Params
{
public:
	enum class E_TekGlovePunchState              NewState;                                          // 0x0(0x1)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x2(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_5A4A[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x20(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x28(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_Get_Punch_Location_Location;              // 0x40(0x18)(BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class AWeapFists_C*                          K2Node_DynamicCast_AsWeap_Fists;                   // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_5A4B[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x70(0x60)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player_1;             // 0xD0(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xD8(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsFirstPerson_ReturnValue;                // 0xF0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5A4C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0xF8(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_1;              // 0x110(0x60)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x170(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x178(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5A4D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x180(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	float                                        CallFunc_BuffTickClient_DeltaTime_ImplicitCast;    // 0x188(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.GetPlayerCameraLocation
struct ABuff_TekArmor_Gloves_C_GetPlayerCameraLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               CallFunc_GetActorUpVector_ReturnValue;             // 0x18(0x18)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x30(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x48(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x60(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_Multiply_VectorFloat_B_ImplicitCast;      // 0x78(0x8)(Edit, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BPSetupForInstigator
struct ABuff_TekArmor_Gloves_C_BPSetupForInstigator_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x8(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x9(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_K2_AttachTo_ReturnValue;                  // 0xA(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_K2_AttachTo_ReturnValue_1;                // 0xB(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
};

// 0x10 (0x10 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.RocketPunchEnd
struct ABuff_TekArmor_Gloves_C_RocketPunchEnd_Params
{
public:
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x0(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_5A50[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x8(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ResetOwningPlayerVariables
struct ABuff_TekArmor_Gloves_C_ResetOwningPlayerVariables_Params
{
public:
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x0(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x1(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.PreventJump
struct ABuff_TekArmor_Gloves_C_PreventJump_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x5C (0x5C - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.NetSetTekPunchState
struct ABuff_TekArmor_Gloves_C_NetSetTekPunchState_Params
{
public:
	enum class E_TekGlovePunchState              NewPunchState;                                     // 0x0(0x1)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x4(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5A59[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_check_genesis_restrictions_for_player_is_restricted; // 0x11(0x1)(Edit, ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5A5C[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	float                                        CallFunc_StaticGetTimeSince_ReturnValue;           // 0x20(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x24(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5A5E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue_1;       // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	float                                        CallFunc_StaticGetTimeSince_ReturnValue_1;         // 0x30(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x34(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5A5F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x40(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5A60[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x48(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x50(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	float                                        CallFunc_BuffTickServer_DeltaTime_ImplicitCast;    // 0x58(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BuffTickServer
struct ABuff_TekArmor_Gloves_C_BuffTickServer_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        CallFunc_TimeSince_ReturnValue;                    // 0x4(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class ABuff_TekArmor_C*                      CallFunc_Get_DefaultTekBuff_ref;                   // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	float                                        CallFunc_TimeSince_ReturnValue_1;                  // 0x18(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x1C(0x1)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x1D(0x1)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1E(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Can_Element_Decrease_CanDecrease;         // 0x1F(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_CheckForTargetsWhileRocketPunching_punchNow; // 0x20(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x21(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x22(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_CanPhysicallyTekPunch_result;             // 0x23(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5A65[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x28(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1; // 0x30(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
};

// 0xB (0xB - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Client_SetTekPunchState
struct ABuff_TekArmor_Gloves_C_Client_SetTekPunchState_Params
{
public:
	enum class E_TekGlovePunchState              NewState;                                          // 0x0(0x1)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x2(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Can_Element_Decrease_CanDecrease;         // 0x5(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Can_Element_Decrease_CanDecrease_1;       // 0x6(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Can_Element_Decrease_CanDecrease_2;       // 0x7(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Can_Element_Decrease_CanDecrease_3;       // 0x8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted; // 0x9(0x1)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0xA(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.GetTimeToRocketPunchTarget
struct ABuff_TekArmor_Gloves_C_GetTimeToRocketPunchTarget_Params
{
public:
	struct FVector                               TargetLocation;                                    // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       ReturnValue;                                       // 0x18(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_GetPlayerCameraLocation_location;         // 0x20(0x18)(Edit, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x38(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x50(0x8)(Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x58(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x60(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_FMin_ReturnValue;                         // 0x68(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
};

// 0x69 (0x69 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.CheckForTargetsWhileRocketPunching
struct ABuff_TekArmor_Gloves_C_CheckForTargetsWhileRocketPunching_Params
{
public:
	bool                                         PunchNow;                                          // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         RetVal;                                            // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_ScanForRocketFistTargets_anyHit;          // 0x2(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5A6E[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_ScanForRocketFistTargets_hitLocation;     // 0x8(0x18)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class APrimalCharacter*                      CallFunc_ScanForRocketFistTargets_hitPawn;         // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_GetPlayerCameraLocation_location;         // 0x28(0x18)(Edit, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5A71[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x48(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x60(0x8)(Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x68(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
};

// 0x24 (0x24 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Set AudioParams and Play
struct ABuff_TekArmor_Gloves_C_Set_AudioParams_and_Play_Params
{
public:
	class UAudioComponent*                       Audio;                                             // 0x0(0x8)(Edit, EditFixedSize, DisableEditOnTemplate)
	double                                       Volume;                                            // 0x8(0x8)(EditFixedSize, OutParm, ReturnParm, Transient, Config)
	double                                       Pitch;                                             // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	bool                                         PlaySound;                                         // 0x18(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x19(0x1)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x1A(0x1)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	uint8                                        Pad_5A74[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast; // 0x1C(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	float                                        CallFunc_SetPitchMultiplier_NewPitchMultiplier_ImplicitCast; // 0x20(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x6A (0x6A - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.OnRep_CurrentPunchState
struct ABuff_TekArmor_Gloves_C_OnRep_CurrentPunchState_Params
{
public:
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x1(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x2(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5A75[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x20(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue_2;        // 0x38(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue_3;        // 0x50(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x68(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x69(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
};

// 0x78 (0x78 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.GetRelativeCenterOfMass
struct ABuff_TekArmor_Gloves_C_GetRelativeCenterOfMass_Params
{
public:
	class APrimalCharacter*                      Character;                                         // 0x0(0x8)(Edit, ConstParm, Net, Parm, DisableEditOnTemplate, Config, GlobalConfig)
	struct FVector                               ReturnValue;                                       // 0x8(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x20(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x38(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x40(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x58(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x70(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.DrawBuffFloatingHUD
struct ABuff_TekArmor_Gloves_C_DrawBuffFloatingHUD_Params
{
public:
	int32                                        BuffIndex;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5A79[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterHUD*                           HUD;                                               // 0x8(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
	float                                        CenterX;                                           // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CenterY;                                           // 0x14(0x4)(ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        DrawScale;                                         // 0x18(0x4)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5A7C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x28(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5A7E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetNumLocalPlayerControllers_ReturnValue; // 0x34(0x4)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x38(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x39(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x3A(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5A80[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x40(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x48(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_5A81[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x50(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x58(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x60(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x68(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x70(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        K2Node_Select_Default;                             // 0x78(0x4)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_5A82[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x80(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;   // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x90(0x4)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        CallFunc_DrawMaterial_ScreenW_ImplicitCast;        // 0x94(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_DrawMaterial_ScreenH_ImplicitCast;        // 0x98(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        K2Node_Select_Option_0_ImplicitCast;               // 0x9C(0x4)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_DrawMaterial_ScreenX_ImplicitCast;        // 0xA0(0x4)(BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        K2Node_Select_Option_1_ImplicitCast;               // 0xA4(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x553 (0x553 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ScanForRocketFistTargets
struct ABuff_TekArmor_Gloves_C_ScanForRocketFistTargets_Params
{
public:
	double                                       Range;                                             // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         AnyHit;                                            // 0x8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5A96[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               HitLocation;                                       // 0x10(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APrimalCharacter*                      HitPawn;                                           // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CanBeTargeted;                                     // 0x30(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5A97[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Location;                                          // 0x38(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	class APrimalCharacter*                      Pawn;                                              // 0x50(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	bool                                         WasHit;                                            // 0x58(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x59(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5A(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5A98[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x5C(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x60(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable_1;        // 0x64(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	uint8                                        Pad_5A99[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x68(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x6C(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5A9A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x70(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x88(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x8C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5A9B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<enum class EObjectTypeQuery>          K2Node_MakeArray_Array;                            // 0x98(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetPlayerCameraLocation_location;         // 0xA8(0x18)(Edit, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        K2Node_MakeArray_Array_1;                          // 0xC0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
	struct FRotator                              CallFunc_GetControlRotation_ReturnValue;           // 0xD0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakRotator_Roll;                        // 0xE8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0xEC(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0xF0(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5A9C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0xF8(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x110(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x128(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x140(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x158(0xF0)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x248(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x249(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x24A(0x1)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5A9D[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakHitResult_Time;                      // 0x24C(0x4)(ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x250(0x4)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5A9E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x258(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x270(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x288(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x2A0(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x2B8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x2C0(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x2C8(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x2D0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x2D8(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x2E0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x2E4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x2E8(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5A9F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x2F0(0x18)(Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x308(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x320(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
	TArray<struct FHitResult>                    CallFunc_BoxTraceMultiForObjects_OutHits;          // 0x338(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BoxTraceMultiForObjects_ReturnValue;      // 0x348(0x1)(Edit, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5AA0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x34C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	struct FHitResult                            CallFunc_Array_Get_Item;                           // 0x350(0xF0)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x440(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit_1;            // 0x444(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x445(0x1)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_5AA1[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakHitResult_Time_1;                    // 0x448(0x4)(ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        CallFunc_BreakHitResult_Distance_1;                // 0x44C(0x4)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_BreakHitResult_Location_1;                // 0x450(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint_1;             // 0x468(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_BreakHitResult_Normal_1;                  // 0x480(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal_1;            // 0x498(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat_1;                 // 0x4B0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class AActor*                                CallFunc_BreakHitResult_HitActor_1;                // 0x4B8(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent_1;            // 0x4C0(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FName                                  CallFunc_BreakHitResult_HitBoneName_1;             // 0x4C8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FName                                  CallFunc_BreakHitResult_BoneName_1;                // 0x4D0(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        CallFunc_BreakHitResult_HitItem_1;                 // 0x4D8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        CallFunc_BreakHitResult_ElementIndex_1;            // 0x4DC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        CallFunc_BreakHitResult_FaceIndex_1;               // 0x4E0(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_5AA2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_TraceStart_1;              // 0x4E8(0x18)(Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd_1;                // 0x500(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x518(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5AA3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x520(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x528(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x529(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Should_Damage_Actor_result;               // 0x52A(0x1)(Edit, ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5AA4[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class APrimalBuff*>                   CallFunc_GetBuffs_TheBuffs;                        // 0x530(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class APrimalBuff*                           CallFunc_Array_Get_Item_1;                         // 0x540(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x548(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_PreventActorTargeting_ReturnValue;        // 0x549(0x1)(Edit, ConstParm, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5AA5[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x54C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x550(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x551(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BPFastTrace_ReturnValue;                  // 0x552(0x1)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
};

// 0x370 (0x370 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.AccurateSphereCheck
struct ABuff_TekArmor_Gloves_C_AccurateSphereCheck_Params
{
public:
	struct FVector                               EndLocation;                                       // 0x0(0x18)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       SphereRadius;                                      // 0x18(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         IgnoreFriendlies;                                  // 0x20(0x1)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         HitPawnOrStructure;                                // 0x21(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Return_Val;                                        // 0x22(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5ABD[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5ABE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x30(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x48(0x18)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x60(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x68(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_5ABF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x70(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x88(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x90(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x98(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xB0(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0xC8(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0xE0(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0xF8(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	TArray<struct FHitResult>                    CallFunc_VTraceMultiBP_OutHits;                    // 0x110(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_VTraceMultiBP_ReturnValue;                // 0x120(0x1)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5AC0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x124(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FHitResult                            CallFunc_Array_Get_Item;                           // 0x128(0xF0)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x218(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x219(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x21A(0x1)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5AC1[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakHitResult_Time;                      // 0x21C(0x4)(ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x220(0x4)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5AC2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x228(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x240(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x258(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x270(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x288(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x290(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x298(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x2A0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x2A8(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x2B0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x2B4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x2B8(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5AC3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x2C0(0x18)(Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x2D8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x2F0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2F8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_5AC4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x300(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x318(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x330(0x18)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x348(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        CallFunc_VTraceMultiBP_SphereRadius_ImplicitCast;  // 0x360(0x4)(ConstParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5AC5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x368(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Spawn Sound at Fist Location
struct ABuff_TekArmor_Gloves_C_Spawn_Sound_at_Fist_Location_Params
{
public:
	class USoundBase*                            SoundToSpawn;                                      // 0x0(0x8)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       VolumeMultiplier;                                  // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, DuplicateTransient)
	double                                       PitchMultiplier;                                   // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference)
	struct FVector                               CallFunc_Get_Punch_Location_Location;              // 0x18(0x18)(BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x30(0x60)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x118 (0x118 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BuffTickClient
struct ABuff_TekArmor_Gloves_C_BuffTickClient_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_5ACC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UAnimMontage*                          NewChargedAnim;                                    // 0x8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_HasShield_ReturnValue;                    // 0x10(0x1)(Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_CanUseTekAbility_bResult;                 // 0x11(0x1)(Edit, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5ACD[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_TimeSince_ReturnValue;                    // 0x14(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x18(0x1)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted; // 0x19(0x1)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_AreTekPantsEquipped_result;               // 0x1A(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5ACE[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class ABuff_TekArmor_Pants_C*                CallFunc_AreTekPantsEquipped_tekPantsRef;          // 0x20(0x8)(ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsAbilityValid_OutValid;                  // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x29(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_CanUseTekAbility_bResult_1;               // 0x2A(0x1)(Edit, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsPlayerGrounded_result;                  // 0x2B(0x1)(Edit, BlueprintVisible, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5ACF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x30(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player_1;             // 0x38(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class AWeapFists_C*                          K2Node_DynamicCast_AsWeap_Fists;                   // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_5AD0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x50(0x8)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x58(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5AD1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FWeaponAnim                           K2Node_MakeStruct_WeaponAnim;                      // 0x60(0x10)(Edit, Parm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_ArePunchChargeAnimsPlaying_result;        // 0x70(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5AD2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_PlayWeaponAnimation_ReturnValue;          // 0x74(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x78(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5AD3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue_1;            // 0x80(0x8)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_IsPlayerGrounded_result_1;                // 0x88(0x1)(Edit, BlueprintVisible, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Montage_IsPlaying_ReturnValue;            // 0x89(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x8A(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5AD4[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              CallFunc_Get_Ref_Owning_PlayerController_controller; // 0x90(0x8)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UAnimMontage*                          CallFunc_GetOverridenMontage_ReturnValue;          // 0x98(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsPlacingActive_ReturnValue;              // 0xA0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5AD5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_PlayAnimEx_ReturnValue;                   // 0xA4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsMontagePlaying_ReturnValue;             // 0xA8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0xA9(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0xAA(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0xAB(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5AD6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0xB0(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_ScanForRocketFistTargets_anyHit;          // 0xB8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5AD7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_ScanForRocketFistTargets_hitLocation;     // 0xC0(0x18)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class APrimalCharacter*                      CallFunc_ScanForRocketFistTargets_hitPawn;         // 0xD8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE0(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5AD8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerCameraManager*           CallFunc_Get_RefOwningPlayer_Camera_Manager_ref;   // 0xE8(0x8)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0xF0(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0xF1(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_5AD9[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class ABuff_TekArmor_C*                      CallFunc_Get_DefaultTekBuff_ref;                   // 0xF8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsFirstPerson_ReturnValue;                // 0x100(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x101(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x102(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x103(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x104(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Greater_ByteByte_ReturnValue;             // 0x105(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x106(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x107(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x108(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x110(0x8)(Edit, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Get Punch Location
struct ABuff_TekArmor_Gloves_C_Get_Punch_Location_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x18(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x20(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FRotator                              CallFunc_GetControlRotation_ReturnValue;           // 0x38(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x50(0x18)(ExportObject, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x68(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x80(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x98(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
};

// 0x149 (0x149 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.RocketPunchStart
struct ABuff_TekArmor_Gloves_C_RocketPunchStart_Params
{
public:
	struct FVector                               PunchDir;                                          // 0x0(0x18)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               HitLoc;                                            // 0x18(0x18)(Edit, ExportObject, Net, Parm, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x30(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterPlayerController*              CallFunc_Get_Ref_Owning_PlayerController_controller; // 0x38(0x8)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x40(0x18)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_GetControlRotation_ReturnValue;           // 0x58(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x70(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_NotEqual_VectorVector_ReturnValue;        // 0x88(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_VectorVector_ReturnValue_1;      // 0x89(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	uint8                                        Pad_5AE1[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UCharacterMovementComponent*           CallFunc_Get_Ref_Owning_PlayerMovement_movement;   // 0x90(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x98(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5AE3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetTimeToRocketPunchTarget_ReturnValue;   // 0xA0(0x8)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA8(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5AE4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player_1;             // 0xB0(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_ScanForRocketFistTargets_anyHit;          // 0xB8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5AE5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_ScanForRocketFistTargets_hitLocation;     // 0xC0(0x18)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class APrimalCharacter*                      CallFunc_ScanForRocketFistTargets_hitPawn;         // 0xD8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xE0(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0xF8(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x110(0x8)(Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x118(0x1)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_5AE6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x120(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x128(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x130(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x148(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x838 (0x838 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Punch
struct ABuff_TekArmor_Gloves_C_Punch_Params
{
public:
	struct FVector                               CallFunc_GetRelativeCenterOfMass_ReturnValue;      // 0x0(0x18)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FRotator                              CallFunc_GetControlRotation_ReturnValue;           // 0x18(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
	class AShooterPlayerController*              CallFunc_Get_Ref_Owning_PlayerController_controller; // 0x30(0x8)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x38(0x18)(ExportObject, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5B12[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x58(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x70(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x88(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_2;           // 0xA0(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xB8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_5B15[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0xC0(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xC8(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player_1;             // 0xE0(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_GetRelativeCenterOfMass_ReturnValue_1;    // 0xE8(0x18)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player_2;             // 0x100(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x108(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	float                                        CallFunc_GetMeleeDamageModifier_ReturnValue;       // 0x120(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B17[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Get_Punch_Location_Location;              // 0x128(0x18)(BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x140(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x148(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x150(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x158(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x160(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x168(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x16C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FVector                               CallFunc_Get_Punch_Location_Location_1;            // 0x170(0x18)(BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x188(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x1A0(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
	TArray<struct FHitResult>                    CallFunc_VTraceMultiBP_OutHits;                    // 0x1B8(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_VTraceMultiBP_ReturnValue;                // 0x1C8(0x1)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5B18[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x1CC(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1D0(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5B19[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            CallFunc_Array_Get_Item;                           // 0x1D8(0xF0)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x2CC(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x2CD(0x1)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5B1A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakHitResult_Time;                      // 0x2D0(0x4)(ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x2D4(0x4)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x2D8(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x2F0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x308(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x320(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x338(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x340(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x348(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x350(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x358(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x360(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x364(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x368(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5B1F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x370(0x18)(Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x388(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3A0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5B20[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x3A8(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x3C0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x3D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x3E0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_5B21[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector_X;                            // 0x3E8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x3F0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x3F8(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x400(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x418(0x1)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_5B22[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x420(0x18)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x438(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_3;           // 0x440(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Has_Line_Of_SightToActor_result;          // 0x458(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B23[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Normal_ReturnValue_1;                     // 0x460(0x18)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	float                                        CallFunc_ApplyPointDamage_ReturnValue;             // 0x478(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, EditConst, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x47C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Should_Damage_Actor_result;               // 0x480(0x1)(Edit, ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B24[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x484(0x4)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x488(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_5B25[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x48C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x490(0x10)(EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TArray<struct FHitResult>                    CallFunc_SphereTraceMulti_OutHits;                 // 0x4A0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_SphereTraceMulti_ReturnValue;             // 0x4B0(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_5B26[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x4B8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_MakeVector_ReturnValue_2;                 // 0x4C0(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	TArray<struct FHitResult>                    CallFunc_VTraceMultiBP_OutHits_1;                  // 0x4D8(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_VTraceMultiBP_ReturnValue_1;              // 0x4E8(0x1)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_5B27[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x4EC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x4F0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5B28[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            CallFunc_Array_Get_Item_1;                         // 0x4F8(0xF0)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_BreakHitResult_bBlockingHit_1;            // 0x5E8(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x5E9(0x1)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_5B29[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakHitResult_Time_1;                    // 0x5EC(0x4)(ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        CallFunc_BreakHitResult_Distance_1;                // 0x5F0(0x4)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_5B2A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_Location_1;                // 0x5F8(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint_1;             // 0x610(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_BreakHitResult_Normal_1;                  // 0x628(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal_1;            // 0x640(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat_1;                 // 0x658(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class AActor*                                CallFunc_BreakHitResult_HitActor_1;                // 0x660(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent_1;            // 0x668(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FName                                  CallFunc_BreakHitResult_HitBoneName_1;             // 0x670(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FName                                  CallFunc_BreakHitResult_BoneName_1;                // 0x678(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        CallFunc_BreakHitResult_HitItem_1;                 // 0x680(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        CallFunc_BreakHitResult_ElementIndex_1;            // 0x684(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        CallFunc_BreakHitResult_FaceIndex_1;               // 0x688(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_5B2C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_TraceStart_1;              // 0x690(0x18)(Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd_1;                // 0x6A8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x6C0(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
	class UInstancedStaticMeshComponent*         K2Node_DynamicCast_AsInstanced_Static_Mesh_Component; // 0x6D8(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x6E0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_5B2D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_2;      // 0x6E8(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_Normal_ReturnValue_2;                     // 0x700(0x18)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x718(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        CallFunc_ApplyPointDamage_ReturnValue_1;           // 0x71C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, EditConst, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Find_ReturnValue_1;                 // 0x720(0x4)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_5B2E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character_1;           // 0x728(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x730(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x731(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Should_Damage_Actor_result_1;             // 0x732(0x1)(Edit, ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Has_Line_Of_SightToActor_result_1;        // 0x733(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x734(0x1)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	uint8                                        Pad_5B2F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_4;        // 0x738(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	double                                       CallFunc_SelectFloat_ReturnValue_2;                // 0x750(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_3;      // 0x758(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	class APrimalStructure*                      K2Node_DynamicCast_AsPrimal_Structure;             // 0x770(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x778(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
	uint8                                        Pad_5B30[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Normal_ReturnValue_3;                     // 0x780(0x18)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Has_Line_Of_SightToActor_result_2;        // 0x798(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5B31[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x7A0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x7B8(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	class AInstancedFoliageActor*                K2Node_DynamicCast_AsInstanced_Foliage_Actor;      // 0x7D0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x7D8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_5B32[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x7E0(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x7F8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        CallFunc_PlayWorldCameraShake_OuterRadius_ImplicitCast; // 0x800(0x4)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_PlayWorldCameraShake_InnerRadius_ImplicitCast; // 0x804(0x4)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_DealDirectDamage_DamageAmount_ImplicitCast; // 0x808(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_ApplyPointDamage_Impulse_ImplicitCast;    // 0x80C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, SubobjectReference)
	float                                        CallFunc_VTraceMultiBP_SphereRadius_ImplicitCast;  // 0x810(0x4)(ConstParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_SphereTraceMulti_Radius_ImplicitCast;     // 0x814(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_ApplyPointDamage_BaseDamage_ImplicitCast; // 0x818(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, EditConst, SubobjectReference)
	float                                        CallFunc_VTraceMultiBP_SphereRadius_ImplicitCast_1; // 0x81C(0x4)(ConstParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x820(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_ApplyPointDamage_Impulse_ImplicitCast_1;  // 0x828(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, SubobjectReference, Interp)
	float                                        CallFunc_ApplyPointDamage_BaseDamage_ImplicitCast_1; // 0x82C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1; // 0x830(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
};

// 0x1C (0x1C - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.CanUseTekAbility
struct ABuff_TekArmor_Gloves_C_CanUseTekAbility_Params
{
public:
	bool                                         bNotifyIfOutOfElement;                             // 0x0(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bResult;                                           // 0x1(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         RetVal;                                            // 0x2(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_CanUseTekAbility_bResult;                 // 0x3(0x1)(Edit, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted; // 0x4(0x1)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsCharacterHardAttached_ReturnValue;      // 0x5(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x6(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x8(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_CanPhysicallyTekPunch_result;             // 0x9(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B49[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              CallFunc_Get_Ref_Owning_PlayerController_controller; // 0x10(0x8)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsPlacingActive_ReturnValue;              // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x19(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x1A(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x1B(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
};

// 0x11 (0x11 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.SetCastedArmorPieceRef
struct ABuff_TekArmor_Gloves_C_SetCastedArmorPieceRef_Params
{
public:
	class UPrimalItemArmor_Base_Tek_C*           CallFunc_GetRelatedTekArmorRef_tekArmorRef;        // 0x0(0x8)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimalItemArmor_TekGloves_C*          K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Gloves; // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Targeting_K2Node_InputActionEvent_5
struct ABuff_TekArmor_Gloves_C_InpActEvt_Targeting_K2Node_InputActionEvent_5_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Targeting_K2Node_InputActionEvent_4
struct ABuff_TekArmor_Gloves_C_InpActEvt_Targeting_K2Node_InputActionEvent_4_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_AltFire_K2Node_InputActionEvent_3
struct ABuff_TekArmor_Gloves_C_InpActEvt_AltFire_K2Node_InputActionEvent_3_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_AltFire_K2Node_InputActionEvent_2
struct ABuff_TekArmor_Gloves_C_InpActEvt_AltFire_K2Node_InputActionEvent_2_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Fire_K2Node_InputActionEvent_1
struct ABuff_TekArmor_Gloves_C_InpActEvt_Fire_K2Node_InputActionEvent_1_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Fire_K2Node_InputActionEvent_0
struct ABuff_TekArmor_Gloves_C_InpActEvt_Fire_K2Node_InputActionEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_3
struct ABuff_TekArmor_Gloves_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_3_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2
struct ABuff_TekArmor_Gloves_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1
struct ABuff_TekArmor_Gloves_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_0
struct ABuff_TekArmor_Gloves_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x1 (0x1 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Server_SetPunchChargeState
struct ABuff_TekArmor_Gloves_C_Server_SetPunchChargeState_Params
{
public:
	enum class E_TekGlovePunchState              NewPunchState;                                     // 0x0(0x1)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.UpdateClientHasValidRocketPunchTarget
struct ABuff_TekArmor_Gloves_C_UpdateClientHasValidRocketPunchTarget_Params
{
public:
	bool                                         NewHasTarget;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B4F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      NewTargetPawn;                                     // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x28C (0x28C - 0x0)
// Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ExecuteUbergraph_Buff_TekArmor_Gloves
struct ABuff_TekArmor_Gloves_C_ExecuteUbergraph_Buff_TekArmor_Gloves_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x4(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5B7A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FKey                                  K2Node_InputActionEvent_Key_1;                     // 0x8(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp)
	struct FKey                                  K2Node_InputActionEvent_Key;                       // 0x20(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FKey                                  Temp_struct_Variable;                              // 0x38(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FKey                                  K2Node_InputKeyEvent_Key_3;                        // 0x50(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	struct FKey                                  K2Node_InputKeyEvent_Key_2;                        // 0x68(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FKey                                  Temp_struct_Variable_1;                            // 0x80(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FKey                                  K2Node_InputKeyEvent_Key_1;                        // 0x98(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FKey                                  K2Node_InputKeyEvent_Key;                          // 0xB0(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FKey                                  Temp_struct_Variable_2;                            // 0xC8(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_CanUseTekAbility_bResult;                 // 0xE0(0x1)(Edit, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xE1(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xE2(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5B7F[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_TimeSince_ReturnValue;                    // 0xE4(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FKey                                  Temp_struct_Variable_3;                            // 0xE8(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_CanUseTekAbility_bResult_1;               // 0x100(0x1)(Edit, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	enum class E_TekGlovePunchState              K2Node_CustomEvent_newPunchState;                  // 0x101(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Validate_Punch_State_bValidState;         // 0x102(0x1)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x103(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x104(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_CustomEvent_newHasTarget;                   // 0x105(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B80[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      K2Node_CustomEvent_newTargetPawn;                  // 0x108(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x110(0x1)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_5B81[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FKey                                  K2Node_InputActionEvent_Key_4;                     // 0x118(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_AreTekPantsEquipped_result;               // 0x130(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B82[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class ABuff_TekArmor_Pants_C*                CallFunc_AreTekPantsEquipped_tekPantsRef;          // 0x138(0x8)(ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_AreTekPantsEquipped_result_1;             // 0x140(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_5B83[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class ABuff_TekArmor_Pants_C*                CallFunc_AreTekPantsEquipped_tekPantsRef_1;        // 0x148(0x8)(ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	class AWeapFists_C*                          K2Node_DynamicCast_AsWeap_Fists;                   // 0x150(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x158(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_5B84[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AWeapFists_C*                          K2Node_DynamicCast_AsWeap_Fists_1;                 // 0x160(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x168(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_5B85[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AWeapFists_C*                          K2Node_DynamicCast_AsWeap_Fists_2;                 // 0x170(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x178(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5B87[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AWeapFists_C*                          K2Node_DynamicCast_AsWeap_Fists_3;                 // 0x180(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x188(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
	uint8                                        Pad_5B88[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AWeapFists_C*                          K2Node_DynamicCast_AsWeap_Fists_4;                 // 0x190(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x198(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_5B89[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AWeapFists_C*                          K2Node_DynamicCast_AsWeap_Fists_5;                 // 0x1A0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x1A8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_AreTekPantsEquipped_result_2;             // 0x1A9(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5B8A[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class ABuff_TekArmor_Pants_C*                CallFunc_AreTekPantsEquipped_tekPantsRef_2;        // 0x1B0(0x8)(ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_AreTekPantsEquipped_result_3;             // 0x1B8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        Pad_5B8B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class ABuff_TekArmor_Pants_C*                CallFunc_AreTekPantsEquipped_tekPantsRef_3;        // 0x1C0(0x8)(ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x1C8(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class AWeapFists_C*                          K2Node_DynamicCast_AsWeap_Fists_6;                 // 0x1D0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x1D8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1D9(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5B8E[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AWeapFists_C*                          K2Node_DynamicCast_AsWeap_Fists_7;                 // 0x1E0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, EditorOnly)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x1E8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, EditorOnly)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x1E9(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5B90[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FKey                                  Temp_struct_Variable_4;                            // 0x1F0(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x208(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x209(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x20A(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5B92[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FKey                                  K2Node_InputActionEvent_Key_5;                     // 0x210(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
	struct FKey                                  K2Node_InputActionEvent_Key_2;                     // 0x228(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_HasShield_ReturnValue;                    // 0x240(0x1)(Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_HasShield_ReturnValue_1;                  // 0x241(0x1)(Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x242(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x243(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_HasShield_ReturnValue_2;                  // 0x244(0x1)(Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_ShieldActive_ReturnValue;                 // 0x245(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B93[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              CallFunc_Get_Ref_Owning_PlayerController_controller; // 0x248(0x8)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x250(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsPlacingActive_ReturnValue;              // 0x251(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsPlacingActive_ReturnValue_1;            // 0x252(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsPlacingActive_ReturnValue_2;            // 0x253(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsPlacingActive_ReturnValue_3;            // 0x254(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        Pad_5B97[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FKey                                  K2Node_InputActionEvent_Key_3;                     // 0x258(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x270(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_5B98[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x278(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_Delay_Duration_ImplicitCast;              // 0x280(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        CallFunc_Delay_Duration_ImplicitCast_1;            // 0x284(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	float                                        CallFunc_RetriggerableDelay_Duration_ImplicitCast; // 0x288(0x4)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}
}


