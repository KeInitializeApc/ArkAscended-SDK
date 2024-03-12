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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x770(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      Brighten;                                          // 0x778(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   NavButton;                                         // 0x780(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUI_NewsCarouselTemplate_Pip_News_Default_C* GetDefaultObj();

	bool EntryFocusStart();
	bool EntryFocusEnd();
	class UUMGSequencePlayer* ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Pip_News_Default(int32* EntryPoint);
};

}


