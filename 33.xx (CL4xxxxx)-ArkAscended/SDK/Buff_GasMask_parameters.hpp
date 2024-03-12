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
// Function Buff_GasMask.Buff_GasMask_C.AllowPostProcessEffect
struct ABuff_GasMask_C_AllowPostProcessEffect_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_AllowPostProcessEffect_ReturnValue;       // 0x1(0x1)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3B74[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsFirstPersonCamera_ReturnValue;          // 0x10(0x1)(BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x11(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x13C (0x13C - 0x0)
// Function Buff_GasMask.Buff_GasMask_C.BuffAdjustDamage
struct ABuff_GasMask_C_BuffAdjustDamage_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3B79[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            HitInfo;                                           // 0x8(0xF0)(ConstParm, BlueprintVisible, ExportObject, Transient, Config, EditConst, SubobjectReference)
	class AController*                           EventInstigator;                                   // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, SubobjectReference)
	class AActor*                                TheDamageCauser;                                   // 0x100(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UClass*                                TheDamgeType;                                      // 0x108(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x110(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3B7A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       RetVal;                                            // 0x118(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UClass*                                K2Node_ClassDynamicCast_AsDmg_Type_Melee_Torp_Poison_Large_No_FF; // 0x120(0x8)(BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x128(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3B7B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       K2Node_VariableSet_retVal_ImplicitCast;            // 0x130(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x138(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x29 (0x29 - 0x0)
// Function Buff_GasMask.Buff_GasMask_C.BPPreventAddingOtherBuff
struct ABuff_GasMask_C_BPPreventAddingOtherBuff_Params
{
public:
	class UClass*                                AnotherBuffClass;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         RetVal;                                            // 0x9(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3B81[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                K2Node_ClassDynamicCast_AsBuff_Base_Gas_Maskable;  // 0x10(0x8)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x18(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3B82[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                K2Node_ClassDynamicCast_AsBuff_Base_Disease_Low_Gas_Maskable; // 0x20(0x8)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess_1;                // 0x28(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
};

}
}


