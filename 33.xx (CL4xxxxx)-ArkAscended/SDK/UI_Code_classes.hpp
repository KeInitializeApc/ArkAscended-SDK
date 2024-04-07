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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UBorder*                               Border0;                                           // 0x338(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border1;                                           // 0x340(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border2;                                           // 0x348(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border3;                                           // 0x350(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border4;                                           // 0x358(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border5;                                           // 0x360(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_726;                                 // 0x368(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, GlobalConfig, RepNotify, Interp, NonTransactional, NoDestructor, AutoWeak, ContainsInstancedReference, SimpleDisplay)
	class UEditableText*                         TEXT_Digit1;                                       // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UEditableText*                         TEXT_Digit2;                                       // 0x378(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UEditableText*                         TEXT_Digit3;                                       // 0x380(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UEditableText*                         TEXT_Digit4;                                       // 0x388(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UEditableText*                         TEXT_Digit5;                                       // 0x390(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UEditableText*                         TEXT_Digit6;                                       // 0x398(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrentFocused;                                    // 0x3A0(0x4)(BlueprintReadOnly, Net, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FilledDigits;                                      // 0x3A4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Digits;                                            // 0x3A8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         IsFilled0;                                         // 0x3B8(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsFilled1;                                         // 0x3B9(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsFilled2;                                         // 0x3BA(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsFilled3;                                         // 0x3BB(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsFilled4;                                         // 0x3BC(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsFilled5;                                         // 0x3BD(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3AA8[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnDigitsFilled;                                    // 0x3C0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnDigitsNotFilled;                                 // 0x3D0(0x10)(Edit, ExportObject, Net, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit1;                                        // 0x3E0(0x18)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit2;                                        // 0x3F8(0x18)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit3;                                        // 0x410(0x18)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit4;                                        // 0x428(0x18)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit5;                                        // 0x440(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit6;                                        // 0x458(0x18)(BlueprintVisible, Net, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Code_C* GetDefaultObj();

	bool OnLeftArrow(int32* Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue);
	bool OnRightArrow(int32* Temp_int_Variable);
	class FString GetDigits(const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4);
	bool BackSpace(int32* Temp_int_Variable, int32* Temp_int_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1);
	class FText SetDigitToText(const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, int32* Temp_int_Variable, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1, const class FString& CallFunc_Array_Get_Item_2, const class FString& CallFunc_Array_Get_Item_3, const class FString& CallFunc_Array_Get_Item_4, const class FString& CallFunc_Array_Get_Item_5, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, int32* CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	struct FEventReply OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent, struct FKey* CallFunc_GetKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_2, const class FString& CallFunc_GetDigits_Digits, bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
	void Event_Reset_Code_Incorect();
	void Event_Code_Incorect();
	class FText BndEvt__Verification_UI_EditableText_172_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature();
	class FText BndEvt__Verification_UI_digit2_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature();
	class FText BndEvt__Verification_UI_digit3_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature();
	class FText BndEvt__Verification_UI_digit4_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature();
	class FText BndEvt__Verification_UI_digit5_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature();
	class FText BndEvt__Verification_UI_digit6_K2Node_ComponentBoundEvent_8_OnEditableTextChangedEvent__DelegateSignature();
	bool PreConstruct();
	class FText ExecuteUbergraph_UI_Code(int32* EntryPoint, int32* Temp_int_Variable, int32* Temp_int_Variable_1, int32* Temp_int_Variable_2, class FText K2Node_ComponentBoundEvent_Text_5, class FText K2Node_ComponentBoundEvent_Text_4, class FText K2Node_ComponentBoundEvent_Text_3, class FText K2Node_ComponentBoundEvent_Text_2, class FText K2Node_ComponentBoundEvent_Text_1, class FText K2Node_ComponentBoundEvent_Text, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32* CallFunc_Array_LastIndex_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, int32* Temp_int_Variable_3, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_1, int32* CallFunc_Array_LastIndex_ReturnValue_1, bool* CallFunc_Greater_IntInt_ReturnValue_1, int32* Temp_int_Variable_4, int32* Temp_int_Variable_5, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_2, const class FString& CallFunc_Array_Get_Item_2, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_3, const class FString& CallFunc_Array_Get_Item_3, int32* CallFunc_Array_LastIndex_ReturnValue_2, bool* CallFunc_Greater_IntInt_ReturnValue_2, int32* CallFunc_Array_LastIndex_ReturnValue_3, bool* CallFunc_Greater_IntInt_ReturnValue_3, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_4, const class FString& CallFunc_Array_Get_Item_4, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_5, const class FString& CallFunc_Array_Get_Item_5, int32* CallFunc_Array_LastIndex_ReturnValue_4, bool* CallFunc_Greater_IntInt_ReturnValue_4, int32* CallFunc_Array_LastIndex_ReturnValue_5, bool* CallFunc_Greater_IntInt_ReturnValue_5);
	void OnDigitsNotFilled__DelegateSignature();
	class FString OnDigitsFilled__DelegateSignature();
};

}


