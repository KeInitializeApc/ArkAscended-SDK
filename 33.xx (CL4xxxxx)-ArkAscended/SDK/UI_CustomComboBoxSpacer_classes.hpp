#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x348 - 0x330)
// WidgetBlueprintGeneratedClass UI_CustomComboBoxSpacer.UI_CustomComboBoxSpacer_C
class UUI_CustomComboBoxSpacer_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class USpacer*                               Spacer;                                            // 0x338(0x8)(Edit, ExportObject, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	double                                       Size;                                              // 0x340(0x8)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config)

	static class UClass* StaticClass();
	static class UUI_CustomComboBoxSpacer_C* GetDefaultObj();

	void PreConstruct(bool* IsDesignTime);
	struct FVector2D ExecuteUbergraph_UI_CustomComboBoxSpacer();
};

}


