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

// 0x10 (0x10 - 0x0)
// Function ASAUI_NewsCarousel.ASAUI_NewsCarousel_C.GetColorAndOpacity
struct UASAUI_NewsCarousel_C_GetColorAndOpacity_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ASAUI_NewsCarousel.ASAUI_NewsCarousel_C.PreConstruct
struct UASAUI_NewsCarousel_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function ASAUI_NewsCarousel.ASAUI_NewsCarousel_C.DoClickAction
struct UASAUI_NewsCarousel_C_DoClickAction_Params
{
public:
	class FString                                ActionKey;                                         // 0x0(0x10)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FString                                ActionValue;                                       // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x41 (0x41 - 0x0)
// Function ASAUI_NewsCarousel.ASAUI_NewsCarousel_C.ExecuteUbergraph_ASAUI_NewsCarousel
struct UASAUI_NewsCarousel_C_ExecuteUbergraph_ASAUI_NewsCarousel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4EA7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_Event_ActionKey;                            // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                K2Node_Event_ActionValue;                          // 0x18(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int64                                        CallFunc_Conv_StringToInt64_ReturnValue;           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x30(0x1)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4EA8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x38(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x40(0x1)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ASAUI_NewsCarousel.ASAUI_NewsCarousel_C.OnModDeeplinkClicked__DelegateSignature
struct UASAUI_NewsCarousel_C_OnModDeeplinkClicked__DelegateSignature_Params
{
public:
	int64                                        ModIDRequested;                                    // 0x0(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}
}


