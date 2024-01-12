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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA28(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      FadeOutOverrideBackground;                         // 0xA30(0x8)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeInOverrideBackground;                          // 0xA38(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0xA40(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      FadeOut;                                           // 0xA48(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Close;                                             // 0xA50(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0xA58(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst)
	class UBorder*                               BackgroundMedia;                                   // 0xA60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   CreditsButton;                                     // 0xA68(0x8)(ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ExitButton;                                        // 0xA70(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UImage*                                ExitGlow;                                          // 0xA78(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UImage*                                FadingBackgroundImage;                             // 0xA80(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   HelpButton;                                        // 0xA88(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   HostButton;                                        // 0xA90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_107;                                         // 0xA98(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NonTransactional, EditorOnly, AutoWeak)
	class UImage*                                Image_151;                                         // 0xAA0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditorOnly, NoDestructor, ContainsInstancedReference)
	class UImage*                                Image_4093;                                        // 0xAA8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected)
	class UImage*                                Image_4112;                                        // 0xAB0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, NoDestructor, BlueprintCallable)
	class UImage*                                Image_4120;                                        // 0xAB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, EditorOnly, NoDestructor, BlueprintCallable)
	class UImage*                                Image_4128;                                        // 0xAC0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, BlueprintCallable)
	class UCanvasPanel*                          LeftSideMenuButtons;                               // 0xAC8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UImage*                                LinuxBackgroundImage;                              // 0xAD0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   ListSessionsButton;                                // 0xAD8(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UImage*                                ListSessionsButtonBackground;                      // 0xAE0(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   OptionsButton;                                     // 0xAE8(0x8)(BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   PatchNotesButton;                                  // 0xAF0(0x8)(BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UButton*                               UpsellButton;                                      // 0xAF8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UButton*                               WebButton;                                         // 0xB00(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UClass*                                SponsoredModsUIClass;                              // 0xB08(0x8)(BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UMediaPlayer*                          MoviePlayer;                                       // 0xB10(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	uint8                                        Pad_4BB5[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          AlternateCTAStyle;                                 // 0xB20(0x3F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UBinkMediaPlayer*                      BGMediaPlayer;                                     // 0xF10(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMainMenuUI_C* GetDefaultObj();

	bool OverrideBGImage(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, float* CallFunc_BreakColor_R, float* CallFunc_BreakColor_G, float* CallFunc_BreakColor_B, float* CallFunc_BreakColor_A, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	class UCanvasPanelSlot* UpdateLeftTextPosition(bool* IsCTAVisible, bool Temp_bool_Variable, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, struct FMargin* K2Node_Select_Default);
	void BndEvt__ScorchedEarthStoreButton_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__CreditsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WebButton_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature();
	class UCreditsUI_C* ExecuteUbergraph_MainMenuUI(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_2, bool* CallFunc_IsValid_ReturnValue_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_Play_ReturnValue);
};

}


