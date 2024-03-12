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

// 0x3 (0x3 - 0x0)
// Function TrackBinocularsBuff.TrackBinocularsBuff_C.Handle Depth Of Field
struct ATrackBinocularsBuff_C_Handle_Depth_Of_Field_Params
{
public:
	bool                                         ShouldBeDisabled;                                  // 0x0(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x1(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// Function TrackBinocularsBuff.TrackBinocularsBuff_C.ShouldPPBeActive
struct ATrackBinocularsBuff_C_ShouldPPBeActive_Params
{
public:
	bool                                         ShouldBeActive;                                    // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function TrackBinocularsBuff.TrackBinocularsBuff_C.BPDeactivated
struct ATrackBinocularsBuff_C_BPDeactivated_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlledByPlayer_ReturnValue;  // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function TrackBinocularsBuff.TrackBinocularsBuff_C.UpdateCustomDepth
struct ATrackBinocularsBuff_C_UpdateCustomDepth_Params
{
public:
	class AActor*                                ForActor;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         Enable;                                            // 0x8(0x1)(Edit, ConstParm, ExportObject, Parm, Transient, Config, DisableEditOnInstance)
	uint8                                        Pad_539C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x14(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_539D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class USceneComponent*>               CallFunc_GetAllSceneComponents_OutComponents;      // 0x18(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class USceneComponent*                       CallFunc_Array_Get_Item;                           // 0x28(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_539E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimitiveComponent*                   K2Node_DynamicCast_AsPrimitive_Component;          // 0x38(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x41(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x42(0x1)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_539F[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x44(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x48(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_53A0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x74 (0x74 - 0x0)
// Function TrackBinocularsBuff.TrackBinocularsBuff_C.UpdatePP
struct ATrackBinocularsBuff_C_UpdatePP_Params
{
public:
	bool                                         ForceDisable;                                      // 0x0(0x1)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_ShouldPPBeActive_ShouldBeActive;          // 0x2(0x1)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_53A1[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerCameraManager*           K2Node_DynamicCast_AsShooter_Player_Camera_Manager; // 0x8(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_ShouldPPBeActive_ShouldBeActive_1;        // 0x11(0x1)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x12(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x13(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_53A2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x20(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	class UMaterialInterface*                    K2Node_DynamicCast_AsMaterial_Interface;           // 0x28(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_53A3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x38(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	class UObject*                               CallFunc_GetBlendableFromMIC_ReturnValue;          // 0x40(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x48(0x8)(Edit, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x50(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x51(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x52(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x53(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x54(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_53A4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMaterialInterface*>            K2Node_MakeArray_Array;                            // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_ShouldPPBeActive_ShouldBeActive_2;        // 0x68(0x1)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_53A5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x6C(0x4)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x70(0x4)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
};

// 0x2 (0x2 - 0x0)
// Function TrackBinocularsBuff.TrackBinocularsBuff_C.AllowPostProcessEffect
struct ATrackBinocularsBuff_C_AllowPostProcessEffect_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_ShouldPPBeActive_ShouldBeActive;          // 0x1(0x1)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x724 (0x724 - 0x0)
// Function TrackBinocularsBuff.TrackBinocularsBuff_C.BPGetWaypointsBuff
struct ATrackBinocularsBuff_C_BPGetWaypointsBuff_Params
{
public:
	TArray<struct FPointOfInterestData_ForCompanion> IndicatorsOut;                                     // 0x0(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsWildSlow_ReturnValue;                   // 0x19(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_53A6[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x20(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TArray<struct FPointOfInterestData_ForCompanion> CallFunc_BPGetWaypointsBuff_IndicatorsOut;         // 0x28(0x10)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character_1;           // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_53A7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetHealthPercentage_ReturnValue;          // 0x44(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_53A8[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointOfInterestData                  K2Node_MakeStruct_PointOfInterestData;             // 0x50(0x1E0)(Edit, ConstParm, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FPointOfInterestData_ForCompanion     K2Node_MakeStruct_PointOfInterestData_ForCompanion; // 0x230(0x4E0)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x710(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_53A9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Divide_DoubleFloat_A_ImplicitCast;        // 0x718(0x8)(Edit, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        K2Node_MakeStruct_SecondaryProgressValue_ImplicitCast; // 0x720(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x6 (0x6 - 0x0)
// Function TrackBinocularsBuff.TrackBinocularsBuff_C.TryDeactivateTrackBino
struct ATrackBinocularsBuff_C_TryDeactivateTrackBino_Params
{
public:
	bool                                         RemoveWeaponRef;                                   // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x4(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function TrackBinocularsBuff.TrackBinocularsBuff_C.BPTryMultiUse
struct ATrackBinocularsBuff_C_BPTryMultiUse_Params
{
public:
	class APlayerController*                     ForPC;                                             // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	int32                                        UseIndex;                                          // 0x8(0x4)(Edit, ConstParm, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xD(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BPTryMultiUse_ReturnValue;                // 0xE(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xF(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// Function TrackBinocularsBuff.TrackBinocularsBuff_C.GetAllStatPoints
struct ATrackBinocularsBuff_C_GetAllStatPoints_Params
{
public:
	class UPrimalCharacterStatusComponent*       Self2;                                             // 0x0(0x8)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UPrimalActor*                          Target;                                            // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
	TArray<int32>                                Wild;                                              // 0x10(0x10)(Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Mutations;                                         // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Tamed;                                             // 0x30(0x10)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                LocalTamedPoints;                                  // 0x40(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                LocalMutationPoints;                               // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                LocalStatsPoints;                                  // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Variable;                                 // 0x70(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsShooterCharacter_ReturnValue;           // 0x74(0x1)(Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x75(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x76(0x1)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_53AA[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable_1;                               // 0x78(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	int32                                        CallFunc_GetLevelUpPoints_ReturnValue;             // 0x7C(0x4)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x80(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x84(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x85(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_53AB[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x88(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        CallFunc_GetMutationPoints_ReturnValue;            // 0x8C(0x4)(BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        CallFunc_GetLevelUpPoints_ReturnValue_1;           // 0x90(0x4)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x94(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x98(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_53AC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x9C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0xA0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0xA4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
};

// 0x8 (0x8 - 0x0)
// Function TrackBinocularsBuff.TrackBinocularsBuff_C.ReplicateCharStats
struct ATrackBinocularsBuff_C_ReplicateCharStats_Params
{
public:
	class APrimalCharacter*                      Char;                                              // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// Function TrackBinocularsBuff.TrackBinocularsBuff_C.ClientUpdateStatsChar
struct ATrackBinocularsBuff_C_ClientUpdateStatsChar_Params
{
public:
	struct FCharacterStatusReplicatedBinoculars  Update;                                            // 0x0(0x80)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, EditConst)
	class APrimalCharacter*                      PrimalChar;                                        // 0x80(0x8)(Edit, BlueprintVisible, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function TrackBinocularsBuff.TrackBinocularsBuff_C.BuffTickClient
struct ATrackBinocularsBuff_C_BuffTickClient_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function TrackBinocularsBuff.TrackBinocularsBuff_C.ReceiveEndPlay
struct ATrackBinocularsBuff_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function TrackBinocularsBuff.TrackBinocularsBuff_C.BPSetupForInstigator
struct ATrackBinocularsBuff_C_BPSetupForInstigator_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function TrackBinocularsBuff.TrackBinocularsBuff_C.SetupZoom
struct ATrackBinocularsBuff_C_SetupZoom_Params
{
public:
	bool                                         IsTargeting;                                       // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig)
	uint8                                        Pad_53AD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       ZoomPercent;                                       // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function TrackBinocularsBuff.TrackBinocularsBuff_C.BuffTickServer
struct ATrackBinocularsBuff_C_BuffTickServer_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function TrackBinocularsBuff.TrackBinocularsBuff_C.SetupNewTrackActor
struct ATrackBinocularsBuff_C_SetupNewTrackActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
};

// 0xC (0xC - 0x0)
// Function TrackBinocularsBuff.TrackBinocularsBuff_C.InputDismissPOI_BP
struct ATrackBinocularsBuff_C_InputDismissPOI_BP_Params
{
public:
	class APlayerController*                     ForPC;                                             // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x6F0 (0x6F0 - 0x0)
// Function TrackBinocularsBuff.TrackBinocularsBuff_C.ExecuteUbergraph_TrackBinocularsBuff
struct ATrackBinocularsBuff_C_ExecuteUbergraph_TrackBinocularsBuff_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x8(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x9(0x1)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_53AE[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0xC(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x10(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_53AF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	float                                        K2Node_Event_DeltaTime_1;                          // 0x20(0x4)(Edit, BlueprintVisible, Net, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_53B0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue_1;       // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_53B1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetPlayerViewPoint_Location;              // 0x38(0x18)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FRotator                              CallFunc_GetPlayerViewPoint_Rotation;              // 0x50(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetPlayerCharacter_ReturnValue;           // 0x68(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x70(0x18)(ExportObject, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x88(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	TArray<class AActor*>                        K2Node_MakeArray_Array;                            // 0x90(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA0(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xA1(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_53B2[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetOwnerController_ReturnValue;           // 0xA8(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0xB0(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xB9(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xBA(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0xBB(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0xBC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0xC0(0x1)(Edit, ConstParm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_53B3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                K2Node_Event_ForInstigator;                        // 0xC8(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0xD0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xD8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_53B4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetOwnerController_ReturnValue_1;         // 0xE0(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller_1;  // 0xE8(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xF0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_53B5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalUI*                             CallFunc_Create_ReturnValue;                       // 0xF8(0x8)(Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsLocalPlayerController_ReturnValue;      // 0x100(0x1)(BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_53B6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UBinocularsUI_C*                       K2Node_DynamicCast_AsBinoculars_UI;                // 0x108(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x110(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
	enum class ENetworkModeResult                CallFunc_CanRunCosmeticEvents_OutNetworkMode;      // 0x111(0x1)(BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x112(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_CustomEvent_IsTargeting;                    // 0x113(0x1)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_53B7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       K2Node_CustomEvent_ZoomPercent;                    // 0x118(0x8)(ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        K2Node_Event_DeltaTime;                            // 0x120(0x4)(Edit, BlueprintVisible, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x124(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x125(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_53B8[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                K2Node_CustomEvent_Actor;                          // 0x128(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x130(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_53B9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x138(0x8)(BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x140(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x158(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_Vector_Distance_ReturnValue;              // 0x170(0x8)(Edit, ConstParm, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x178(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x179(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
	uint8                                        Pad_53BB[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x180(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x198(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x1B0(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x1C8(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_53BC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x1D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x1D8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_53BD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalStructure*                      K2Node_DynamicCast_AsPrimal_Structure;             // 0x1E0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x1E8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x1E9(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1EA(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1EB(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1EC(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x1ED(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, EditorOnly)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x1EE(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
	uint8                                        Pad_53BE[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue_2;       // 0x1F0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x1F8(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_53C0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue_1;                // 0x200(0x8)(BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class AWorldSettings*                        CallFunc_K2_GetWorldSettings_ReturnValue;          // 0x208(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class APlayerController*                     CallFunc_GetOwnerController_ReturnValue_2;         // 0x210(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x218(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional, EditorOnly)
	uint8                                        Pad_53C2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller_2;  // 0x220(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x228(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_53C3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APostProcessVolume*                    CallFunc_GetGlobalPostProcessVolume_ReturnValue;   // 0x230(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FCharacterStatusReplicatedBinoculars  K2Node_CustomEvent_Update;                         // 0x238(0x80)(ConstParm, BlueprintVisible, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class APrimalCharacter*                      K2Node_CustomEvent_PrimalCHar;                     // 0x2B8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Get_Item;                           // 0x2C0(0x4)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Get_Item_1;                         // 0x2C4(0x4)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	class APrimalCharacter*                      K2Node_CustomEvent_Char;                           // 0x2C8(0x8)(Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UPrimalCharacterStatusComponent*       CallFunc_GetCharacterStatusComponent_ReturnValue;  // 0x2D0(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        CallFunc_BPGetCurrentStatusValue_ReturnValue;      // 0x2D8(0x4)(Edit, ConstParm, Net, OutParm, EditConst, SubobjectReference)
	float                                        CallFunc_BPGetMaxStatusValue_ReturnValue;          // 0x2DC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_BPGetCurrentStatusValue_ReturnValue_1;    // 0x2E0(0x4)(Edit, ConstParm, Net, OutParm, EditConst, SubobjectReference, Interp)
	float                                        CallFunc_BPGetMaxStatusValue_ReturnValue_1;        // 0x2E4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	float                                        CallFunc_BPGetCurrentStatusValue_ReturnValue_2;    // 0x2E8(0x4)(Edit, ConstParm, Net, OutParm, EditConst, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_BPGetMaxStatusValue_ReturnValue_2;        // 0x2EC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_BPGetCurrentStatusValue_ReturnValue_3;    // 0x2F0(0x4)(Edit, ConstParm, Net, OutParm, EditConst, SubobjectReference, NonTransactional)
	float                                        CallFunc_BPGetMaxStatusValue_ReturnValue_3;        // 0x2F4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	float                                        CallFunc_BPGetMaxStatusValue_ReturnValue_4;        // 0x2F8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	float                                        CallFunc_BPGetMaxStatusValue_ReturnValue_5;        // 0x2FC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
	TArray<int32>                                CallFunc_GetAllStatPoints_Wild;                    // 0x300(0x10)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                CallFunc_GetAllStatPoints_Mutations;               // 0x310(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                CallFunc_GetAllStatPoints_Tamed;                   // 0x320(0x10)(Edit, ConstParm, ExportObject, Net, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FCharacterStatusReplicatedBinoculars  K2Node_MakeStruct_CharacterStatusReplicatedBinoculars; // 0x330(0x80)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x3B0(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x3C8(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x3E0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_Vector_Distance_ReturnValue_1;            // 0x3E8(0x8)(Edit, ConstParm, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x3F0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_53C4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     K2Node_Event_ForPC;                                // 0x3F8(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        K2Node_Event_index;                                // 0x400(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x404(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_53C5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_MakeLiteralDouble_ReturnValue;            // 0x408(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsTimeSince_ReturnValue_1;                // 0x410(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_53C6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x418(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x430(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x448(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x460(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	uint8                                        Pad_53C7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x468(0xF0)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x558(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x559(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x55A(0x1)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_53C8[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakHitResult_Time;                      // 0x55C(0x4)(ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x560(0x4)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_53C9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x568(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x580(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x598(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x5B0(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x5C8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x5D0(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x5D8(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x5E0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x5E8(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x5F0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x5F4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x5F8(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_53CA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x600(0x18)(Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x618(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsShooterCharacter_ReturnValue;           // 0x630(0x1)(Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsPrimalStructure_ReturnValue;            // 0x631(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsPrimalDino_ReturnValue;                 // 0x632(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x633(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable;                                // 0x634(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x635(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_53CB[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                K2Node_Select_Default;                             // 0x638(0x8)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        Temp_int_Variable_1;                               // 0x640(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_53CC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character_1;           // 0x648(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x650(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, EditorOnly)
	uint8                                        Pad_53CD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x654(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x658(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x659(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x65A(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_53CE[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x65C(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_Greater_DoubleDouble_B_ImplicitCast;      // 0x660(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast; // 0x668(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_BPDirectSetCurrentStatusValue_newValue_ImplicitCast; // 0x670(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast; // 0x674(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_BPDirectSetCurrentStatusValue_newValue_ImplicitCast_1; // 0x678(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	float                                        CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_1; // 0x67C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	float                                        CallFunc_BPDirectSetCurrentStatusValue_newValue_ImplicitCast_2; // 0x680(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_2; // 0x684(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_BPDirectSetCurrentStatusValue_newValue_ImplicitCast_3; // 0x688(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	float                                        CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_3; // 0x68C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	float                                        CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_4; // 0x690(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	float                                        CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_5; // 0x694(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
	double                                       K2Node_MakeStruct_CurrentFood_2_DC19EC034FDA37A721EED0B6ABB3E033_ImplicitCast; // 0x698(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       K2Node_MakeStruct_MaxFood_4_A5F4CBDF4439E8A0FBD88A97887CC0E7_ImplicitCast; // 0x6A0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       K2Node_MakeStruct_CurrentOxygen_6_ED78AD80404584553795B181953A9E24_ImplicitCast; // 0x6A8(0x8)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       K2Node_MakeStruct_MaxOxygen_8_8C5113464079DCCEBBF150B3B3508FA9_ImplicitCast; // 0x6B0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       K2Node_MakeStruct_CurrentStamina_10_8264A562485F6EE7FA3AA4967FA66581_ImplicitCast; // 0x6B8(0x8)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       K2Node_MakeStruct_MaxStamina_12_809881BE4D89FF2D364288BF107D01CE_ImplicitCast; // 0x6C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       K2Node_MakeStruct_CurrentWeight_14_DACD05BF45974965209F818EE88F10B7_ImplicitCast; // 0x6C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       K2Node_MakeStruct_MaxWeight_16_0FA5802B4EF85950C2E8C5A90B56BE38_ImplicitCast; // 0x6D0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       K2Node_MakeStruct_MeleeDamage_18_EE908D7D4D1C2F664DE9FAB35B83616B_ImplicitCast; // 0x6D8(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       K2Node_MakeStruct_MovementSpeed_20_E8405D474EDF76F279B1AAAB93A7BC7C_ImplicitCast; // 0x6E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0x6E8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

}
}


