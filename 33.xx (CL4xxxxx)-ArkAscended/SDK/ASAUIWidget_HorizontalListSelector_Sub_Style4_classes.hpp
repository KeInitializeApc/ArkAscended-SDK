#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x200 (0x530 - 0x330)
// WidgetBlueprintGeneratedClass ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C
class UASAUIWidget_HorizontalListSelector_Sub_Style4_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button0;                                           // 0x338(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button1;                                           // 0x340(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button10;                                          // 0x348(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button2;                                           // 0x350(0x8)(OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button3;                                           // 0x358(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button4;                                           // 0x360(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button5;                                           // 0x368(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button6;                                           // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button7;                                           // 0x378(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button8;                                           // 0x380(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button9;                                           // 0x388(0x8)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HorizBox;                                          // 0x390(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                NavLeft;                                           // 0x398(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                NavRight;                                          // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_0;                              // 0x3A8(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, RepNotify)
	int32                                        NumButtons;                                        // 0x3B8(0x4)(Edit, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrSelection;                                     // 0x3BC(0x4)(ConstParm, ExportObject, EditConst, GlobalConfig, SubobjectReference)
	int32                                        LastSelection;                                     // 0x3C0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2EE5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnSelectionChanged_1;                              // 0x3C8(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, Interp)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_2;                              // 0x3D8(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, RepNotify, Interp)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_3;                              // 0x3E8(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, NonTransactional)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_4;                              // 0x3F8(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, RepNotify, NonTransactional)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_5;                              // 0x408(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, Interp, NonTransactional)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_6;                              // 0x418(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, RepNotify, Interp, NonTransactional)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_7;                              // 0x428(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditorOnly)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_8;                              // 0x438(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, RepNotify, EditorOnly)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_9;                              // 0x448(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, Interp, EditorOnly)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_10;                             // 0x458(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, RepNotify, Interp, EditorOnly)
	TArray<class FText>                          ButtonLabels_Left;                                 // 0x468(0x10)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UTexture*>                      ButtonLabels_Icon;                                 // 0x478(0x10)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     ButtonLabels_Icon_Size;                            // 0x488(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FText>                          ButtonLabels_Right;                                // 0x498(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateFontInfo                        ButtonLabels_Font;                                 // 0x4A8(0x58)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UASAUIWidget_Button_Style4_C*>  buttons;                                           // 0x500(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
	TArray<double>                               CalculatedWidths;                                  // 0x510(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSelectionIndexChanged;                           // 0x520(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUIWidget_HorizontalListSelector_Sub_Style4_C* GetDefaultObj();

	class UASAUIWidget_Button_Style4_C* SetEnabledStateOfButtonIndex(int32* Index, bool Enabled_);
	class UASAUIWidget_Button_Style4_C* GetPreviousAvailableButtonIndex(int32* StartingIndex, int32 FirstButton, int32 FoundNextButton, bool* Temp_bool_Variable, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_GetIsEnabled_ReturnValue);
	class UASAUIWidget_Button_Style4_C* GetNextAvailableButtonIndex(int32* StartingIndex, int32 FirstButton, int32 FoundNextButton, bool* Temp_bool_Variable, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_GetIsEnabled_ReturnValue);
	bool GetLastAvailableButtonIndex(int32 FirstButton, int32 FoundFirstButton, bool* Temp_bool_Variable, bool* CallFunc_GetIsEnabled_ReturnValue);
	class UASAUIWidget_Button_Style4_C* Get_First_Available_Button_Index(int32 FirstButton, int32 FoundFirstButton, bool* Temp_bool_Variable, bool* CallFunc_GetIsEnabled_ReturnValue);
	class FString Fix_Console_Icons(bool* CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UImage* K2Node_DynamicCast_AsImage, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	class UASAUIWidget_Button_Style4_C* SwitchButton();
	bool SetButtonsInactive();
	void BndEvt__ASAUI_ListSessions_OfficialProxyButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUI_ListSessions_UnofficialProxyButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUI_ListSessions_FavoritesProxyButton_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature();
	void PreConstruct(bool* IsDesignTime);
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button3_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button4_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button5_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button6_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button7_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button8_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button9_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button10_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature();
	void UpdateWidget();
	float Tick();
	void Construct();
	float ExecuteUbergraph_ASAUIWidget_HorizontalListSelector_Sub_Style4(class UPrimalUI* K2Node_DynamicCast_AsPrimal_UI, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_2, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_3, bool CallFunc_NotEqual_IntInt_ReturnValue_4, bool CallFunc_NotEqual_IntInt_ReturnValue_5, bool CallFunc_NotEqual_IntInt_ReturnValue_6, bool CallFunc_NotEqual_IntInt_ReturnValue_7, bool CallFunc_NotEqual_IntInt_ReturnValue_8, bool CallFunc_NotEqual_IntInt_ReturnValue_9, bool CallFunc_NotEqual_IntInt_ReturnValue_10, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, double* CallFunc_BreakVector2D_X_1, double* CallFunc_BreakVector2D_Y_1, int32* CallFunc_Array_Add_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, int32* CallFunc_Array_Add_ReturnValue_1);
	void OnSelectionIndexChanged__DelegateSignature(int32* Index);
	void OnSelectionChanged_10__DelegateSignature();
	void OnSelectionChanged_9__DelegateSignature();
	void OnSelectionChanged_8__DelegateSignature();
	void OnSelectionChanged_7__DelegateSignature();
	void OnSelectionChanged_6__DelegateSignature();
	void OnSelectionChanged_5__DelegateSignature();
	void OnSelectionChanged_4__DelegateSignature();
	void OnSelectionChanged_3__DelegateSignature();
	void OnSelectionChanged_2__DelegateSignature();
	void OnSelectionChanged_1__DelegateSignature();
	void OnSelectionChanged_0__DelegateSignature();
};

}


