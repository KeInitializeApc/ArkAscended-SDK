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
	uint8                                        Pad_2C5F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1138(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnGenerated;                                       // 0x1140(0x10)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	int64                                        CurrentClassCategoryID;                            // 0x1150(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	TArray<class FString>                        Temp;                                              // 0x1158(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int64                                        SelectedCategoryID;                                // 0x1168(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_ParentPage_C*                      UI_ParentPage;                                     // 0x1170(0x8)(Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, DuplicateTransient)
	class FText                                  TheText;                                           // 0x1178(0x18)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_CategoriesSelect_C* GetDefaultObj();

	bool FilterOutCategories(const TArray<struct FCategory>& Categories, int32* CallFunc_Array_Length_ReturnValue, struct FCategory* CallFunc_Array_Get_Item, int32* CallFunc_Int32_AddOne_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, struct FCategory* CallFunc_Array_Get_Item_1, bool* CallFunc_EqualEqual_Int64Int64_ReturnValue, int32* CallFunc_Array_Add_ReturnValue, bool* CallFunc_EqualEqual_Int64Int64_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	struct FSTRUCT_CustomComboBoxOption CreateAllCategoriesCategory(const class FString& CallFunc_Conv_TextToString_ReturnValue);
	struct FCFCoreError OnCategoriesInfoFound_Error();
	int64 UpdateOptions();
	void PreConstruct(bool IsDesignTime);
	class UUI_CustomComboBoxOption_C* OnOptionSelectedInterface(int64* ID);
	void OnCategoriesInfoFound(const TArray<struct FCategory>& Categories);
	float Tick(struct FGeometry* MyGeometry);
	class UUI_CustomComboBoxOption_C* ExecuteUbergraph_UI_CategoriesSelect(bool* CallFunc_IsValid_ReturnValue, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage, int32 CallFunc_Conv_Int64ToInt_ReturnValue, const struct FCFCoreGetCategoriesFilter& CallFunc_MakeGetCategoriesFilter_ReturnValue, struct FSTRUCT_CustomComboBoxOption* CallFunc_Array_Get_Item, bool* CallFunc_IsValid_ReturnValue_1, TArray<struct FCategory>* K2Node_CustomEvent_categories, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
	void OnGenerated__DelegateSignature();
};

}


