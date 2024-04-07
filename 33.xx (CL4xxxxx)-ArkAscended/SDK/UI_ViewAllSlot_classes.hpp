#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x378 - 0x330)
// WidgetBlueprintGeneratedClass UI_ViewAllSlot.UI_ViewAllSlot_C
class UUI_ViewAllSlot_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      Hover;                                             // 0x338(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UBorder*                               Boarded_Left;                                      // 0x340(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UBorder*                               Boarder_Right;                                     // 0x348(0x8)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UBorder*                               Boarder_Top;                                       // 0x350(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UBorder*                               Border_Down;                                       // 0x358(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UButton*                               Button_GoToModPage;                                // 0x360(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPressedViewAll;                                  // 0x368(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ViewAllSlot_C* GetDefaultObj();

	void BndEvt__UI_ShowcaseSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_ShowcaseSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_ViewAllSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	class UUMGSequencePlayer* ExecuteUbergraph_UI_ViewAllSlot(int32* EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer** CallFunc_PlayAnimationForward_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, bool CallFunc_IsValid_ReturnValue_1);
	void OnPressedViewAll__DelegateSignature();
};

}


