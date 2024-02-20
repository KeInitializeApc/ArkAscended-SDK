#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9A (0x3CA - 0x330)
// WidgetBlueprintGeneratedClass ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C
class UASAUI_MainMenuWidget_Card_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      HighlightAlpha;                                    // 0x338(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      CardScale;                                         // 0x340(0x8)(BlueprintVisible, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   Button;                                            // 0x348(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UCanvasPanel*                          CanvasPanel_343;                                   // 0x350(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, EditorOnly, NoDestructor, AutoWeak, AssetRegistrySearchable)
	class UImage*                                CardImage_Image;                                   // 0x358(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            CardImage_Text;                                    // 0x360(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_58;                                          // 0x368(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, Interp, EditorOnly, NoDestructor)
	class UTexture2D*                            CardImage;                                         // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CardText;                                          // 0x378(0x18)(ConstParm, ExportObject, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class UPrimalUserWidget*                     ParentWidget;                                      // 0x390(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Row;                                               // 0x398(0x4)(ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Column;                                            // 0x39C(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnCardClicked;                                     // 0x3A0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CustomTooltipText;                                 // 0x3B0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Disabled;                                          // 0x3C8(0x1)(ExportObject, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         Highlighted;                                       // 0x3C9(0x1)(EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUI_MainMenuWidget_Card_C* GetDefaultObj();

	void OnMouseEnterFunc(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void StopAnims();
	void OnMouseLeaveFunc(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	struct FPointerEvent OnMouseLeave();
	struct FPointerEvent OnMouseEnter();
	void BndEvt__ASAUI_MainMenuWidget_Card_Button_99_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool* IsDesignTime);
	void BndEvt__ASAUI_MainMenuWidget_Card_Button_99_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Refresh();
	bool ExecuteUbergraph_ASAUI_MainMenuWidget_Card(const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent);
	void OnCardClicked__DelegateSignature();
};

}


