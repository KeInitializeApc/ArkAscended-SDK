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
	class UCustomButtonWidget*                   BackButton;                                        // 0x900(0x8)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Config, SubobjectReference)
	class UImage*                                background_left;                                   // 0x908(0x8)(ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, SubobjectReference)
	class UImage*                                background_right;                                  // 0x910(0x8)(Edit, Net, OutParm, ReturnParm, Config, SubobjectReference)
	class UCustomButton_HUB_ASA_C*               DeletePaintingButton;                              // 0x918(0x8)(ConstParm, ExportObject, Net, OutParm, ReturnParm, Config, SubobjectReference)
	class UCustomButton_HUB_ASA_C*               EditPaintingButton;                                // 0x920(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, SubobjectReference)
	class UCustomButtonWidget*                   FailCloseButton;                                   // 0x928(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, SubobjectReference)
	class UImage*                                Image_1;                                           // 0x930(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, Interp)
	class UImage*                                Image_2;                                           // 0x938(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, Interp)
	class UImage*                                Image_3;                                           // 0x940(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, NonTransactional)
	class UImage*                                Image_82;                                          // 0x948(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, Interp, NoDestructor, AutoWeak)
	class UImage*                                PaintingPreview;                                   // 0x950(0x8)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, SubobjectReference)
	class UImage*                                PanelBackground;                                   // 0x958(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, SubobjectReference)
	class UCustomButtonWidget*                   SelectButton;                                      // 0x960(0x8)(Parm, OutParm, ReturnParm, Config, SubobjectReference)
	class UImage*                                Solid;                                             // 0x968(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UPaintingsListUI_C* GetDefaultObj();

};

}


