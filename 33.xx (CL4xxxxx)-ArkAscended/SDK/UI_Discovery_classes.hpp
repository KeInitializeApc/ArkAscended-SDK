#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D8 (0x940 - 0x768)
// WidgetBlueprintGeneratedClass UI_Discovery.UI_Discovery_C
class UUI_Discovery_C : public UUI_BasePage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x768(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x770(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      ShowcaseSwapIMG;                                   // 0x778(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_CarouselCate;                        // 0x780(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UImage*                                IMG_BackGround;                                    // 0x788(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UImage*                                IMG_ShowcasePreview;                               // 0x790(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UImage*                                IMG_ShowcasePreview_Blackness;                     // 0x798(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UImage*                                IMG_ShowcasePreviewFadeIn;                         // 0x7A0(0x8)(Edit, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UScrollBox*                            ScrollBox_215;                                     // 0x7A8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class USizeBox*                              SizeBox_FULLUI;                                    // 0x7B0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UTextBlock*                            TEXT_Description;                                  // 0x7B8(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UTextBlock*                            TEXT_PageTitle;                                    // 0x7C0(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UTextBlock*                            TEXT_PageTitle_1;                                  // 0x7C8(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference, Interp)
	class UTextBlock*                            TEXT_PageTitle_2;                                  // 0x7D0(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference, RepNotify, Interp)
	class UTextBlock*                            TEXT_PageTitle_3;                                  // 0x7D8(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference, NonTransactional)
	class UTextBlock*                            TEXT_PageTitle_4;                                  // 0x7E0(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference, RepNotify, NonTransactional)
	class UTextBlock*                            TEXT_PageTitle_5;                                  // 0x7E8(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference, Interp, NonTransactional)
	class UUI_Button_Ark_Global_Install_C*       UI_Button_Ark_ViewMod;                             // 0x7F0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_Back;                                    // 0x7F8(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, DuplicateTransient, SubobjectReference)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_Options;                                 // 0x800(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UUI_GoToBrowseAllMods_C*               UI_GoToBrowseAllMods_248;                          // 0x808(0x8)(Edit, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UUI_DiscoveryShelve_C*                 UI_Shelve_HighestRated;                            // 0x810(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UUI_DiscoveryShelve_C*                 UI_Shelve_Latest;                                  // 0x818(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UUI_DiscoveryShelve_C*                 UI_Shelve_TopPremiumMods;                          // 0x820(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UUI_DiscoveryShelve_C*                 UI_Shelve_Trending;                                // 0x828(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UUI_ShowcaseSlot_C*                    UI_ShowcaseSlot_1st;                               // 0x830(0x8)(Edit, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UUI_ShowcaseSlot_C*                    UI_ShowcaseSlot_2nd;                               // 0x838(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UUI_ShowcaseSlot_C*                    UI_ShowcaseSlot_3rd;                               // 0x840(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UUI_ShowcaseSlot_C*                    UI_ShowcaseSlot_4th;                               // 0x848(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UUI_ShowcaseSlot_C*                    UI_ShowcaseSlot_5th;                               // 0x850(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UUI_SquareCategorieShowcase_C*         UI_SquareCategorieShowcase1;                       // 0x858(0x8)(EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UUI_SquareCategorieShowcase_C*         UI_SquareCategorieShowcase2;                       // 0x860(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UUI_SquareCategorieShowcase_C*         UI_SquareCategorieShowcase3;                       // 0x868(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UUI_SquareCategorieShowcase_C*         UI_SquareCategorieShowcase4;                       // 0x870(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UUI_SquareCategorieShowcase_C*         UI_SquareCategorieShowcase5;                       // 0x878(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	class UUI_WhiteCategoryPreview_C*            UI_WhiteCategoryPreview;                           // 0x880(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
	class UUI_WhiteCategoryPreview_C*            UI_WhiteCategoryPreview_2;                         // 0x888(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, RepNotify, Interp)
	class UUI_WhiteCategoryPreview_C*            UI_WhiteCategoryPreview_3;                         // 0x890(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, NonTransactional)
	class UUI_WhiteCategoryPreview_C*            UI_WhiteCategoryPreview_4;                         // 0x898(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, RepNotify, NonTransactional)
	TArray<class UUI_ShowcaseSlot_C*>            ListOfShowcaseSlots;                               // 0x8A0(0x10)(Edit, ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	int32                                        ShowcaseSlotIndexPreview;                          // 0x8B0(0x4)(Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_46D7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                Mod_ID;                                            // 0x8B8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	bool                                         ReadyDiscovery;                                    // 0x8C8(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_46D8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UUI_SquareCategorieShowcase_C*> CategoriePanels;                                   // 0x8D0(0x10)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, DuplicateTransient, SubobjectReference)
	TArray<struct FCFCoreMod>                    Carousel_Mods;                                     // 0x8E0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, DuplicateTransient, SubobjectReference)
	TArray<struct FCFCoreMod>                    Premium_Mods;                                      // 0x8F0(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	TArray<struct FCategory>                     Categories_List;                                   // 0x900(0x10)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, DuplicateTransient, SubobjectReference)
	TArray<struct FCFCoreMod>                    Trending_Mods;                                     // 0x910(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	TArray<struct FCFCoreMod>                    Most_Downloaded_Mods;                              // 0x920(0x10)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)
	TArray<struct FCFCoreMod>                    Latest_Mods;                                       // 0x930(0x10)(Parm, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Discovery_C* GetDefaultObj();

	class UImage* SequenceEvent__ENTRYPOINTUI_Discovery();
	int32 UpdateCarouselFromMod(class UUI_ShowcaseSlot_C** ShowcaseSlot, class FString* CallFunc_GetModName_Name, class FText* CallFunc_Conv_StringToText_ReturnValue, int32* Temp_int_Array_Index_Variable, struct FCategory* CallFunc_Array_Get_Item, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue_2, int32* Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UPanelSlot** CallFunc_AddChild_ReturnValue);
	bool Start_Progress(bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUI_ShowcaseSlot_C** CallFunc_Array_Get_Item);
	class UImage* IMG_ShowcasePreview_Event();
	void NextShowcase();
	void SetToNewCurrentShowcaseSlot(class UUI_ShowcaseSlot_C* NewSlot);
	void ConstructPage();
	void ReloadPage();
	void ConstructDiscovery();
	void Construct();
	void OnSucessGetModHighlights(struct FModsHighlights* Mods);
	struct FCFCoreError OnErrorGetModHighlights();
	void CreateCarousel();
	void Create_Premium_Shelve();
	void CreateTrending();
	void Create_HighestRated();
	void Create_Latest();
	void CreateCategory();
	void OnResultGetModsHighlightRest(struct FModsHighlights* Mods);
	struct FCFCoreError OnErrorGetModsHighlightRest();
	void OnPressViewAllLatest();
	void OnPressViewAllOnMostDL();
	void BndEvt__UI_Discovery_UI_Button_Back_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	void BndEvt__UI_Discovery_UI_Button_Ark_ViewMod_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature();
	void ReturnFromModPage();
	void BndEvt__UI_Discovery_UI_Button_Options_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	class UUI_ModPage_C* ExecuteUbergraph_UI_Discovery(int32* EntryPoint, class UShooterGameViewportClient* CallFunc_GetViewportClient_ReturnValue, class UPrimalUI* CallFunc_GetUISceneFromClass_ReturnValue, class UCFCoreSubsystem** CallFunc_GetEngineSubsystem_ReturnValue, int32* Temp_int_Loop_Counter_Variable, int32* Temp_int_Array_Index_Variable, int32* Temp_int_Loop_Counter_Variable_1, int32* Temp_int_Array_Index_Variable_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32* Temp_int_Loop_Counter_Variable_2, int32* Temp_int_Array_Index_Variable_2, int32* Temp_int_Array_Index_Variable_3, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, int32* Temp_int_Loop_Counter_Variable_3, int32* Temp_int_Array_Index_Variable_4, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, int32* Temp_int_Loop_Counter_Variable_4, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, int32* Temp_int_Loop_Counter_Variable_5, bool CallFunc_Less_IntInt_ReturnValue, int32* Temp_int_Array_Index_Variable_5, class UUI_SquareCategorieShowcase_C** CallFunc_Array_Get_Item, class UImage* K2Node_CustomEvent_IMG_ShowcasePreview, class UUI_ShowcaseSlot_C** CallFunc_Array_Get_Item_1, struct FSlateBrush* K2Node_MakeStruct_SlateBrush, const TArray<class UUI_ShowcaseSlot_C*>& K2Node_MakeArray_Array, int32 CallFunc_Int32_AddOne_ReturnValue, class UUI_ShowcaseSlot_C* K2Node_CustomEvent_NewSlot, class UUI_ShowcaseSlot_C** CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Find_ReturnValue, class UUI_ShowcaseSlot_C** CallFunc_Array_Get_Item_3, const struct FModsHighlights& K2Node_CustomEvent_mods_1, struct FCFCoreError* K2Node_CustomEvent_error_1, const struct FCFCoreGetModsHighlightsFilters& K2Node_MakeStruct_CFCoreGetModsHighlightsFilters, class UCFCoreSubsystem** CallFunc_GetEngineSubsystem_ReturnValue_1, const struct FCFCoreGetModsHighlightsFilter& K2Node_MakeStruct_CFCoreGetModsHighlightsFilter, int32* Temp_int_Array_Index_Variable_6, int32* Temp_int_Array_Index_Variable_7, int32* Temp_int_Loop_Counter_Variable_6, bool CallFunc_Less_IntInt_ReturnValue_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, const TArray<class UUI_DiscoveryShelve_C*>& K2Node_MakeArray_Array_1, class UUI_DiscoveryShelve_C** CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, int32* Temp_int_Loop_Counter_Variable_7, const TArray<class UUI_SquareCategorieShowcase_C*>& K2Node_MakeArray_Array_2, class UUI_SquareCategorieShowcase_C** CallFunc_Array_Get_Item_5, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, const struct FCFCoreGetModsHighlightsFilters& K2Node_MakeStruct_CFCoreGetModsHighlightsFilters_1, const struct FModsHighlights& K2Node_CustomEvent_mods, const struct FCFCoreGetModsHighlightsFilter& K2Node_MakeStruct_CFCoreGetModsHighlightsFilter_1, struct FCFCoreError* K2Node_CustomEvent_error, struct FCFCoreMod* CallFunc_Array_Get_Item_6, struct FCFCoreMod* CallFunc_Array_Get_Item_7, bool CallFunc_Less_IntInt_ReturnValue_4, struct FCategory* CallFunc_Array_Get_Item_8, struct FCFCoreMod* CallFunc_Array_Get_Item_9, struct FCFCoreMod* CallFunc_Array_Get_Item_10, bool CallFunc_Less_IntInt_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_6, struct FCFCoreMod* CallFunc_Array_Get_Item_11, bool CallFunc_Less_IntInt_ReturnValue_7, class UUI_ShowcaseSlot_C** CallFunc_Array_Get_Item_12);
};

}


