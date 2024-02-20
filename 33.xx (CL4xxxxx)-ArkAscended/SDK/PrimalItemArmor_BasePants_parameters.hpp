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

// 0x50 (0x50 - 0x0)
// Function PrimalItemArmor_BasePants.PrimalItemArmor_BasePants_C.OverrideCrouchingSound
struct UPrimalItemArmor_BasePants_C_OverrideCrouchingSound_Params
{
public:
	class USoundBase*                            InSound;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsProne;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2FED[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        SoundState;                                        // 0xC(0x4)(Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class USoundBase*                            ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class USoundBase*                            RetSound;                                          // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, ReturnParm, Config, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_2FFB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0x24(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        Temp_int_Variable_1;                               // 0x28(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_2FFC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class USoundBase*                            K2Node_Select_Default;                             // 0x30(0x8)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	class USoundBase*                            K2Node_Select_Default_1;                           // 0x38(0x8)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FFD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class USoundBase*                            K2Node_Select_Default_2;                           // 0x48(0x8)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
};

}
}


