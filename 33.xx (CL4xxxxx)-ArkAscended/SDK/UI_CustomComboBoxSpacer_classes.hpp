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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class USpacer*                               Spacer;                                            // 0x338(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Size;                                              // 0x340(0x8)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)

	static class UClass* StaticClass();
	static class UUI_CustomComboBoxSpacer_C* GetDefaultObj();

	bool PreConstruct();
	bool ExecuteUbergraph_UI_CustomComboBoxSpacer(int32 EntryPoint, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
};

}


