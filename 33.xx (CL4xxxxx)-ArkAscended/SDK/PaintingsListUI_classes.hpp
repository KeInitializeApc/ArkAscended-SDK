#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x970 - 0x900)
// WidgetBlueprintGeneratedClass PaintingsListUI.PaintingsListUI_C
class UPaintingsListUI_C : public UUI_PaintingsList
{
public:
	class UCustomButtonWidget*                   BackButton;                                        // 0x900(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UImage*                                background_left;                                   // 0x908(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UImage*                                background_right;                                  // 0x910(0x8)(EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UCustomButton_HUB_ASA_C*               DeletePaintingButton;                              // 0x918(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UCustomButton_HUB_ASA_C*               EditPaintingButton;                                // 0x920(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UCustomButtonWidget*                   FailCloseButton;                                   // 0x928(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UImage*                                Image_1;                                           // 0x930(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp)
	class UImage*                                Image_2;                                           // 0x938(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp)
	class UImage*                                Image_3;                                           // 0x940(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NonTransactional)
	class UImage*                                Image_82;                                          // 0x948(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, NoDestructor, AutoWeak)
	class UImage*                                PaintingPreview;                                   // 0x950(0x8)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UImage*                                PanelBackground;                                   // 0x958(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UCustomButtonWidget*                   SelectButton;                                      // 0x960(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UImage*                                Solid;                                             // 0x968(0x8)(ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UPaintingsListUI_C* GetDefaultObj();

};

}


