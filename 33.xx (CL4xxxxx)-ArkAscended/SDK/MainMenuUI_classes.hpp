#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4F0 (0xF28 - 0xA38)
// WidgetBlueprintGeneratedClass MainMenuUI.MainMenuUI_C
class UMainMenuUI_C : public UUI_MainMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA38(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      FadeOutOverrideBackground;                         // 0xA40(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      FadeInOverrideBackground;                          // 0xA48(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0xA50(0x8)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      FadeOut;                                           // 0xA58(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Close;                                             // 0xA60(0x8)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0xA68(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)
	class UBorder*                               BackgroundMedia;                                   // 0xA70(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   CreditsButton;                                     // 0xA78(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ExitButton;                                        // 0xA80(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                ExitGlow;                                          // 0xA88(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                FadingBackgroundImage;                             // 0xA90(0x8)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   HelpButton;                                        // 0xA98(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   HostButton;                                        // 0xAA0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_107;                                         // 0xAA8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NonTransactional, EditorOnly, AutoWeak)
	class UImage*                                Image_151;                                         // 0xAB0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditorOnly, NoDestructor, ContainsInstancedReference)
	class UImage*                                Image_4093;                                        // 0xAB8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected)
	class UImage*                                Image_4112;                                        // 0xAC0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, NoDestructor, BlueprintCallable)
	class UImage*                                Image_4120;                                        // 0xAC8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, EditorOnly, NoDestructor, BlueprintCallable)
	class UImage*                                Image_4128;                                        // 0xAD0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, BlueprintCallable)
	class UCanvasPanel*                          LeftSideMenuButtons;                               // 0xAD8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                LinuxBackgroundImage;                              // 0xAE0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ListSessionsButton;                                // 0xAE8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                ListSessionsButtonBackground;                      // 0xAF0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   OptionsButton;                                     // 0xAF8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   PatchNotesButton;                                  // 0xB00(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               UpsellButton;                                      // 0xB08(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               WebButton;                                         // 0xB10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                SponsoredModsUIClass;                              // 0xB18(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMediaPlayer*                          MoviePlayer;                                       // 0xB20(0x8)(BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	uint8                                        Pad_2962[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          AlternateCTAStyle;                                 // 0xB30(0x3F0)(Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBinkMediaPlayer*                      BGMediaPlayer;                                     // 0xF20(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMainMenuUI_C* GetDefaultObj();

	double OverrideBGImage(bool* K2Node_DynamicCast_bSuccess, class UTexture2D* CallFunc_GetMainMenuBackgroundTexture_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1);
	struct FMargin UpdateLeftTextPosition(bool Temp_bool_Variable, const struct FMargin& K2Node_Select_Default, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue);
	void BndEvt__ScorchedEarthStoreButton_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__CreditsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WebButton_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature();
	bool ExecuteUbergraph_MainMenuUI(int32* EntryPoint, bool* K2Node_DynamicCast_bSuccess, class UTexture2D* CallFunc_GetMainMenuBackgroundTexture_ReturnValue, int32 CallFunc_GetUpsellIndex_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, int32 CallFunc_GetUpsellIndex_ReturnValue_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_2, int32 CallFunc_GetUpsellIndex_ReturnValue_2, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, bool CallFunc_OpenUrl_ReturnValue, bool CallFunc_OpenUrl_ReturnValue_1, class UCreditsUI_C* CallFunc_Create_ReturnValue);
};

}


