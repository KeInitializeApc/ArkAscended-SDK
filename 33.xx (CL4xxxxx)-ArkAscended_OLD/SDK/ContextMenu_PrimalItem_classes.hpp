#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3E0 - 0x3D8)
// WidgetBlueprintGeneratedClass ContextMenu_PrimalItem.ContextMenu_PrimalItem_C
class UContextMenu_PrimalItem_C : public UContextMenu_PrimalItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UContextMenu_PrimalItem_C* GetDefaultObj();

	float Tick(const struct FGeometry& MyGeometry);
	float ExecuteUbergraph_ContextMenu_PrimalItem(int32* EntryPoint);
};

}

