#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x3A0 - 0x330)
// WidgetBlueprintGeneratedClass UI_Button_Sidebar.UI_Button_Sidebar_C
class UUI_Button_Sidebar_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      OnSelected;                                        // 0x338(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border_UnderlineSelection;                         // 0x340(0x8)(Edit, ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_BrowseMods;                                 // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_AddonsIcon;                                    // 0x350(0x8)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_BrowseMods;                                   // 0x358(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            Button_Image;                                      // 0x360(0x8)(Edit, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  Button_Text;                                       // 0x368(0x18)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            Dispatcher_OnClick;                                // 0x380(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Selected;                                          // 0x390(0x1)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ENUM_SideTabs                     Enum_BarOption;                                    // 0x391(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1718[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_StoreMenu_C*                       OwnerStoreMenu;                                    // 0x398(0x8)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Button_Sidebar_C* GetDefaultObj();

	void UpdateThemeData(bool* CallFunc_IsValid_ReturnValue);
	void PreConstruct(bool* IsDesignTime);
	void BndEvt__UI_Button_Sidebar_Button_BrowseMods_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ButtonSelected();
	void ButtonDeselected();
	bool UpdateSlelectionTo();
	void InitSideButton();
	void Construct();
	FDelegateProperty_ ExecuteUbergraph_UI_Button_Sidebar(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool K2Node_CustomEvent_Condition, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool* CallFunc_NotEqual_BoolBool_ReturnValue);
	void Dispatcher_OnClick__DelegateSignature();
};

}


