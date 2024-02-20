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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x768(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0x770(0x8)(BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UWidgetAnimation*                      Open;                                              // 0x778(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst)
	class URichTextBlock*                        MainText;                                          // 0x780(0x8)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                ProgressImage;                                     // 0x788(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  OverrideText;                                      // 0x790(0x18)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInstanceDynamic*              ProgressBarMat;                                    // 0x7A8(0x8)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUpdatingModsToast_C* GetDefaultObj();

	float UpdateProgressBar(float CallFunc_Divide_DoubleFloat_B_ImplicitCast);
	TArray<struct FFormatArgumentData> UpdateMainText(bool* Temp_bool_Variable, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText* K2Node_Select_Default, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, class FText* CallFunc_Format_ReturnValue);
	bool InitCounter();
	void IncrementCounter();
	bool OverrideTextValueWithString();
	bool OverrideTextValue();
	void Construct();
	int32 SetCounter();
	int32 ExecuteUbergraph_UpdatingModsToast(bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, int32 K2Node_Event_NewCounterMax, bool K2Node_Event_bInWillSetCounter, const class FString& K2Node_Event_NewText_1, bool K2Node_Event_HideProgressBar_1, class FText K2Node_Event_NewText, bool K2Node_Event_HideProgressBar, enum class ESlateVisibility* K2Node_Select_Default, class FText* CallFunc_Conv_StringToText_ReturnValue, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue, enum class ESlateVisibility* Temp_byte_Variable_2, enum class ESlateVisibility* Temp_byte_Variable_3, bool* Temp_bool_Variable_1, int32 K2Node_Event_NewCounter, enum class ESlateVisibility* K2Node_Select_Default_1);
};

}


