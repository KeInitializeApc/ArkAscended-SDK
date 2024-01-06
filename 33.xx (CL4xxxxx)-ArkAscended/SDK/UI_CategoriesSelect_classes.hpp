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
	uint8                                        Pad_3762[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1138(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnGenerated;                                       // 0x1140(0x10)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	int64                                        CurrentClassCategoryID;                            // 0x1150(0x8)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<class FString>                        Temp;                                              // 0x1158(0x10)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int64                                        SelectedCategoryID;                                // 0x1168(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UUI_ParentPage_C*                      UI_ParentPage;                                     // 0x1170(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, DuplicateTransient)
	class FText                                  TheText;                                           // 0x1178(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_CategoriesSelect_C* GetDefaultObj();

	bool FilterOutCategories(const TArray<struct FCategory>& Categories, int32 Temp_int_Array_Index_Variable, class FText* CallFunc_Conv_StringToText_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32* CallFunc_Add_IntInt_ReturnValue_1);
	struct FSTRUCT_CustomComboBoxOption CreateAllCategoriesCategory();
	struct FCFCoreError OnCategoriesInfoFound_Error();
	int64 UpdateOptions();
	bool PreConstruct();
	class UUI_CustomComboBoxOption_C* OnOptionSelectedInterface(int64* ID);
	void OnCategoriesInfoFound(const TArray<struct FCategory>& Categories);
	float Tick(const struct FGeometry& MyGeometry);
	float ExecuteUbergraph_UI_CategoriesSelect(int32 EntryPoint, struct FCFCoreError* K2Node_CustomEvent_error, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs* CallFunc_GetCurrentActivePage_CurrentActiveTab, struct FCFCoreGetCategoriesFilter* CallFunc_MakeGetCategoriesFilter_ReturnValue, const class FString& K2Node_Event_Option, int64 K2Node_Event_ID, class UUI_CustomComboBoxOption_C* K2Node_Event_OptionWidget);
	void OnGenerated__DelegateSignature();
};

}


