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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UHorizontalBox*                        GamepadButton;                                     // 0x338(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                KBMShowButton;                                     // 0x340(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TextBlock;                                         // 0x348(0x8)(BlueprintVisible, ExportObject, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig)
	class FString                                HideMoreInfoText;                                  // 0x350(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FString                                ShowMoreInfoText;                                  // 0x360(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CachedlMinimalUI;                                  // 0x370(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMinimalSwitchUI_Widget_C* GetDefaultObj();

	bool FixConsoleIcons(int32 Temp_int_Array_Index_Variable, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UWidget* CallFunc_Array_Get_Item, class UImage** K2Node_DynamicCast_AsImage, bool* K2Node_DynamicCast_bSuccess, class FString* CallFunc_GetObjectName_ReturnValue, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue);
	class FText UpdateTooltipMoreInfo(bool Temp_bool_Variable, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class FText K2Node_Select_Default);
	float Tick(struct FGeometry* MyGeometry);
	void Construct();
	bool ExecuteUbergraph_MinimalSwitchUI_Widget(int32* EntryPoint, bool CallFunc_IsVisible_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


