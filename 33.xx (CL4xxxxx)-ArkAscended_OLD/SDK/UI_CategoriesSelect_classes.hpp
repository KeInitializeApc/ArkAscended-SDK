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
	uint8                                        Pad_18C5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1138(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnGenerated;                                       // 0x1140(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	int64                                        CurrentClassCategoryID;                            // 0x1150(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	TArray<class FString>                        Temp;                                              // 0x1158(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int64                                        SelectedCategoryID;                                // 0x1168(0x8)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UUI_ParentPage_C*                      UI_ParentPage;                                     // 0x1170(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst, DuplicateTransient)
	class FText                                  TheText;                                           // 0x1178(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_CategoriesSelect_C* GetDefaultObj();

	bool FilterOutCategories(const TArray<struct FCategory>& Categories, class FText* CallFunc_Conv_StringToText_ReturnValue, bool K2Node_SwitchString_CmpSuccess, class FString* CallFunc_Conv_TextToString_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Add_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue_1);
	struct FSTRUCT_CustomComboBoxOption CreateAllCategoriesCategory();
	struct FCFCoreError OnCategoriesInfoFound_Error();
	int64 UpdateOptions();
	bool PreConstruct();
	class UUI_CustomComboBoxOption_C* OnOptionSelectedInterface(const class FString& Option, int64* ID);
	void OnCategoriesInfoFound(const TArray<struct FCategory>& Categories);
	float Tick(const struct FGeometry& MyGeometry);
	float ExecuteUbergraph_UI_CategoriesSelect(int32* EntryPoint, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs* CallFunc_GetCurrentActivePage_CurrentActiveTab, struct FCFCoreGetCategoriesFilter* CallFunc_MakeGetCategoriesFilter_ReturnValue);
	void OnGenerated__DelegateSignature();
};

}


