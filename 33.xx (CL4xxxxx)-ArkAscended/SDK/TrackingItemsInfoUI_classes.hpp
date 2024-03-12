#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x888 - 0x808)
// WidgetBlueprintGeneratedClass TrackingItemsInfoUI.TrackingItemsInfoUI_C
class UTrackingItemsInfoUI_C : public UTrackingItemUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x808(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UCustomButtonWidget*                   ButtonDestroyPanel1;                               // 0x810(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   ButtonDestroyPanel2;                               // 0x818(0x8)(Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   ButtonDestroyPanel3;                               // 0x820(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                TrackEngramIcon1;                                  // 0x828(0x8)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                TrackEngramIcon2;                                  // 0x830(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                TrackEngramIcon3;                                  // 0x838(0x8)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UTrackResourceItem_Widget_C*           TrackResourceItem_Widget;                          // 0x840(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, DuplicateTransient)
	class UTrackResourceItem_Widget_C*           TrackResourceItem_Widget_1;                        // 0x848(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, DuplicateTransient, Interp)
	class UTrackResourceItem_Widget_C*           TrackResourceItem_Widget_2;                        // 0x850(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, DuplicateTransient, RepNotify, Interp)
	class UTrackResourceItem_Widget_C*           TrackResourceItem_Widget_3;                        // 0x858(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, DuplicateTransient, NonTransactional)
	class UTrackResourceItem_Widget_C*           TrackResourceItem_Widget_4;                        // 0x860(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, DuplicateTransient, RepNotify, NonTransactional)
	class UTrackResourceItem_Widget_C*           TrackResourceItem_Widget_5;                        // 0x868(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, DuplicateTransient, Interp, NonTransactional)
	class UTrackResourceItem_Widget_C*           TrackResourceItem_Widget_6;                        // 0x870(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, DuplicateTransient, RepNotify, Interp, NonTransactional)
	class UTrackResourceItem_Widget_C*           TrackResourceItem_Widget_7;                        // 0x878(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, DuplicateTransient, EditorOnly)
	class UTrackResourceItem_Widget_C*           TrackResourceItem_Widget_8;                        // 0x880(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, DuplicateTransient, RepNotify, EditorOnly)

	static class UClass* StaticClass();
	static class UTrackingItemsInfoUI_C* GetDefaultObj();

	void GetAllTrackingResourcesWIdgets(TArray<class UTrackResourceItem_Widget_C*>* Array, TArray<class UTrackResourceItem_Widget_C*>* K2Node_MakeArray_Array);
	void BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel3_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void RemovedFromViewport();
	void Construct();
	class UClass* RemoveIndex_Event();
	void UpdateTrackingInfoBP();
	bool ExecuteUbergraph_TrackingItemsInfoUI(int32* EntryPoint, const TArray<class UTrackResourceItem_Widget_C*>& CallFunc_GetAllTrackingResourcesWIdgets_Array, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, class UTrackResourceItem_Widget_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable_1, class UClass* K2Node_CustomEvent_Item, int32 Temp_int_Array_Index_Variable_1, class UClass* CallFunc_Array_Get_Item_1, bool* CallFunc_Array_IsValidIndex_ReturnValue, const TArray<class UTrackResourceItem_Widget_C*>& CallFunc_GetAllTrackingResourcesWIdgets_Array_1, class UTrackResourceItem_Widget_C* CallFunc_Array_Get_Item_2);
};

}


