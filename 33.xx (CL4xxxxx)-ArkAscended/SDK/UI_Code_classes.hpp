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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UBorder*                               Border0;                                           // 0x338(0x8)(ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UBorder*                               Border1;                                           // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UBorder*                               Border2;                                           // 0x348(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UBorder*                               Border3;                                           // 0x350(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UBorder*                               Border4;                                           // 0x358(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UBorder*                               Border5;                                           // 0x360(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_726;                                 // 0x368(0x8)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor, AutoWeak, ContainsInstancedReference, SimpleDisplay)
	class UEditableText*                         TEXT_Digit1;                                       // 0x370(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UEditableText*                         TEXT_Digit2;                                       // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UEditableText*                         TEXT_Digit3;                                       // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UEditableText*                         TEXT_Digit4;                                       // 0x388(0x8)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UEditableText*                         TEXT_Digit5;                                       // 0x390(0x8)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UEditableText*                         TEXT_Digit6;                                       // 0x398(0x8)(Edit, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        CurrentFocused;                                    // 0x3A0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        FilledDigits;                                      // 0x3A4(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class FString                                Digits;                                            // 0x3A8(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         IsFilled0;                                         // 0x3B8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         IsFilled1;                                         // 0x3B9(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         IsFilled2;                                         // 0x3BA(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         IsFilled3;                                         // 0x3BB(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         IsFilled4;                                         // 0x3BC(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         IsFilled5;                                         // 0x3BD(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_4A93[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnDigitsFilled;                                    // 0x3C0(0x10)(ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnDigitsNotFilled;                                 // 0x3D0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class FText                                  TextDigit1;                                        // 0x3E0(0x18)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FText                                  TextDigit2;                                        // 0x3F8(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FText                                  TextDigit3;                                        // 0x410(0x18)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FText                                  TextDigit4;                                        // 0x428(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FText                                  TextDigit5;                                        // 0x440(0x18)(EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FText                                  TextDigit6;                                        // 0x458(0x18)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Code_C* GetDefaultObj();

	int32 OnLeftArrow(int32* CallFunc_Subtract_IntInt_ReturnValue, bool* K2Node_SwitchInteger_CmpSuccess);
	int32 OnRightArrow(bool* K2Node_SwitchInteger_CmpSuccess);
	class FString GetDigits();
	int32 BackSpace(int32* CallFunc_Subtract_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, int32* CallFunc_Subtract_IntInt_ReturnValue_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool* K2Node_SwitchInteger_CmpSuccess);
	bool SetDigitToText(const class FString& CallFunc_Array_Get_Item, bool* K2Node_SwitchInteger_CmpSuccess, const class FString& CallFunc_Array_Get_Item_1, const class FString& CallFunc_Array_Get_Item_2, const class FString& CallFunc_Array_Get_Item_3, const class FString& CallFunc_Array_Get_Item_4, const class FString& CallFunc_Array_Get_Item_5, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue);
	bool OnPreviewKeyDown(const struct FGeometry& MyGeometry, struct FKeyEvent* InKeyEvent, const struct FEventReply& ReturnValue, const class FString& CallFunc_GetDigits_Digits, bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
	void Event_Reset_Code_Incorect();
	void Event_Code_Incorect();
	class FText BndEvt__Verification_UI_EditableText_172_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature();
	class FText BndEvt__Verification_UI_digit2_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature();
	class FText BndEvt__Verification_UI_digit3_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature();
	class FText BndEvt__Verification_UI_digit4_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature();
	class FText BndEvt__Verification_UI_digit5_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature();
	class FText BndEvt__Verification_UI_digit6_K2Node_ComponentBoundEvent_8_OnEditableTextChangedEvent__DelegateSignature();
	bool PreConstruct();
	bool ExecuteUbergraph_UI_Code(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text_5, class FText K2Node_ComponentBoundEvent_Text_4, class FText K2Node_ComponentBoundEvent_Text_3, class FText K2Node_ComponentBoundEvent_Text_2, class FText K2Node_ComponentBoundEvent_Text_1, class FText K2Node_ComponentBoundEvent_Text, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1, const class FString& CallFunc_Array_Get_Item_2, const class FString& CallFunc_Array_Get_Item_3, const class FString& CallFunc_Array_Get_Item_4, const class FString& CallFunc_Array_Get_Item_5);
	void OnDigitsNotFilled__DelegateSignature();
	class FString OnDigitsFilled__DelegateSignature();
};

}


