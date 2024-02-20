#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x660 - 0x5D8)
// WidgetBlueprintGeneratedClass ASAUI_NewsCarousel.ASAUI_NewsCarousel_C
class UASAUI_NewsCarousel_C : public UUI_MenuCarousel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5D8(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UASAUI_NewsCarousel_Nav_Select_C*      Button_Nav_Select;                                 // 0x5E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            CarouselTitle_Text;                                // 0x5E8(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                CircleBar;                                         // 0x5F0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UScrollBox*                            EntryContainer;                                    // 0x5F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        PipContainer_HorizBox;                             // 0x600(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UASAUI_NewsCarousel_Nav_Left_C*        PipNav_Left_Button;                                // 0x608(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UASAUI_NewsCarousel_Nav_Right_C*       PipNav_Right_Button;                               // 0x610(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UProgressBar*                          Rollover_ProgressBar;                              // 0x618(0x8)(Edit, ConstParm, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CarouselTitle;                                     // 0x620(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInstanceDynamic*              DynamicCircleMat;                                  // 0x638(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ModPage_C*                         SpawnedModPage;                                    // 0x640(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Initialized;                                       // 0x648(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2F4B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnModDeeplinkClicked;                              // 0x650(0x10)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUI_NewsCarousel_C* GetDefaultObj();

	void GetColorAndOpacity(const struct FLinearColor& ReturnValue);
	void PreConstruct(bool* IsDesignTime);
	void Construct();
	class FString DoClickAction(const class FString& ActionValue);
	bool ExecuteUbergraph_ASAUI_NewsCarousel(class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	int64 OnModDeeplinkClicked__DelegateSignature();
};

}


