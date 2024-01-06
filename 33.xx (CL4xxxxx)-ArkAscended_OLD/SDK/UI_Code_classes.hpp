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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UBorder*                               Border0;                                           // 0x338(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border1;                                           // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border2;                                           // 0x348(0x8)(BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border3;                                           // 0x350(0x8)(Edit, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border4;                                           // 0x358(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border5;                                           // 0x360(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_726;                                 // 0x368(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, GlobalConfig, RepNotify, Interp, NonTransactional, NoDestructor, AutoWeak, ContainsInstancedReference, SimpleDisplay)
	class UEditableText*                         TEXT_Digit1;                                       // 0x370(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableText*                         TEXT_Digit2;                                       // 0x378(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableText*                         TEXT_Digit3;                                       // 0x380(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableText*                         TEXT_Digit4;                                       // 0x388(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableText*                         TEXT_Digit5;                                       // 0x390(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableText*                         TEXT_Digit6;                                       // 0x398(0x8)(Edit, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrentFocused;                                    // 0x3A0(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FilledDigits;                                      // 0x3A4(0x4)(Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Digits;                                            // 0x3A8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         IsFilled0;                                         // 0x3B8(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsFilled1;                                         // 0x3B9(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsFilled2;                                         // 0x3BA(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsFilled3;                                         // 0x3BB(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsFilled4;                                         // 0x3BC(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsFilled5;                                         // 0x3BD(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3E2F[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnDigitsFilled;                                    // 0x3C0(0x10)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnDigitsNotFilled;                                 // 0x3D0(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit1;                                        // 0x3E0(0x18)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit2;                                        // 0x3F8(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit3;                                        // 0x410(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit4;                                        // 0x428(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit5;                                        // 0x440(0x18)(Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TextDigit6;                                        // 0x458(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Code_C* GetDefaultObj();

	int32 OnLeftArrow(int32 CallFunc_Subtract_IntInt_ReturnValue, bool* K2Node_SwitchInteger_CmpSuccess);
	int32 OnRightArrow(int32* CallFunc_Add_IntInt_ReturnValue, bool* K2Node_SwitchInteger_CmpSuccess);
	class FString GetDigits(class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_3, class FString* CallFunc_Conv_TextToString_ReturnValue_4, class FString* CallFunc_Conv_TextToString_ReturnValue_5, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue_2, class FString* CallFunc_Concat_StrStr_ReturnValue_3, class FString* CallFunc_Concat_StrStr_ReturnValue_4);
	int32 BackSpace(int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool* K2Node_SwitchInteger_CmpSuccess);
	int32 SetDigitToText(class FString* CallFunc_Conv_TextToString_ReturnValue, bool* K2Node_SwitchInteger_CmpSuccess, class FText* CallFunc_Conv_StringToText_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue_2, class FText* CallFunc_Conv_StringToText_ReturnValue_3, class FText* CallFunc_Conv_StringToText_ReturnValue_4, class FText* CallFunc_Conv_StringToText_ReturnValue_5, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	class FString OnPreviewKeyDown(const struct FGeometry& MyGeometry, struct FKeyEvent* InKeyEvent, struct FEventReply* ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void Event_Reset_Code_Incorect();
	void Event_Code_Incorect();
	class FText BndEvt__Verification_UI_EditableText_172_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature();
	class FText BndEvt__Verification_UI_digit2_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature();
	class FText BndEvt__Verification_UI_digit3_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature();
	class FText BndEvt__Verification_UI_digit4_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature();
	class FText BndEvt__Verification_UI_digit5_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature();
	class FText BndEvt__Verification_UI_digit6_K2Node_ComponentBoundEvent_8_OnEditableTextChangedEvent__DelegateSignature();
	bool PreConstruct();
	bool ExecuteUbergraph_UI_Code(int32* EntryPoint, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue_2, bool CallFunc_TextIsEmpty_ReturnValue_3, bool CallFunc_TextIsEmpty_ReturnValue_4, bool CallFunc_TextIsEmpty_ReturnValue_5, class FString* CallFunc_Conv_TextToString_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue_1, int32* CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue_1, int32* CallFunc_Add_IntInt_ReturnValue_2, int32* CallFunc_Add_IntInt_ReturnValue_3, int32* CallFunc_Add_IntInt_ReturnValue_4, int32* CallFunc_Add_IntInt_ReturnValue_5, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, class FString* CallFunc_Conv_TextToString_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_3, class FText* CallFunc_Conv_StringToText_ReturnValue_2, class FText* CallFunc_Conv_StringToText_ReturnValue_3, class FString* CallFunc_Conv_TextToString_ReturnValue_4, class FString* CallFunc_Conv_TextToString_ReturnValue_5, class FText* CallFunc_Conv_StringToText_ReturnValue_4, class FText* CallFunc_Conv_StringToText_ReturnValue_5);
	void OnDigitsNotFilled__DelegateSignature();
	class FString OnDigitsFilled__DelegateSignature();
};

}


