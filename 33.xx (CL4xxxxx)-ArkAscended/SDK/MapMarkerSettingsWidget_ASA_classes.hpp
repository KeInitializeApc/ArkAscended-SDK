#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x280 (0x9D8 - 0x758)
// WidgetBlueprintGeneratedClass MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C
class UMapMarkerSettingsWidget_ASA_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UCustomButtonWidget*                   AcceptNewWaypoint;                                 // 0x760(0x8)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   AddNewWaypointButton;                              // 0x768(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   CancelWaypointButton;                              // 0x770(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   CloseWaypointButton;                               // 0x778(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UScrollBox*                            DataMapMarkerList;                                 // 0x780(0x8)(ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   DeleteWaypoint;                                    // 0x788(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UVerticalBox*                          EditDeathWaypoint;                                 // 0x790(0x8)(Edit, ConstParm, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                EditMarkIcon;                                      // 0x798(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                EditMarkIcon_TrackedTarget;                        // 0x7A0(0x8)(Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UEditableTextBox*                      EditMarkNameText;                                  // 0x7A8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UVerticalBox*                          EditTrackedActorWaypoint;                          // 0x7B0(0x8)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UVerticalBox*                          EditWaypoint;                                      // 0x7B8(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UBorder*                               ExternalBorder;                                    // 0x7C0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   GoToTrackerEntryButton;                            // 0x7C8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            GoToTrackerEntryText;                              // 0x7D0(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UProgressBar*                          HighProgressBar;                                   // 0x7D8(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class USlider*                               HighSlider;                                        // 0x7E0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                Image;                                             // 0x7E8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UImage*                                Image_77;                                          // 0x7F0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp, NonTransactional, EditorOnly, AutoWeak)
	class UCheckBox*                             IsOverridingHeight;                                // 0x7F8(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UCheckBox*                             IsShowingText;                                     // 0x800(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UEditableTextBox*                      LatEditText;                                       // 0x808(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UEditableTextBox*                      LongEditText;                                      // 0x810(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            MapNameText;                                       // 0x818(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            MapNameText_1;                                     // 0x820(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	class UTextBlock*                            MapNameText_2;                                     // 0x828(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	class UTextBlock*                            MapNameText_3;                                     // 0x830(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	class UTextBlock*                            MapNameText_4;                                     // 0x838(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	class UTextBlock*                            MapNameText_5;                                     // 0x840(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
	class UTextBlock*                            MapNameText_6;                                     // 0x848(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	class UTextBlock*                            MapNameText_7;                                     // 0x850(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, EditorOnly)
	class UTextBlock*                            MapNameText_8;                                     // 0x858(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
	class UTextBlock*                            MapNameText_9;                                     // 0x860(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
	class UTextBlock*                            MapNameText_10;                                    // 0x868(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
	class UTextBlock*                            MapNameText_11;                                    // 0x870(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
	class UTextBlock*                            MapNameText_12;                                    // 0x878(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	class UTextBlock*                            MapNameText_13;                                    // 0x880(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
	class USlider*                               MarkBlueColorSlider;                               // 0x888(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UBorder*                               MarkColor;                                         // 0x890(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UBorder*                               MarkColor_TrackedTarget;                           // 0x898(0x8)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class USlider*                               MarkGreenColorSlider;                              // 0x8A0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class USlider*                               MarkRedColorSlider;                                // 0x8A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class USlider*                               PlayerHighSlider;                                  // 0x8B0(0x8)(Edit, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UProgressBar*                          ProgressBarBlueColorSlider;                        // 0x8B8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UProgressBar*                          ProgressBarGreenColorSlider;                       // 0x8C0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UProgressBar*                          ProgressBarRedColorSlider;                         // 0x8C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   Removedeathwaypointbutton;                         // 0x8D0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   Removedeathwaypointbutton_1;                       // 0x8D8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	class UTextBlock*                            Removedeathwaypointtext;                           // 0x8E0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            Removedeathwaypointtext_1;                         // 0x8E8(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	class UCustomButtonWidget*                   StopTrackingButton;                                // 0x8F0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            StopTrackingText;                                  // 0x8F8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            TrackedTargetName;                                 // 0x900(0x8)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UComboBoxString*                       ViewDistanceComboBox;                              // 0x908(0x8)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       WidgetSwitcher;                                    // 0x910(0x8)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig)
	class UClass*                                MapMarkerDataWidget;                               // 0x918(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        MaxWaypoints;                                      // 0x920(0x4)(ExportObject, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_57A6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UTexture2D*>                    AllMarkWaypointsIcons;                             // 0x928(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             CurrentPosition;                                   // 0x938(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FMinimapMark                          CurrentEditingMark;                                // 0x948(0x78)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UMinimapWidget_ASA_C*                  MinimapRef;                                        // 0x9C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            ClosedUI;                                          // 0x9C8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMapMarkerSettingsWidget_ASA_C* GetDefaultObj();

	bool Clicked_Stop_Tracking_Death_Waypoint(int32 Temp_int_Loop_Counter_Variable, bool* CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FVectorBoolPair& CallFunc_Array_Get_Item, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue);
	bool UpdateEditDeathWaypoint();
	class FText UpdateEditMark_TrackedActorEntry();
	bool CanEditWaypoint();
	class FName CreateNewWaypointOnLocation(struct FVector* InputPin, bool* CallFunc_TraceGrounWaypointHeight_ReturnValue, double CallFunc_TraceGrounWaypointHeight_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UTexture2D* CallFunc_Array_Get_Item, class FString* CallFunc_BPGetPrimaryMapName_ReturnValue, struct FMinimapMark* K2Node_MakeStruct_MinimapMark);
	bool TraceGrounWaypointHeight(struct FVector* InVec, double* ReturnValue2, double* CallFunc_TraceGroundLocation_Z);
	int32 On_ViewDistanceComboBox_GenerateWidget(class UMapMarkWidget_ASA_C* CallFunc_Create_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item, struct FMinimapMark* K2Node_MakeStruct_MinimapMark);
	float UpdateEditMark(int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UTexture2D* CallFunc_Array_Get_Item, struct FVector2D* CallFunc_GetMinimapLocation_ReturnValue, struct FVector2D* CallFunc_GetMinimapLocation_Coords, double CallFunc_FClamp_ReturnValue, class FText* CallFunc_Conv_DoubleToText_ReturnValue, double CallFunc_FClamp_ReturnValue_1, class FText* CallFunc_Conv_DoubleToText_ReturnValue_1, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1, float* CallFunc_SetMaxValue_InValue_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast);
	struct FEventReply OnMouseButtonDown_0(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent, struct FEventReply* CallFunc_Handled_ReturnValue);
	bool GetMapWaypoints(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FString* CallFunc_BPGetPrimaryMapName_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, const struct FMinimapMark& CallFunc_Array_Get_Item);
	int32 HasLimitedWaypoints(bool* Get_First_Unclaimed_Default_Number, int32* Num, int32* Number, int32* Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32* Temp_int_Variable_1, int32 CallFunc_Array_Get_Item, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class FString* CallFunc_BPGetPrimaryMapName_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, const struct FMinimapMark& CallFunc_Array_Get_Item_1);
	int32 SetupListMapMarker(TArray<struct FMinimapMark>* MapMarker, int32 Temp_int_Array_Index_Variable, const struct FMinimapMark& CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_CanEditWaypoint_Can, int32 CallFunc_Max_ReturnValue, class FString* CallFunc_BPGetPrimaryMapName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, class UPrimalUserWidget* CallFunc_Create_ReturnValue, class UDataListMapMarkerWidget_C* K2Node_DynamicCast_AsData_List_Map_Marker_Widget, bool* K2Node_DynamicCast_bSuccess, class UPanelSlot** CallFunc_AddChild_ReturnValue);
	void AssignUpdateRefresh(class UDataListMapMarkerWidget_C** Data);
	void RefreshWaypoints_Event();
	void RefreshConstruct();
	void BndEvt__MapMarkerSettingsWidget_ASA_CloseWaypointButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MapMarkerSettingsWidget_ASA_CancelWaypointButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	struct FMinimapMark EditWaypoint_Event();
	class FText BndEvt__MapMarkerSettingsWidget_ASA_EditMarkNameText_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature();
	void BndEvt__MapMarkerSettingsWidget_ASA_MarkRedColorSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float* Value);
	void BndEvt__MapMarkerSettingsWidget_ASA_MarkGreenColorSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature(float* Value);
	void BndEvt__MapMarkerSettingsWidget_ASA_MarkBlueColorSlider_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature(float* Value);
	void BndEvt__MapMarkerSettingsWidget_ASA_AcceptNewWaypoint_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	class FText BndEvt__MapMarkerSettingsWidget_ASA_LatEditText_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature();
	class FText BndEvt__MapMarkerSettingsWidget_ASA_LongEditText_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature();
	class FText BndEvt__MapMarkerSettingsWidget_ASA_LatEditText_K2Node_ComponentBoundEvent_15_OnEditableTextBoxCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod);
	class FText BndEvt__MapMarkerSettingsWidget_ASA_LongEditText_K2Node_ComponentBoundEvent_16_OnEditableTextBoxCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod);
	enum class ESelectInfo BndEvt__MapMarkerSettingsWidget_ASA_ViewDistanceComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem);
	void BndEvt__MapMarkerSettingsWidget_ASA_HighSlider_K2Node_ComponentBoundEvent_12_OnFloatValueChangedEvent__DelegateSignature(float* Value);
	void BndEvt__MapMarkerSettingsWidget_ASA_AddNewWaypointButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	bool PreConstruct();
	void RemovedFromViewport();
	void WidgetRemovedFromViewport();
	void BndEvt__MapMarkerSettingsWidget_ASA_IsShowingText_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked);
	void BndEvt__MapMarkerSettingsWidget_ASA_GoToTrackerEntryButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MapMarkerSettingsWidget_ASA_StopTrackingButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MapMarkerSettingsWidget_ASA_removedeathwaypointbutton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MapMarkerSettingsWidget_ASA_DeleteWaypoint_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MapMarkerSettingsWidget_ASA_removedeathwaypointbutton_1_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature();
	FDelegateProperty_ ExecuteUbergraph_MapMarkerSettingsWidget_ASA(int32* EntryPoint, float K2Node_ComponentBoundEvent_Value_2, float K2Node_ComponentBoundEvent_Value_1, float K2Node_ComponentBoundEvent_Value_3, class FText K2Node_ComponentBoundEvent_Text_3, class FText K2Node_ComponentBoundEvent_Text_2, struct FVector2D* CallFunc_MakeVector2D_ReturnValue, struct FVector2D* CallFunc_MakeVector2D_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class FText K2Node_ComponentBoundEvent_Text_1, class FText K2Node_ComponentBoundEvent_Text, class FText K2Node_ComponentBoundEvent_Text_4, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo* K2Node_ComponentBoundEvent_SelectionType, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_CanEditWaypoint_Can, class UTexture2D* CallFunc_Array_Get_Item, float K2Node_ComponentBoundEvent_Value, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_2, TArray<struct FMinimapMark>* K2Node_MakeArray_Array, bool K2Node_SwitchEnum_CmpSuccess, bool* CallFunc_TraceGrounWaypointHeight_ReturnValue, double CallFunc_TraceGrounWaypointHeight_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue_3, float* CallFunc_GetNormalizedValue_ReturnValue, bool K2Node_ComponentBoundEvent_bIsChecked, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, const TArray<struct FMinimapMark>& CallFunc_GetMapWaypoints_SavedMinimapMarks, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, double CallFunc_MakeVector_Z_ImplicitCast);
	void ClosedUI__DelegateSignature();
};

}

