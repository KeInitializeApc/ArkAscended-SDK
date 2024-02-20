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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UBorder*                               Border0;                                           // 0x338(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border1;                                           // 0x340(0x8)(Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border2;                                           // 0x348(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border3;                                           // 0x350(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border4;                                           // 0x358(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border5;                                           // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_726;                                 // 0x368(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, RepNotify, Interp, NonTransactional, NoDestructor, AutoWeak, ContainsInstancedReference, SimpleDisplay)
	class UEditableText*                         TEXT_Digit1;                                       // 0x370(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableText*                         TEXT_Digit2;                                       // 0x378(0x8)(ConstParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableText*                         TEXT_Digit3;                                       // 0x380(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableText*                         TEXT_Digit4;                                       // 0x388(0x8)(BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableText*                         TEXT_Digit5;                                       // 0x390(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableText*                         TEXT_Digit6;                                       // 0x398(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrentFocused;                                    // 0x3A0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FilledDigits;                                      // 0x3A4(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Digits;                                            // 0x3A8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, Transient, InstancedReference, SubobjectReference)
	bool                                         IsFilled0;                                         // 0x3B8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsFilled1;                                         // 0x3B9(0x1)(ConstParm, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsFilled2;                                         // 0x3BA(0x1)(ExportObject, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsFilled3;                                         // 0x3BB(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsFilled4;                                         // 0x3BC(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsFilled5;                                         // 0x3BD(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BBB[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnDigitsFilled;                                    // 0x3C0(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnDigitsNotFilled;                                 // 0x3D0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit1;                                        // 0x3E0(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit2;                                        // 0x3F8(0x18)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit3;                                        // 0x410(0x18)(Edit, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit4;                                        // 0x428(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit5;                                        // 0x440(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit6;                                        // 0x458(0x18)(Edit, ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Code_C* GetDefaultObj();

	int32 OnLeftArrow(bool* K2Node_SwitchInteger_CmpSuccess);
	int32 OnRightArrow(bool* K2Node_SwitchInteger_CmpSuccess);
	class FString GetDigits(const class FString& Digits, class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_3, class FString* CallFunc_Conv_TextToString_ReturnValue_4, class FString* CallFunc_Conv_TextToString_ReturnValue_5);
	int32 BackSpace(bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool* K2Node_SwitchInteger_CmpSuccess);
	bool SetDigitToText(int32* Index, class FText* Text, class FString* CallFunc_Conv_TextToString_ReturnValue, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, bool* K2Node_SwitchInteger_CmpSuccess, class FText* CallFunc_Conv_StringToText_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue_2, class FText* CallFunc_Conv_StringToText_ReturnValue_3, class FText* CallFunc_Conv_StringToText_ReturnValue_4, class FText* CallFunc_Conv_StringToText_ReturnValue_5, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32* CallFunc_Array_LastIndex_ReturnValue);
	class FString OnPreviewKeyDown(const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
	void Event_Reset_Code_Incorect();
	void Event_Code_Incorect();
	void BndEvt__Verification_UI_EditableText_172_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(class FText* Text);
	void BndEvt__Verification_UI_digit2_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature(class FText* Text);
	void BndEvt__Verification_UI_digit3_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature(class FText* Text);
	void BndEvt__Verification_UI_digit4_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature(class FText* Text);
	void BndEvt__Verification_UI_digit5_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature(class FText* Text);
	void BndEvt__Verification_UI_digit6_K2Node_ComponentBoundEvent_8_OnEditableTextChangedEvent__DelegateSignature(class FText* Text);
	void PreConstruct(bool* IsDesignTime);
	bool ExecuteUbergraph_UI_Code(class FString* CallFunc_Conv_TextToString_ReturnValue, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, int32* CallFunc_Array_LastIndex_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_1, int32* CallFunc_Array_LastIndex_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue_2, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_3, class FText* CallFunc_Conv_StringToText_ReturnValue_2, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_3, int32* CallFunc_Array_LastIndex_ReturnValue_2, class FText* CallFunc_Conv_StringToText_ReturnValue_3, int32* CallFunc_Array_LastIndex_ReturnValue_3, class FString* CallFunc_Conv_TextToString_ReturnValue_4, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_4, class FString* CallFunc_Conv_TextToString_ReturnValue_5, class FText* CallFunc_Conv_StringToText_ReturnValue_4, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_5, int32* CallFunc_Array_LastIndex_ReturnValue_4, class FText* CallFunc_Conv_StringToText_ReturnValue_5, int32* CallFunc_Array_LastIndex_ReturnValue_5);
	void OnDigitsNotFilled__DelegateSignature();
	void OnDigitsFilled__DelegateSignature(const class FString& Digits);
};

}


