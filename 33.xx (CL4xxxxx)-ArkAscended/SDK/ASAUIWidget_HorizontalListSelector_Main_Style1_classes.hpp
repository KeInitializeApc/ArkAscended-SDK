#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x200 (0x530 - 0x330)
// WidgetBlueprintGeneratedClass ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C
class UASAUIWidget_HorizontalListSelector_Main_Style1_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UASAUIWidget_Button_Style2A_C*         Button0;                                           // 0x338(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style2A_C*         Button1;                                           // 0x340(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style2A_C*         Button10;                                          // 0x348(0x8)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style2A_C*         Button2;                                           // 0x350(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style2A_C*         Button3;                                           // 0x358(0x8)(ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style2A_C*         Button4;                                           // 0x360(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style2A_C*         Button5;                                           // 0x368(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style2A_C*         Button6;                                           // 0x370(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style2A_C*         Button7;                                           // 0x378(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style2A_C*         Button8;                                           // 0x380(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style2A_C*         Button9;                                           // 0x388(0x8)(EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Header_NavLeft;                                    // 0x390(0x8)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Header_NavRight;                                   // 0x398(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_0;                                   // 0x3A0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, GlobalConfig, RepNotify)
	class USizeBox*                              SizeBox;                                           // 0x3A8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_0;                              // 0x3B0(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, RepNotify)
	int32                                        NumButtons;                                        // 0x3C0(0x4)(ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrSelection;                                     // 0x3C4(0x4)(Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        LastSelection;                                     // 0x3C8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4B6A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnSelectionChanged_1;                              // 0x3D0(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, Interp)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_2;                              // 0x3E0(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, RepNotify, Interp)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_3;                              // 0x3F0(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, NonTransactional)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_4;                              // 0x400(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, RepNotify, NonTransactional)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_5;                              // 0x410(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, Interp, NonTransactional)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_6;                              // 0x420(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, RepNotify, Interp, NonTransactional)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_7;                              // 0x430(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, EditorOnly)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_8;                              // 0x440(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, RepNotify, EditorOnly)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_9;                              // 0x450(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, Interp, EditorOnly)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_10;                             // 0x460(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, RepNotify, Interp, EditorOnly)
	TArray<class FText>                          ButtonLabels_Left;                                 // 0x470(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UTexture2D*>                    ButtonLabels_Icon;                                 // 0x480(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     ButtonLabels_Icon_Size;                            // 0x490(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FText>                          ButtonLabels_Right;                                // 0x4A0(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateFontInfo                        ButtonLabels_Font;                                 // 0x4B0(0x58)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UASAUIWidget_Button_Style2A_C*> buttons;                                           // 0x508(0x10)(Edit, ConstParm, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	double                                       ButtonWidth;                                       // 0x518(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSelectionChangedIndex;                           // 0x520(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUIWidget_HorizontalListSelector_Main_Style1_C* GetDefaultObj();

	int32 Set_Visible_State_Of_Button_Index(bool* Enabled, class UASAUIWidget_Button_Style2A_C** CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);
	bool SetToIndex(int32* Temp_int_Variable, bool CallFunc_BooleanAND_ReturnValue, class UASAUIWidget_Button_Style2A_C** K2Node_Select_Default);
	bool SetEnabledStateOfButtonIndex(bool CallFunc_Array_IsValidIndex_ReturnValue, class UASAUIWidget_Button_Style2A_C** CallFunc_Array_Get_Item);
	bool GetPreviousAvailableButtonIndex(bool Temp_bool_Variable, int32* CallFunc_GetLastAvailableButtonIndex_FirstButton, int32* CallFunc_GetLastAvailableButtonIndex_FirstButton_1, int32* Temp_int_Variable, class UASAUIWidget_Button_Style2A_C** CallFunc_Array_Get_Item, bool* CallFunc_GetIsEnabled_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool GetNextAvailableButtonIndex(int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, int32* CallFunc_Get_First_Available_Button_Index_FirstButton, int32* Temp_int_Variable, int32* CallFunc_Get_First_Available_Button_Index_FirstButton_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UASAUIWidget_Button_Style2A_C** CallFunc_Array_Get_Item, bool* CallFunc_GetIsEnabled_ReturnValue);
	bool GetLastAvailableButtonIndex(bool Temp_bool_Variable, int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UASAUIWidget_Button_Style2A_C** CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, bool* CallFunc_GetIsEnabled_ReturnValue);
	bool Get_First_Available_Button_Index(bool Temp_bool_Variable, int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UASAUIWidget_Button_Style2A_C** CallFunc_Array_Get_Item, bool* CallFunc_GetIsEnabled_ReturnValue);
	class UTexture2D* FixConsoleIcons(int32 CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class UWidget** CallFunc_Array_Get_Item, class UImage** K2Node_DynamicCast_AsImage, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue);
	int32 SwitchButton(bool* Next, bool* CallFunc_GetIsEnabled_ReturnValue, class UASAUIWidget_Button_Style2A_C** CallFunc_Array_Get_Item, class UASAUIWidget_Button_Style2A_C** CallFunc_Array_Get_Item_1);
	bool Set_All_Buttons_Inactive(int32 CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class UASAUIWidget_Button_Style2A_C** CallFunc_Array_Get_Item);
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
	void Construct();
	float Tick(struct FGeometry* MyGeometry);
	int32 SetToSpecificIndex();
	float ExecuteUbergraph_ASAUIWidget_HorizontalListSelector_Main_Style1(TArray<class UPrimalUI*>* CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32* CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32* Temp_int_Variable, class UPrimalUserWidget** CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32* Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_3, class UASAUIWidget_Button_Style2A_C** CallFunc_Array_Get_Item_1, int32* Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_4, class UTexture2D** CallFunc_Array_Get_Item_2, double CallFunc_Multiply_DoubleFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast);
	int32 OnSelectionChangedIndex__DelegateSignature();
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


