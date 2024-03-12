#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x419 - 0x3F8)
// WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem.DataListEntryWidgetPrimalItem_C
class UDataListEntryWidgetPrimalItem_C : public UDataListEntryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F8(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UMenuAnchor*                           CtxMenu;                                           // 0x400(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UImage*                                SelectedImage;                                     // 0x408(0x8)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UDataListEntryButton_PrimalItem*       TheDataListButton;                                 // 0x410(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         LastSelected;                                      // 0x418(0x1)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListEntryWidgetPrimalItem_C* GetDefaultObj();

	bool OnPaint(struct FPaintContext* Context, bool CallFunc_IsHovered_ReturnValue);
	void Construct();
	void ExecuteUbergraph_DataListEntryWidgetPrimalItem(int32* EntryPoint);
};

}


