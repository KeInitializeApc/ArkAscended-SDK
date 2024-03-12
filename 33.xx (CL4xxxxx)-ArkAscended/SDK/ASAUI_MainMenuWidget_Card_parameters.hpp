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
// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.OnMouseEnterFunc
struct UASAUI_MainMenuWidget_Card_C_OnMouseEnterFunc_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
};

// 0x10 (0x10 - 0x0)
// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.OnMouseLeaveFunc
struct UASAUI_MainMenuWidget_Card_C_OnMouseLeaveFunc_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
};

// 0x78 (0x78 - 0x0)
// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.OnMouseLeave
struct UASAUI_MainMenuWidget_Card_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.OnMouseEnter
struct UASAUI_MainMenuWidget_Card_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.PreConstruct
struct UASAUI_MainMenuWidget_Card_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x131 (0x131 - 0x0)
// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.ExecuteUbergraph_ASAUI_MainMenuWidget_Card
struct UASAUI_MainMenuWidget_Card_C_ExecuteUbergraph_ASAUI_MainMenuWidget_Card_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3725[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0x8(0x78)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x80(0x38)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xB8(0x78)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x130(0x1)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

}
}


