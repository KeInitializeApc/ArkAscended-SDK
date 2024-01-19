#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x3F0 - 0x330)
// WidgetBlueprintGeneratedClass ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C
class UASAUI_MainMenu_GameModeSelect_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      OpenAnim;                                          // 0x338(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style1A_C*         BackButton;                                        // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UASAUI_MainMenuWidget_Card_C*          Card1;                                             // 0x348(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUI_MainMenuWidget_Card_C*          Card2;                                             // 0x350(0x8)(ConstParm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUI_MainMenuWidget_Card_C*          Card3;                                             // 0x358(0x8)(ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUI_MainMenuWidget_Card_C*          Card4;                                             // 0x360(0x8)(ConstParm, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        Cards_WrapBox;                                     // 0x368(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnBackSelected;                                    // 0x370(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMultiplayerClicked;                              // 0x380(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSOTFClicked;                                     // 0x390(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnCreateGameClicked;                               // 0x3A0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnModsClicked;                                     // 0x3B0(0x10)(ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  FalseTextSaveGame;                                 // 0x3C0(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TrueTextSaveGame;                                  // 0x3D8(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUI_MainMenu_GameModeSelect_C* GetDefaultObj();

	void InitHasSave(bool* Save, bool Temp_bool_Variable, class FText K2Node_Select_Default);
	bool SelectionChanged(class UCustomButtonWidget* Widget, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UOverlay** K2Node_DynamicCast_AsOverlay, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue_1, int32* CallFunc_Array_Length_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UASAUI_MainMenuWidget_Card_C** K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card, bool* CallFunc_EqualEqual_ObjectObject_ReturnValue);
	bool StopAllCardAnims(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UOverlay** K2Node_DynamicCast_AsOverlay, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue_1, int32* CallFunc_Array_Length_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UASAUI_MainMenuWidget_Card_C** K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card);
	void PostInitialized();
	void WidgetAddedToViewport();
	void BndEvt__ASAUI_MainMenu_GameModeSelect_Card1_K2Node_ComponentBoundEvent_4_OnCardClicked__DelegateSignature();
	void BndEvt__ASAUI_MainMenu_GameModeSelect_Card2_K2Node_ComponentBoundEvent_5_OnCardClicked__DelegateSignature();
	void BndEvt__ASAUI_MainMenu_GameModeSelect_Card3_K2Node_ComponentBoundEvent_6_OnCardClicked__DelegateSignature();
	void BndEvt__ASAUI_MainMenu_GameModeSelect_Card4_K2Node_ComponentBoundEvent_7_OnCardClicked__DelegateSignature();
	void BndEvt__ASAUI_MainMenu_GameModeSelect_BackButton_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature();
	void Construct();
	void RefreshAnim();
	bool ExecuteUbergraph_ASAUI_MainMenu_GameModeSelect(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsVirtualCursorEnabled_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnModsClicked__DelegateSignature();
	void OnCreateGameClicked__DelegateSignature();
	void OnSOTFClicked__DelegateSignature();
	void OnMultiplayerClicked__DelegateSignature();
	void OnBackSelected__DelegateSignature();
};

}


