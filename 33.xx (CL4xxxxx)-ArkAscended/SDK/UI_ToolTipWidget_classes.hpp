#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x360 - 0x330)
// WidgetBlueprintGeneratedClass UI_ToolTipWidget.UI_ToolTipWidget_C
class UUI_ToolTipWidget_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UOverlay*                              BaseOverlay;                                       // 0x338(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Tooltip;                                      // 0x340(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  Text;                                              // 0x348(0x18)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)

	static class UClass* StaticClass();
	static class UUI_ToolTipWidget_C* GetDefaultObj();

	void PreConstruct(bool* IsDesignTime);
	bool ExecuteUbergraph_UI_ToolTipWidget();
};

}


