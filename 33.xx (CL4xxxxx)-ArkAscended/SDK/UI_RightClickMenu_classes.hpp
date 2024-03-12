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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x338(0x8)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	class USizeBox*                              SizeBox_Outer;                                     // 0x340(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Cancel;                                  // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Install;                                 // 0x350(0x8)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Like;                                    // 0x358(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, DuplicateTransient)
	class UUI_Button_Dropdown_C*                 UI_Button_Purchase;                                // 0x360(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Report;                                  // 0x368(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Uninstall;                               // 0x370(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Update;                                  // 0x378(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_View;                                    // 0x380(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_GameSlot_C*                        UI_GameSlot;                                       // 0x388(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, DuplicateTransient)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x390(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, Transient, EditConst, InstancedReference, DuplicateTransient)
	bool                                         ShouldViewBeVisible;                               // 0x398(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         SepareteReportWithLine;                            // 0x399(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_26FF[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       WidgetWidth;                                       // 0x3A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_RightClickMenu_C* GetDefaultObj();

	bool PlayFadeInOnBeginPlay();
	bool DecideWhichOptionsToDisplay(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility K2Node_Select_Default_2, bool* CallFunc_GetIsModPaidStatus_Premium, bool* CallFunc_GetIsModPaidStatus_Purchased, double* CallFunc_GetIsModPaidStatus_Tier_Price, const class FString& CallFunc_GetIsModPaidStatus_Currency_Symbol, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, bool Temp_bool_Variable_3, enum class ESlateVisibility K2Node_Select_Default_3);
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
	bool PreConstruct();
	void BndEvt__UI_RightClickMenu_UI_Button_Cancel_K2Node_ComponentBoundEvent_0_Dispatcher_OnClick__DelegateSignature();
	class FString CustomEvent_3();
	struct FCFCoreError CustomEvent_4();
	void Destruct();
	void BndEvt__UI_RightClickMenu_UI_Button_Purchase_K2Node_ComponentBoundEvent_1_Dispatcher_OnClick__DelegateSignature();
	float ExecuteUbergraph_UI_RightClickMenu(int32* EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, const class FString& K2Node_CustomEvent_temp_user_token, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FText CallFunc_Conv_Int64ToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, bool CallFunc_CanLaunchURL_ReturnValue, TArray<int64>* K2Node_MakeArray_Array);
};

}


