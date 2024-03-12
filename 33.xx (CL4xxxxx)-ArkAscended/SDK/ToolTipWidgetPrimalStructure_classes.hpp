#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x4B8 - 0x450)
// WidgetBlueprintGeneratedClass ToolTipWidgetPrimalStructure.ToolTipWidgetPrimalStructure_C
class UToolTipWidgetPrimalStructure_C : public UPrimalStructureToolTipWidget
{
public:
	class UHorizontalBox*                        ContainerBox;                                      // 0x450(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            ContainterItemsLabel;                              // 0x458(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UProgressBar*                          HealthBar;                                         // 0x460(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class UImage*                                Image;                                             // 0x468(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UImage*                                Image_2;                                           // 0x470(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp)
	class UVerticalBox*                          InfoPanel;                                         // 0x478(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class UMinimalSwitchUI_Widget_C*             MinimalSwitchUI_Widget;                            // 0x480(0x8)(BlueprintVisible, EditFixedSize, Transient, Config, GlobalConfig, InstancedReference)
	class UVerticalBox*                          ModulePanel;                                       // 0x488(0x8)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMultiUseActionWidget_UI_C*            MultiUseActionWidget_UI;                           // 0x490(0x8)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference)
	class UVerticalBox*                          RepairPanel;                                       // 0x498(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPrimalRichTextBlock*                  RequirementsLabel;                                 // 0x4A0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class URichTextBlock*>                TextArray;                                         // 0x4A8(0x10)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UToolTipWidgetPrimalStructure_C* GetDefaultObj();

};

}


