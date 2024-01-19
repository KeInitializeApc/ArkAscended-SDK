#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4F0 (0xF18 - 0xA28)
// WidgetBlueprintGeneratedClass MainMenuUI.MainMenuUI_C
class UMainMenuUI_C : public UUI_MainMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA28(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      FadeOutOverrideBackground;                         // 0xA30(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeInOverrideBackground;                          // 0xA38(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0xA40(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      FadeOut;                                           // 0xA48(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Close;                                             // 0xA50(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, SubobjectReference)
	class UWidgetAnimation*                      Open;                                              // 0xA58(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst)
	class UBorder*                               BackgroundMedia;                                   // 0xA60(0x8)(Edit, BlueprintReadOnly, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   CreditsButton;                                     // 0xA68(0x8)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ExitButton;                                        // 0xA70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, InstancedReference, SubobjectReference)
	class UImage*                                ExitGlow;                                          // 0xA78(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, InstancedReference, SubobjectReference)
	class UImage*                                FadingBackgroundImage;                             // 0xA80(0x8)(Edit, Net, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   HelpButton;                                        // 0xA88(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   HostButton;                                        // 0xA90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_107;                                         // 0xA98(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NonTransactional, EditorOnly, AutoWeak)
	class UImage*                                Image_151;                                         // 0xAA0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditorOnly, NoDestructor, ContainsInstancedReference)
	class UImage*                                Image_4093;                                        // 0xAA8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected)
	class UImage*                                Image_4112;                                        // 0xAB0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, NoDestructor, BlueprintCallable)
	class UImage*                                Image_4120;                                        // 0xAB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, EditorOnly, NoDestructor, BlueprintCallable)
	class UImage*                                Image_4128;                                        // 0xAC0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, BlueprintCallable)
	class UCanvasPanel*                          LeftSideMenuButtons;                               // 0xAC8(0x8)(Parm, OutParm, InstancedReference, SubobjectReference)
	class UImage*                                LinuxBackgroundImage;                              // 0xAD0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   ListSessionsButton;                                // 0xAD8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, InstancedReference, SubobjectReference)
	class UImage*                                ListSessionsButtonBackground;                      // 0xAE0(0x8)(Net, Parm, OutParm, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   OptionsButton;                                     // 0xAE8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   PatchNotesButton;                                  // 0xAF0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, InstancedReference, SubobjectReference)
	class UButton*                               UpsellButton;                                      // 0xAF8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	class UButton*                               WebButton;                                         // 0xB00(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	class UClass*                                SponsoredModsUIClass;                              // 0xB08(0x8)(EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	class UMediaPlayer*                          MoviePlayer;                                       // 0xB10(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	uint8                                        Pad_3413[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          AlternateCTAStyle;                                 // 0xB20(0x3F0)(Edit, ConstParm, BlueprintVisible, InstancedReference, SubobjectReference)
	class UBinkMediaPlayer*                      BGMediaPlayer;                                     // 0xF10(0x8)(ConstParm, ExportObject, BlueprintReadOnly, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMainMenuUI_C* GetDefaultObj();

	float OverrideBGImage(class UTexture2D* CallFunc_GetMainMenuBackgroundTexture_ReturnValue, bool* CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool* CallFunc_IsVisible_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	struct FMargin UpdateLeftTextPosition(bool* IsCTAVisible, bool Temp_bool_Variable, const struct FMargin& K2Node_Select_Default, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue);
	void BndEvt__ScorchedEarthStoreButton_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__CreditsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WebButton_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature();
	double ExecuteUbergraph_MainMenuUI(int32 EntryPoint, class UTexture2D* CallFunc_GetMainMenuBackgroundTexture_ReturnValue, int32 CallFunc_GetUpsellIndex_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, int32 CallFunc_GetUpsellIndex_ReturnValue_1, bool* K2Node_SwitchInteger_CmpSuccess, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_2, int32 CallFunc_GetUpsellIndex_ReturnValue_2, bool* K2Node_SwitchInteger_CmpSuccess_1, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool* CallFunc_OpenUrl_ReturnValue, bool* CallFunc_OpenUrl_ReturnValue_1, class UCreditsUI_C* CallFunc_Create_ReturnValue, bool* CallFunc_Play_ReturnValue);
};

}


