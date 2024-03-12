#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x388 - 0x340)
// WidgetBlueprintGeneratedClass ASAUI_NewsCarouselTemplate_Entry_News_Default.ASAUI_NewsCarouselTemplate_Entry_News_Default_C
class UASAUI_NewsCarouselTemplate_Entry_News_Default_C : public UUI_MenuCarouselEntryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UPrimalRichTextBlock*                  BodyText;                                          // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                MainImage;                                         // 0x350(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UScrollBox*                            TextBody_Scrollbox;                                // 0x358(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UPrimalRichTextBlock*                  TitleText;                                         // 0x360(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       AutoScrollWaitAtStart;                             // 0x368(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       DefaultAutoScrollSpeed;                            // 0x370(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       AutoScrollTracker;                                 // 0x378(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       AutoScrollWaitAtEnd;                               // 0x380(0x8)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUI_NewsCarouselTemplate_Entry_News_Default_C* GetDefaultObj();

	class FString BlueprintInit();
	bool EntryFocusStart();
	bool EntryFocusEnd();
	float EntryFocusTick();
	float ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_News_Default(int32* EntryPoint, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Array_Get_Item, float K2Node_Event_DeltaTime, int32 Temp_int_Loop_Counter_Variable, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast);
};

}


