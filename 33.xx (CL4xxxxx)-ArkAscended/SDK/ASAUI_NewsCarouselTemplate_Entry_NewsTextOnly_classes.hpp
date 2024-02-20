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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UScrollBox*                            TextBody_Scrollbox;                                // 0x348(0x8)(Edit, ConstParm, ExportObject, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       AutoScrollWaitAtStart;                             // 0x350(0x8)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       DefaultAutoScrollSpeed;                            // 0x358(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       AutoScrollTracker;                                 // 0x360(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       AutoScrollWaitAtEnd;                               // 0x368(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                SubEntryWidgetTemplate;                            // 0x370(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUI_NewsCarouselTemplate_Entry_NewsTextOnly_C* GetDefaultObj();

	void BlueprintInit(class FString* RawExtraData);
	void EntryFocusStart(bool* bInstigatedByAutoRollover);
	void EntryFocusEnd(bool* bInstigatedByAutoRollover);
	float EntryFocusTick();
	float ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_NewsTextOnly(class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, bool* K2Node_SwitchInteger_CmpSuccess, float* K2Node_Event_DeltaTime, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, double* CallFunc_Subtract_DoubleFloat_ReturnValue, double* CallFunc_BreakVector2D_X_1, double* CallFunc_BreakVector2D_Y_1, double* CallFunc_Subtract_DoubleFloat_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double* CallFunc_FClamp_ReturnValue, double* CallFunc_FClamp_ReturnValue_1, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1);
};

}


