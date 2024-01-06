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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UCanvasPanel*                          MainCanvas;                                        // 0x7A8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         FirstTick;                                         // 0x7B0(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UCustomOverlayUI_C* GetDefaultObj();

	void Construct();
	float Tick(const struct FGeometry& MyGeometry);
	struct FVector2D AddChildToCanvas(int32* ZOrder);
	float SetArrowAlpha();
	void SetPointerScale(float Scale);
	bool ShowReticule();
	float SetPointerColorAdd();
	float SetInnerRingScales();
	double ExecuteUbergraph_CustomOverlayUI(int32 EntryPoint, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FMargin& K2Node_MakeStruct_Margin, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, const struct FAnchors& K2Node_MakeStruct_Anchors, float K2Node_MakeStruct_Right_ImplicitCast, float K2Node_MakeStruct_Bottom_ImplicitCast);
};

}


