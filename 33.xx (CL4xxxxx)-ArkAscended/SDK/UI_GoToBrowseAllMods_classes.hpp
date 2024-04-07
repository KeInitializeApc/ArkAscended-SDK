#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x388 - 0x330)
// WidgetBlueprintGeneratedClass UI_GoToBrowseAllMods.UI_GoToBrowseAllMods_C
class UUI_GoToBrowseAllMods_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      Hover;                                             // 0x338(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UBorder*                               Boarded_Left;                                      // 0x340(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UBorder*                               Boarder_Right;                                     // 0x348(0x8)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UBorder*                               Boarder_Top;                                       // 0x350(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UBorder*                               Border_Down;                                       // 0x358(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UButton*                               Button_GoToModPage;                                // 0x360(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UImage*                                IMG_Showcase;                                      // 0x368(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UTextBlock*                            TEXT_PageTitle;                                    // 0x370(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UUI_Button_Ark_Global_Install_C*       UI_Button_Ark_Global_Install;                      // 0x378(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
	class UUI_Discovery_C*                       Discovery;                                         // 0x380(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, DuplicateTransient, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_GoToBrowseAllMods_C* GetDefaultObj();

	void BndEvt__UI_ShowcaseSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_ShowcaseSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_GoToBrowseAllMods_UI_Button_Ark_Global_Install_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature();
	float Tick();
	class UUMGSequencePlayer* ExecuteUbergraph_UI_GoToBrowseAllMods(int32* EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FMargin& K2Node_MakeStruct_Margin_1, bool CallFunc_IsValid_ReturnValue_3, class UUMGSequencePlayer** CallFunc_PlayAnimationForward_ReturnValue);
};

}


