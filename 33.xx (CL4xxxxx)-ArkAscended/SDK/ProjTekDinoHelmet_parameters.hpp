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

// 0x5A (0x5A - 0x0)
// Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.BPIgnoreRadialDamageVictim
struct AProjTekDinoHelmet_C_BPIgnoreRadialDamageVictim_Params
{
public:
	class AActor*                                Victim;                                            // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_35F4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0xC(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BPIsA_ReturnValue;                        // 0x14(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x15(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x16(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_35F5[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x18(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x30(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_35F7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x38(0x18)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x50(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x58(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x59(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0xF0 (0xF0 - 0x0)
// Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.OnExplode
struct AProjTekDinoHelmet_C_OnExplode_Params
{
public:
	struct FHitResult                            Result;                                            // 0x0(0xF0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x21D (0x21D - 0x0)
// Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.ExecuteUbergraph_ProjTekDinoHelmet
struct AProjTekDinoHelmet_C_ExecuteUbergraph_ProjTekDinoHelmet_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x4(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_35FD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x10(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	struct FHitResult                            K2Node_Event_Result;                               // 0x28(0xF0)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x118(0x18)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x130(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x131(0x1)(ExportObject, Net, EditFixedSize, OutParm, Config, SubobjectReference)
	uint8                                        Pad_35FE[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakHitResult_Time;                      // 0x134(0x4)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x138(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_35FF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x140(0x18)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x158(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x170(0x18)(Edit, ConstParm, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x188(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, Config, SubobjectReference)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x1A0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x1A8(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x1B0(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x1B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x1C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x1C8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x1CC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x1D0(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_3600[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x1D8(0x18)(BlueprintVisible, Parm, ZeroConstructor, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x1F0(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x208(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class APrimalStructure*                      K2Node_DynamicCast_AsPrimal_Structure;             // 0x210(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x218(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x219(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x21A(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x21B(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x21C(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

}
}


