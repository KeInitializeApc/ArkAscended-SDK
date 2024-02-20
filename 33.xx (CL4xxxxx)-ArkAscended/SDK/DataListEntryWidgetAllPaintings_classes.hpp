#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x438 - 0x3F8)
// WidgetBlueprintGeneratedClass DataListEntryWidgetAllPaintings.DataListEntryWidgetAllPaintings_C
class UDataListEntryWidgetAllPaintings_C : public UDataListEntryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F8(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UAllPaintingsEntryButton*              PaintingEntryButton;                               // 0x400(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FLinearColor                          SelectedColorBG;                                   // 0x408(0x10)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FLinearColor                          UnSelectedColorBG;                                 // 0x418(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FLinearColor                          UnSelectedPairColorBG;                             // 0x428(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListEntryWidgetAllPaintings_C* GetDefaultObj();

	struct FLinearColor OnPaint(struct FPaintContext* Context, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	void Construct();
	struct FLinearColor ExecuteUbergraph_DataListEntryWidgetAllPaintings(bool* CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


