#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x7D8 - 0x7B8)
// WidgetBlueprintGeneratedClass SavePaintingEntryUI.SavePaintingEntryUI_C
class USavePaintingEntryUI_C : public UUI_SavePainting
{
public:
	class UImage*                                Bracket_SmallText;                                 // 0x7B8(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, SubobjectReference)
	class UCustomButtonWidget*                   Close;                                             // 0x7C0(0x8)(BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UEditableTextBox*                      Filename;                                          // 0x7C8(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
	class UCustomButtonWidget*                   SetButton;                                         // 0x7D0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class USavePaintingEntryUI_C* GetDefaultObj();

};

}


