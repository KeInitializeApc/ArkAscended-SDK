#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x410 - 0x330)
// WidgetBlueprintGeneratedClass UI_SquareCategorieShowcase.UI_SquareCategorieShowcase_C
class UUI_SquareCategorieShowcase_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      Hover;                                             // 0x338(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UBorder*                               Boarded_Left;                                      // 0x340(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UBorder*                               Boarder_Right;                                     // 0x348(0x8)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UBorder*                               Boarder_Top;                                       // 0x350(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UBorder*                               Border_Down;                                       // 0x358(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UButton*                               Button_GoToModPage;                                // 0x360(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UImage*                                IMG_BackGround;                                    // 0x368(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UImage*                                IMG_Showcase;                                      // 0x370(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class USizeBox*                              SizeBox_WindowSize;                                // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UTextBlock*                            TEXT_CategoryName;                                 // 0x380(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	bool                                         BigSlot;                                           // 0x388(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_134C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCategory                             CategoryInfo;                                      // 0x390(0x78)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UUI_Discovery_C*                       UI__DiscoveryRef;                                  // 0x408(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, DuplicateTransient, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_SquareCategorieShowcase_C* GetDefaultObj();

	void PreConstruct(bool* IsDesignTime);
	void BndEvt__UI_ShowcaseSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_ShowcaseSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void InitCategory(struct FCategory* Category_Info);
	void BndEvt__UI_SquareCategorieShowcase_Button_GoToModPage_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	class UUMGSequencePlayer* ExecuteUbergraph_UI_SquareCategorieShowcase(int32* EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer** CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue_12, struct FCategory* K2Node_CustomEvent_Category_Info, bool CallFunc_IsValid_ReturnValue_13, TScriptInterface<class IBPI_CustomComboBoxInterface_C>* CallFunc_OnOptionSelectedInterface_self_CastInput, bool CallFunc_IsValid_ReturnValue_14, class FText* CallFunc_Conv_StringToText_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, int32 K2Node_Select_Default, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FMargin& K2Node_MakeStruct_Margin_1);
};

}


