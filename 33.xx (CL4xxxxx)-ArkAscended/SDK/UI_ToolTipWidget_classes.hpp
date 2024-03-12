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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UOverlay*                              BaseOverlay;                                       // 0x338(0x8)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Tooltip;                                      // 0x340(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  Text;                                              // 0x348(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)

	static class UClass* StaticClass();
	static class UUI_ToolTipWidget_C* GetDefaultObj();

	bool PreConstruct();
	bool ExecuteUbergraph_UI_ToolTipWidget(int32* EntryPoint);
};

}


