#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x378 - 0x340)
// WidgetBlueprintGeneratedClass ASAUI_NewsCarouselTemplate_Entry_NewsTextOnly.ASAUI_NewsCarouselTemplate_Entry_NewsTextOnly_C
class UASAUI_NewsCarouselTemplate_Entry_NewsTextOnly_C : public UUI_MenuCarouselEntryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UScrollBox*                            TextBody_Scrollbox;                                // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	double                                       AutoScrollWaitAtStart;                             // 0x350(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	double                                       DefaultAutoScrollSpeed;                            // 0x358(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	double                                       AutoScrollTracker;                                 // 0x360(0x8)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	double                                       AutoScrollWaitAtEnd;                               // 0x368(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UClass*                                SubEntryWidgetTemplate;                            // 0x370(0x8)(Edit, ConstParm, OutParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUI_NewsCarouselTemplate_Entry_NewsTextOnly_C* GetDefaultObj();

	void BlueprintInit(const class FString& RawExtraData);
	void EntryFocusStart(bool bInstigatedByAutoRollover);
	void EntryFocusEnd(bool bInstigatedByAutoRollover);
	float EntryFocusTick();
	float ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_NewsTextOnly(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool* K2Node_SwitchInteger_CmpSuccess, bool K2Node_Event_bInstigatedByAutoRollover_1, bool K2Node_Event_bInstigatedByAutoRollover, const class FString& CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, float K2Node_Event_DeltaTime, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Add_DoubleFloat_ReturnValue, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue, double CallFunc_Add_DoubleFloat_ReturnValue_1, class UCarousel_NewsList_entry_C* CallFunc_Create_ReturnValue, double* CallFunc_FClamp_ReturnValue, double* CallFunc_SelectFloat_ReturnValue, class UPanelSlot** CallFunc_AddChild_ReturnValue, double* CallFunc_FClamp_ReturnValue_1, float CallFunc_Add_DoubleFloat_B_ImplicitCast);
};

}


