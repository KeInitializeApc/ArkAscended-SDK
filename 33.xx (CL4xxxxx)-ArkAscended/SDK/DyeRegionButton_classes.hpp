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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UBorder*                               Border_184;                                        // 0x7A8(0x8)(ConstParm, ExportObject, ReturnParm, Config, GlobalConfig, RepNotify, EditorOnly, NoDestructor, ContainsInstancedReference)
	class UCustomButtonWidget*                   Button;                                            // 0x7B0(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig)
	class UButton*                               Button_25;                                         // 0x7B8(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, Interp, EditorOnly, NoDestructor)
	class UBorder*                               PaintColorPreview;                                 // 0x7C0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UDyeRegionButton_C* GetDefaultObj();

	bool GetVisibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void BndEvt__DyeRegionButton_Button_25_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_DyeRegionButton(int32* EntryPoint);
};

}


