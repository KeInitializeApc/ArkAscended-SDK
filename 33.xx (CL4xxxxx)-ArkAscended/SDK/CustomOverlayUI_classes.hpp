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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UCanvasPanel*                          MainCanvas;                                        // 0x7A8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         FirstTick;                                         // 0x7B0(0x1)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

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
	double ExecuteUbergraph_CustomOverlayUI(int32 EntryPoint, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, class UPanelSlot** CallFunc_AddChild_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot);
};

}


