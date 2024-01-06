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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UButton*                               Button_Reset;                                      // 0x338(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	class UButton*                               Button_Revert;                                     // 0x340(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	class UButton*                               Button_Save;                                       // 0x348(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	class UUI_CustomizeSlot_BUTTON_Update_C*     ThemeCustomization;                                // 0x350(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	class UUI_CustomColorPicker_C*               UI_CustomColorPicker;                              // 0x358(0x8)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	class UUI_CustomizeBoolSlot_C*               UI_CustomizeBoolSlot_253;                          // 0x360(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UUI_CustomizeSlot_BUTTON_Install_C*    UI_CustomizeSlot_BUTTON_Install;                   // 0x368(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, DuplicateTransient)
	class UUI_CustomizeSlot_BUTTON_SideMenu_C*   UI_CustomizeSlot_BUTTON_SideMenu;                  // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class UUI_CustomizeSlot_BUTTON_SignIn_C*     UI_CustomizeSlot_BUTTON_SignIn;                    // 0x378(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
	class UUI_CustomizeSlot_BUTTON_Uninstall_C*  UI_CustomizeSlot_BUTTON_Uninstall;                 // 0x380(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
	class UUI_CustomizeSlot_ExamineBackground_C* UI_CustomizeSlot_ExamineBackground;                // 0x388(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class UUI_CustomizeSlot_InfoBackground_C*    UI_CustomizeSlot_InfoBackground;                   // 0x390(0x8)(ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, DuplicateTransient)
	class UUI_CustomizeSlot_MainBackground_C*    UI_CustomizeSlot_MainBackground;                   // 0x398(0x8)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig)
	class UUI_CustomizeSlot_MainFont_C*          UI_CustomizeSlot_MainFont;                         // 0x3A0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference)
	class UUI_CustomizeSlot_ModWindow_C*         UI_CustomizeSlot_ModWindow;                        // 0x3A8(0x8)(ConstParm, BlueprintReadOnly, Net, Transient, Config, EditConst, GlobalConfig, DuplicateTransient)
	class UUI_CustomizeSlot_NotifBackground_C*   UI_CustomizeSlot_NotifBackground;                  // 0x3B0(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference)
	class UUI_CustomizeSlot_Search_SideMenu_C*   UI_CustomizeSlot_Search_SideMenu;                  // 0x3B8(0x8)(Edit, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, InstancedReference)
	class UUI_CustomizeSlot_SecondaryFont_C*     UI_CustomizeSlot_SecondaryFont;                    // 0x3C0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, DuplicateTransient)
	class UUI_CustomizeSlot_SideBar_C*           UI_CustomizeSlot_SideBar;                          // 0x3C8(0x8)(BlueprintReadOnly, OutParm, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x3D0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, DuplicateTransient)
	class UUI_CustomizeColorSlot_C*              CurrentOptionSelected;                             // 0x3D8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnChangedOption;                                   // 0x3E0(0x10)(ExportObject, BlueprintReadOnly, ReturnParm, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            UpdateAllWidgets;                                  // 0x3F0(0x10)(Edit, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCFCoreThemeRowData>           ThemeChangesHistory;                               // 0x400(0x10)(Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	int32                                        CurrentHistoryIndex;                               // 0x410(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ThemeCustomizer_C* GetDefaultObj();

	bool UpdateColorPickerEnabled();
	bool RestoreToDefaults(bool CallFunc_DoesDataTableRowExist_ReturnValue);
	struct FCFCoreThemeRowData SaveToHistory();
	bool ForwardHistoryAStep(int32* CallFunc_Add_IntInt_ReturnValue);
	bool RevertBackAStepInHistory(int32* CallFunc_Subtract_IntInt_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, struct FEventReply* ReturnValue, struct FInputEvent* CallFunc_GetInputEventFromKeyEvent_ReturnValue, bool* CallFunc_InputEvent_IsLeftControlDown_ReturnValue, bool* CallFunc_InputEvent_IsLeftControlDown_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1);
	struct FCFCoreThemeRowData ResetHistory();
	int32 AddToHistory(bool CallFunc_Array_IsValidIndex_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue);
	bool CheckIfHistoryDirty(bool CallFunc_NotEqual_IntInt_ReturnValue);
	bool UpdateSliderActivated();
	void GetThemeSaveDirectory(class FString* ReturnValue, class FString* CallFunc_GetProjectDirectory_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue);
	void BndEvt__UI_ThemeCustomizer_Button_Save_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_ThemeCustomizer_Button_Revert_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	float Tick(const struct FGeometry& MyGeometry);
	void OnCurrentOptionChanged();
	void OnColorChangedByColorPicker(struct FLinearColor* Color);
	void SaveStep();
	void OnInitialized();
	void BndEvt__UI_ThemeCustomizer_Button_Reset_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	float ExecuteUbergraph_UI_ThemeCustomizer(int32 EntryPoint, struct FLinearColor* CallFunc_GetColor_Color, const struct FLinearColor& K2Node_CustomEvent_Color);
	void UpdateAllWidgets__DelegateSignature();
	void OnChangedOption__DelegateSignature();
};

}


