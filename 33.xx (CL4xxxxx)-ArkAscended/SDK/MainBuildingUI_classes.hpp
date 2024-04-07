#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x880 - 0x758)
// WidgetBlueprintGeneratedClass MainBuildingUI.MainBuildingUI_C
class UMainBuildingUI_C : public UBuildingUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UImage*                                BorderDefaultWeapon01;                             // 0x760(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                BorderDefaultWeapon02;                             // 0x768(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                BorderUse01;                                       // 0x770(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                BorderUse02;                                       // 0x778(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UScrollBox*                            BuildingHotbar;                                    // 0x780(0x8)(Edit, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UHorizontalBox*                        DefaultWeaponBox;                                  // 0x788(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UWidgetSwitcher*                       DefaultWeaponGamepadSwitcher;                      // 0x790(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            DefaultWeaponKeyString;                            // 0x798(0x8)(Edit, BlueprintVisible, ExportObject, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                GamepadDefaultWeapon;                              // 0x7A0(0x8)(EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                GamepadUse;                                        // 0x7A8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            HoldDefaultWeapon;                                 // 0x7B0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            HoldGiveDefaultWeaponString;                       // 0x7B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            HoldUse;                                           // 0x7C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            HoldUseString;                                     // 0x7C8(0x8)(Edit, ConstParm, ExportObject, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                Image;                                             // 0x7D0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UImage*                                Image_1;                                           // 0x7D8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp)
	class UImage*                                Image_2;                                           // 0x7E0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp)
	class UImage*                                Image_3;                                           // 0x7E8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NonTransactional)
	class UImage*                                Image_4;                                           // 0x7F0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, NonTransactional)
	class UImage*                                Image_5;                                           // 0x7F8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp, NonTransactional)
	class UImage*                                Image_6;                                           // 0x800(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional)
	class UImage*                                Image_7;                                           // 0x808(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditorOnly)
	class UImage*                                Image_8;                                           // 0x810(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, EditorOnly)
	class UImage*                                Image_523;                                         // 0x818(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NonTransactional, EditorOnly, SimpleDisplay)
	class UTextBlock*                            NumVariantsString;                                 // 0x820(0x8)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UHorizontalBox*                        PressBox;                                          // 0x828(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            PressDefaultWeapon;                                // 0x830(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            PressGiveDefaultWeaponString;                      // 0x838(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            PressUse;                                          // 0x840(0x8)(Edit, ConstParm, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            PressUseString;                                    // 0x848(0x8)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UWidgetSwitcher*                       UseGamepadSwitcher;                                // 0x850(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            UseKeyString;                                      // 0x858(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UHorizontalBox*                        VariantsBox;                                       // 0x860(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            VariantString;                                     // 0x868(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UBuildVariantData_Widget_C*>    BuildingVariantsArray;                             // 0x870(0x10)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMainBuildingUI_C* GetDefaultObj();

	bool SetupBuildingHotbar(class FString* CallFunc_BPOverrideDescriptiveNameForPreview_ReturnValue, TArray<TSoftClassPtr<class APrimalStructure>>* K2Node_MakeArray_Array, TArray<TSoftClassPtr<class APrimalStructure>>* CallFunc_GetAllStructuresToBuild_ReturnValue, int32 Temp_int_Array_Index_Variable, bool* CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, class UBuildVariantData_Widget_C* CallFunc_Create_ReturnValue, TSoftClassPtr<class APrimalStructure> CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess_1, class UPrimalItem** K2Node_DynamicCast_AsPrimal_Item, bool* K2Node_DynamicCast_bSuccess_2, class UTexture2D* K2Node_Select_Default, class UPanelSlot** CallFunc_AddChild_ReturnValue, int32* CallFunc_Array_LastIndex_ReturnValue, class UBuildVariantData_Widget_C* CallFunc_Array_Get_Item_1, bool* CallFunc_Greater_IntInt_ReturnValue_1, class UBuildVariantData_Widget_C* CallFunc_Array_Get_Item_2, bool* CallFunc_Array_IsValidIndex_ReturnValue);
	bool UpdateVisibilityByString(const class FString& String, const TArray<class UWidget*>& Widget, bool Condition, int32* Temp_int_Variable, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Len_ReturnValue, int32* Temp_int_Variable_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item_1);
	class FText SetupStructurePlacer(int32 CallFunc_Len_ReturnValue, int32 CallFunc_Len_ReturnValue_1, int32 CallFunc_Len_ReturnValue_2, int32 CallFunc_Len_ReturnValue_3, TArray<class UWidget*>* K2Node_MakeArray_Array, int32 CallFunc_Len_ReturnValue_4, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_UpdateVisibilityByString_Condition, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, int32 CallFunc_Len_ReturnValue_5, int32 CallFunc_Len_ReturnValue_6, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 CallFunc_Len_ReturnValue_7, bool* CallFunc_EqualEqual_IntInt_ReturnValue_3, TArray<class UWidget*>* K2Node_MakeArray_Array_1, bool* CallFunc_UpdateVisibilityByString_Condition_1, TArray<class UWidget*>* K2Node_MakeArray_Array_2, bool* CallFunc_UpdateVisibilityByString_Condition_2, TArray<class UWidget*>* K2Node_MakeArray_Array_3, bool* CallFunc_UpdateVisibilityByString_Condition_3, TArray<class UWidget*>* K2Node_MakeArray_Array_4, bool* CallFunc_UpdateVisibilityByString_Condition_4);
	float Tick(struct FGeometry* MyGeometry);
	void Construct();
	void RemovedFromViewport();
	bool ExecuteUbergraph_MainBuildingUI(int32* EntryPoint, class APrimalStructurePlacer** CallFunc_GetStructurePlacer_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


