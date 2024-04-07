#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3A8 - 0x3A0)
// WidgetBlueprintGeneratedClass ColorPicker_HairTipColor_ASA_Widget.ColorPicker_HairTipColor_ASA_Widget_C
class UColorPicker_HairTipColor_ASA_Widget_C : public UColorPicker_ASA_Widget_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

	static class UClass* StaticClass();
	static class UColorPicker_HairTipColor_ASA_Widget_C* GetDefaultObj();

	void UpdateColor(struct FVector2D* Color);
	void ExecuteUbergraph_ColorPicker_HairTipColor_ASA_Widget(int32* EntryPoint, const struct FVector2D& K2Node_CustomEvent_Color);
};

}


