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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UHorizontalBox*                        GamepadButton;                                     // 0x338(0x8)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	class UImage*                                KBMShowButton;                                     // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TextBlock;                                         // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FString                                HideMoreInfoText;                                  // 0x350(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	class FString                                ShowMoreInfoText;                                  // 0x360(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	bool                                         CachedlMinimalUI;                                  // 0x370(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMinimalSwitchUI_Widget_C* GetDefaultObj();

	bool FixConsoleIcons(const TArray<class UWidget*>& Local_UWidgetIcons, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UImage* K2Node_DynamicCast_AsImage, bool* CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	class UShooterGameUserSettings* UpdateTooltipMoreInfo(bool* Temp_bool_Variable, class FText* CallFunc_Conv_StringToText_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FText* K2Node_Select_Default);
	float Tick();
	void Construct();
	bool ExecuteUbergraph_MinimalSwitchUI_Widget(class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
};

}


