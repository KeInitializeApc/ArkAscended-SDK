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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x338(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class USizeBox*                              SizeBox_Outer;                                     // 0x340(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Cancel;                                  // 0x348(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Install;                                 // 0x350(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Like;                                    // 0x358(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, DuplicateTransient)
	class UUI_Button_Dropdown_C*                 UI_Button_Purchase;                                // 0x360(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Report;                                  // 0x368(0x8)(Edit, BlueprintReadOnly, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Uninstall;                               // 0x370(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_Update;                                  // 0x378(0x8)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UUI_Button_Dropdown_C*                 UI_Button_View;                                    // 0x380(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UUI_GameSlot_C*                        UI_GameSlot;                                       // 0x388(0x8)(Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x390(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, DuplicateTransient)
	bool                                         ShouldViewBeVisible;                               // 0x398(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         SepareteReportWithLine;                            // 0x399(0x1)(BlueprintVisible, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_3BD3[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       WidgetWidth;                                       // 0x3A0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_RightClickMenu_C* GetDefaultObj();

	bool PlayFadeInOnBeginPlay();
	bool DecideWhichOptionsToDisplay(bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue_2, bool* K2Node_SwitchEnum_CmpSuccess, bool* CallFunc_BooleanOR_ReturnValue_3, bool* CallFunc_BooleanAND_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue_4, bool* CallFunc_BooleanOR_ReturnValue_5, bool* CallFunc_BooleanOR_ReturnValue_6);
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
	bool PreConstruct();
	void BndEvt__UI_RightClickMenu_UI_Button_Cancel_K2Node_ComponentBoundEvent_0_Dispatcher_OnClick__DelegateSignature();
	void CustomEvent_3(class FString* Temp_user_token);
	struct FCFCoreError CustomEvent_4();
	void Destruct();
	void BndEvt__UI_RightClickMenu_UI_Button_Purchase_K2Node_ComponentBoundEvent_1_Dispatcher_OnClick__DelegateSignature();
	bool ExecuteUbergraph_UI_RightClickMenu(int32 EntryPoint, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue_2, class FString* CallFunc_Concat_StrStr_ReturnValue_3, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, class FString* K2Node_CustomEvent_temp_user_token, class FString* CallFunc_Concat_StrStr_ReturnValue_4, class FString* CallFunc_Concat_StrStr_ReturnValue_5, class FText CallFunc_Conv_Int64ToText_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error, class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_6, bool CallFunc_CanLaunchURL_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast);
};

}


