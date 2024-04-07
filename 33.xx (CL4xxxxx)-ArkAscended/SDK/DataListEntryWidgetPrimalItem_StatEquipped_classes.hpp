#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x410 - 0x3F8)
// WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_StatEquipped.DataListEntryWidgetPrimalItem_StatEquipped_C
class UDataListEntryWidgetPrimalItem_StatEquipped_C : public UDataListEntryWidget
{
public:
	class UMenuAnchor*                           CtxMenu;                                           // 0x3F8(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UImage*                                HoverState;                                        // 0x400(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UDataListEntryButton_PrimalItem*       TheDataListButton;                                 // 0x408(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListEntryWidgetPrimalItem_StatEquipped_C* GetDefaultObj();

	bool OnPaint(struct FPaintContext* Context, bool CallFunc_IsHovered_ReturnValue);
};

}


