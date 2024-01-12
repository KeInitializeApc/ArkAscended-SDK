#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x7B1 - 0x7A0)
// WidgetBlueprintGeneratedClass CustomOverlayUI.CustomOverlayUI_C
class UCustomOverlayUI_C : public UUI_CustomOverlay
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UCanvasPanel*                          MainCanvas;                                        // 0x7A8(0x8)(Edit, BlueprintReadOnly, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         FirstTick;                                         // 0x7B0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UCustomOverlayUI_C* GetDefaultObj();

	void Construct();
	float Tick(struct FGeometry* MyGeometry);
	int32 AddChildToCanvas(class UUserWidget* Child);
	float SetArrowAlpha();
	void SetPointerScale(float Scale);
	bool ShowReticule();
	float SetPointerColorAdd();
	float SetInnerRingScales();
	class UPanelSlot* ExecuteUbergraph_CustomOverlayUI(class UCustomMouseWidget_C** K2Node_DynamicCast_AsCustom_Mouse_Widget, bool* K2Node_DynamicCast_bSuccess, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, class UUserWidget** K2Node_Event_Child, const struct FVector2D& K2Node_Event_Size, int32 K2Node_Event_zOrder, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FMargin& K2Node_MakeStruct_Margin, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool* K2Node_DynamicCast_bSuccess_1, const struct FAnchors& K2Node_MakeStruct_Anchors, class UCustomMouseWidget_C** K2Node_DynamicCast_AsCustom_Mouse_Widget_1, bool* K2Node_DynamicCast_bSuccess_2, class UCustomMouseWidget_C** K2Node_DynamicCast_AsCustom_Mouse_Widget_2, bool* K2Node_DynamicCast_bSuccess_3, float K2Node_Event_theLeftRightAlpha, float K2Node_Event_theUpDownAlpha, class UCustomMouseWidget_C** K2Node_DynamicCast_AsCustom_Mouse_Widget_3, bool* K2Node_DynamicCast_bSuccess_4, float* K2Node_Event_scale, bool K2Node_Event_show, class UCustomMouseWidget_C** K2Node_DynamicCast_AsCustom_Mouse_Widget_4, bool* K2Node_DynamicCast_bSuccess_5, class UCustomMouseWidget_C** K2Node_DynamicCast_AsCustom_Mouse_Widget_5, bool* K2Node_DynamicCast_bSuccess_6, float* K2Node_Event_add, float* K2Node_Event_scale0, float* K2Node_Event_scale1, float* K2Node_Event_scale2, class UCustomMouseWidget_C** K2Node_DynamicCast_AsCustom_Mouse_Widget_6, bool* K2Node_DynamicCast_bSuccess_7, float K2Node_MakeStruct_Right_ImplicitCast, float K2Node_MakeStruct_Bottom_ImplicitCast, double CallFunc_SetArrowAlpha_LeftRightAlpha_ImplicitCast, double* CallFunc_SetArrowAlpha_UpDownAlpha_ImplicitCast, double* CallFunc_SetPointerScale_NewParam_ImplicitCast, double* CallFunc_SetPointerColorAdd_Add_ImplicitCast, double* CallFunc_SetInnerRingScales_Scale0_ImplicitCast, double* CallFunc_SetInnerRingScales_Scale1_ImplicitCast, double* CallFunc_SetInnerRingScales_Scale2_ImplicitCast);
};

}


