#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x7F0 - 0x758)
// WidgetBlueprintGeneratedClass MapSelect_Session.MapSelect_Session_C
class UMapSelect_Session_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0x760(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0x768(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst)
	class UCustomButtonWidget*                   CancelButton;                                      // 0x770(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UScrollBox*                            MapScrollBox;                                      // 0x778(0x8)(ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Aberration;                        // 0x780(0x8)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_CrystalIsles;                      // 0x788(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Extinction;                        // 0x790(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Fjordur;                           // 0x798(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Genesis1;                          // 0x7A0(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Genesis2;                          // 0x7A8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Island;                            // 0x7B0(0x8)(Edit, ConstParm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_LostIsland;                        // 0x7B8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Ragnarok;                          // 0x7C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Scorched;                          // 0x7C8(0x8)(ConstParm, ExportObject, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_TheCenter;                         // 0x7D0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Valguero;                          // 0x7D8(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   SelectMapButton;                                   // 0x7E0(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHostSession_Switch_C*                 ParentHostSession;                                 // 0x7E8(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMapSelect_Session_C* GetDefaultObj();

	class UPanelSlot* SearchAndCreateModMaps(int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UDataListEntryButton_HostSession*>* CallFunc_GetModMaps_ReturnValue, int32* CallFunc_Array_Length_ReturnValue);
	bool Select_Map_Button_Clicked(int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMapSelect_Entry_C*>* CallFunc_GetMapSelectEntries_MapSelectEntries, class UMapSelect_Entry_C** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool* CallFunc_DoesOwnSelectedDLC_ReturnValue, bool* CallFunc_IsSelected_Selected);
	void MapButtonSelected();
	bool GetSelectedMapIndex(int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMapSelect_Entry_C*>* CallFunc_GetMapSelectEntries_MapSelectEntries, int32* CallFunc_Array_Length_ReturnValue, class UMapSelect_Entry_C** CallFunc_Array_Get_Item, bool* CallFunc_IsSelected_Selected);
	bool SetSelectedMapIndex(int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMapSelect_Entry_C*>* CallFunc_GetMapSelectEntries_MapSelectEntries, int32* CallFunc_Array_Length_ReturnValue, class UMapSelect_Entry_C** CallFunc_Array_Get_Item);
	class UMapSelect_Entry_C* ScrollToHoveredItem();
	float OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent, struct FVector2D* CallFunc_PointerEvent_GetCursorDelta_ReturnValue, float* CallFunc_GetScrollOffsetOfEnd_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float* CallFunc_GetScrollOffset_ReturnValue, bool* CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool* CallFunc_PointerEvent_IsTouchEvent_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, struct FEventReply* CallFunc_Handled_ReturnValue, double CallFunc_FMax_ReturnValue, double* CallFunc_FMin_B_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast);
	struct FEventReply OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent, bool* CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, struct FEventReply* CallFunc_Handled_ReturnValue);
	bool Set_Selected_Map_Entry(class UMapSelect_Entry_C* Entry, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMapSelect_Entry_C*>* CallFunc_GetMapSelectEntries_MapSelectEntries, class UMapSelect_Entry_C** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue);
	class UMapSelect_Entry_C* GetMapSelectEntries(int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class UWidget** CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess, int32* CallFunc_Array_Add_ReturnValue);
	float Tick(struct FGeometry* MyGeometry);
	void BndEvt__MapSelect_Session_CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MapSelect_Session_SelectMapButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	class AShooterGame_Menu* ExecuteUbergraph_MapSelect_Session(struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
};

}


