#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x788 - 0x770)
// WidgetBlueprintGeneratedClass ASAUI_NewsCarouselTemplate_Pip_News_Default.ASAUI_NewsCarouselTemplate_Pip_News_Default_C
class UASAUI_NewsCarouselTemplate_Pip_News_Default_C : public UUI_MenuCarouselPipWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x770(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      Brighten;                                          // 0x778(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   NavButton;                                         // 0x780(0x8)(Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUI_NewsCarouselTemplate_Pip_News_Default_C* GetDefaultObj();

	void EntryFocusStart(bool* bInstigatedByAutoRollover);
	void EntryFocusEnd(bool* bInstigatedByAutoRollover);
	bool ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Pip_News_Default(class UUMGSequencePlayer** CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer** CallFunc_PlayAnimationForward_ReturnValue);
};

}


