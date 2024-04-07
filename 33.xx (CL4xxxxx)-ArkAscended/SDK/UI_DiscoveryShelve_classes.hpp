#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x3F0 - 0x330)
// WidgetBlueprintGeneratedClass UI_DiscoveryShelve.UI_DiscoveryShelve_C
class UUI_DiscoveryShelve_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeInGoTos;                                       // 0x338(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_ShelveList;                          // 0x340(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UScrollBox*                            ScrollBox_Horizontal;                              // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class USizeBox*                              SizeBox;                                           // 0x350(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig)
	class UUI_Button_GoToHorizontal_C*           UI_Button_ScrollToLeft;                            // 0x358(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UUI_Button_GoToHorizontal_C*           UI_Button_ScrollToRight;                           // 0x360(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UUI_GameSlot_C*                        UI_GameSlot_7;                                     // 0x368(0x8)(ConstParm, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, EditorOnly)
	class UUI_GameSlot_C*                        UI_GameSlot_8;                                     // 0x370(0x8)(ConstParm, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, RepNotify, EditorOnly)
	class UUI_GameSlot_C*                        UI_GameSlot_9;                                     // 0x378(0x8)(ConstParm, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, Interp, EditorOnly)
	class UUI_GameSlot_C*                        UI_GameSlot_10;                                    // 0x380(0x8)(ConstParm, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, RepNotify, Interp, EditorOnly)
	class UUI_GameSlot_C*                        UI_GameSlot_11;                                    // 0x388(0x8)(ConstParm, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, NonTransactional, EditorOnly)
	class UUI_GameSlot_C*                        UI_GameSlot_12;                                    // 0x390(0x8)(ConstParm, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, RepNotify, NonTransactional, EditorOnly)
	class UUI_GameSlot_C*                        UI_GameSlot_13;                                    // 0x398(0x8)(ConstParm, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, Interp, NonTransactional, EditorOnly)
	class UUI_ViewAllSlot_C*                     UI_ViewAllSlot;                                    // 0x3A0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	TArray<int64>                                Mod_ID;                                            // 0x3A8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	TArray<struct FInstallProgressMod>           Out_Mod;                                           // 0x3B8(0x10)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UUI_Discovery_C*                       Discovery;                                         // 0x3C8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, DuplicateTransient, SubobjectReference)
	TArray<class UUI_GameSlot_C*>                ListOfGameSlots;                                   // 0x3D0(0x10)(Edit, Net, OutParm, ZeroConstructor, Transient, EditConst, DuplicateTransient, SubobjectReference)
	bool                                         SpawnSeeAll;                                       // 0x3E0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, EditConst, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_4769[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_ViewAllSlot_C*                     ViewAllButton;                                     // 0x3E8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, DuplicateTransient, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_DiscoveryShelve_C* GetDefaultObj();

	class UUI_ViewAllSlot_C* AddViewAllModSlot(const struct FMargin& K2Node_MakeStruct_Margin, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	float Tick();
	void BndEvt__UI_HorizontalModList_UI_Button_ScrollToLeft_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void BndEvt__UI_HorizontalModList_UI_Button_ScrollToRight_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature();
	bool LeftIn();
	bool RightIn();
	void FadeDirections();
	void Construct();
	void EmptyShelve();
	TArray<int64> Create();
	double ExecuteUbergraph_UI_DiscoveryShelve(int32* EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float* CallFunc_GetScrollOffset_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, const struct FMargin& K2Node_MakeStruct_Margin_2, const struct FMargin& K2Node_MakeStruct_Margin_3, bool Temp_bool_Variable, int32* Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32* Temp_int_Array_Index_Variable, int64* CallFunc_Array_Get_Item, const struct FInstallProgressMod& CallFunc_MakeFInstallProgressModFromID_ReturnValue, bool* K2Node_SwitchInteger_CmpSuccess, enum class ESlateVisibility Temp_byte_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float* CallFunc_GetScrollOffset_ReturnValue_1, float* CallFunc_GetScrollOffsetOfEnd_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_1, bool* K2Node_CustomEvent_Index_1, bool* K2Node_CustomEvent_Index, enum class ESlateVisibility Temp_byte_Variable_2, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, TArray<int64>* K2Node_CustomEvent_ListOfMods, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UUI_GameSlot_C** CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UUI_GameSlot_C** CallFunc_Array_Get_Item_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float* CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast, float* CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1);
};

}


