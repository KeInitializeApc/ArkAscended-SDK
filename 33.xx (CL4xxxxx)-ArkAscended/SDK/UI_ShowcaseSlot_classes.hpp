#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x540 (0x870 - 0x330)
// WidgetBlueprintGeneratedClass UI_ShowcaseSlot.UI_ShowcaseSlot_C
class UUI_ShowcaseSlot_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeProgressBar;                                   // 0x338(0x8)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UWidgetAnimation*                      Hover;                                             // 0x340(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UBorder*                               Boarded_Left;                                      // 0x348(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UBorder*                               Boarder_Right;                                     // 0x350(0x8)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UBorder*                               Boarder_Top;                                       // 0x358(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UBorder*                               Border_Down;                                       // 0x360(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UButton*                               Button_GoToModPage;                                // 0x368(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UImage*                                IMG_Showcase;                                      // 0x370(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UProgressBar*                          ProgressBar_Highlight;                             // 0x378(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UUI_WhiteCategoryPreview_C*            UI_WhiteCategoryPreview;                           // 0x380(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
	bool                                         IsCurrent;                                         // 0x388(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, EditConst, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_60D[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UUI_Discovery_C*                       Discovery;                                         // 0x390(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, DuplicateTransient, SubobjectReference)
	struct FInstallProgressMod                   ShowcaseModInfo;                                   // 0x398(0x4C0)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, DuplicateTransient, SubobjectReference)
	int64                                        Mod_ID;                                            // 0x858(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	FMulticastInlineDelegateProperty_            ReadyToStart;                                      // 0x860(0x10)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ShowcaseSlot_C* GetDefaultObj();

	class UTexture2DDynamic* OnFail_B8687F5A48265CFC0EB678AEAD6BCBCC();
	class UTexture2DDynamic* OnSuccess_B8687F5A48265CFC0EB678AEAD6BCBCC();
	float Tick();
	void BndEvt__UI_ShowcaseSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_ShowcaseSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Reset_Progress_Bar();
	void SetCurrent();
	void NoLongerCurrent();
	void BndEvt__UI_ShowcaseSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void DownloadImageScreenshot();
	void SuccessIGuess(struct FCFCoreMod* Mod);
	struct FCFCoreError How_could_we_possibly_ever_fail();
	void ConstructModShowcase();
	float ExecuteUbergraph_UI_ShowcaseSlot(int32* EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, struct FSlateBrush* K2Node_MakeStruct_SlateBrush, class UCFCoreSubsystem** CallFunc_GetEngineSubsystem_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FMargin& K2Node_MakeStruct_Margin, double* CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, bool CallFunc_IsValid_ReturnValue_2, class UUMGSequencePlayer** CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, const struct FCFCoreMod& K2Node_CustomEvent_mod, const struct FInstallProgressMod& CallFunc_MakeFInstallProgressMod_ReturnValue, struct FModAsset* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_NotEqual_StrStr_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, struct FCategory* CallFunc_Array_Get_Item_1, class FText* CallFunc_Conv_StringToText_ReturnValue);
	void ReadyToStart__DelegateSignature();
};

}


