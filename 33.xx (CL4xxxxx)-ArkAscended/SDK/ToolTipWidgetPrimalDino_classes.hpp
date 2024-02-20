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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5E8(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UBorder*                               BorderDIno;                                        // 0x5F0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UProgressBar*                          CraftingBar;                                       // 0x5F8(0x8)(Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UImage*                                DinoFoodTypeImage;                                 // 0x600(0x8)(Edit, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                DinoIcon;                                          // 0x608(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                DinoIconBG;                                        // 0x610(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class USizeBox*                              ExtraInfoBox;                                      // 0x618(0x8)(ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UProgressBarWidget*                    FoodBar;                                           // 0x620(0x8)(Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetSwitcher*                       GenderSwitcher;                                    // 0x628(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UProgressBarWidget*                    HealthBar;                                         // 0x630(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UImage*                                Image;                                             // 0x638(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	class UImage*                                Image_10;                                          // 0x640(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, Interp, EditorOnly)
	class UImage*                                Image_21;                                          // 0x648(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, Interp, NonTransactional, NoDestructor)
	class UImage*                                Image_44;                                          // 0x650(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, NonTransactional, EditorOnly)
	class UVerticalBox*                          InfoPanel;                                         // 0x658(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UImage*                                MainBG;                                            // 0x660(0x8)(ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UImage*                                MaxInventoryImage;                                 // 0x668(0x8)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UMinimalSwitchUI_Widget_C*             MinimalSwitchUI_Widget;                            // 0x670(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference)
	class UMultiUseActionWidget_UI_C*            MultiUseActionWidget_UI;                           // 0x678(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig)
	class UImage*                                MutagenIcon;                                       // 0x680(0x8)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UProgressBarWidget*                    StaminaBar;                                        // 0x688(0x8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UProgressBar*                          TamingProgressBar;                                 // 0x690(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UProgressBar*                          TorpidityProgressBar;                              // 0x698(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UProgressBarWidget*                    WeightBar;                                         // 0x6A0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UProgressBarWidget*                    XPBar;                                             // 0x6A8(0x8)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UToolTipWidgetPrimalDino_C* GetDefaultObj();

	int32 ExecuteUbergraph_ToolTipWidgetPrimalDino();
};

}


