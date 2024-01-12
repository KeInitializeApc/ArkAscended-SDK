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
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ASAUI_NewsCarousel.ASAUI_NewsCarousel_C.PreConstruct
struct UASAUI_NewsCarousel_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function ASAUI_NewsCarousel.ASAUI_NewsCarousel_C.ExecuteUbergraph_ASAUI_NewsCarousel
struct UASAUI_NewsCarousel_C_ExecuteUbergraph_ASAUI_NewsCarousel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_443E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x8(0x8)(EditFixedSize, ReturnParm, EditConst, SubobjectReference)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

}
}


