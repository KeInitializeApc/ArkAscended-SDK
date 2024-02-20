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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UButton*                               Button_Reset;                                      // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Revert;                                     // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Save;                                       // 0x348(0x8)(BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomizeSlot_BUTTON_Update_C*     ThemeCustomization;                                // 0x350(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomColorPicker_C*               UI_CustomColorPicker;                              // 0x358(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, DuplicateTransient)
	class UUI_CustomizeBoolSlot_C*               UI_CustomizeBoolSlot_253;                          // 0x360(0x8)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, DuplicateTransient, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UUI_CustomizeSlot_BUTTON_Install_C*    UI_CustomizeSlot_BUTTON_Install;                   // 0x368(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DuplicateTransient)
	class UUI_CustomizeSlot_BUTTON_SideMenu_C*   UI_CustomizeSlot_BUTTON_SideMenu;                  // 0x370(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, DuplicateTransient)
	class UUI_CustomizeSlot_BUTTON_SignIn_C*     UI_CustomizeSlot_BUTTON_SignIn;                    // 0x378(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference)
	class UUI_CustomizeSlot_BUTTON_Uninstall_C*  UI_CustomizeSlot_BUTTON_Uninstall;                 // 0x380(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, EditConst)
	class UUI_CustomizeSlot_ExamineBackground_C* UI_CustomizeSlot_ExamineBackground;                // 0x388(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config)
	class UUI_CustomizeSlot_InfoBackground_C*    UI_CustomizeSlot_InfoBackground;                   // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	class UUI_CustomizeSlot_MainBackground_C*    UI_CustomizeSlot_MainBackground;                   // 0x398(0x8)(ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig)
	class UUI_CustomizeSlot_MainFont_C*          UI_CustomizeSlot_MainFont;                         // 0x3A0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, GlobalConfig, InstancedReference)
	class UUI_CustomizeSlot_ModWindow_C*         UI_CustomizeSlot_ModWindow;                        // 0x3A8(0x8)(ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, DuplicateTransient)
	class UUI_CustomizeSlot_NotifBackground_C*   UI_CustomizeSlot_NotifBackground;                  // 0x3B0(0x8)(Edit, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference)
	class UUI_CustomizeSlot_Search_SideMenu_C*   UI_CustomizeSlot_Search_SideMenu;                  // 0x3B8(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference)
	class UUI_CustomizeSlot_SecondaryFont_C*     UI_CustomizeSlot_SecondaryFont;                    // 0x3C0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, EditConst, GlobalConfig, InstancedReference)
	class UUI_CustomizeSlot_SideBar_C*           UI_CustomizeSlot_SideBar;                          // 0x3C8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x3D0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	class UUI_CustomizeColorSlot_C*              CurrentOptionSelected;                             // 0x3D8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnChangedOption;                                   // 0x3E0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            UpdateAllWidgets;                                  // 0x3F0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCFCoreThemeRowData>           ThemeChangesHistory;                               // 0x400(0x10)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrentHistoryIndex;                               // 0x410(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ThemeCustomizer_C* GetDefaultObj();

	void UpdateColorPickerEnabled(bool* CallFunc_IsValid_ReturnValue);
	bool RestoreToDefaults(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, struct FCFCoreThemeRowData* CallFunc_GetDataTableRowFromName_OutRow, bool* CallFunc_GetDataTableRowFromName_ReturnValue);
	struct FCFCoreThemeRowData SaveToHistory(bool* CallFunc_IsValid_ReturnValue);
	int32 ForwardHistoryAStep(bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_Array_LastIndex_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	bool RevertBackAStepInHistory(bool* CallFunc_IsValid_ReturnValue);
	struct FEventReply OnKeyDown(const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1);
	struct FCFCoreThemeRowData ResetHistory(bool* CallFunc_IsValid_ReturnValue);
	int32 AddToHistory(bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, int32* CallFunc_Int32_AddOne_ReturnValue_1);
	void CheckIfHistoryDirty(bool* CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void UpdateSliderActivated(bool* CallFunc_IsValid_ReturnValue);
	class FString GetThemeSaveDirectory(const class FString& ReturnValue);
	void BndEvt__UI_ThemeCustomizer_Button_Save_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_ThemeCustomizer_Button_Revert_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	float Tick();
	void OnCurrentOptionChanged();
	void OnColorChangedByColorPicker(struct FLinearColor* Color);
	void SaveStep();
	void OnInitialized();
	void BndEvt__UI_ThemeCustomizer_Button_Reset_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	struct FLinearColor ExecuteUbergraph_UI_ThemeCustomizer(bool* CallFunc_IsValid_ReturnValue, struct FLinearColor* CallFunc_GetColor_Color, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
	void UpdateAllWidgets__DelegateSignature();
	void OnChangedOption__DelegateSignature();
};

}


