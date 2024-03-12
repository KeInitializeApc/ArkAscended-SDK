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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UButton*                               Button_Reset;                                      // 0x338(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Revert;                                     // 0x340(0x8)(ConstParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Save;                                       // 0x348(0x8)(ConstParm, ExportObject, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomizeSlot_BUTTON_Update_C*     ThemeCustomization;                                // 0x350(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomColorPicker_C*               UI_CustomColorPicker;                              // 0x358(0x8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, GlobalConfig, DuplicateTransient)
	class UUI_CustomizeBoolSlot_C*               UI_CustomizeBoolSlot_253;                          // 0x360(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UUI_CustomizeSlot_BUTTON_Install_C*    UI_CustomizeSlot_BUTTON_Install;                   // 0x368(0x8)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, DuplicateTransient)
	class UUI_CustomizeSlot_BUTTON_SideMenu_C*   UI_CustomizeSlot_BUTTON_SideMenu;                  // 0x370(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	class UUI_CustomizeSlot_BUTTON_SignIn_C*     UI_CustomizeSlot_BUTTON_SignIn;                    // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference)
	class UUI_CustomizeSlot_BUTTON_Uninstall_C*  UI_CustomizeSlot_BUTTON_Uninstall;                 // 0x380(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, GlobalConfig)
	class UUI_CustomizeSlot_ExamineBackground_C* UI_CustomizeSlot_ExamineBackground;                // 0x388(0x8)(BlueprintVisible, DisableEditOnInstance, EditConst)
	class UUI_CustomizeSlot_InfoBackground_C*    UI_CustomizeSlot_InfoBackground;                   // 0x390(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	class UUI_CustomizeSlot_MainBackground_C*    UI_CustomizeSlot_MainBackground;                   // 0x398(0x8)(BlueprintVisible, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig)
	class UUI_CustomizeSlot_MainFont_C*          UI_CustomizeSlot_MainFont;                         // 0x3A0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference)
	class UUI_CustomizeSlot_ModWindow_C*         UI_CustomizeSlot_ModWindow;                        // 0x3A8(0x8)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, DuplicateTransient)
	class UUI_CustomizeSlot_NotifBackground_C*   UI_CustomizeSlot_NotifBackground;                  // 0x3B0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference)
	class UUI_CustomizeSlot_Search_SideMenu_C*   UI_CustomizeSlot_Search_SideMenu;                  // 0x3B8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference)
	class UUI_CustomizeSlot_SecondaryFont_C*     UI_CustomizeSlot_SecondaryFont;                    // 0x3C0(0x8)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, DuplicateTransient)
	class UUI_CustomizeSlot_SideBar_C*           UI_CustomizeSlot_SideBar;                          // 0x3C8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, InstancedReference, DuplicateTransient)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x3D0(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, Transient, EditConst, InstancedReference, DuplicateTransient)
	class UUI_CustomizeColorSlot_C*              CurrentOptionSelected;                             // 0x3D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnChangedOption;                                   // 0x3E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            UpdateAllWidgets;                                  // 0x3F0(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCFCoreThemeRowData>           ThemeChangesHistory;                               // 0x400(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrentHistoryIndex;                               // 0x410(0x4)(Edit, ConstParm, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ThemeCustomizer_C* GetDefaultObj();

	bool UpdateColorPickerEnabled();
	bool RestoreToDefaults();
	bool SaveToHistory(const struct FCFCoreThemeRowData& CallFunc_Array_Get_Item);
	int32 ForwardHistoryAStep(int32* Temp_int_Variable, const struct FCFCoreThemeRowData& CallFunc_Array_Get_Item, int32* CallFunc_Array_LastIndex_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	int32 RevertBackAStepInHistory(int32* Temp_int_Variable, bool* CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FCFCoreThemeRowData& CallFunc_Array_Get_Item, bool* CallFunc_Greater_IntInt_ReturnValue_1);
	bool OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent, const struct FInputEvent& CallFunc_GetInputEventFromKeyEvent_ReturnValue, struct FKey* CallFunc_GetKey_ReturnValue, bool CallFunc_InputEvent_IsLeftControlDown_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_InputEvent_IsLeftControlDown_ReturnValue_1, struct FEventReply* CallFunc_Handled_ReturnValue);
	bool ResetHistory(const struct FCFCoreThemeRowData& CallFunc_Array_Get_Item);
	int32 AddToHistory(int32* Temp_int_Variable, bool* CallFunc_Array_IsValidIndex_ReturnValue);
	bool CheckIfHistoryDirty();
	bool UpdateSliderActivated();
	class FString GetThemeSaveDirectory(const class FString& CallFunc_GetProjectDirectory_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void BndEvt__UI_ThemeCustomizer_Button_Save_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_ThemeCustomizer_Button_Revert_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	float Tick(struct FGeometry* MyGeometry);
	void OnCurrentOptionChanged();
	void OnColorChangedByColorPicker(struct FLinearColor* Color);
	void SaveStep();
	void OnInitialized();
	void BndEvt__UI_ThemeCustomizer_Button_Reset_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	bool ExecuteUbergraph_UI_ThemeCustomizer(int32* EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FLinearColor& K2Node_CustomEvent_Color);
	void UpdateAllWidgets__DelegateSignature();
	void OnChangedOption__DelegateSignature();
};

}


