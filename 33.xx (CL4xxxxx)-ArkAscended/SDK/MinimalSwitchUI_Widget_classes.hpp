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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UHorizontalBox*                        GamepadButton;                                     // 0x338(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                KBMShowButton;                                     // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TextBlock;                                         // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                HideMoreInfoText;                                  // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ShowMoreInfoText;                                  // 0x360(0x10)(BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CachedlMinimalUI;                                  // 0x370(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMinimalSwitchUI_Widget_C* GetDefaultObj();

	bool FixConsoleIcons(TArray<class UWidget*>* Local_UWidgetIcons, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UWidget* CallFunc_Array_Get_Item, class UImage* K2Node_DynamicCast_AsImage, int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue);
	class UShooterGameUserSettings* UpdateTooltipMoreInfo(bool Temp_bool_Variable, class FText K2Node_Select_Default);
	float Tick(const struct FGeometry& MyGeometry);
	void Construct();
	bool ExecuteUbergraph_MinimalSwitchUI_Widget(int32 EntryPoint, bool* CallFunc_IsVisible_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* CallFunc_IsVisible_ReturnValue_1, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
};

}


