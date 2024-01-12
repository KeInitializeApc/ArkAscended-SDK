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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UHorizontalBox*                        GamepadButton;                                     // 0x338(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                KBMShowButton;                                     // 0x340(0x8)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TextBlock;                                         // 0x348(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig)
	class FString                                HideMoreInfoText;                                  // 0x350(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ShowMoreInfoText;                                  // 0x360(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CachedlMinimalUI;                                  // 0x370(0x1)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMinimalSwitchUI_Widget_C* GetDefaultObj();

	class UTexture2D* FixConsoleIcons(TArray<class UWidget*>* Local_UWidgetIcons, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget** CallFunc_Array_Get_Item, class UImage** K2Node_DynamicCast_AsImage, bool* K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	void UpdateTooltipMoreInfo(bool Temp_bool_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class FText* K2Node_Select_Default);
	float Tick(struct FGeometry* MyGeometry);
	void Construct();
	bool ExecuteUbergraph_MinimalSwitchUI_Widget(bool* K2Node_DynamicCast_bSuccess, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
};

}


