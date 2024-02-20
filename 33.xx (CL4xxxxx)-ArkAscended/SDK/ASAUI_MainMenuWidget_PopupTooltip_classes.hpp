#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x3D0 - 0x3B8)
// WidgetBlueprintGeneratedClass ASAUI_MainMenuWidget_PopupTooltip.ASAUI_MainMenuWidget_PopupTooltip_C
class UASAUI_MainMenuWidget_PopupTooltip_C : public UTooltipSmartLayoutWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B8(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x3C0(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UTextBlock*                            Tooltip_Text;                                      // 0x3C8(0x8)(Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUI_MainMenuWidget_PopupTooltip_C* GetDefaultObj();

	void Show();
	void Hide();
	int32 ExecuteUbergraph_ASAUI_MainMenuWidget_PopupTooltip(class UUMGSequencePlayer** CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer** CallFunc_PlayAnimationReverse_ReturnValue);
};

}


