#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x6B0 - 0x5E8)
// WidgetBlueprintGeneratedClass ToolTipWidgetPrimalDino_MinimalUI.ToolTipWidgetPrimalDino_MinimalUI_C
class UToolTipWidgetPrimalDino_MinimalUI_C : public UPrimalDinoToolTipWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5E8(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UBorder*                               BorderDIno;                                        // 0x5F0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config, SubobjectReference)
	class UProgressBar*                          CraftingBar;                                       // 0x5F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, SubobjectReference)
	class UImage*                                DinoFoodTypeImage;                                 // 0x600(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                DinoIcon;                                          // 0x608(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                DinoIconBG;                                        // 0x610(0x8)(BlueprintVisible, Net, ReturnParm, Transient, Config, SubobjectReference)
	class USizeBox*                              ExtraInfoBox;                                      // 0x618(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, SubobjectReference)
	class UProgressBarWidget*                    FoodBar;                                           // 0x620(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class UWidgetSwitcher*                       GenderSwitcher;                                    // 0x628(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class UProgressBarWidget*                    HealthBar;                                         // 0x630(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class UImage*                                Image;                                             // 0x638(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UImage*                                Image_10;                                          // 0x640(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, EditorOnly)
	class UImage*                                Image_21;                                          // 0x648(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp, NonTransactional, NoDestructor)
	class UImage*                                Image_44;                                          // 0x650(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, NonTransactional, EditorOnly)
	class UVerticalBox*                          InfoPanel;                                         // 0x658(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class UImage*                                MainBG;                                            // 0x660(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class UImage*                                MaxInventoryImage;                                 // 0x668(0x8)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class UMinimalSwitchUI_Widget_C*             MinimalSwitchUI_Widget;                            // 0x670(0x8)(BlueprintVisible, EditFixedSize, Transient, Config, GlobalConfig, InstancedReference)
	class UMultiUseActionWidget_UI_C*            MultiUseActionWidget_UI;                           // 0x678(0x8)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference)
	class UImage*                                MutagenIcon;                                       // 0x680(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UProgressBarWidget*                    StaminaBar;                                        // 0x688(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class UProgressBar*                          TamingProgressBar;                                 // 0x690(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class UProgressBar*                          TorpidityProgressBar;                              // 0x698(0x8)(BlueprintVisible, Parm, ReturnParm, Transient, Config, SubobjectReference)
	class UProgressBarWidget*                    WeightBar;                                         // 0x6A0(0x8)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, SubobjectReference)
	class UProgressBarWidget*                    XPBar;                                             // 0x6A8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UToolTipWidgetPrimalDino_MinimalUI_C* GetDefaultObj();

	void ExecuteUbergraph_ToolTipWidgetPrimalDino_MinimalUI(int32* EntryPoint);
};

}


