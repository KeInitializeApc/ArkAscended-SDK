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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A0(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UBorder*                               Border_184;                                        // 0x7A8(0x8)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, RepNotify, EditorOnly, NoDestructor, ContainsInstancedReference)
	class UCustomButtonWidget*                   Button;                                            // 0x7B0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UButton*                               Button_25;                                         // 0x7B8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, Interp, EditorOnly, NoDestructor)
	class UBorder*                               PaintColorPreview;                                 // 0x7C0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UDyeRegionButton_C* GetDefaultObj();

	void GetVisibility_0(enum class ESlateVisibility ReturnValue, bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, bool* CallFunc_GetIsEnabled_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default);
	void BndEvt__DyeRegionButton_Button_25_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	int32 ExecuteUbergraph_DyeRegionButton();
};

}


