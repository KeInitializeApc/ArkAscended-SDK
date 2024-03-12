#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x7A0 - 0x758)
// WidgetBlueprintGeneratedClass ChangeCameraModeUI_Widget.ChangeCameraModeUI_Widget_C
class UChangeCameraModeUI_Widget_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UImage*                                DeactivateButtonGamepad;                           // 0x760(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            DeactivateCameraModeText;                          // 0x768(0x8)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                GamepadButtonZoomIn;                               // 0x770(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                GamepadButtonZoomOut;                              // 0x778(0x8)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                ImageRelaodGamepad;                                // 0x780(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                MouseButtonZoom;                                   // 0x788(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            ResetToDefaultText;                                // 0x790(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USlider_ASA_Widget_C*                  Slider_ASA_Widget;                                 // 0x798(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, InstancedReference)

	static class UClass* StaticClass();
	static class UChangeCameraModeUI_Widget_C* GetDefaultObj();

	float Tick(struct FGeometry* MyGeometry);
	void Construct();
	void OnGamepadActiveChangedBP(bool* bIsGamepadActive);
	float ExecuteUbergraph_ChangeCameraModeUI_Widget(int32* EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_1, bool* K2Node_DynamicCast_bSuccess_2, bool* K2Node_Event_bIsGamepadActive, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, TArray<class UWidget*>* K2Node_MakeArray_Array, class UWidget* CallFunc_Array_Get_Item, class UImage** K2Node_DynamicCast_AsImage, bool* K2Node_DynamicCast_bSuccess_3, class FString* CallFunc_GetObjectName_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, double CallFunc_Subtract_DoubleFloat_A_ImplicitCast, double CallFunc_Subtract_DoubleFloat_A_ImplicitCast_1);
};

}


