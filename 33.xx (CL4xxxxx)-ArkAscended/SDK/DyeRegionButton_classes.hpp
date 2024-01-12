#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x7C8 - 0x7A0)
// WidgetBlueprintGeneratedClass DyeRegionButton.DyeRegionButton_C
class UDyeRegionButton_C : public UDyeRegionButtonWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UBorder*                               Border_184;                                        // 0x7A8(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, RepNotify, EditorOnly, NoDestructor, ContainsInstancedReference)
	class UCustomButtonWidget*                   Button;                                            // 0x7B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, GlobalConfig)
	class UButton*                               Button_25;                                         // 0x7B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, GlobalConfig, Interp, EditorOnly, NoDestructor)
	class UBorder*                               PaintColorPreview;                                 // 0x7C0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UDyeRegionButton_C* GetDefaultObj();

	enum class ESlateVisibility GetVisibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool* CallFunc_GetIsEnabled_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default);
	void BndEvt__DyeRegionButton_Button_25_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	int32 ExecuteUbergraph_DyeRegionButton();
};

}


