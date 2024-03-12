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

// 0x24 (0x24 - 0x0)
// Function Buff_HazardSuit_Base.Buff_HazardSuit_Base_C.BPPreventAddingOtherBuff
struct ABuff_HazardSuit_Base_C_BPPreventAddingOtherBuff_Params
{
public:
	class UClass*                                AnotherBuffClass;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bRetVal;                                           // 0x9(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_1366[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_IsChildOfClassesSoftRef_ReturnValue;      // 0xC(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x10(0x1)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_1368[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Array_Get_Item;                           // 0x18(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	float                                        CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast; // 0x20(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
};

}
}


