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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button0;                                           // 0x338(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button1;                                           // 0x340(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button10;                                          // 0x348(0x8)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button2;                                           // 0x350(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button3;                                           // 0x358(0x8)(ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button4;                                           // 0x360(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button5;                                           // 0x368(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button6;                                           // 0x370(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button7;                                           // 0x378(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button8;                                           // 0x380(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          Button9;                                           // 0x388(0x8)(EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HorizBox;                                          // 0x390(0x8)(Edit, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                NavLeft;                                           // 0x398(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                NavRight;                                          // 0x3A0(0x8)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_0;                              // 0x3A8(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, RepNotify)
	int32                                        NumButtons;                                        // 0x3B8(0x4)(ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrSelection;                                     // 0x3BC(0x4)(Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        LastSelection;                                     // 0x3C0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4796[0x4];                                     // Fixing Size After Last Property  > TateDumper <
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
	TArray<class FText>                          ButtonLabels_Left;                                 // 0x468(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UTexture*>                      ButtonLabels_Icon;                                 // 0x478(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     ButtonLabels_Icon_Size;                            // 0x488(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FText>                          ButtonLabels_Right;                                // 0x498(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateFontInfo                        ButtonLabels_Font;                                 // 0x4A8(0x58)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UASAUIWidget_Button_Style4_C*>  buttons;                                           // 0x500(0x10)(Edit, ConstParm, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	TArray<double>                               CalculatedWidths;                                  // 0x510(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSelectionIndexChanged;                           // 0x520(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUIWidget_HorizontalListSelector_Sub_Style4_C* GetDefaultObj();

	bool SetEnabledStateOfButtonIndex(bool CallFunc_Array_IsValidIndex_ReturnValue, class UASAUIWidget_Button_Style4_C** CallFunc_Array_Get_Item);
	bool GetPreviousAvailableButtonIndex(bool Temp_bool_Variable, int32* CallFunc_GetLastAvailableButtonIndex_FirstButton, int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32* CallFunc_GetLastAvailableButtonIndex_FirstButton_1, class UASAUIWidget_Button_Style4_C** CallFunc_Array_Get_Item, bool* CallFunc_GetIsEnabled_ReturnValue);
	bool GetNextAvailableButtonIndex(int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, int32* CallFunc_Get_First_Available_Button_Index_FirstButton, int32* Temp_int_Variable, int32* CallFunc_Get_First_Available_Button_Index_FirstButton_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UASAUIWidget_Button_Style4_C** CallFunc_Array_Get_Item, bool* CallFunc_GetIsEnabled_ReturnValue);
	bool GetLastAvailableButtonIndex(bool Temp_bool_Variable, int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UASAUIWidget_Button_Style4_C** CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, bool* CallFunc_GetIsEnabled_ReturnValue);
	bool Get_First_Available_Button_Index(bool Temp_bool_Variable, int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UASAUIWidget_Button_Style4_C** CallFunc_Array_Get_Item, bool* CallFunc_GetIsEnabled_ReturnValue);
	class UTexture2D* Fix_Console_Icons(int32 CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class UWidget** CallFunc_Array_Get_Item, class UImage** K2Node_DynamicCast_AsImage, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue);
	int32 SwitchButton(bool* Next, class UASAUIWidget_Button_Style4_C** CallFunc_Array_Get_Item, class UASAUIWidget_Button_Style4_C** CallFunc_Array_Get_Item_1);
	bool SetButtonsInactive(int32 CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class UASAUIWidget_Button_Style4_C** CallFunc_Array_Get_Item);
	void BndEvt__ASAUI_ListSessions_OfficialProxyButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUI_ListSessions_UnofficialProxyButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUI_ListSessions_FavoritesProxyButton_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button3_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button4_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button5_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button6_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button7_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button8_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button9_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button10_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature();
	void UpdateWidget();
	float Tick(struct FGeometry* MyGeometry);
	void Construct();
	TArray<class UASAUIWidget_Button_Style4_C*> ExecuteUbergraph_ASAUIWidget_HorizontalListSelector_Sub_Style4(TArray<class UPrimalUI*>* CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32* CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32* Temp_int_Variable, class UPrimalUserWidget** CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32* Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, class UASAUIWidget_Button_Style4_C** CallFunc_Array_Get_Item_1, class UTexture** CallFunc_Array_Get_Item_2, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget** CallFunc_Array_Get_Item_3, int32* CallFunc_Array_Length_ReturnValue_1, struct FGeometry* CallFunc_GetCachedGeometry_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, struct FGeometry* CallFunc_GetCachedGeometry_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, struct FGeometry* CallFunc_GetCachedGeometry_ReturnValue_2, int32* CallFunc_Array_Add_ReturnValue, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, int32* Temp_int_Variable_2, double* CallFunc_Add_DoubleFloat_ReturnValue, int32* CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_5, float* CallFunc_Add_DoubleFloat_B_ImplicitCast);
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


