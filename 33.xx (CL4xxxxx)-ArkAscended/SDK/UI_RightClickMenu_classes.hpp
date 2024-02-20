#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x3A8 - 0x330)
// WidgetBlueprintGeneratedClass UI_RightClickMenu.UI_RightClickMenu_C
class UUI_RightClickMenu_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x338(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class USizeBox*                              SizeBox_Outer;                                     // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Cancel;                                  // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Install;                                 // 0x350(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig)
	class UUI_Button_Dropdown_C*                 UI_Button_Like;                                    // 0x358(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, EditConst, GlobalConfig, InstancedReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Purchase;                                // 0x360(0x8)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Report;                                  // 0x368(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Uninstall;                               // 0x370(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Update;                                  // 0x378(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_View;                                    // 0x380(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_GameSlot_C*                        UI_GameSlot;                                       // 0x388(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, DuplicateTransient)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x390(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	bool                                         ShouldViewBeVisible;                               // 0x398(0x1)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         SepareteReportWithLine;                            // 0x399(0x1)(Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_39A3[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       WidgetWidth;                                       // 0x3A0(0x8)(ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_RightClickMenu_C* GetDefaultObj();

	void PlayFadeInOnBeginPlay(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	bool DecideWhichOptionsToDisplay(bool* Temp_bool_Variable, bool* CallFunc_IsValid_ReturnValue, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, bool* CallFunc_IsValid_ReturnValue_1, bool* Temp_bool_Variable_1, enum class ESlateVisibility* Temp_byte_Variable_2, enum class ESlateVisibility* Temp_byte_Variable_3, bool* Temp_bool_Variable_2, bool* CallFunc_IsValid_ReturnValue_2, enum class ESlateVisibility* Temp_byte_Variable_4, enum class ESlateVisibility* Temp_byte_Variable_5, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4, enum class ESlateVisibility* K2Node_Select_Default, enum class ESlateVisibility* K2Node_Select_Default_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default_2, enum class ESlateVisibility* Temp_byte_Variable_6, enum class ESlateVisibility* Temp_byte_Variable_7, bool* CallFunc_IsValid_ReturnValue_5, bool* Temp_bool_Variable_3, enum class ESlateVisibility* K2Node_Select_Default_3, bool* CallFunc_IsValid_ReturnValue_6, bool* CallFunc_IsValid_ReturnValue_7, bool* CallFunc_IsValid_ReturnValue_8);
	void Event_Set_To_Like();
	void Event_Set_To_Unlike();
	void Construct();
	void BndEvt__UI_DropdownMenu_UI_Button_Install_K2Node_ComponentBoundEvent_13_Dispatcher_OnClick__DelegateSignature();
	void BndEvt__UI_DropdownMenu_UI_Button_Report_K2Node_ComponentBoundEvent_14_Dispatcher_OnClick__DelegateSignature();
	void BndEvt__UI_DropdownMenu_UI_Button_Uninstall_K2Node_ComponentBoundEvent_15_Dispatcher_OnClick__DelegateSignature();
	void BndEvt__UI_DropdownMenu_UI_Button_Like_K2Node_ComponentBoundEvent_16_Dispatcher_OnClick__DelegateSignature();
	void BndEvt__UI_RightClickMenu_UI_Button_Update_K2Node_ComponentBoundEvent_24_Dispatcher_OnClick__DelegateSignature();
	void BndEvt__UI_RightClickMenu_UI_Button_View_K2Node_ComponentBoundEvent_25_Dispatcher_OnClick__DelegateSignature();
	void OnInitialized();
	void PreConstruct(bool* IsDesignTime);
	void BndEvt__UI_RightClickMenu_UI_Button_Cancel_K2Node_ComponentBoundEvent_0_Dispatcher_OnClick__DelegateSignature();
	class FString CustomEvent_3();
	struct FCFCoreError CustomEvent_4();
	void Destruct();
	void BndEvt__UI_RightClickMenu_UI_Button_Purchase_K2Node_ComponentBoundEvent_1_Dispatcher_OnClick__DelegateSignature();
	float ExecuteUbergraph_UI_RightClickMenu(enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4, bool* CallFunc_IsValid_ReturnValue_5, bool* CallFunc_IsValid_ReturnValue_6, bool* CallFunc_IsValid_ReturnValue_7, bool* CallFunc_IsValid_ReturnValue_8, bool* CallFunc_IsValid_ReturnValue_9, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool* CallFunc_IsValid_ReturnValue_10, bool* CallFunc_IsValid_ReturnValue_11, bool* CallFunc_IsValid_ReturnValue_12, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, bool* CallFunc_IsValid_ReturnValue_13, bool* CallFunc_IsValid_ReturnValue_14, bool* CallFunc_IsValid_ReturnValue_15, bool* CallFunc_IsValid_ReturnValue_16, bool* CallFunc_IsValid_ReturnValue_17, bool* Temp_bool_Variable, bool* CallFunc_IsValid_ReturnValue_18, enum class ESlateVisibility* K2Node_Select_Default, struct FCFCoreError* K2Node_CustomEvent_error, bool* CallFunc_IsValid_ReturnValue_19, bool* CallFunc_IsValid_ReturnValue_20, bool* CallFunc_IsValid_ReturnValue_21, class FString* CallFunc_Conv_TextToString_ReturnValue);
};

}


