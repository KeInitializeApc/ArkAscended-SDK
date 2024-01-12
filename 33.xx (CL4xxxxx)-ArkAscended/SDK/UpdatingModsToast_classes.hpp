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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x768(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0x770(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0x778(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst)
	class URichTextBlock*                        MainText;                                          // 0x780(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                ProgressImage;                                     // 0x788(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  OverrideText;                                      // 0x790(0x18)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInstanceDynamic*              ProgressBarMat;                                    // 0x7A8(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUpdatingModsToast_C* GetDefaultObj();

	double UpdateProgressBar(float* CallFunc_Divide_DoubleFloat_B_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	TArray<struct FFormatArgumentData> UpdateMainText(bool Temp_bool_Variable, class FText* K2Node_Select_Default, class FText CallFunc_Format_ReturnValue);
	bool InitCounter();
	void IncrementCounter();
	bool OverrideTextValueWithString();
	bool OverrideTextValue();
	void Construct();
	int32 SetCounter();
	int32 ExecuteUbergraph_UpdatingModsToast(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility* K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility* K2Node_Select_Default_1);
};

}


