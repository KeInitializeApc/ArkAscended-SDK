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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UOverlay*                              BaseOverlay;                                       // 0x338(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Tooltip;                                      // 0x340(0x8)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class FText                                  Text;                                              // 0x348(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)

	static class UClass* StaticClass();
	static class UUI_ToolTipWidget_C* GetDefaultObj();

	bool PreConstruct();
	bool ExecuteUbergraph_UI_ToolTipWidget(int32 EntryPoint);
};

}


