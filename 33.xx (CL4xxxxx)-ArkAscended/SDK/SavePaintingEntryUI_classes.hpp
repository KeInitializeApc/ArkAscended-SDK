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
	class UImage*                                Bracket_SmallText;                                 // 0x7B8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UCustomButtonWidget*                   Close;                                             // 0x7C0(0x8)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UEditableTextBox*                      Filename;                                          // 0x7C8(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
	class UCustomButtonWidget*                   SetButton;                                         // 0x7D0(0x8)(Edit, ConstParm, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class USavePaintingEntryUI_C* GetDefaultObj();

};

}


