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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0x760(0x8)(BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UWidgetAnimation*                      Open;                                              // 0x768(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst)
	class UCustomButtonWidget*                   CancelButton;                                      // 0x770(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UScrollBox*                            MapScrollBox;                                      // 0x778(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Aberration;                        // 0x780(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_CrystalIsles;                      // 0x788(0x8)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Extinction;                        // 0x790(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Fjordur;                           // 0x798(0x8)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Genesis1;                          // 0x7A0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Genesis2;                          // 0x7A8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Island;                            // 0x7B0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_LostIsland;                        // 0x7B8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Ragnarok;                          // 0x7C0(0x8)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Scorched;                          // 0x7C8(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_TheCenter;                         // 0x7D0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Valguero;                          // 0x7D8(0x8)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   SelectMapButton;                                   // 0x7E0(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UHostSession_Switch_C*                 ParentHostSession;                                 // 0x7E8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMapSelect_Session_C* GetDefaultObj();

	class UPanelSlot* SearchAndCreateModMaps();
	bool Select_Map_Button_Clicked();
	void MapButtonSelected();
	bool GetSelectedMapIndex(int32* Index);
	bool SetSelectedMapIndex(int32* Index, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	class UMapSelect_Entry_C* ScrollToHoveredItem();
	float OnMouseMove(const struct FEventReply& ReturnValue, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, double CallFunc_Multiply_IntFloat_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, double* CallFunc_Add_DoubleDouble_B_ImplicitCast);
	struct FEventReply OnMouseButtonDown(const struct FEventReply& ReturnValue);
	bool Set_Selected_Map_Entry();
	bool GetMapSelectEntries(const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32* CallFunc_Array_Add_ReturnValue);
	float Tick();
	void BndEvt__MapSelect_Session_CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MapSelect_Session_SelectMapButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	bool ExecuteUbergraph_MapSelect_Session(const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, class AGameModeBase* CallFunc_GetGameMode_ReturnValue);
};

}


