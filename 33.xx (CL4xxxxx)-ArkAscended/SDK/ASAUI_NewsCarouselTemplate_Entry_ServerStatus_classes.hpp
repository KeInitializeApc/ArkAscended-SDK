#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x388 - 0x340)
// WidgetBlueprintGeneratedClass ASAUI_NewsCarouselTemplate_Entry_ServerStatus.ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C
class UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C : public UUI_MenuCarouselEntryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UImage*                                MainImage;                                         // 0x348(0x8)(Edit, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UPrimalRichTextBlock*                  StatusTextBlock;                                   // 0x350(0x8)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UScrollBox*                            TextBody_Scrollbox;                                // 0x358(0x8)(BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UPrimalRichTextBlock*                  VersionTextBlock;                                  // 0x360(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       AutoScrollWaitAtStart;                             // 0x368(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       DefaultAutoScrollSpeed;                            // 0x370(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       AutoScrollTracker;                                 // 0x378(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       AutoScrollWaitAtEnd;                               // 0x380(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C* GetDefaultObj();

	void BlueprintInit(class FString* RawExtraData);
	void EntryFocusStart(bool* bInstigatedByAutoRollover);
	void EntryFocusEnd(bool* bInstigatedByAutoRollover);
	void EntryFocusTick(float* DeltaTime);
	float ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_ServerStatus(int32* CallFunc_Array_Length_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, class FString* CallFunc_Array_Get_Item, int32* CallFunc_Percent_IntInt_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float* CallFunc_GetScrollOffset_ReturnValue, double* CallFunc_Add_DoubleFloat_ReturnValue, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double* CallFunc_Add_DoubleFloat_ReturnValue_1, bool* CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double* CallFunc_FClamp_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double* CallFunc_FClamp_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float* CallFunc_Add_DoubleFloat_B_ImplicitCast, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1);
};

}


