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

// 0x260 (0x260 - 0x0)
// Function NinjaLiveFunctions.NinjaLiveFunctions_C.CameraFacing
struct UNinjaLiveFunctions_C_CameraFacing_Params
{
public:
	class USceneComponent*                       InMesh;                                            // 0x0(0x8)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         UseLegacyFacing;                                   // 0x8(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         LockY;                                             // 0x9(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5AFC[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              TraceMeshInitRot;                                  // 0x10(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_5AFD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerCameraManager*                  CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x38(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FRotator                              CallFunc_GetCameraRotation_ReturnValue;            // 0x40(0x18)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x58(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0x70(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x88(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Temp_bool_Variable_1;                              // 0xA0(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_5AFE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              CallFunc_FindLookAtRotation_ReturnValue;           // 0xA8(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakRotator_Roll;                        // 0xC0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0xC4(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0xC8(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5AFF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0xD0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0xE8(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_1;            // 0xF0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x108(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue_1;                // 0x110(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	struct FRotator                              K2Node_Select_Default;                             // 0x128(0x18)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FRotator                              K2Node_Select_Default_1;                           // 0x140(0x18)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x158(0xF0)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x248(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast_1;        // 0x250(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	float                                        CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x258(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_MakeRotator_Roll_ImplicitCast;            // 0x25C(0x4)(BlueprintVisible, Net, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
};

