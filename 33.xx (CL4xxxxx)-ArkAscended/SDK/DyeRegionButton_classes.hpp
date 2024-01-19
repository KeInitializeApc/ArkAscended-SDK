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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UBorder*                               Border_184;                                        // 0x7A8(0x8)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, EditorOnly, NoDestructor, ContainsInstancedReference)
	class UCustomButtonWidget*                   Button;                                            // 0x7B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UButton*                               Button_25;                                         // 0x7B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp, EditorOnly, NoDestructor)
	class UBorder*                               PaintColorPreview;                                 // 0x7C0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UDyeRegionButton_C* GetDefaultObj();

	enum class ESlateVisibility GetVisibility_0(enum class ESlateVisibility ReturnValue, bool Temp_bool_Variable, bool CallFunc_GetIsEnabled_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void BndEvt__DyeRegionButton_Button_25_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_DyeRegionButton(int32 EntryPoint);
};

}


