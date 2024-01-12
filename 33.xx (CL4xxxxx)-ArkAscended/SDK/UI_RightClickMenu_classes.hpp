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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x338(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class USizeBox*                              SizeBox_Outer;                                     // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Cancel;                                  // 0x348(0x8)(BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Install;                                 // 0x350(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Like;                                    // 0x358(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, DuplicateTransient)
	class UUI_Button_Dropdown_C*                 UI_Button_Purchase;                                // 0x360(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Report;                                  // 0x368(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Uninstall;                               // 0x370(0x8)(Net, EditFixedSize, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Update;                                  // 0x378(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_View;                                    // 0x380(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_GameSlot_C*                        UI_GameSlot;                                       // 0x388(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x390(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, DuplicateTransient)
	bool                                         ShouldViewBeVisible;                               // 0x398(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         SepareteReportWithLine;                            // 0x399(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4B18[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       WidgetWidth;                                       // 0x3A0(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_RightClickMenu_C* GetDefaultObj();

	class UUMGSequencePlayer* PlayFadeInOnBeginPlay(bool* CallFunc_IsValid_ReturnValue);
	bool DecideWhichOptionsToDisplay(bool Temp_bool_Variable, bool* CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool* CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, bool* CallFunc_IsValid_ReturnValue_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4, bool CallFunc_GetIsModPaidStatus_Paid, bool CallFunc_GetIsModPaidStatus_Purchased, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default, enum class ESlateVisibility* K2Node_Select_Default_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default_2, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, bool* CallFunc_IsValid_ReturnValue_5, bool Temp_bool_Variable_3, enum class ESlateVisibility* K2Node_Select_Default_3, bool* CallFunc_IsValid_ReturnValue_6, bool* CallFunc_IsValid_ReturnValue_7, bool* CallFunc_IsValid_ReturnValue_8);
	void Construct();
	void Event_Set_To_Like();
	void Event_Set_To_Unlike();
	void BndEvt__UI_DropdownMenu_UI_Button_Install_K2Node_ComponentBoundEvent_13_Dispatcher_OnClick__DelegateSignature();
	void BndEvt__UI_DropdownMenu_UI_Button_Report_K2Node_ComponentBoundEvent_14_Dispatcher_OnClick__DelegateSignature();
	void BndEvt__UI_DropdownMenu_UI_Button_Uninstall_K2Node_ComponentBoundEvent_15_Dispatcher_OnClick__DelegateSignature();
	void BndEvt__UI_DropdownMenu_UI_Button_Like_K2Node_ComponentBoundEvent_16_Dispatcher_OnClick__DelegateSignature();
	void BndEvt__UI_RightClickMenu_UI_Button_Update_K2Node_ComponentBoundEvent_24_Dispatcher_OnClick__DelegateSignature();
	void BndEvt__UI_RightClickMenu_UI_Button_View_K2Node_ComponentBoundEvent_25_Dispatcher_OnClick__DelegateSignature();
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__UI_RightClickMenu_UI_Button_Cancel_K2Node_ComponentBoundEvent_0_Dispatcher_OnClick__DelegateSignature();
	class FString CustomEvent_3();
	struct FCFCoreError CustomEvent_4();
	void Destruct();
	void BndEvt__UI_RightClickMenu_UI_Button_Purchase_K2Node_ComponentBoundEvent_1_Dispatcher_OnClick__DelegateSignature();
	float ExecuteUbergraph_UI_RightClickMenu(bool Temp_bool_Variable, bool* CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4, bool* CallFunc_IsValid_ReturnValue_5, bool* CallFunc_IsValid_ReturnValue_6, bool* CallFunc_IsValid_ReturnValue_7, bool* CallFunc_IsValid_ReturnValue_8, bool* CallFunc_IsValid_ReturnValue_9, bool* CallFunc_IsValid_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool* CallFunc_IsValid_ReturnValue_12, bool* CallFunc_IsValid_ReturnValue_13, bool* CallFunc_IsValid_ReturnValue_14, enum class ESlateVisibility* K2Node_Select_Default, bool* CallFunc_IsValid_ReturnValue_15, bool* CallFunc_IsValid_ReturnValue_16, bool* CallFunc_IsValid_ReturnValue_17, const class FString& K2Node_CustomEvent_temp_user_token, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FText* CallFunc_Conv_Int64ToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, bool* CallFunc_IsValid_ReturnValue_18, bool* CallFunc_CanLaunchURL_ReturnValue, bool* CallFunc_IsValid_ReturnValue_19);
};

}


