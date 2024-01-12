#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x470 - 0x330)
// WidgetBlueprintGeneratedClass UI_Code.UI_Code_C
class UUI_Code_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UBorder*                               Border0;                                           // 0x338(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border1;                                           // 0x340(0x8)(Edit, ConstParm, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border2;                                           // 0x348(0x8)(ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border3;                                           // 0x350(0x8)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border4;                                           // 0x358(0x8)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border5;                                           // 0x360(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_726;                                 // 0x368(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, GlobalConfig, RepNotify, Interp, NonTransactional, NoDestructor, AutoWeak, ContainsInstancedReference, SimpleDisplay)
	class UEditableText*                         TEXT_Digit1;                                       // 0x370(0x8)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableText*                         TEXT_Digit2;                                       // 0x378(0x8)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableText*                         TEXT_Digit3;                                       // 0x380(0x8)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableText*                         TEXT_Digit4;                                       // 0x388(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableText*                         TEXT_Digit5;                                       // 0x390(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableText*                         TEXT_Digit6;                                       // 0x398(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrentFocused;                                    // 0x3A0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FilledDigits;                                      // 0x3A4(0x4)(BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Digits;                                            // 0x3A8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         IsFilled0;                                         // 0x3B8(0x1)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsFilled1;                                         // 0x3B9(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsFilled2;                                         // 0x3BA(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsFilled3;                                         // 0x3BB(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsFilled4;                                         // 0x3BC(0x1)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsFilled5;                                         // 0x3BD(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4AD8[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnDigitsFilled;                                    // 0x3C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnDigitsNotFilled;                                 // 0x3D0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit1;                                        // 0x3E0(0x18)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit2;                                        // 0x3F8(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit3;                                        // 0x410(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit4;                                        // 0x428(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit5;                                        // 0x440(0x18)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit6;                                        // 0x458(0x18)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Code_C* GetDefaultObj();

	bool OnLeftArrow(int32* Temp_int_Variable);
	bool OnRightArrow(int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetDigits(const class FString& Digits, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4);
	bool BackSpace(int32* Temp_int_Variable, int32* Temp_int_Variable_1);
	bool SetDigitToText(const class FString& CallFunc_Conv_TextToString_ReturnValue, int32* Temp_int_Variable, class FString* CallFunc_Array_Get_Item, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FString* CallFunc_Array_Get_Item_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FString* CallFunc_Array_Get_Item_2, class FString* CallFunc_Array_Get_Item_3, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, class FString* CallFunc_Array_Get_Item_4, class FString* CallFunc_Array_Get_Item_5, class FText CallFunc_Conv_StringToText_ReturnValue_4, class FText CallFunc_Conv_StringToText_ReturnValue_5, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue);
	bool OnPreviewKeyDown(struct FGeometry* MyGeometry);
	void Event_Reset_Code_Incorect();
	void Event_Code_Incorect();
	class FText BndEvt__Verification_UI_EditableText_172_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature();
	class FText BndEvt__Verification_UI_digit2_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature();
	class FText BndEvt__Verification_UI_digit3_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature();
	class FText BndEvt__Verification_UI_digit4_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature();
	class FText BndEvt__Verification_UI_digit5_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature();
	class FText BndEvt__Verification_UI_digit6_K2Node_ComponentBoundEvent_8_OnEditableTextChangedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	bool ExecuteUbergraph_UI_Code(int32* Temp_int_Variable, int32* Temp_int_Variable_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, int32* Temp_int_Variable_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_Array_Get_Item, class FText CallFunc_Conv_StringToText_ReturnValue, int32* Temp_int_Variable_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FString* CallFunc_Array_Get_Item_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, int32* Temp_int_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32* Temp_int_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, class FString* CallFunc_Array_Get_Item_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FString* CallFunc_Array_Get_Item_3, class FText CallFunc_Conv_StringToText_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, class FString* CallFunc_Array_Get_Item_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_5, class FText CallFunc_Conv_StringToText_ReturnValue_4, class FString* CallFunc_Array_Get_Item_5, class FText CallFunc_Conv_StringToText_ReturnValue_5);
	void OnDigitsNotFilled__DelegateSignature();
	void OnDigitsFilled__DelegateSignature(const class FString& Digits);
};

}


