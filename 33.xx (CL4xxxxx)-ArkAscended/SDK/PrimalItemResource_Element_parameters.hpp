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

// 0xF1 (0xF1 - 0x0)
// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPServerHandleItemNetExecCommand
struct UPrimalItemResource_Element_C_BPServerHandleItemNetExecCommand_Params
{
public:
	class AShooterPlayerController*              ForPC;                                             // 0x0(0x8)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  CommandName;                                       // 0x8(0x8)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FBPNetExecParams                      ExecParams;                                        // 0x10(0x68)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x78(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1A8C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x80(0x8)(BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x88(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_1A91[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetPlayerCharacter_ReturnValue;           // 0x90(0x8)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x98(0x18)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0xB0(0x18)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC8(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_1AEC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0xD0(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_VSize_ReturnValue;                        // 0xE8(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0xF0(0x1)(Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x3E0 (0x3E0 - 0x0)
// Function PrimalItemResource_Element.PrimalItemResource_Element_C.FindShapeshifter
struct UPrimalItemResource_Element_C_FindShapeshifter_Params
{
public:
	class APrimalDinoCharacter*                  Shapeshifter;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, EditConst, SubobjectReference)
	bool                                         RetMounted;                                        // 0x8(0x1)(BlueprintVisible, ExportObject, ReturnParm, EditConst, SubobjectReference)
	bool                                         Mounted;                                           // 0x9(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	uint8                                        Pad_1B0D[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalDinoCharacter*                  Result;                                            // 0x10(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1B10[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x20(0x68)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams_1;               // 0x88(0x68)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0xF0(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xF8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_1B14[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x100(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x108(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_1B15[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x110(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_BPServerHandleNetExecCommand_ReturnValue; // 0x118(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, EditConst, SubobjectReference)
	uint8                                        Pad_1B16[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              CallFunc_GetControlRotation_ReturnValue;           // 0x120(0x18)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x138(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x150(0x18)(ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FVector                               CallFunc_GetCameraLocation_ReturnValue;            // 0x168(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x180(0x18)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x198(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x199(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_1B17[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x1A0(0x18)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x1B8(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1B18[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FHitResult>                    CallFunc_VTraceMultiBP_OutHits;                    // 0x1C0(0x10)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_VTraceMultiBP_ReturnValue;                // 0x1D0(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	uint8                                        Pad_1B19[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            CallFunc_Array_Get_Item;                           // 0x1D8(0xF0)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C8(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x2CC(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x2CD(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1B1A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakHitResult_Time;                      // 0x2D0(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x2D4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x2D8(0x18)(ConstParm, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x2F0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x308(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x320(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x338(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x340(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x348(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x350(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x358(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, Transient, EditConst, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x360(0x4)(Edit, ConstParm, ExportObject, ZeroConstructor, Transient, EditConst, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x364(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x368(0x4)(ConstParm, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1B23[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x370(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x388(0x18)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3A0(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_1B24[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x3A8(0x8)(Edit, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x3B0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x3B1(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x3B2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_BPServerHandleNetExecCommand_ReturnValue_1; // 0x3B3(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x3B4(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsAlive_ReturnValue;                      // 0x3B5(0x1)(Edit, ConstParm, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3B6(0x1)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x3B7(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x3B8(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_IsAlliedWithOtherTeam_ReturnValue;        // 0x3B9(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x3BA(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_BPIsTamed_ReturnValue;                    // 0x3BB(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3BC(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x3BD(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x3BE(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x3BF(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3C0(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3C4(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1B29[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x3CC(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x3CD(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x3CE(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x3CF(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x3D0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x3D1(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x3D2(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_1B2B[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x3D8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
};

// 0x119 (0x119 - 0x0)
// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPPreUseItem
struct UPrimalItemResource_Element_C_BPPreUseItem_Params
{
public:
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x0(0x68)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_1B34[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x70(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x78(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class ENetModeBP                        CallFunc_SwitchNetworkMode_OutNetworkMode;         // 0x81(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x82(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_1B37[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x88(0x10)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	class APlayerController*                     CallFunc_GetOwnerController_ReturnValue;           // 0x98(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0xA0(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xA8(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BPServerHandleNetExecCommand_ReturnValue; // 0xA9(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, EditConst, SubobjectReference)
	uint8                                        Pad_1B3A[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams_1;               // 0xB0(0x68)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_BPServerHandleNetExecCommand_ReturnValue_1; // 0x118(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, EditConst, SubobjectReference, Interp)
};

// 0xE2 (0xE2 - 0x0)
// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPCanUse
struct UPrimalItemResource_Element_C_BPCanUse_Params
{
public:
	bool                                         bIgnoreCooldown;                                   // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1B41[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      Res;                                               // 0x8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig)
	bool                                         Ret;                                               // 0x10(0x1)(Edit, ExportObject, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_1B42[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x20(0x1)(BlueprintVisible, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x22(0x1)(Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_1B43[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x28(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class APlayerController*                     CallFunc_GetOwnerController_ReturnValue;           // 0x30(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
	enum class ENetModeBP                        CallFunc_SwitchNetworkMode_OutNetworkMode;         // 0x38(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	uint8                                        Pad_1B45[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x40(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x49(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_1B46[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerState*                   K2Node_DynamicCast_AsShooter_Player_State;         // 0x50(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x58(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_1B47[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x60(0x10)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x70(0x68)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class APrimalDinoCharacter*                  CallFunc_FindShapeshifter_Shapeshifter;            // 0xD8(0x8)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_FindShapeshifter_RetMounted;              // 0xE0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xE1(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
};

// 0x43 (0x43 - 0x0)
// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPSupportUseOntoItem
struct UPrimalItemResource_Element_C_BPSupportUseOntoItem_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         IsValid;                                           // 0x9(0x1)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate)
	uint8                                        Pad_1B4E[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C> K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface; // 0x10(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_DoesImplementInterface_ReturnValue;       // 0x21(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_1B50[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_IGet_Max_Ammo_RetVal;                     // 0x24(0x4)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x28(0x4)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x2C(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2D(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x2E(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_1B51[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItemArmor_Base_Tek_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;   // 0x30(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_1B53[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue_1;          // 0x3C(0x4)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x40(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x41(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x42(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
};

// 0x32 (0x32 - 0x0)
// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPUsedOntoItem
struct UPrimalItemResource_Element_C_BPUsedOntoItem_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        AdditionalData;                                    // 0x8(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B58[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItemArmor_Base_Tek_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;   // 0x10(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_1B5A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C> K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface; // 0x20(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_DoesImplementInterface_ReturnValue;       // 0x31(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

}
}


