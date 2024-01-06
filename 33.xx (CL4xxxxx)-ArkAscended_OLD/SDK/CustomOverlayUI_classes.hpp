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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UCanvasPanel*                          MainCanvas;                                        // 0x7A8(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         FirstTick;                                         // 0x7B0(0x1)(ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UCustomOverlayUI_C* GetDefaultObj();

	void Construct();
	float Tick(const struct FGeometry& MyGeometry);
	struct FVector2D AddChildToCanvas(int32 ZOrder);
	void SetArrowAlpha(float* TheLeftRightAlpha, float* TheUpDownAlpha);
	void SetPointerScale(float Scale);
	void ShowReticule(bool* Show);
	float SetPointerColorAdd();
	void SetInnerRingScales(float* Scale0, float* Scale1, float* Scale2);
	float ExecuteUbergraph_CustomOverlayUI(int32* EntryPoint, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, class UCanvasPanelSlot** K2Node_DynamicCast_AsCanvas_Panel_Slot, double* CallFunc_SetArrowAlpha_LeftRightAlpha_ImplicitCast, double* CallFunc_SetArrowAlpha_UpDownAlpha_ImplicitCast, double* CallFunc_SetPointerScale_NewParam_ImplicitCast, double* CallFunc_SetPointerColorAdd_Add_ImplicitCast, double* CallFunc_SetInnerRingScales_Scale0_ImplicitCast, double* CallFunc_SetInnerRingScales_Scale1_ImplicitCast, double* CallFunc_SetInnerRingScales_Scale2_ImplicitCast);
};

}


