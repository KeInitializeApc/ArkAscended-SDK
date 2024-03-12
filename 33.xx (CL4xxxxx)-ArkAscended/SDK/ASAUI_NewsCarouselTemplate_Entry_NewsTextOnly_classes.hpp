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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UScrollBox*                            TextBody_Scrollbox;                                // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       AutoScrollWaitAtStart;                             // 0x350(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       DefaultAutoScrollSpeed;                            // 0x358(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       AutoScrollTracker;                                 // 0x360(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       AutoScrollWaitAtEnd;                               // 0x368(0x8)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                SubEntryWidgetTemplate;                            // 0x370(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUI_NewsCarouselTemplate_Entry_NewsTextOnly_C* GetDefaultObj();

	class FString BlueprintInit();
	bool EntryFocusStart();
	bool EntryFocusEnd();
	float EntryFocusTick();
	float ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_NewsTextOnly(int32* EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Array_Index_Variable, int32* CallFunc_Percent_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item, float K2Node_Event_DeltaTime, int32 Temp_int_Loop_Counter_Variable, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue, class UCarousel_NewsList_entry_C* CallFunc_Create_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_SelectFloat_ReturnValue, class UPanelSlot** CallFunc_AddChild_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast);
};

}


