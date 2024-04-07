#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x370 - 0x330)
// WidgetBlueprintGeneratedClass TrackResourceItem_Widget.TrackResourceItem_Widget_C
class UTrackResourceItem_Widget_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UCustomButtonWidget*                   ButtonDestroyPanel3;                               // 0x338(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            MaxQuantityEngram3;                                // 0x340(0x8)(Net, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            Qty;                                               // 0x348(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                TrackEngramIcon3;                                  // 0x350(0x8)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            RemoveIndex;                                       // 0x358(0x10)(ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                LastItem;                                          // 0x368(0x8)(ConstParm, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UTrackResourceItem_Widget_C* GetDefaultObj();

	class FText InitItem(class UPrimalItem** K2Node_DynamicCast_AsPrimal_Item, bool* K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetItemTemplateQuantity_ReturnValue);
	void BndEvt__TrackResourceItem_Widget_ButtonDestroyPanel3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_TrackResourceItem_Widget(int32* EntryPoint);
	class UClass* RemoveIndex__DelegateSignature();
};

}


