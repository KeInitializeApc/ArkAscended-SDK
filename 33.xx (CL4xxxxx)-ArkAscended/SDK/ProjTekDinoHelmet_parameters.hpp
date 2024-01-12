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
	class AActor*                                Victim;                                            // 0x0(0x8)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_24AD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0xC(0x8)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BPIsA_ReturnValue;                        // 0x14(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x15(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x16(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_24B0[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x18(0x18)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_24B1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x38(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x50(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x58(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x59(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
};

// 0xF0 (0xF0 - 0x0)
// Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.OnExplode
struct AProjTekDinoHelmet_C_OnExplode_Params
{
public:
	struct FHitResult                            Result;                                            // 0x0(0xF0)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x21D (0x21D - 0x0)
// Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.ExecuteUbergraph_ProjTekDinoHelmet
struct AProjTekDinoHelmet_C_ExecuteUbergraph_ProjTekDinoHelmet_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x4(0x8)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_24CB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x10(0x18)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FHitResult                            K2Node_Event_Result;                               // 0x28(0xF0)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x118(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x130(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x131(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_24CD[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_BreakHitResult_Time;                      // 0x134(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x138(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_24CE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x140(0x18)(ConstParm, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x158(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x170(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x188(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x1A0(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x1A8(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x1B0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x1B8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x1C0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, Transient, EditConst, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x1C8(0x4)(Edit, ConstParm, ExportObject, ZeroConstructor, Transient, EditConst, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x1CC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x1D0(0x4)(ConstParm, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_24D2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x1D8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x1F0(0x18)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x208(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class APrimalStructure*                      K2Node_DynamicCast_AsPrimal_Structure;             // 0x210(0x8)(Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x218(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x219(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x21A(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x21B(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x21C(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

}
}