// 0x240 (0x240 - 0x0)
// Function NinjaLiveFunctions.NinjaLiveFunctions_C.RenderTgAcquisitionStatus
struct UNinjaLiveFunctions_C_RenderTgAcquisitionStatus_Params
{
public:
	class UObject*                               SelfRef;                                           // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	int32                                        RT_number_Minus_added;                             // 0x8(0x4)(EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class ESimPrecision_Enum                SimPrecision;                                      // 0xC(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B05[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ResX;                                              // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, SubobjectReference)
	int32                                        ResY;                                              // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         PoolManDetected;                                   // 0x18(0x1)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         HalfRes;                                           // 0x19(0x1)(ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B07[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        NumberOfChannels;                                  // 0x1C(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                Print;                                             // 0x28(0x10)(Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	double                                       MemConsumtion;                                     // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FString                                CallFunc_MakeLiteralString_ReturnValue;            // 0x40(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x50(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x54(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0x58(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5B0A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x60(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x70(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x80(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_MakeLiteralString_ReturnValue_1;          // 0x90(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FString                                CallFunc_MakeLiteralString_ReturnValue_2;          // 0xA0(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0xB0(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Variable;                                 // 0xC0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_5B0C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_MakeLiteralString_ReturnValue_3;          // 0xC8(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	class FString                                CallFunc_MakeLiteralString_ReturnValue_4;          // 0xD8(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	int32                                        Temp_int_Variable_1;                               // 0xE8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_5B0D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_Select_Default;                             // 0xF0(0x10)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x100(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	class FString                                CallFunc_MakeLiteralString_ReturnValue_5;          // 0x110(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	class FString                                CallFunc_MakeLiteralString_ReturnValue_6;          // 0x120(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x130(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	class FString                                CallFunc_MakeLiteralString_ReturnValue_7;          // 0x140(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x150(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x160(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x170(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x180(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x190(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x1A0(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, EditorOnly)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_8;              // 0x1B0(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, EditorOnly)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_9;              // 0x1C0(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, EditorOnly)
	int32                                        Temp_int_Variable_2;                               // 0x1D0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5B0E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_MakeLiteralString_ReturnValue_8;          // 0x1D8(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_10;             // 0x1E8(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, EditorOnly)
	enum class ESimPrecision_Enum                Temp_byte_Variable;                                // 0x1F8(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_5B0F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_SelectString_ReturnValue_1;               // 0x200(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        K2Node_Select_Default_1;                           // 0x210(0x4)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x214(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue_2;            // 0x218(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5B10[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x220(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x228(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x230(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0x238(0x8)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x118 (0x118 - 0x0)
// Function NinjaLiveFunctions.NinjaLiveFunctions_C.AcquireRenderTargetsFromPool
struct UNinjaLiveFunctions_C_AcquireRenderTargetsFromPool_Params
{
public:
	int32                                        Request_0_RGBA__1_RG__2_R_;                        // 0x0(0x4)(Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	int32                                        HostMinusRenderTGMinusListMinusIndex;              // 0x4(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<class FString>                        RenderTargetList;                                  // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	class ANinjaLive_MemoryPoolManager_C*        MemoryPoolManager;                                 // 0x18(0x8)(Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	TMap<class FString, class UTextureRenderTarget2D*> RenderTargetsMapTmp;                               // 0x28(0x50)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TMap<class FString, class UTextureRenderTarget2D*> RenderTargetsMap;                                  // 0x78(0x50)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Array_Get_Item;                           // 0xC8(0x10)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0xD8(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xD9(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5B1B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0xDC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xE0(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        Temp_int_Variable_1;                               // 0xE4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	TArray<struct FRenderTargetListItem>         K2Node_Select_Default;                             // 0xE8(0x10)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xF8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xFC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x100(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x101(0x1)(BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x102(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5B1D[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRenderTargetListItem                 K2Node_MakeStruct_RenderTargetListItem;            // 0x108(0x9)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B1E[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x201 (0x201 - 0x0)
// Function NinjaLiveFunctions.NinjaLiveFunctions_C.TemplateLoader
struct UNinjaLiveFunctions_C_TemplateLoader_Params
{
public:
	class FName                                  TemplateDefinition;                                // 0x0(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UDataTable*                            LoadedDataTable;                                   // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FString                                LoadedDatatablePath;                               // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         LoadFailed;                                        // 0x28(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B33[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               LoadedTemplateObject;                              // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FString                                LoadedTmpFullPath;                                 // 0x38(0x10)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FString                                LoadedTemplateNameOnly;                            // 0x48(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         UsesAbsolutePath;                                  // 0x58(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         InvalidObjectIndicator;                            // 0x59(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         RowMissingIndicator;                               // 0x5A(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B34[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FAssetData>                    K2Node_MakeArray_Array;                            // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x70(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	struct FNinjaPreset                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x80(0x10)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x90(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x91(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5B36[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x98(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	int32                                        CallFunc_Len_ReturnValue;                          // 0xA8(0x4)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_FindSubstring_ReturnValue;                // 0xAC(0x4)(Edit, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_StartsWith_ReturnValue;                   // 0xB0(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B38[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xB4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0xB8(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_LeftChop_ReturnValue;                     // 0xC8(0x10)(BlueprintReadOnly, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0xD8(0x8)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xE0(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5B3A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xE4(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xE8(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5B3B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_RightChop_ReturnValue;                    // 0xF0(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x100(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5B3D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_SelectString_ReturnValue_1;               // 0x108(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x118(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_5B3E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_MakeLiteralString_ReturnValue;            // 0x120(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x130(0x1)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x131(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x132(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x133(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_5B41[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TScriptInterface<class IAssetRegistry>       CallFunc_GetAssetRegistry_ReturnValue;             // 0x138(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x148(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_5B43[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FAssetData>                    CallFunc_GetAssetsByPackageName_OutAssetData;      // 0x150(0x10)(BlueprintReadOnly, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GetAssetsByPackageName_ReturnValue;       // 0x160(0x1)(Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B44[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x164(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x168(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x16C(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_5B46[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FAssetData>                    K2Node_Select_Default;                             // 0x170(0x10)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x180(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5B47[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAssetData                            CallFunc_Array_Get_Item;                           // 0x188(0x68)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1F0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5B48[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetAsset_ReturnValue;                     // 0x1F8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x200(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
};

// 0x78 (0x78 - 0x0)
// Function NinjaLiveFunctions.NinjaLiveFunctions_C.SingleKeyPicker
struct UNinjaLiveFunctions_C_SingleKeyPicker_Params
{
public:
	class UDataTable*                            DataTableIn;                                       // 0x0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FString                                KeyToPick;                                         // 0x8(0x10)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                PickedKeyValue;                                    // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         NotFound;                                          // 0x30(0x1)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         RowNotFound;                                       // 0x31(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B4A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x34(0x8)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3C(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5B4B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FNinjaPreset                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x40(0x10)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x50(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5B4C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_MakeLiteralString_ReturnValue;            // 0x58(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x68(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
};

// 0x33 (0x33 - 0x0)
// Function NinjaLiveFunctions.NinjaLiveFunctions_C.CreateRenderTarget
struct UNinjaLiveFunctions_C_CreateRenderTarget_Params
{
public:
	int32                                        Width;                                             // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst)
	int32                                        Height;                                            // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst)
	enum class ETextureRenderTargetFormat        Format;                                            // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst)
	bool                                         Clamping;                                          // 0x9(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class ETextureGroup                     LODGroup;                                          // 0xA(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference)
	enum class ETextureFilter                    Filter;                                            // 0xB(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config)
	bool                                         ASA_Compute_Material;                              // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B4D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UTextureRenderTarget2D*                RTout;                                             // 0x18(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class ETextureAddress                   Temp_byte_Variable;                                // 0x20(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_5B4E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTextureRenderTarget2D*                CallFunc_CreateRenderTarget2D_ReturnValue;         // 0x28(0x8)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	enum class ETextureAddress                   Temp_byte_Variable_1;                              // 0x30(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable;                                // 0x31(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class ETextureAddress                   K2Node_Select_Default;                             // 0x32(0x1)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x621 (0x621 - 0x0)
// Function NinjaLiveFunctions.NinjaLiveFunctions_C.PresetLoader
struct UNinjaLiveFunctions_C_PresetLoader_Params
{
public:
	class FString                                PresetName;                                        // 0x0(0x10)(BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          AssetPath;                                         // 0x10(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class FName                                  AssetTrimmedName;                                  // 0x20(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         ForcePreferredPreset;                              // 0x28(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B56[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UDataTable*                            PreferredPreset;                                   // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x38(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UDataTable*                            LoadedDataTable;                                   // 0x40(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FString                                LoadedDatatablePath;                               // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TMap<class FString, double>                  PresetMap;                                         // 0x58(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TMap<class FString, double>                  PresetMapTemp;                                     // 0xA8(0x50)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0xF8(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x108(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x118(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x128(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x138(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_5B5A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x140(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
	TArray<struct FAssetData>                    K2Node_MakeArray_Array;                            // 0x150(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x160(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x164(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x168(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5B5B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TSet<struct FTopLevelAssetPath>              Temp_struct_Variable;                              // 0x170(0x50)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	TArray<struct FTopLevelAssetPath>            Temp_struct_Variable_1;                            // 0x1C0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	TSet<class FName>                            K2Node_MakeSet_Set;                                // 0x1D0(0x50)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<class FName>                          K2Node_MakeArray_Array_1;                          // 0x220(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
	TArray<class FName>                          K2Node_MakeArray_Array_2;                          // 0x230(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         Temp_bool_Variable;                                // 0x240(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         Temp_bool_Variable_1;                              // 0x241(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_5B5C[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FSoftObjectPath>               Temp_struct_Variable_2;                            // 0x248(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FARFilter                             CallFunc_MakeARFilter_ReturnValue;                 // 0x258(0x150)(ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TScriptInterface<class IAssetRegistry>       CallFunc_GetAssetRegistry_ReturnValue;             // 0x3A8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x3B8(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	uint8                                        Pad_5B5E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FAssetData>                    CallFunc_GetAssets_OutAssetData;                   // 0x3C0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GetAssets_ReturnValue;                    // 0x3D0(0x1)(DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B5F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3D4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x3D8(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x3DC(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_5B61[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FAssetData>                    K2Node_Select_Default;                             // 0x3E0(0x10)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x3F0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5B62[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAssetData                            CallFunc_Array_Get_Item;                           // 0x3F8(0x68)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x460(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5B63[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetAsset_ReturnValue;                     // 0x468(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UDataTable*                            K2Node_DynamicCast_AsData_Table;                   // 0x470(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x478(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x479(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5B64[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UDataTable*                            K2Node_Select_Default_1;                           // 0x480(0x8)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	struct FAssetData                            CallFunc_CreateAssetData_ReturnValue;              // 0x488(0x68)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x4F0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0x500(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0x508(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FNinjaPreset                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x518(0x10)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x528(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5B66[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_NameToString_ReturnValue_2;          // 0x530(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue;          // 0x540(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x548(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5B67[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x550(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x568(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5B69[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x570(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Replace_ReturnValue;                      // 0x580(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FAssetData                            CallFunc_CreateAssetData_ReturnValue_1;            // 0x590(0x68)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_1;        // 0x5F8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_3;          // 0x600(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x610(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x620(0x1)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x2D8 (0x2D8 - 0x0)
// Function NinjaLiveFunctions.NinjaLiveFunctions_C.TraceOverlap
struct UNinjaLiveFunctions_C_TraceOverlap_Params
{
public:
	struct FVector                               Start;                                             // 0x0(0x18)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	struct FVector                               End;                                               // 0x18(0x18)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	double                                       TracelineOvershoot;                                // 0x30(0x8)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0x38(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_5B72[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class AActor*>                        FluidNinjaLIVEActors;                              // 0x40(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x50(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FLinearColor                          HitUV;                                             // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               TracePosition;                                     // 0x68(0x18)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x80(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x98(0x18)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xB0(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0xC8(0xF0)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x1B8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x1B9(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x1BA(0x1)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5B73[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakHitResult_Time;                      // 0x1BC(0x4)(ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x1C0(0x4)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5B74[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x1C8(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x1E0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x1F8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x210(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x228(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x230(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x238(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x240(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x248(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x250(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x254(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x258(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5B7B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x260(0x18)(Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x278(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x290(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5B7C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             CallFunc_FindCollisionUV_UV;                       // 0x298(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_FindCollisionUV_ReturnValue;              // 0x2A8(0x1)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B7D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Conv_Vector2DToVector_ReturnValue;        // 0x2B0(0x18)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x2C8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x638 (0x638 - 0x0)
// Function NinjaLiveFunctions.NinjaLiveFunctions_C.TraceMouse
struct UNinjaLiveFunctions_C_TraceMouse_Params
{
public:
	class UObject*                               HitComponent;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         TouchSensitive;                                    // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        FingerIndex;                                       // 0x9(0x1)(Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0xA(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_5B9B[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class AActor*>                        FluidNinjaLIVEActors;                              // 0x10(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FLinearColor                          HitUV;                                             // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         SimHitByMouse;                                     // 0x38(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         MouseClickValid;                                   // 0x39(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         TouchValid;                                        // 0x3A(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x3B(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_5B9C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x40(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FHitResult                            CallFunc_GetHitResultUnderCursorByChannel_HitResult; // 0x48(0xF0)(Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GetHitResultUnderCursorByChannel_ReturnValue; // 0x138(0x1)(ExportObject, Net, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B9D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerCameraManager*                  CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x140(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x148(0x1)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5B9E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x150(0x18)(Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FHitResult                            CallFunc_GetHitResultUnderFingerByChannel_HitResult; // 0x168(0xF0)(BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GetHitResultUnderFingerByChannel_ReturnValue; // 0x258(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B9F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            K2Node_Select_Default;                             // 0x260(0xF0)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x350(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x351(0x1)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5BA0[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakHitResult_Time;                      // 0x354(0x4)(ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x358(0x4)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5BA2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x360(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x378(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x390(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x3A8(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x3C0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x3C8(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x3D0(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x3D8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x3E0(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x3E8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x3EC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x3F0(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5BA4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x3F8(0x18)(Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x410(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x428(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5BA5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x430(0xF0)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x520(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x521(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit_1;            // 0x522(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x523(0x1)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        CallFunc_BreakHitResult_Time_1;                    // 0x524(0x4)(ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        CallFunc_BreakHitResult_Distance_1;                // 0x528(0x4)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_5BA6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_Location_1;                // 0x530(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint_1;             // 0x548(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_BreakHitResult_Normal_1;                  // 0x560(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal_1;            // 0x578(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat_1;                 // 0x590(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class AActor*                                CallFunc_BreakHitResult_HitActor_1;                // 0x598(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent_1;            // 0x5A0(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FName                                  CallFunc_BreakHitResult_HitBoneName_1;             // 0x5A8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FName                                  CallFunc_BreakHitResult_BoneName_1;                // 0x5B0(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        CallFunc_BreakHitResult_HitItem_1;                 // 0x5B8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        CallFunc_BreakHitResult_ElementIndex_1;            // 0x5BC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        CallFunc_BreakHitResult_FaceIndex_1;               // 0x5C0(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_5BA7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_TraceStart_1;              // 0x5C8(0x18)(Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd_1;                // 0x5E0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector2D                             CallFunc_FindCollisionUV_UV;                       // 0x5F8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_FindCollisionUV_ReturnValue;              // 0x608(0x1)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x609(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5BA8[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Conv_Vector2DToVector_ReturnValue;        // 0x610(0x18)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x628(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

}
}


