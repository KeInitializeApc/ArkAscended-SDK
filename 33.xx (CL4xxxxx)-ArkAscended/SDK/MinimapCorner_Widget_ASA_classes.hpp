#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x820 - 0x758)
// WidgetBlueprintGeneratedClass MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C
class UMinimapCorner_Widget_ASA_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      LowOpacity;                                        // 0x760(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0x768(0x8)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0x770(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)
	class UTextBlock*                            CurrentLat;                                        // 0x778(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            CurrentLong;                                       // 0x780(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                Image;                                             // 0x788(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UImage*                                Image_1;                                           // 0x790(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp)
	class UImage*                                Image_2;                                           // 0x798(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp)
	class UImage*                                Image_90;                                          // 0x7A0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, EditorOnly, NoDestructor, AutoWeak)
	class UHorizontalBox*                        LatLongBox;                                        // 0x7A8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                LeftTriggerIcon_Gamepad;                           // 0x7B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UWidgetSwitcher*                       LegendHoldButton;                                  // 0x7B8(0x8)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UWidgetSwitcher*                       LegendsButton;                                     // 0x7C0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UCanvasPanel*                          MainCanvas;                                        // 0x7C8(0x8)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
	class UOverlay*                              MainLeftCoords;                                    // 0x7D0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UOverlay*                              MainMinimapOverlay;                                // 0x7D8(0x8)(Edit, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UOverlay*                              MainTopCoords;                                     // 0x7E0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            MButton;                                           // 0x7E8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UMinimapWidget_ASA_C*                  MiniMapUi;                                         // 0x7F0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                RightTriggerIcon_Gameadp;                          // 0x7F8(0x8)(ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                SpecialLeftButton;                                 // 0x800(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       CurrentZoom;                                       // 0x808(0x8)(Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       MinZoom;                                           // 0x810(0x8)(Edit, ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       MaxZoom;                                           // 0x818(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMinimapCorner_Widget_ASA_C* GetDefaultObj();

	struct FEventReply OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent, struct FEventReply* CallFunc_Handled_ReturnValue);
	float UpdateZoom(class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue_2, struct FVector2D* CallFunc_MakeVector2D_ReturnValue, struct FVector2D* CallFunc_MakeVector2D_ReturnValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, struct FVector2D* CallFunc_MakeVector2D_ReturnValue_2, double CallFunc_Multiply_DoubleFloat_ReturnValue_2);
	float Zoom(double Qty, double CallFunc_FClamp_ReturnValue);
	void RemovedFromViewport();
	float Tick(struct FGeometry* MyGeometry);
	void Construct();
	void OnGamepadActiveChangedBP(bool* bIsGamepadActive);
	float ExecuteUbergraph_MinimapCorner_Widget_ASA(int32* EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool K2Node_SwitchString_CmpSuccess, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class UPrimalGlobalUIData** K2Node_DynamicCast_AsPrimal_Global_UIData, bool* K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_1, bool* K2Node_DynamicCast_bSuccess_2, bool* K2Node_Event_bIsGamepadActive, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_2, bool* K2Node_DynamicCast_bSuccess_3, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_3, bool* K2Node_DynamicCast_bSuccess_4, class FText* CallFunc_Conv_DoubleToText_ReturnValue, class FText* CallFunc_Conv_DoubleToText_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_5, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_4, bool* K2Node_DynamicCast_bSuccess_5, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue_1, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue_2, bool* CallFunc_IsPlayInEditor_ReturnValue, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
};

}


