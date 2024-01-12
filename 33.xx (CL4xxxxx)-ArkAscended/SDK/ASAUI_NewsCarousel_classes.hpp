#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x640 - 0x5D8)
// WidgetBlueprintGeneratedClass ASAUI_NewsCarousel.ASAUI_NewsCarousel_C
class UASAUI_NewsCarousel_C : public UUI_MenuCarousel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5D8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UASAUI_NewsCarousel_Nav_Select_C*      Button_Nav_Select;                                 // 0x5E0(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            CarouselTitle_Text;                                // 0x5E8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                CircleBar;                                         // 0x5F0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UScrollBox*                            EntryContainer;                                    // 0x5F8(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        PipContainer_HorizBox;                             // 0x600(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUI_NewsCarousel_Nav_Left_C*        PipNav_Left_Button;                                // 0x608(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUI_NewsCarousel_Nav_Right_C*       PipNav_Right_Button;                               // 0x610(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UProgressBar*                          Rollover_ProgressBar;                              // 0x618(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CarouselTitle;                                     // 0x620(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInstanceDynamic*              DynamicCircleMat;                                  // 0x638(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUI_NewsCarousel_C* GetDefaultObj();

	struct FLinearColor GetColorAndOpacity();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	bool ExecuteUbergraph_ASAUI_NewsCarousel();
};

}


