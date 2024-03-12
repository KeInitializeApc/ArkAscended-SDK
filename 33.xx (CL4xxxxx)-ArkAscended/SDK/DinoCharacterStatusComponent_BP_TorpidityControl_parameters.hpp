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

// 0x54 (0x54 - 0x0)
// Function DinoCharacterStatusComponent_BP_TorpidityControl.DinoCharacterStatusComponent_BP_TorpidityControl_C.BPAdjustStatusValueModification
struct UDinoCharacterStatusComponent_BP_TorpidityControl_C_BPAdjustStatusValueModification_Params
{
public:
	enum class EPrimalCharacterStatusValue       ValueType;                                         // 0x0(0x1)(Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52C8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Amount;                                            // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                DamageTypeClass;                                   // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, SubobjectReference)
	bool                                         bManualModification;                               // 0x10(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_52C9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ReturnValue;                                       // 0x14(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       RetVal;                                            // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x20(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x28(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_52CA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x30(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_BPIsConscious_ReturnValue;                // 0x39(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3A(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3B(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3C(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x3D(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_52CB[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       K2Node_VariableSet_retVal_ImplicitCast;            // 0x40(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x48(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x50(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

}
}


