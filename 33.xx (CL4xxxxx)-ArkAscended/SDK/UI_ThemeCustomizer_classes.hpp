#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE4 (0x414 - 0x330)
// WidgetBlueprintGeneratedClass UI_ThemeCustomizer.UI_ThemeCustomizer_C
class UUI_ThemeCustomizer_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UButton*                               Button_Reset;                                      // 0x338(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Revert;                                     // 0x340(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Save;                                       // 0x348(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomizeSlot_BUTTON_Update_C*     ThemeCustomization;                                // 0x350(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomColorPicker_C*               UI_CustomColorPicker;                              // 0x358(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, EditConst, DuplicateTransient)
	class UUI_CustomizeBoolSlot_C*               UI_CustomizeBoolSlot_253;                          // 0x360(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, DuplicateTransient, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UUI_CustomizeSlot_BUTTON_Install_C*    UI_CustomizeSlot_BUTTON_Install;                   // 0x368(0x8)(Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient)
	class UUI_CustomizeSlot_BUTTON_SideMenu_C*   UI_CustomizeSlot_BUTTON_SideMenu;                  // 0x370(0x8)(ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	class UUI_CustomizeSlot_BUTTON_SignIn_C*     UI_CustomizeSlot_BUTTON_SignIn;                    // 0x378(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference)
	class UUI_CustomizeSlot_BUTTON_Uninstall_C*  UI_CustomizeSlot_BUTTON_Uninstall;                 // 0x380(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, EditConst)
	class UUI_CustomizeSlot_ExamineBackground_C* UI_CustomizeSlot_ExamineBackground;                // 0x388(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient)
	class UUI_CustomizeSlot_InfoBackground_C*    UI_CustomizeSlot_InfoBackground;                   // 0x390(0x8)(ConstParm, BlueprintVisible, Net, Config, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	class UUI_CustomizeSlot_MainBackground_C*    UI_CustomizeSlot_MainBackground;                   // 0x398(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig)
	class UUI_CustomizeSlot_MainFont_C*          UI_CustomizeSlot_MainFont;                         // 0x3A0(0x8)(BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference)
	class UUI_CustomizeSlot_ModWindow_C*         UI_CustomizeSlot_ModWindow;                        // 0x3A8(0x8)(ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, DuplicateTransient)
	class UUI_CustomizeSlot_NotifBackground_C*   UI_CustomizeSlot_NotifBackground;                  // 0x3B0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference)
	class UUI_CustomizeSlot_Search_SideMenu_C*   UI_CustomizeSlot_Search_SideMenu;                  // 0x3B8(0x8)(Edit, ConstParm, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference)
	class UUI_CustomizeSlot_SecondaryFont_C*     UI_CustomizeSlot_SecondaryFont;                    // 0x3C0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference)
	class UUI_CustomizeSlot_SideBar_C*           UI_CustomizeSlot_SideBar;                          // 0x3C8(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, DuplicateTransient)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x3D0(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, InstancedReference, DuplicateTransient)
	class UUI_CustomizeColorSlot_C*              CurrentOptionSelected;                             // 0x3D8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnChangedOption;                                   // 0x3E0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            UpdateAllWidgets;                                  // 0x3F0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCFCoreThemeRowData>           ThemeChangesHistory;                               // 0x400(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrentHistoryIndex;                               // 0x410(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ThemeCustomizer_C* GetDefaultObj();

	bool UpdateColorPickerEnabled();
	bool RestoreToDefaults(struct FCFCoreThemeRowData* CallFunc_GetDataTableRowFromName_OutRow, bool* CallFunc_DoesDataTableRowExist_ReturnValue);
	bool SaveToHistory(const struct FCFCoreThemeRowData& CallFunc_Array_Get_Item);
	int32 ForwardHistoryAStep(const struct FCFCoreThemeRowData& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	bool RevertBackAStepInHistory(int32* CallFunc_Subtract_IntInt_ReturnValue, const struct FCFCoreThemeRowData& CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, struct FKeyEvent* InKeyEvent, const struct FEventReply& ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	bool ResetHistory(const struct FCFCoreThemeRowData& CallFunc_Array_Get_Item);
	int32 AddToHistory();
	bool CheckIfHistoryDirty(bool CallFunc_NotEqual_IntInt_ReturnValue);
	bool UpdateSliderActivated();
	class FString GetThemeSaveDirectory(const class FString& ReturnValue);
	void BndEvt__UI_ThemeCustomizer_Button_Save_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_ThemeCustomizer_Button_Revert_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	float Tick(const struct FGeometry& MyGeometry);
	void OnCurrentOptionChanged();
	void OnColorChangedByColorPicker(struct FLinearColor* Color);
	void SaveStep();
	void OnInitialized();
	void BndEvt__UI_ThemeCustomizer_Button_Reset_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	bool ExecuteUbergraph_UI_ThemeCustomizer(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, struct FLinearColor* CallFunc_GetColor_Color, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, struct FLinearColor* K2Node_CustomEvent_Color);
	void UpdateAllWidgets__DelegateSignature();
	void OnChangedOption__DelegateSignature();
};

}


