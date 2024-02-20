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
	uint8                                        Pad_37E8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1138(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnGenerated;                                       // 0x1140(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        CurrentClassCategoryID;                            // 0x1150(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        Temp;                                              // 0x1158(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int64                                        SelectedCategoryID;                                // 0x1168(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ParentPage_C*                      UI_ParentPage;                                     // 0x1170(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference)
	class FText                                  TheText;                                           // 0x1178(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_CategoriesSelect_C* GetDefaultObj();

	int32 FilterOutCategories(int32* CallFunc_Int32_AddOne_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, int32* CallFunc_Array_Add_ReturnValue);
	struct FSTRUCT_CustomComboBoxOption CreateAllCategoriesCategory(class FString* CallFunc_Conv_TextToString_ReturnValue);
	struct FCFCoreError OnCategoriesInfoFound_Error();
	int64 UpdateOptions();
	void PreConstruct(bool* IsDesignTime);
	class UUI_CustomComboBoxOption_C* OnOptionSelectedInterface(class FString* Option, int64* ID);
	TArray<struct FCategory> OnCategoriesInfoFound();
	float Tick();
	TArray<struct FCategory> ExecuteUbergraph_UI_CategoriesSelect(struct FCFCoreError* K2Node_CustomEvent_error, bool* CallFunc_IsValid_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, const class FString& K2Node_Event_Option, int64 K2Node_Event_ID, class UUI_CustomComboBoxOption_C* K2Node_Event_OptionWidget, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
	void OnGenerated__DelegateSignature();
};

}


