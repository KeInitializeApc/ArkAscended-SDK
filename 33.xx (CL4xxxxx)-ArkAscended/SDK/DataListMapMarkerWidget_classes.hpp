#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x101 (0x859 - 0x758)
// WidgetBlueprintGeneratedClass DataListMapMarkerWidget.DataListMapMarkerWidget_C
class UDataListMapMarkerWidget_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UBorder*                               BGBorder;                                          // 0x760(0x8)(Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UBorder*                               BorderBrush;                                       // 0x768(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image;                                             // 0x770(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UImage*                                Image_77;                                          // 0x778(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp, NonTransactional, EditorOnly, AutoWeak)
	class UImage*                                MarkImage;                                         // 0x780(0x8)(Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            MarkName;                                          // 0x788(0x8)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   WaypointEditButton;                                // 0x790(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   WaypointRemoveButton;                              // 0x798(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FMinimapMark                          MapMarkRef;                                        // 0x7A0(0x78)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            RefreshWaypoints;                                  // 0x818(0x10)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            EditWaypoint;                                      // 0x828(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          UnSelectedColorBG;                                 // 0x838(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          UnSelectedPairColorBG;                             // 0x848(0x10)(Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CanEdit;                                           // 0x858(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListMapMarkerWidget_C* GetDefaultObj();

	void OnConfirmationDialogClosedBP(bool* bAccept);
	void BndEvt__DataListMapMarkerWidget_WaypointRemoveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	bool RefreshData();
	void BndEvt__DataListMapMarkerWidget_WaypointEditButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	struct FLinearColor ExecuteUbergraph_DataListMapMarkerWidget(int32* EntryPoint, int32 CallFunc_Len_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, class FString* CallFunc_GetSubstring_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32* CallFunc_GetChildIndex_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	struct FMinimapMark EditWaypoint__DelegateSignature();
	void RefreshWaypoints__DelegateSignature();
};

}


