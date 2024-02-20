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
// Function ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C.BlueprintInit
struct UASAUI_NewsCarouselTemplate_Entry_CTA_C_BlueprintInit_Params
{
public:
	class FString                                RawExtraData;                                      // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C.EntryFocusStart
struct UASAUI_NewsCarouselTemplate_Entry_CTA_C_EntryFocusStart_Params
{
public:
	bool                                         bInstigatedByAutoRollover;                         // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C.EntryFocusEnd
struct UASAUI_NewsCarouselTemplate_Entry_CTA_C_EntryFocusEnd_Params
{
public:
	bool                                         bInstigatedByAutoRollover;                         // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C.EntryFocusTick
struct UASAUI_NewsCarouselTemplate_Entry_CTA_C_EntryFocusTick_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C.ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_CTA
struct UASAUI_NewsCarouselTemplate_Entry_CTA_C_ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_CTA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3842[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_Event_RawExtraData;                         // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_Event_bInstigatedByAutoRollover_1;          // 0x18(0x1)(Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         K2Node_Event_bInstigatedByAutoRollover;            // 0x19(0x1)(Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3844[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_Event_DeltaTime;                            // 0x1C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, SubobjectReference)
};

}
}


