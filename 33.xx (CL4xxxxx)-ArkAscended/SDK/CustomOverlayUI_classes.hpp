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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A0(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UCanvasPanel*                          MainCanvas;                                        // 0x7A8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         FirstTick;                                         // 0x7B0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UCustomOverlayUI_C* GetDefaultObj();

	void Construct();
	float Tick();
	struct FVector2D AddChildToCanvas(int32* ZOrder);
	float SetArrowAlpha();
	void SetPointerScale(float* Scale);
	bool ShowReticule();
	float SetPointerColorAdd();
	float SetInnerRingScales();
	double ExecuteUbergraph_CustomOverlayUI(const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y);
};

}


