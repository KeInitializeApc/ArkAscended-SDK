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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      HighlightAlpha;                                    // 0x338(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      CardScale;                                         // 0x340(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   Button;                                            // 0x348(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig)
	class UCanvasPanel*                          CanvasPanel_343;                                   // 0x350(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, EditorOnly, NoDestructor, AutoWeak, AssetRegistrySearchable)
	class UImage*                                CardImage_Image;                                   // 0x358(0x8)(Edit, BlueprintVisible, ExportObject, Parm, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            CardImage_Text;                                    // 0x360(0x8)(Net, Parm, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_58;                                          // 0x368(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, EditorOnly, NoDestructor)
	class UTexture2D*                            CardImage;                                         // 0x370(0x8)(BlueprintReadOnly, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CardText;                                          // 0x378(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, EditConst, GlobalConfig, SubobjectReference)
	class UPrimalUserWidget*                     ParentWidget;                                      // 0x390(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Row;                                               // 0x398(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Column;                                            // 0x39C(0x4)(Edit, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnCardClicked;                                     // 0x3A0(0x10)(ExportObject, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CustomTooltipText;                                 // 0x3B0(0x18)(Edit, ConstParm, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Disabled;                                          // 0x3C8(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, GlobalConfig, SubobjectReference)
	bool                                         Highlighted;                                       // 0x3C9(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUI_MainMenuWidget_Card_C* GetDefaultObj();

	class UUMGSequencePlayer* OnMouseEnterFunc();
	void StopAnims();
	class UUMGSequencePlayer* OnMouseLeaveFunc();
	void OnMouseLeave(struct FPointerEvent* MouseEvent);
	void OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void BndEvt__ASAUI_MainMenuWidget_Card_Button_99_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	bool PreConstruct();
	void BndEvt__ASAUI_MainMenuWidget_Card_Button_99_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Refresh();
	bool ExecuteUbergraph_ASAUI_MainMenuWidget_Card(int32* EntryPoint, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent);
	void OnCardClicked__DelegateSignature();
};

}


