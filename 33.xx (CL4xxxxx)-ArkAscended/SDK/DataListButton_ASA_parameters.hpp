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

// 0x58 (0x58 - 0x0)
// Function DataListButton_ASA.DataListButton_ASA_C.OnPaint
struct UDataListButton_ASA_C_OnPaint_Params
{
public:
	struct FPaintContext                         Context;                                           // 0x0(0x30)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue;                    // 0x30(0x8)(ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_GetChildIndex_ReturnValue;                // 0x38(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetToggledState_ReturnValue;              // 0x3C(0x1)(ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_55FB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x40(0x4)(BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x44(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_55FC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x48(0x10)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function DataListButton_ASA.DataListButton_ASA_C.ExecuteUbergraph_DataListButton_ASA
struct UDataListButton_ASA_C_ExecuteUbergraph_DataListButton_ASA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function DataListButton_ASA.DataListButton_ASA_C.Clicked__DelegateSignature
struct UDataListButton_ASA_C_Clicked__DelegateSignature_Params
{
public:
	class UDinoListButtonWidget*                 DataList;                                          // 0x0(0x8)(ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

}
}


