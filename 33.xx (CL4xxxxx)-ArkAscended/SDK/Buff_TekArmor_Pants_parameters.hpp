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

// 0xD (0xD - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ValidateRunningState
struct ABuff_TekArmor_Pants_C_ValidateRunningState_Params
{
public:
	enum class E_TekRunningState                 NewState;                                          // 0x0(0x1)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bStateValid;                                       // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class E_TekRunningState                 MaxRunningState;                                   // 0x2(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_581C[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x4(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x8(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xC(0x1)(BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.IsPlayerUsingJetpack
struct ABuff_TekArmor_Pants_C_IsPlayerUsingJetpack_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	bool                                         CallFunc_IsTekArmorUsingAbility__result;           // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x22 (0x22 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPlayerIgnoreSpeedModifiers
struct ABuff_TekArmor_Pants_C_SetPlayerIgnoreSpeedModifiers_Params
{
public:
	bool                                         NewIgnore;                                         // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsInStatusState_ReturnValue;              // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted; // 0x2(0x1)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_581D[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x8(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x10(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_581E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalCharacterStatusComponent*       CallFunc_GetCharacterStatusComponent_ReturnValue;  // 0x18(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x20(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x21(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.PlayerHasFistsEquipped
struct ABuff_TekArmor_Pants_C_PlayerHasFistsEquipped_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	bool                                         RetVal;                                            // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_581F[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AWeapFists_C*                          K2Node_DynamicCast_AsWeap_Fists;                   // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.IsPlayerGrappled
struct ABuff_TekArmor_Pants_C_IsPlayerGrappled_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BPCheckPreventInput
struct ABuff_TekArmor_Pants_C_BPCheckPreventInput_Params
{
public:
	enum class EPrimalCharacterInputType         InputType;                                         // 0x0(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_PlayerHasFistsEquipped_result;            // 0x2(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x4(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x5(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x6(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x7(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x8(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x9(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0xA(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
	bool                                         CallFunc_IsPlayerGrappled_result;                  // 0xB(0x1)(Edit, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xC(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xD(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0xE(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xF(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x10(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x11(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x12(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x13(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_Greater_ByteByte_ReturnValue;             // 0x14(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue_5;                  // 0x15(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x16(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue_6;                  // 0x17(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
};

// 0x28 (0x28 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerMoveSpeedModifier
struct ABuff_TekArmor_Pants_C_GetPlayerMoveSpeedModifier_Params
{
public:
	double                                       Result;                                            // 0x0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x8(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimalCharacterStatusComponent*       CallFunc_GetCharacterStatusComponent_ReturnValue;  // 0x10(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        CallFunc_GetMovementSpeedModifier_ReturnValue;     // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5820[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       K2Node_FunctionResult_result_ImplicitCast;         // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x24 (0x24 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.OnRep_bCanRunOnWater
struct ABuff_TekArmor_Pants_C_OnRep_bCanRunOnWater_Params
{
public:
	class APrimalCharacter*                      CallFunc_GetDefaultPlayer_ref;                     // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x8(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5821[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalCharacterMovement*              CallFunc_CharacterMovementToPCM_ReturnValue;       // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UPrimalCharacterMovement*              CallFunc_CharacterMovementToPCM_ReturnValue_1;     // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference, Interp)
	float                                        K2Node_VariableSet_WaterSubmergedDepthThreshold_ImplicitCast; // 0x20(0x4)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x54 (0x54 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetRunningOnWater
struct ABuff_TekArmor_Pants_C_SetRunningOnWater_Params
{
public:
	bool                                         IsRunning;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, GlobalConfig)
	uint8                                        Pad_5822[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FWeaponAnim                           K2Node_MakeStruct_WeaponAnim;                      // 0x8(0x10)(Edit, Parm, ZeroConstructor, EditConst, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x18(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x20(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x21(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_5823[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UAnimMontage*                          CallFunc_GetOverridenMontage_ReturnValue;          // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_PlayAnimEx_ReturnValue;                   // 0x30(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5824[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x38(0x8)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue_1;            // 0x40(0x8)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Montage_IsPlaying_ReturnValue;            // 0x48(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Montage_IsPlaying_ReturnValue_1;          // 0x49(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4A(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Montage_IsPlaying_ReturnValue_2;          // 0x4B(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Montage_IsPlaying_ReturnValue_3;          // 0x4C(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x4D(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5825[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_PlayWeaponAnimation_ReturnValue;          // 0x50(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.OnRep_CurrentTekRunState
struct ABuff_TekArmor_Pants_C_OnRep_CurrentTekRunState_Params
{
public:
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x0(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5826[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Get_Default_Player_Run_Speed_Mult_speedMult; // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class APrimalCharacter*                      CallFunc_GetDefaultPlayer_ref;                     // 0x18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x20(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x21(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x22(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_5827[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalCharacterMovement*              CallFunc_CharacterMovementToPCM_ReturnValue;       // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UPrimalCharacterMovement*              CallFunc_CharacterMovementToPCM_ReturnValue_1;     // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference, Interp)
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x38(0x18)(ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x50(0x18)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x68(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x69(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5828[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x70(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	float                                        K2Node_VariableSet_RunningSpeedModifier_ImplicitCast; // 0x88(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        K2Node_VariableSet_RunningSpeedModifier_ImplicitCast_1; // 0x8C(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
};

// 0x51 (0x51 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.AreGlovesEquippedAndActive
struct ABuff_TekArmor_Pants_C_AreGlovesEquippedAndActive_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	uint8                                        Pad_5829[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class ABuff_TekArmor_Gloves_C*               GlovesRef;                                         // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class ABuff_TekArmor_Gloves_C*               Ref;                                               // 0x10(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         RetVal;                                            // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_582A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           CallFunc_GetEquippedItemOfType_ReturnValue;        // 0x20(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimalItemArmor_TekGloves_C*          K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Gloves; // 0x28(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_582B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff; // 0x38(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class APrimalBuff*                           CallFunc_GetBuff_ReturnValue;                      // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class ABuff_TekArmor_Gloves_C*               K2Node_DynamicCast_AsBuff_Tek_Armor_Gloves;        // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
};

// 0x20 (0x20 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Player Max Tek Run Velocity
struct ABuff_TekArmor_Pants_C_Get_Player_Max_Tek_Run_Velocity_Params
{
public:
	double                                       MaxSpeed;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x8(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x10(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x18(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
};

// 0x64 (0x64 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetBuffPostprocessIntensity
struct ABuff_TekArmor_Pants_C_GetBuffPostprocessIntensity_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_5830[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CurrentIntensity;                                  // 0x8(0x8)(Edit, ConstParm, ExportObject, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_ByteByte_ReturnValue;             // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5831[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x18(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	class UPrimalItem*                           CallFunc_GetEquippedItemOfType_ReturnValue;        // 0x20(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimalItemArmor_TekGloves_C*          K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Gloves; // 0x28(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_5834[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff; // 0x38(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class APrimalBuff*                           CallFunc_GetBuff_ReturnValue;                      // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class ABuff_TekArmor_Gloves_C*               K2Node_DynamicCast_AsBuff_Tek_Armor_Gloves;        // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x51(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5836[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x58(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	float                                        K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x60(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CanStartTekRun
struct ABuff_TekArmor_Pants_C_CanStartTekRun_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	bool                                         RetVal;                                            // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_583C[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterGameState*                     K2Node_DynamicCast_AsShooter_Game_State;           // 0x10(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsPlayerInWaterVolume_result;             // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_583D[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_IsPlayerInWaterVolume_waterVolumeTopZ;    // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x28(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsTekArmorUsingAbility__result;           // 0x29(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsPlayerGrounded_result;                  // 0x2A(0x1)(Edit, BlueprintVisible, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2B(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2C(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2D(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x2E(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_CanUseTekAbility_bResult;                 // 0x2F(0x1)(Edit, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.NetSetRunningSpeedModifier
struct ABuff_TekArmor_Pants_C_NetSetRunningSpeedModifier_Params
{
public:
	double                                       NewModifier;                                       // 0x0(0x8)(Edit, ConstParm, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        K2Node_VariableSet_RunningSpeedModifier_ImplicitCast; // 0x8(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x1EC (0x1EC - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.RunDamageActor
struct ABuff_TekArmor_Pants_C_RunDamageActor_Params
{
public:
	class AActor*                                HitActor;                                          // 0x0(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         DidRebound;                                        // 0x8(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         RetRebounded;                                      // 0x9(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5840[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_5841[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalStructure*                      K2Node_DynamicCast_AsPrimal_Structure;             // 0x20(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_5842[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x30(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_5843[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x50(0x60)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xB0(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Should_Damage_Actor_result;               // 0xB1(0x1)(Edit, ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5844[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AStructureBaseBP_C*                    K2Node_DynamicCast_AsStructure_Base_BP;            // 0xB8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xC0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0xC1(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5845[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetModifiedForward_newForward;            // 0xC8(0x18)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_1;              // 0xE0(0x60)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_RunDamageActor_DidRebound;                // 0x140(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5846[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x148(0x18)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x160(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x178(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x190(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x1A8(0x1)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5847[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_CalculateDeflectingImpulse_ReturnValue;   // 0x1B0(0x18)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x1C8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	float                                        CallFunc_ApplyDamage_ReturnValue;                  // 0x1D0(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5848[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x1D8(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       K2Node_VariableSet_TekRunDamage_current_ImplicitCast; // 0x1E0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_ApplyDamage_BaseDamage_ImplicitCast;      // 0x1E8(0x4)(BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.NetSetTekRunningState
struct ABuff_TekArmor_Pants_C_NetSetTekRunningState_Params
{
public:
	enum class E_TekRunningState                 NewState;                                          // 0x0(0x1)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x5(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x6(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_584D[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x8(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimalCharacterStatusComponent*       CallFunc_GetCharacterStatusComponent_ReturnValue;  // 0x10(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class ABuff_TekArmor_C*                      CallFunc_Get_DefaultTekBuff_ref;                   // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UPrimalCharacterStatusComponent*       CallFunc_GetCharacterStatusComponent_ReturnValue_1; // 0x20(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	float                                        K2Node_VariableSet_BuffTickServerMaxTime_ImplicitCast; // 0x28(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        K2Node_VariableSet_BuffTickServerMinTime_ImplicitCast; // 0x2C(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetDustParticlesActive
struct ABuff_TekArmor_Pants_C_SetDustParticlesActive_Params
{
public:
	bool                                         NewActive;                                         // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x1(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_584F[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_SetFloatParameter_Param_ImplicitCast;     // 0x4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.UpdateLocalVarsByState
struct ABuff_TekArmor_Pants_C_UpdateLocalVarsByState_Params
{
public:
	enum class E_TekRunningState                 NewState;                                          // 0x0(0x1)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5851[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_MakeLiteralString_ReturnValue;            // 0x8(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Can_Element_Decrease_CanDecrease;         // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x19(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_5852[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x20(0x18)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_MakeRotFromX_ReturnValue;                 // 0x38(0x18)(Edit, BlueprintVisible, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x1D (0x1D - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.LocalSetTekRunningState
struct ABuff_TekArmor_Pants_C_LocalSetTekRunningState_Params
{
public:
	enum class E_TekRunningState                 NewState;                                          // 0x0(0x1)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5853[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_MakeLiteralString_ReturnValue;            // 0x8(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Can_Element_Decrease_CanDecrease;         // 0x19(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1A(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Can_Element_Decrease_CanDecrease_1;       // 0x1B(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x1C(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
};

// 0x360 (0x360 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BuffTickServer
struct ABuff_TekArmor_Pants_C_BuffTickServer_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_5855[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ForwardVector;                                     // 0x8(0x18)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_PlayerHasFistsEquipped_result;            // 0x20(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted; // 0x21(0x1)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted_1; // 0x22(0x1)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted_2; // 0x23(0x1)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsInStatusState_ReturnValue;              // 0x24(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5857[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetPlayerMaxTekRunVelocity_Pure_maxSpeed; // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x30(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsPlayerInWaterVolume_result;             // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5858[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_IsPlayerInWaterVolume_waterVolumeTopZ;    // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x48(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x49(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5859[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x50(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x58(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsSubmerged_ReturnValue;                  // 0x70(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_585B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector_X;                            // 0x78(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x80(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x88(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x90(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x91(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x92(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x93(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x94(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x95(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_585E[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player_1;             // 0x98(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0xA0(0x18)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0xB8(0x18)(ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0xD0(0x18)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_X_1;                          // 0xE8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Y_1;                          // 0xF0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Z_1;                          // 0xF8(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_Dot_VectorVector_ReturnValue;             // 0x100(0x8)(Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x108(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x120(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5860[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Dot_VectorVector_ReturnValue_1;           // 0x128(0x8)(Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x130(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5861[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player_2;             // 0x138(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x140(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5862[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetVelocity_ReturnValue_1;                // 0x148(0x18)(ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x160(0x8)(Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FVector                               CallFunc_ClampVectorSize_ReturnValue;              // 0x168(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x180(0x1)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_5864[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Normal_ReturnValue_1;                     // 0x188(0x18)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x1A0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5865[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue_1;      // 0x1A8(0x18)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Dot_VectorVector_ReturnValue_2;           // 0x1C0(0x8)(Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x1C8(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x1E0(0x1)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_IsPlayerGrounded_result;                  // 0x1E1(0x1)(Edit, BlueprintVisible, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5868[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetPlayerMaxTekRunVelocity_Pure_maxSpeed_1; // 0x1E8(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x1F0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	float                                        CallFunc_TimeSince_ReturnValue;                    // 0x1F8(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5869[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x200(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2;  // 0x208(0x1)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x209(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_586A[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue_2;      // 0x210(0x18)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsTekArmorUsingAbility__result;           // 0x228(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_586B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetPlayerMaxTekRunVelocity_Pure_maxSpeed_2; // 0x230(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x238(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_586C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x240(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x248(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x249(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_586D[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x250(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x258(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x259(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x25A(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x25B(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x25C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_Can_Element_Decrease_CanDecrease;         // 0x25D(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x25E(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x25F(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_4;      // 0x260(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, NonTransactional)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x268(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_5;      // 0x280(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp, NonTransactional)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x288(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_586E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x290(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue_3;      // 0x2A8(0x18)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	struct FVector                               CallFunc_GetActorRightVector_ReturnValue;          // 0x2C0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x2D8(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x2F0(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x308(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_Normal_ReturnValue_2;                     // 0x320(0x18)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_Dot_VectorVector_ReturnValue_3;           // 0x338(0x8)(Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	double                                       CallFunc_Abs_ReturnValue;                          // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_2;          // 0x348(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3;  // 0x349(0x1)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x34A(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_586F[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x350(0x8)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x358(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.UpdatePlayerControlRotation
struct ABuff_TekArmor_Pants_C_UpdatePlayerControlRotation_Params
{
public:
	double                                       DeltaSeconds;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x24 (0x24 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BPDeactivated
struct ABuff_TekArmor_Pants_C_BPDeactivated_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class APrimalCharacter*                      CallFunc_GetDefaultPlayer_ref;                     // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_Get_Default_Player_Run_Speed_Mult_speedMult; // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UPrimalCharacterMovement*              CallFunc_CharacterMovementToPCM_ReturnValue;       // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        K2Node_VariableSet_RunningSpeedModifier_ImplicitCast; // 0x20(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerTekRunVelocityRatio
struct ABuff_TekArmor_Pants_C_GetPlayerTekRunVelocityRatio_Params
{
public:
	double                                       Ratio;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config)
	double                                       CallFunc_GetPlayerMaxTekRunVelocity_Pure_maxSpeed; // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Player MaxRunVelocity
struct ABuff_TekArmor_Pants_C_Get_Player_MaxRunVelocity_Params
{
public:
	double                                       MaxSpeed;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	double                                       CallFunc_Get_Default_Player_Run_Speed_Mult_speedMult; // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UPrimalCharacterStatusComponent*       CallFunc_GetCharacterStatusComponent_ReturnValue;  // 0x10(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        CallFunc_GetMovementSpeedModifier_ReturnValue;     // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5871[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x20(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x28(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x30(0x8)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x38(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
};

// 0xAC (0xAC - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.MaintainFullSpeed
struct ABuff_TekArmor_Pants_C_MaintainFullSpeed_Params
{
public:
	bool                                         bUsePlayerForward;                                 // 0x0(0x1)(EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5872[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OverrideDirection;                                 // 0x8(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         WasMaintained;                                     // 0x20(0x1)(Edit, ConstParm, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         RetVal;                                            // 0x21(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5873[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               NewDirection;                                      // 0x28(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x40(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5874[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetPlayerMaxTekRunVelocity_Pure_maxSpeed; // 0x48(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x50(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x58(0x18)(ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x70(0x18)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x88(0x18)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_Dot_VectorVector_ReturnValue;             // 0xA0(0x8)(Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0xA8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0xA9(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xAA(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0xAB(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
};

// 0x10 (0x10 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerMaxTekRunVelocity_Pure
struct ABuff_TekArmor_Pants_C_GetPlayerMaxTekRunVelocity_Pure_Params
{
public:
	double                                       MaxSpeed;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	double                                       CallFunc_Get_Player_Max_Tek_Run_Velocity_maxSpeed; // 0x8(0x8)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.StoreCurrentVelocityLength
struct ABuff_TekArmor_Pants_C_StoreCurrentVelocityLength_Params
{
public:
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x0(0x18)(ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x18(0x18)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Dot_VectorVector_ReturnValue;             // 0x30(0x8)(Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetChargeStartVariables
struct ABuff_TekArmor_Pants_C_SetChargeStartVariables_Params
{
public:
	bool                                         CallFunc_NotEqual_VectorVector_ReturnValue;        // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_5875[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x8(0x18)(ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x20(0x18)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x38(0x8)(Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Dot_VectorVector_ReturnValue;             // 0x40(0x8)(Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_GetPlayerMaxTekRunVelocity_Pure_maxSpeed; // 0x48(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x50(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5876[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x58(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x60(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Default Player Run Speed Mult
struct ABuff_TekArmor_Pants_C_Get_Default_Player_Run_Speed_Mult_Params
{
public:
	double                                       SpeedMult;                                         // 0x0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class APrimalCharacter*                      CallFunc_GetDefaultPlayer_ref;                     // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_GetRunningSpeedModifier_ReturnValue;      // 0x10(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5877[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       K2Node_FunctionResult_speedMult_ImplicitCast;      // 0x18(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Tick Update Tek Run
struct ABuff_TekArmor_Pants_C_Tick_Update_Tek_Run_Params
{
public:
	double                                       DeltaSeconds;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.RedirectPlayerVelocity
struct ABuff_TekArmor_Pants_C_RedirectPlayerVelocity_Params
{
public:
	struct FVector                               NewForward;                                        // 0x0(0x18)(ConstParm, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x18(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_GetPlayerMaxTekRunVelocity_Pure_maxSpeed; // 0x20(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x28(0x18)(ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x40(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_X;                            // 0x58(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x60(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x68(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x70(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x88(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
};

// 0x560 (0x560 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BuffTickClient
struct ABuff_TekArmor_Pants_C_BuffTickClient_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_5878[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CurrentFootOffset;                                 // 0x8(0x18)(Edit, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsAbilityValid_OutValid;                  // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsPlayerInWaterVolume_result;             // 0x21(0x1)(BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5879[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_IsPlayerInWaterVolume_waterVolumeTopZ;    // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x30(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x38(0x18)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsPlayerUsingJetpack_result;              // 0x50(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x51(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_587A[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player_1;             // 0x58(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_GetPlayerMaxTekRunVelocity_Pure_maxSpeed; // 0x60(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue_1;      // 0x68(0x18)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x80(0x18)(ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x98(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_587B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Dot_VectorVector_ReturnValue;             // 0xA0(0x8)(Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0xA8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsFirstPerson_ReturnValue;                // 0xB0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_587C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FClamp_ReturnValue;                       // 0xB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xC0(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0xC1(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_587D[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0xC8(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0xD0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0xD8(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsTekArmorUsingAbility__result;           // 0xE0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_587E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0xE8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xF0(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_587F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xF8(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x110(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	float                                        CallFunc_TimeSince_ReturnValue;                    // 0x118(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x11C(0x1)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x11D(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_5880[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue_1;       // 0x120(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue_2;       // 0x128(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_TimeSince_ReturnValue_1;                  // 0x130(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x134(0x1)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x135(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5881[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x138(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	TArray<enum class EObjectTypeQuery>          K2Node_MakeArray_Array;                            // 0x150(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetActorBounds_Origin;                    // 0x160(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetActorBounds_BoxExtent;                 // 0x178(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_X;                            // 0x190(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x198(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x1A0(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_GetActorRightVector_ReturnValue;          // 0x1A8(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	TArray<class AActor*>                        K2Node_MakeArray_Array_1;                          // 0x1C0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x1D0(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x1E8(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_SelectVector_ReturnValue;                 // 0x200(0x18)(Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_X_1;                          // 0x218(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x220(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x228(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x230(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x248(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_X_2;                          // 0x260(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_BreakVector_Y_2;                          // 0x268(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_BreakVector_Z_2;                          // 0x270(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_BreakVector_X_3;                          // 0x278(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
	double                                       CallFunc_BreakVector_Y_3;                          // 0x280(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
	double                                       CallFunc_BreakVector_Z_3;                          // 0x288(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x290(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x298(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2;  // 0x2A0(0x1)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3;  // 0x2A1(0x1)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
	uint8                                        Pad_5882[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x2A8(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_2;           // 0x2C0(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x2C8(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x2E0(0x1)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5883[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_2;      // 0x2F0(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue_4;  // 0x2F8(0x1)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_5884[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_3;           // 0x300(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
	struct FHitResult                            CallFunc_LineTraceSingleForObjects_OutHit;         // 0x308(0xF0)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x3F8(0x1)(ConstParm, ExportObject, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0x3F9(0x1)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3FA(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x3FB(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x3FC(0x1)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5885[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakHitResult_Time;                      // 0x400(0x4)(ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x404(0x4)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x408(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x420(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x438(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x450(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x468(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x470(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x478(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x480(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x488(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x490(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x494(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x498(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5886[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x4A0(0x18)(Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x4B8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x4D0(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5887[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APhysicsVolume*                        K2Node_DynamicCast_AsPhysics_Volume;               // 0x4D8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x4E0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x4E1(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x4E2(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_CanStartTekRun_result;                    // 0x4E3(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x4E4(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x4E5(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_ByteByte_ReturnValue;             // 0x4E6(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x4E7(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Greater_ByteByte_ReturnValue_1;           // 0x4E8(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x4E9(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x4EA(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x4EB(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_ByteByte_ReturnValue_2;           // 0x4EC(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5888[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              CallFunc_GetControlRotation_ReturnValue;           // 0x4F0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsPlayerGrounded_result;                  // 0x508(0x1)(Edit, BlueprintVisible, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5889[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              CallFunc_RInterpTo_ReturnValue;                    // 0x510(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class AShooterPlayerCameraManager*           CallFunc_Get_RefOwningPlayer_Camera_Manager_ref;   // 0x528(0x8)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x530(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x531(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0x532(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x533(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x534(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_588A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Client_Consume_Element_After_Time_deltaTime_ImplicitCast; // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x540(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1; // 0x548(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	float                                        CallFunc_RInterpTo_InterpSpeed_ImplicitCast;       // 0x550(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_588B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast;   // 0x558(0x8)(ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPreventEquipWeapons
struct ABuff_TekArmor_Pants_C_SetPreventEquipWeapons_Params
{
public:
	bool                                         Prevent;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CalculateDeflectingImpulse
struct ABuff_TekArmor_Pants_C_CalculateDeflectingImpulse_Params
{
public:
	class AActor*                                TargetCharacter;                                   // 0x0(0x8)(ConstParm, ExportObject, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	double                                       Impulse;                                           // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x28(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_GetActorRightVector_ReturnValue;          // 0x40(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x58(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x70(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_Dot_VectorVector_ReturnValue;             // 0x88(0x8)(Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x90(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0xA8(0x18)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xC0(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0xD8(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
};

// 0x8 (0x8 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPlayerRunSpeed
struct ABuff_TekArmor_Pants_C_SetPlayerRunSpeed_Params
{
public:
	double                                       NewSpeed;                                          // 0x0(0x8)(Edit, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x578 (0x578 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Trace and Damage ForwardPawns
struct ABuff_TekArmor_Pants_C_Trace_and_Damage_ForwardPawns_Params
{
public:
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x20(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x28(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x40(0x18)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	TArray<class AActor*>                        K2Node_MakeArray_Array;                            // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x68(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x80(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x98(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_588C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xA0(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0xB8(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0xD0(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xE8(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x100(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	TArray<struct FHitResult>                    CallFunc_VTraceMultiBP_OutHits;                    // 0x118(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_VTraceMultiBP_ReturnValue;                // 0x128(0x1)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_588D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            CallFunc_BoxTraceSingle_OutHit;                    // 0x130(0xF0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BoxTraceSingle_ReturnValue;               // 0x220(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_588E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            CallFunc_Array_Get_Item;                           // 0x228(0xF0)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x318(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x31C(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x31D(0x1)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_588F[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakHitResult_Time;                      // 0x320(0x4)(ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x324(0x4)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x328(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x340(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x358(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x370(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x388(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x390(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x398(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x3A0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x3A8(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x3B0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x3B4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x3B8(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5890[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x3C0(0x18)(Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x3D8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3F0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5891[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x3F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x400(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_Should_Damage_Actor_result;               // 0x401(0x1)(Edit, ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5892[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x404(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x408(0x1)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5893[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            CallFunc_VTraceSingleBP_OutHit;                    // 0x410(0xF0)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_VTraceSingleBP_ReturnValue;               // 0x500(0x1)(ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x501(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5894[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x508(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x520(0x18)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x538(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        CallFunc_ApplyPointDamage_ReturnValue;             // 0x550(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, EditConst, SubobjectReference)
	float                                        CallFunc_ApplyPointDamage_BaseDamage_ImplicitCast; // 0x554(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, EditConst, SubobjectReference)
	float                                        CallFunc_ApplyPointDamage_Impulse_ImplicitCast;    // 0x558(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, SubobjectReference)
	uint8                                        Pad_5895[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_MakeVector_Y_ImplicitCast;                // 0x560(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_MakeVector_X_ImplicitCast;                // 0x568(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_MakeVector_Z_ImplicitCast;                // 0x570(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetModifiedForward
struct ABuff_TekArmor_Pants_C_GetModifiedForward_Params
{
public:
	double                                       ForwardScale;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               AdditionalOffset;                                  // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Net, Transient, Config, SubobjectReference)
	struct FVector                               NewForward;                                        // 0x20(0x18)(ConstParm, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x38(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x50(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x68(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x80(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x98(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
};

// 0x4F8 (0x4F8 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Trace And Damage Forward StationaryActors
struct ABuff_TekArmor_Pants_C_Trace_And_Damage_Forward_StationaryActors_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_5896[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x8(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x10(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	class AShooterPlayerController*              CallFunc_Get_Ref_Owning_PlayerController_controller; // 0x28(0x8)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5897[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCharacterMovementComponent*           CallFunc_Get_Ref_Owning_PlayerMovement_movement;   // 0x38(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x40(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x41(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x42(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5898[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x48(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x50(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5899[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetActorRightVector_ReturnValue;          // 0x58(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x70(0x18)(ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	TArray<class AActor*>                        K2Node_MakeArray_Array;                            // 0x88(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x98(0x18)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0xB0(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0xC8(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0xE0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0xE8(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0xF0(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xF8(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x110(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x118(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_589A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x120(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x138(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x150(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x168(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_589B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            CallFunc_BoxTraceSingle_OutHit;                    // 0x170(0xF0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BoxTraceSingle_ReturnValue;               // 0x260(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_589C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FHitResult>                    CallFunc_VTraceMultiBP_OutHits;                    // 0x268(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_VTraceMultiBP_ReturnValue;                // 0x278(0x1)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_589D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            CallFunc_Array_Get_Item;                           // 0x280(0xF0)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x370(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x374(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x375(0x1)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_589E[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakHitResult_Time;                      // 0x378(0x4)(ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x37C(0x4)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x380(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x398(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x3B0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x3C8(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x3E0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x3E8(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x3F0(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x3F8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x400(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x408(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x40C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x410(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_589F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x418(0x18)(Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x430(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x448(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_58A0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UInstancedStaticMeshComponent*         K2Node_DynamicCast_AsInstanced_Static_Mesh_Component; // 0x450(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x458(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x459(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_58A1[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AInstancedFoliageActor*                K2Node_DynamicCast_AsInstanced_Foliage_Actor;      // 0x460(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x468(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_58A2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalStructure*                      K2Node_DynamicCast_AsPrimal_Structure;             // 0x470(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x478(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_58A3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Cross_VectorVector_ReturnValue;           // 0x480(0x18)(BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_RunDamageActor_DidRebound;                // 0x498(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_MaintainFullSpeed_wasMaintained;          // 0x499(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_58A4[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Dot_VectorVector_ReturnValue;             // 0x4A0(0x8)(Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x4A8(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x4C0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_58A5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_VSize_ReturnValue;                        // 0x4C8(0x8)(Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x4D0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_58A6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_MakeVector_Y_ImplicitCast;                // 0x4D8(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_MakeVector_X_ImplicitCast;                // 0x4E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x4E8(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x4F0(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
};

// 0x20 (0x20 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CalculateForwardRelativeToSpeed
struct ABuff_TekArmor_Pants_C_CalculateForwardRelativeToSpeed_Params
{
public:
	double                                       DeltaSeconds;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               ForwardVector;                                     // 0x8(0x18)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CanUseTekAbility
struct ABuff_TekArmor_Pants_C_CanUseTekAbility_Params
{
public:
	bool                                         bNotifyIfOutOfElement;                             // 0x0(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bResult;                                           // 0x1(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         RetVal;                                            // 0x2(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_CanUseTekAbility_bResult;                 // 0x3(0x1)(Edit, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_58A7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              CallFunc_Get_Ref_Owning_PlayerController_controller; // 0x8(0x8)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsCharacterHardAttached_ReturnValue;      // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsPlacingActive_ReturnValue;              // 0x12(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x13(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_58A8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x18(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsSubmerged_ReturnValue;                  // 0x20(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x21(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x22(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x23(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x24(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_IsPlayerGrappled_result;                  // 0x25(0x1)(Edit, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_6;                // 0x26(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x27(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_7;                // 0x29(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2A(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x2B(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsTekArmorUsingAbility__result;           // 0x2C(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x2D(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Not_PreBool_ReturnValue_8;                // 0x2E(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x2F(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
};

// 0x11 (0x11 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetCastedArmorPieceRef
struct ABuff_TekArmor_Pants_C_SetCastedArmorPieceRef_Params
{
public:
	class UPrimalItemArmor_Base_Tek_C*           CallFunc_GetRelatedTekArmorRef_tekArmorRef;        // 0x0(0x8)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimalItemArmor_TekPants_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Pants;  // 0x8(0x8)(ExportObject, Net, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InpActEvt_AltFire_K2Node_InputActionEvent_1
struct ABuff_TekArmor_Pants_C_InpActEvt_AltFire_K2Node_InputActionEvent_1_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InpActEvt_AltFire_K2Node_InputActionEvent_0
struct ABuff_TekArmor_Pants_C_InpActEvt_AltFire_K2Node_InputActionEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x1 (0x1 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Server_SetTekRunningState
struct ABuff_TekArmor_Pants_C_Server_SetTekRunningState_Params
{
public:
	enum class E_TekRunningState                 NewRunState;                                       // 0x0(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Client_SyncRunModifier
struct ABuff_TekArmor_Pants_C_Client_SyncRunModifier_Params
{
public:
	double                                       NewModifier;                                       // 0x0(0x8)(Edit, ConstParm, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ExecuteUbergraph_Buff_TekArmor_Pants
struct ABuff_TekArmor_Pants_C_ExecuteUbergraph_Buff_TekArmor_Pants_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_58A9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FKey                                  K2Node_InputActionEvent_Key_1;                     // 0x8(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp)
	struct FKey                                  K2Node_InputActionEvent_Key;                       // 0x20(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FKey                                  Temp_struct_Variable;                              // 0x38(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	enum class E_TekRunningState                 K2Node_CustomEvent_newRunState;                    // 0x50(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_ValidateRunningState_bStateValid;         // 0x51(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_58AA[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       K2Node_CustomEvent_newModifier;                    // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_CanStartTekRun_result;                    // 0x60(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_AreGlovesEquippedAndActive_result;        // 0x61(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_58AB[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class ABuff_TekArmor_Gloves_C*               CallFunc_AreGlovesEquippedAndActive_glovesRef;     // 0x68(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsPlayerGrappled_result;                  // 0x70(0x1)(Edit, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x71(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_PlayerHasFistsEquipped_result;            // 0x72(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_58AC[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x78(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x80(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_58AD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_VariableSet_RunningSpeedModifier_ImplicitCast; // 0x84(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

}
}


