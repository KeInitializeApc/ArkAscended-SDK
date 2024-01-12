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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5E8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UBorder*                               BorderDIno;                                        // 0x5F0(0x8)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UProgressBar*                          CraftingBar;                                       // 0x5F8(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UImage*                                DinoFoodTypeImage;                                 // 0x600(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                DinoIcon;                                          // 0x608(0x8)(Edit, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                DinoIconBG;                                        // 0x610(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class USizeBox*                              ExtraInfoBox;                                      // 0x618(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UProgressBarWidget*                    FoodBar;                                           // 0x620(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UWidgetSwitcher*                       GenderSwitcher;                                    // 0x628(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UProgressBarWidget*                    HealthBar;                                         // 0x630(0x8)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UImage*                                Image;                                             // 0x638(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	class UImage*                                Image_10;                                          // 0x640(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, EditorOnly)
	class UImage*                                Image_21;                                          // 0x648(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, NonTransactional, NoDestructor)
	class UImage*                                Image_44;                                          // 0x650(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, NonTransactional, EditorOnly)
	class UVerticalBox*                          InfoPanel;                                         // 0x658(0x8)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UImage*                                MainBG;                                            // 0x660(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UImage*                                MaxInventoryImage;                                 // 0x668(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UMinimalSwitchUI_Widget_C*             MinimalSwitchUI_Widget;                            // 0x670(0x8)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference)
	class UMultiUseActionWidget_UI_C*            MultiUseActionWidget_UI;                           // 0x678(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, InstancedReference)
	class UImage*                                MutagenIcon;                                       // 0x680(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UProgressBarWidget*                    StaminaBar;                                        // 0x688(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UProgressBar*                          TamingProgressBar;                                 // 0x690(0x8)(Edit, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UProgressBar*                          TorpidityProgressBar;                              // 0x698(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UProgressBarWidget*                    WeightBar;                                         // 0x6A0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UProgressBarWidget*                    XPBar;                                             // 0x6A8(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UToolTipWidgetPrimalDino_C* GetDefaultObj();

	int32 ExecuteUbergraph_ToolTipWidgetPrimalDino();
};

}


