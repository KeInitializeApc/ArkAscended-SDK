#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3E8 - 0x3E0)
// WidgetBlueprintGeneratedClass ContextMenu_PrimalItem.ContextMenu_PrimalItem_C
class UContextMenu_PrimalItem_C : public UContextMenu_PrimalItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UContextMenu_PrimalItem_C* GetDefaultObj();

	float Tick();
	int32 ExecuteUbergraph_ContextMenu_PrimalItem(const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
};

}


