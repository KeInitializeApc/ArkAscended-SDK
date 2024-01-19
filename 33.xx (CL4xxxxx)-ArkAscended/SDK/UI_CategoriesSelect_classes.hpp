#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5F (0x1190 - 0x1131)
// WidgetBlueprintGeneratedClass UI_CategoriesSelect.UI_CategoriesSelect_C
class UUI_CategoriesSelect_C : public UUI_CustomComboBox_C
{
public:
	uint8                                        Pad_37C1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1138(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnGenerated;                                       // 0x1140(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int64                                        CurrentClassCategoryID;                            // 0x1150(0x8)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        Temp;                                              // 0x1158(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int64                                        SelectedCategoryID;                                // 0x1168(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ParentPage_C*                      UI_ParentPage;                                     // 0x1170(0x8)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DuplicateTransient)
	class FText                                  TheText;                                           // 0x1178(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_CategoriesSelect_C* GetDefaultObj();

	int32 FilterOutCategories(const TArray<struct FCategory>& Categories, int32* CallFunc_Array_Length_ReturnValue, const struct FCategory& CallFunc_Array_Get_Item, bool K2Node_SwitchString_CmpSuccess, int32* CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, const struct FSTRUCT_CustomComboBoxOption& K2Node_MakeStruct_STRUCT_CustomComboBoxOption, const struct FCategory& CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, const struct FSTRUCT_SubOptions& K2Node_MakeStruct_STRUCT_SubOptions, int32* CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_EqualEqual_Int64Int64_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	class FString CreateAllCategoriesCategory(const struct FSTRUCT_CustomComboBoxOption& K2Node_MakeStruct_STRUCT_CustomComboBoxOption, const struct FSTRUCT_CustomComboBoxOption& K2Node_MakeStruct_STRUCT_CustomComboBoxOption_1);
	struct FCFCoreError OnCategoriesInfoFound_Error();
	int64 UpdateOptions();
	bool PreConstruct();
	class UUI_CustomComboBoxOption_C* OnOptionSelectedInterface(int64* ID);
	void OnCategoriesInfoFound(const TArray<struct FCategory>& Categories);
	float Tick(const struct FGeometry& MyGeometry);
	bool ExecuteUbergraph_UI_CategoriesSelect(int32 EntryPoint, const struct FCFCoreError& K2Node_CustomEvent_error, enum class ENUM_SideTabs* CallFunc_GetCurrentActivePage_CurrentActiveTab, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, int64 K2Node_Event_Current_Class_Category_ID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32* CallFunc_Conv_Int64ToInt_ReturnValue, const struct FSTRUCT_CustomComboBoxOption& CallFunc_Array_Get_Item, const class FString& K2Node_Event_Option, int64 K2Node_Event_ID, class UUI_CustomComboBoxOption_C* K2Node_Event_OptionWidget, const TArray<struct FCategory>& K2Node_CustomEvent_categories, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
	void OnGenerated__DelegateSignature();
};

}


