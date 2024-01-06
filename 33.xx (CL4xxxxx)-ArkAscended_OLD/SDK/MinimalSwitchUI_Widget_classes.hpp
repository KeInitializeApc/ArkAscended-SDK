#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x371 - 0x330)
// WidgetBlueprintGeneratedClass MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C
class UMinimalSwitchUI_Widget_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UHorizontalBox*                        GamepadButton;                                     // 0x338(0x8)(ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                KBMShowButton;                                     // 0x340(0x8)(Edit, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TextBlock;                                         // 0x348(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig)
	class FString                                HideMoreInfoText;                                  // 0x350(0x10)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ShowMoreInfoText;                                  // 0x360(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CachedlMinimalUI;                                  // 0x370(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMinimalSwitchUI_Widget_C* GetDefaultObj();

	bool FixConsoleIcons(TArray<class UWidget*>* Local_UWidgetIcons, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, class UImage** K2Node_DynamicCast_AsImage, int32* CallFunc_Add_IntInt_ReturnValue);
	void UpdateTooltipMoreInfo(bool* Temp_bool_Variable, class FText* CallFunc_Conv_StringToText_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue, class FText* K2Node_Select_Default);
	float Tick(const struct FGeometry& MyGeometry);
	void Construct();
	bool ExecuteUbergraph_MinimalSwitchUI_Widget(int32* EntryPoint, bool CallFunc_IsVisible_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool CallFunc_IsVisible_ReturnValue_1, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue);
};

}


