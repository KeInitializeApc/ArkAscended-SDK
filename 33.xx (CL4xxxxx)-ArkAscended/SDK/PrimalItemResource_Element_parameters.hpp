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

// 0x101 (0x101 - 0x0)
// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPServerHandleItemNetExecCommand
struct UPrimalItemResource_Element_C_BPServerHandleItemNetExecCommand_Params
{
public:
	class AShooterPlayerController*              ForPC;                                             // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  CommandName;                                       // 0x8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FBPNetExecParams                      ExecParams;                                        // 0x10(0x78)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x88(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_2C40[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x90(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C43[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CallFunc_GetPlayerCharacter_ReturnValue;           // 0xA0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xA8(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0xC0(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C44[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0xE0(0x18)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_VSize_ReturnValue;                        // 0xF8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x100(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x400 (0x400 - 0x0)
// Function PrimalItemResource_Element.PrimalItemResource_Element_C.FindShapeshifter
struct UPrimalItemResource_Element_C_FindShapeshifter_Params
{
public:
	class APrimalDinoCharacter*                  Shapeshifter;                                      // 0x0(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         RetMounted;                                        // 0x8(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         Mounted;                                           // 0x9(0x1)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2C70[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalDinoCharacter*                  Result;                                            // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C71[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x20(0x78)(Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference)
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams_1;               // 0x98(0x78)(Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x110(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x118(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C72[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x120(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x128(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C73[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x130(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_BPServerHandleNetExecCommand_ReturnValue; // 0x138(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2C74[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              CallFunc_GetControlRotation_ReturnValue;           // 0x140(0x18)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x158(0x18)(Edit, ConstParm, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x170(0x18)(ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FVector                               CallFunc_GetCameraLocation_ReturnValue;            // 0x188(0x18)(ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x1A0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x1B8(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1B9(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C75[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x1C0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x1D8(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C76[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FHitResult>                    CallFunc_VTraceMultiBP_OutHits;                    // 0x1E0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_VTraceMultiBP_ReturnValue;                // 0x1F0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2C77[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            CallFunc_Array_Get_Item;                           // 0x1F8(0xF0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2E8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x2EC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x2ED(0x1)(ExportObject, Net, EditFixedSize, OutParm, Config, SubobjectReference)
	uint8                                        Pad_2C78[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakHitResult_Time;                      // 0x2F0(0x4)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x2F4(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x2F8(0x18)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x310(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x328(0x18)(Edit, ConstParm, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x340(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, Config, SubobjectReference)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x358(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x360(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x368(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x370(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x378(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x380(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x384(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x388(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_2C79[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x390(0x18)(BlueprintVisible, Parm, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x3A8(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3C0(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C7A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x3C8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x3D0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x3D1(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x3D2(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BPServerHandleNetExecCommand_ReturnValue_1; // 0x3D3(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x3D4(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsAlive_ReturnValue;                      // 0x3D5(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3D6(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x3D7(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x3D8(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_IsAlliedWithOtherTeam_ReturnValue;        // 0x3D9(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x3DA(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_BPIsTamed_ReturnValue;                    // 0x3DB(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3DC(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x3DD(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x3DE(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x3DF(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3E0(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3E4(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C7D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3E8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x3EC(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x3ED(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x3EE(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x3EF(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x3F0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x3F1(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x3F2(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_2C7E[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x3F8(0x8)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
};

// 0x139 (0x139 - 0x0)
// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPPreUseItem
struct UPrimalItemResource_Element_C_BPPreUseItem_Params
{
public:
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x0(0x78)(Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x78(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C88[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x80(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x88(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x90(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ENetModeBP                        CallFunc_SwitchNetworkMode_OutNetworkMode;         // 0x91(0x1)(Edit, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x92(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_2C89[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x98(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class APlayerController*                     CallFunc_GetOwnerController_ReturnValue;           // 0xA8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0xB0(0x8)(ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB8(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BPServerHandleNetExecCommand_ReturnValue; // 0xB9(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2C8A[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams_1;               // 0xC0(0x78)(Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BPServerHandleNetExecCommand_ReturnValue_1; // 0x138(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
};

// 0xF2 (0xF2 - 0x0)
// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPCanUse
struct UPrimalItemResource_Element_C_BPCanUse_Params
{
public:
	bool                                         bIgnoreCooldown;                                   // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2C92[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      Res;                                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         Ret;                                               // 0x10(0x1)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2C94[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x22(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_2C95[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x28(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	class APlayerController*                     CallFunc_GetOwnerController_ReturnValue;           // 0x30(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	enum class ENetModeBP                        CallFunc_SwitchNetworkMode_OutNetworkMode;         // 0x38(0x1)(Edit, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2C98[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x40(0x8)(ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x49(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_2C99[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerState*                   K2Node_DynamicCast_AsShooter_Player_State;         // 0x50(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x58(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2C9A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x60(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x70(0x78)(Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference)
	class APrimalDinoCharacter*                  CallFunc_FindShapeshifter_Shapeshifter;            // 0xE8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_FindShapeshifter_RetMounted;              // 0xF0(0x1)(Edit, Net, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xF1(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0x43 (0x43 - 0x0)
// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPSupportUseOntoItem
struct UPrimalItemResource_Element_C_BPSupportUseOntoItem_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         IsValid;                                           // 0x9(0x1)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate)
	uint8                                        Pad_2CAD[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C> K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface; // 0x10(0x10)(Edit, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_DoesImplementInterface_ReturnValue;       // 0x21(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2CAF[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_IGet_Max_Ammo_RetVal;                     // 0x24(0x4)(Edit, ConstParm, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x2C(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2D(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x2E(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2CB0[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItemArmor_Base_Tek_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;   // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2CB2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue_1;          // 0x3C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x40(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x41(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x42(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
};

// 0x32 (0x32 - 0x0)
// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPUsedOntoItem
struct UPrimalItemResource_Element_C_BPUsedOntoItem_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        AdditionalData;                                    // 0x8(0x4)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CB9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItemArmor_Base_Tek_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;   // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CBB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C> K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface; // 0x20(0x10)(Edit, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_DoesImplementInterface_ReturnValue;       // 0x31(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

}
}


