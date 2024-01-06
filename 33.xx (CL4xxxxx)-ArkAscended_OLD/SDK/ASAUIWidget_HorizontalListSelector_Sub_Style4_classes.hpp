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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button0;                                           // 0x338(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button1;                                           // 0x340(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button10;                                          // 0x348(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button2;                                           // 0x350(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button3;                                           // 0x358(0x8)(ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button4;                                           // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button5;                                           // 0x368(0x8)(ConstParm, ExportObject, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button6;                                           // 0x370(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button7;                                           // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button8;                                           // 0x380(0x8)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button9;                                           // 0x388(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HorizBox;                                          // 0x390(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                NavLeft;                                           // 0x398(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                NavRight;                                          // 0x3A0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_0;                              // 0x3A8(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, RepNotify)
	int32                                        NumButtons;                                        // 0x3B8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrSelection;                                     // 0x3BC(0x4)(Edit, BlueprintVisible, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        LastSelection;                                     // 0x3C0(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4087[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnSelectionChanged_1;                              // 0x3C8(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, Interp)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_2;                              // 0x3D8(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, RepNotify, Interp)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_3;                              // 0x3E8(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, NonTransactional)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_4;                              // 0x3F8(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, RepNotify, NonTransactional)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_5;                              // 0x408(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, Interp, NonTransactional)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_6;                              // 0x418(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, RepNotify, Interp, NonTransactional)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_7;                              // 0x428(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, EditorOnly)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_8;                              // 0x438(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, RepNotify, EditorOnly)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_9;                              // 0x448(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, Interp, EditorOnly)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_10;                             // 0x458(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, RepNotify, Interp, EditorOnly)
	TArray<class FText>                          ButtonLabels_Left;                                 // 0x468(0x10)(Edit, ConstParm, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UTexture*>                      ButtonLabels_Icon;                                 // 0x478(0x10)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     ButtonLabels_Icon_Size;                            // 0x488(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FText>                          ButtonLabels_Right;                                // 0x498(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateFontInfo                        ButtonLabels_Font;                                 // 0x4A8(0x58)(Edit, ConstParm, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UASAUIWidget_Button_Style4_C*>  buttons;                                           // 0x500(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	TArray<double>                               CalculatedWidths;                                  // 0x510(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSelectionIndexChanged;                           // 0x520(0x10)(Edit, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUIWidget_HorizontalListSelector_Sub_Style4_C* GetDefaultObj();

	class UASAUIWidget_Button_Style4_C* SetEnabledStateOfButtonIndex(bool* Enabled_, bool CallFunc_Array_IsValidIndex_ReturnValue);
	class UASAUIWidget_Button_Style4_C* GetPreviousAvailableButtonIndex(int32* FirstButton, int32* FoundNextButton, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool* Temp_bool_Variable, int32 CallFunc_GetLastAvailableButtonIndex_FirstButton, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32* CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetLastAvailableButtonIndex_FirstButton_1, bool* CallFunc_GetIsEnabled_ReturnValue);
	class UASAUIWidget_Button_Style4_C* GetNextAvailableButtonIndex(int32* FirstButton, int32* FoundNextButton, int32* CallFunc_Add_IntInt_ReturnValue, bool* Temp_bool_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Get_First_Available_Button_Index_FirstButton, int32 CallFunc_Get_First_Available_Button_Index_FirstButton_1, int32* CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_GetIsEnabled_ReturnValue);
	class UASAUIWidget_Button_Style4_C* GetLastAvailableButtonIndex(int32* FirstButton, int32* FoundFirstButton, bool* Temp_bool_Variable, int32* CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_GetIsEnabled_ReturnValue);
	class UASAUIWidget_Button_Style4_C* Get_First_Available_Button_Index(int32* FirstButton, int32* FoundFirstButton, bool* Temp_bool_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_GetIsEnabled_ReturnValue);
	bool Fix_Console_Icons(int32* CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>* K2Node_MakeArray_Array, class UImage** K2Node_DynamicCast_AsImage);
	class UASAUIWidget_Button_Style4_C* SwitchButton(bool* Next, int32 CallFunc_GetPreviousAvailableButtonIndex_FirstButton, int32 CallFunc_GetNextAvailableButtonIndex_FirstButton);
	bool SetButtonsInactive(int32* CallFunc_Add_IntInt_ReturnValue);
	void BndEvt__ASAUI_ListSessions_OfficialProxyButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUI_ListSessions_UnofficialProxyButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUI_ListSessions_FavoritesProxyButton_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature();
	bool PreConstruct();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button3_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button4_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button5_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button6_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button7_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button8_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button9_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button10_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature();
	void UpdateWidget();
	float Tick(const struct FGeometry& MyGeometry);
	void Construct();
	int32 ExecuteUbergraph_ASAUIWidget_HorizontalListSelector_Sub_Style4(int32* EntryPoint, const TArray<class UPrimalUI*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32* CallFunc_Add_IntInt_ReturnValue, class UPrimalUI** K2Node_DynamicCast_AsPrimal_UI, int32* CallFunc_Add_IntInt_ReturnValue_1, int32* CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue, bool* CallFunc_NotEqual_IntInt_ReturnValue, bool* CallFunc_NotEqual_IntInt_ReturnValue_1, int32* CallFunc_Add_IntInt_ReturnValue_3, bool* CallFunc_NotEqual_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, bool* CallFunc_NotEqual_IntInt_ReturnValue_3, bool* CallFunc_NotEqual_IntInt_ReturnValue_4, bool* CallFunc_NotEqual_IntInt_ReturnValue_5, bool* CallFunc_NotEqual_IntInt_ReturnValue_6, bool* CallFunc_NotEqual_IntInt_ReturnValue_7, bool* CallFunc_NotEqual_IntInt_ReturnValue_8, bool* CallFunc_NotEqual_IntInt_ReturnValue_9, bool* CallFunc_NotEqual_IntInt_ReturnValue_10, int32* CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue_1, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, double* CallFunc_BreakVector2D_X_1, double* CallFunc_BreakVector2D_Y_1, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue_2, int32* CallFunc_Array_Add_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue_2, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_2, double* CallFunc_Add_DoubleFloat_ReturnValue, int32* CallFunc_Array_Add_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32* CallFunc_Add_IntInt_ReturnValue_5, TArray<class UASAUIWidget_Button_Style4_C*>* K2Node_MakeArray_Array, float* CallFunc_Add_DoubleFloat_B_ImplicitCast);
	int32 OnSelectionIndexChanged__DelegateSignature();
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


