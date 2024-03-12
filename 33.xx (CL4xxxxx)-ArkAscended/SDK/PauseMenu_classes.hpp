#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0xAA0 - 0x9B8)
// WidgetBlueprintGeneratedClass PauseMenu.PauseMenu_C
class UPauseMenu_C : public UUI_PauseMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9B8(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x9C0(0x8)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      FadeOut;                                           // 0x9C8(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Close;                                             // 0x9D0(0x8)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0x9D8(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)
	class UCustomButtonWidget*                   AdminCommandButton;                                // 0x9E0(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UEditableTextBox*                      AdminCommandTextBox;                               // 0x9E8(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   AdminMenuButton;                                   // 0x9F0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                BackgroundOverlay;                                 // 0x9F8(0x8)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   CloseButton;                                       // 0xA00(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   ConsoleCommandButton;                              // 0xA08(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	class UCustomButtonWidget*                   DisableGamepadButton;                              // 0xA10(0x8)(Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   EnableCreativeModeButton;                          // 0xA18(0x8)(Edit, ConstParm, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   ExitButton;                                        // 0xA20(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                FrontOverlayAdditive;                              // 0xA28(0x8)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   HelpButton;                                        // 0xA30(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          HUD_Text;                                          // 0xA38(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               InventoryButton;                                   // 0xA40(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   InviteFriendsButton;                               // 0xA48(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   LeaveSplitScreenButton;                            // 0xA50(0x8)(Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   ManualSaveButton;                                  // 0xA58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UBorder*                               ModIconBorder;                                     // 0xA60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UBorder*                               ModLogoPanel;                                      // 0xA68(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   OptionsButton;                                     // 0xA70(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   PhotoModeButton;                                   // 0xA78(0x8)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   RespawnButton;                                     // 0xA80(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               SurvivorProfileButton;                             // 0xA88(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               TribeButton;                                       // 0xA90(0x8)(Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                XB_btn_View;                                       // 0xA98(0x8)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig)

	static class UClass* StaticClass();
	static class UPauseMenu_C* GetDefaultObj();

	bool ShowModIcon(class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue);
	void RemovedFromViewport();
	float Tick(struct FGeometry* MyGeometry);
	void BndEvt__PauseMenu_PhotoModeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void AddedToViewport();
	void BndEvt__PauseMenu_ConsoleCommandButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PauseMenu_ConsoleCommandButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	class APlayerController* ExecuteUbergraph_PauseMenu(int32* EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, class APlayerControllerBlueprint_C* K2Node_DynamicCast_AsPlayer_Controller_Blueprint, bool* K2Node_DynamicCast_bSuccess, class AShooterPlayerController* CallFunc_GetPC_ReturnValue, class APlayerControllerBlueprint_C* K2Node_DynamicCast_AsPlayer_Controller_Blueprint_1, bool* K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsPhotoModeAllowed_Allowed, enum class ESlateVisibility K2Node_Select_Default);
};

}


