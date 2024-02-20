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

// 0x1 (0x1 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Pip_News_Default.ASAUI_NewsCarouselTemplate_Pip_News_Default_C.EntryFocusStart
struct UASAUI_NewsCarouselTemplate_Pip_News_Default_C_EntryFocusStart_Params
{
public:
	bool                                         bInstigatedByAutoRollover;                         // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Pip_News_Default.ASAUI_NewsCarouselTemplate_Pip_News_Default_C.EntryFocusEnd
struct UASAUI_NewsCarouselTemplate_Pip_News_Default_C_EntryFocusEnd_Params
{
public:
	bool                                         bInstigatedByAutoRollover;                         // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Pip_News_Default.ASAUI_NewsCarouselTemplate_Pip_News_Default_C.ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Pip_News_Default
struct UASAUI_NewsCarouselTemplate_Pip_News_Default_C_ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Pip_News_Default_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_Event_bInstigatedByAutoRollover_1;          // 0x4(0x1)(Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_18E2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         K2Node_Event_bInstigatedByAutoRollover;            // 0x10(0x1)(Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_18E4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x18(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

}
}


