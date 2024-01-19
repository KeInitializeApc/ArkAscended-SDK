#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x6B0 - 0x5E8)
// WidgetBlueprintGeneratedClass ToolTipWidgetPrimalDino.ToolTipWidgetPrimalDino_C
class UToolTipWidgetPrimalDino_C : public UPrimalDinoToolTipWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5E8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UBorder*                               BorderDIno;                                        // 0x5F0(0x8)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UProgressBar*                          CraftingBar;                                       // 0x5F8(0x8)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UImage*                                DinoFoodTypeImage;                                 // 0x600(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                DinoIcon;                                          // 0x608(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                DinoIconBG;                                        // 0x610(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class USizeBox*                              ExtraInfoBox;                                      // 0x618(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UProgressBarWidget*                    FoodBar;                                           // 0x620(0x8)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UWidgetSwitcher*                       GenderSwitcher;                                    // 0x628(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UProgressBarWidget*                    HealthBar;                                         // 0x630(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UImage*                                Image;                                             // 0x638(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	class UImage*                                Image_10;                                          // 0x640(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, EditorOnly)
	class UImage*                                Image_21;                                          // 0x648(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, NonTransactional, NoDestructor)
	class UImage*                                Image_44;                                          // 0x650(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, NonTransactional, EditorOnly)
	class UVerticalBox*                          InfoPanel;                                         // 0x658(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UImage*                                MainBG;                                            // 0x660(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UImage*                                MaxInventoryImage;                                 // 0x668(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UMinimalSwitchUI_Widget_C*             MinimalSwitchUI_Widget;                            // 0x670(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Transient, Config, DisableEditOnInstance, InstancedReference)
	class UMultiUseActionWidget_UI_C*            MultiUseActionWidget_UI;                           // 0x678(0x8)(BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig)
	class UImage*                                MutagenIcon;                                       // 0x680(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UProgressBarWidget*                    StaminaBar;                                        // 0x688(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UProgressBar*                          TamingProgressBar;                                 // 0x690(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UProgressBar*                          TorpidityProgressBar;                              // 0x698(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UProgressBarWidget*                    WeightBar;                                         // 0x6A0(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UProgressBarWidget*                    XPBar;                                             // 0x6A8(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UToolTipWidgetPrimalDino_C* GetDefaultObj();

	void ExecuteUbergraph_ToolTipWidgetPrimalDino(int32 EntryPoint);
};

}


