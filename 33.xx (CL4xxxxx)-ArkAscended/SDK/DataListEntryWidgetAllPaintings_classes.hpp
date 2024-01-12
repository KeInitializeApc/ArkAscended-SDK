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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UAllPaintingsEntryButton*              PaintingEntryButton;                               // 0x400(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          SelectedColorBG;                                   // 0x408(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          UnSelectedColorBG;                                 // 0x418(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          UnSelectedPairColorBG;                             // 0x428(0x10)(ConstParm, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListEntryWidgetAllPaintings_C* GetDefaultObj();

	bool OnPaint(class UPanelWidget** CallFunc_GetParent_ReturnValue, int32* CallFunc_GetChildIndex_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, struct FLinearColor* CallFunc_SelectColor_ReturnValue);
	void Construct();
	bool ExecuteUbergraph_DataListEntryWidgetAllPaintings(class UPanelWidget** CallFunc_GetParent_ReturnValue, int32* CallFunc_GetChildIndex_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, struct FLinearColor* CallFunc_SelectColor_ReturnValue);
};

}


