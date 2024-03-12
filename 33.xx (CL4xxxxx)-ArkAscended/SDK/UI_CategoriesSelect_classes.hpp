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
	uint8                                        Pad_4CF0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1138(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnGenerated;                                       // 0x1140(0x10)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int64                                        CurrentClassCategoryID;                            // 0x1150(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        Temp;                                              // 0x1158(0x10)(ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int64                                        SelectedCategoryID;                                // 0x1168(0x8)(Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ParentPage_C*                      UI_ParentPage;                                     // 0x1170(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, DuplicateTransient)
	class FText                                  TheText;                                           // 0x1178(0x18)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_CategoriesSelect_C* GetDefaultObj();

	int32 FilterOutCategories(int32 Temp_int_Array_Index_Variable, const struct FCategory& CallFunc_Array_Get_Item, bool K2Node_SwitchString_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FCategory& CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_EqualEqual_Int64Int64_ReturnValue_1);
	struct FSTRUCT_CustomComboBoxOption CreateAllCategoriesCategory(class FText CallFunc_MakeLiteralText_ReturnValue);
	struct FCFCoreError OnCategoriesInfoFound_Error();
	int64 UpdateOptions();
	bool PreConstruct();
	class UUI_CustomComboBoxOption_C* OnOptionSelectedInterface(int64* ID);
	TArray<struct FCategory> OnCategoriesInfoFound();
	float Tick(struct FGeometry* MyGeometry);
	TArray<struct FCategory> ExecuteUbergraph_UI_CategoriesSelect(int32* EntryPoint, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage, const struct FSTRUCT_CustomComboBoxOption& CallFunc_Array_Get_Item, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
	void OnGenerated__DelegateSignature();
};

}


