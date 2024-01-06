#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x7B0 - 0x768)
// WidgetBlueprintGeneratedClass UpdatingModsToast.UpdatingModsToast_C
class UUpdatingModsToast_C : public UPrimalUI_Toast
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x768(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0x770(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0x778(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst)
	class URichTextBlock*                        MainText;                                          // 0x780(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class UImage*                                ProgressImage;                                     // 0x788(0x8)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class FText                                  OverrideText;                                      // 0x790(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              ProgressBarMat;                                    // 0x7A8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUpdatingModsToast_C* GetDefaultObj();

	double UpdateProgressBar(double* CallFunc_Conv_IntToDouble_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue_1, double* CallFunc_Conv_IntToDouble_ReturnValue_2, double* CallFunc_SelectFloat_ReturnValue, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	struct FFormatArgumentData UpdateMainText(bool* Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText* K2Node_Select_Default, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, class FText* CallFunc_Format_ReturnValue);
	void InitCounter(int32 NewCounterMax, bool bInWillSetCounter);
	void IncrementCounter();
	void OverrideTextValueWithString(const class FString& NewText, bool HideProgressBar);
	void OverrideTextValue(class FText NewText, bool HideProgressBar);
	void Construct();
	void SetCounter(int32* NewCounter);
	void ExecuteUbergraph_UpdatingModsToast(int32* EntryPoint, bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, int32* K2Node_Event_NewCounterMax, bool K2Node_Event_bInWillSetCounter, class FString* K2Node_Event_NewText_1, bool K2Node_Event_HideProgressBar_1, class FText* K2Node_Event_NewText, bool K2Node_Event_HideProgressBar, enum class ESlateVisibility* K2Node_Select_Default, class FText* CallFunc_Conv_StringToText_ReturnValue, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue, enum class ESlateVisibility* Temp_byte_Variable_2, enum class ESlateVisibility* Temp_byte_Variable_3, bool* Temp_bool_Variable_1, int32* K2Node_Event_NewCounter, enum class ESlateVisibility* K2Node_Select_Default_1);
};

}


