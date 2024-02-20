#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B8 (0xA10 - 0x758)
// WidgetBlueprintGeneratedClass UI_ParentPage.UI_ParentPage_C
class UUI_ParentPage_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x760(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UHorizontalBox*                        HorizontalBox_FilterBy;                            // 0x768(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_FilterByTime;                        // 0x770(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_NoResultsBackground;                           // 0x778(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UMultiLineEditableTextBox*             MultiLineEditableTextBox;                          // 0x780(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UMultiLineEditableTextBox*             MultiLineEditableTextBox_1;                        // 0x788(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, Interp)
	class UVerticalBox*                          NO_MOD_PROJECT;                                    // 0x790(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UOverlay*                              Overlay_CategorySwap;                              // 0x798(0x8)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UProgressBar*                          ProgressBar_Loading;                               // 0x7A0(0x8)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          SearchNotFound_ver;                                // 0x7A8(0x8)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_Dropdowns;                                 // 0x7B0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_GridList;                                  // 0x7B8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_Pagination;                                // 0x7C0(0x8)(Edit, BlueprintVisible, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Filters;                                      // 0x7C8(0x8)(ExportObject, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Pages;                                        // 0x7D0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_SearchModName;                                // 0x7D8(0x8)(ExportObject, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UThrobber*                             Throbber_Loading;                                  // 0x7E0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back_C_0;                     // 0x7E8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, RepNotify)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_UninstallAllMods;                        // 0x7F0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CategoriesSelect_C*                UI_CategoriesSelect;                               // 0x7F8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, DuplicateTransient)
	class UUI_ClassCategorySelect_C*             UI_ClassSelect;                                    // 0x800(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_NoModsFound_C*                     UI_NoInstalledModsFound;                           // 0x808(0x8)(BlueprintVisible, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_NoModsFoundInCategoty_C*           UI_NoModsFoundInCategoty;                          // 0x810(0x8)(Edit, ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
	class UUI_PaginationLeftRight_C*             UI_PaginationLeft;                                 // 0x818(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_PaginationLeftRight_C*             UI_PaginationRight;                                // 0x820(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBox_C*                  UI_SortBySelect;                                   // 0x828(0x8)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBox_C*                  UI_TimeFilters;                                    // 0x830(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUniformGridPanel*                     UniformGridPanel_GameSlots;                        // 0x838(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       WidgetSwitcher_Status;                             // 0x840(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Pages;                                             // 0x848(0x4)(Edit, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        PageNum;                                           // 0x84C(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FSTRUCT_Categories>            Categories_Subcategories;                          // 0x850(0x10)(ConstParm, BlueprintVisible, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                SelectedCategory;                                  // 0x860(0x10)(BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsSearchFound;                                     // 0x870(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ECFCoreModsSearchSortField        SelectedSortByOption;                              // 0x871(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3AA5[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x878(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	class FString                                CombinedAuthorsNames;                              // 0x880(0x10)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FModAuthor>                    AuthorsForCheck;                                   // 0x890(0x10)(Edit, ConstParm, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           CurrentClassMods;                                  // 0x8A0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsPageLoaded;                                      // 0x8B0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3AA6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CurrentSearchInput;                                // 0x8B8(0x18)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsCurrentActiveWidget;                             // 0x8D0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsClassCategoriesModAmountLocal;                   // 0x8D1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3AA7[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  PageTitle;                                         // 0x8D8(0x18)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsDownloading;                                     // 0x8F0(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3AA8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                GameVersion;                                       // 0x8F8(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Config, SubobjectReference)
	class FString                                SearchFilter;                                      // 0x908(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TotalModsResult_Count;                             // 0x918(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_TimeFilters                  Selected_Default_Option;                           // 0x91C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3AA9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<class FString, class UTexture2DDynamic*> Images;                                            // 0x920(0x50)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxImagesCached;                                   // 0x970(0x4)(Edit, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3AAA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<enum class ECFCoreModsSearchSortField> Array;                                             // 0x978(0x10)(ExportObject, Parm, OutParm, ZeroConstructor)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x988(0x10)(BlueprintReadOnly, Net, OutParm, Config, InstancedReference, SubobjectReference)
	TArray<class FString>                        ThumbnailsRequested;                               // 0x998(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ImageDownloadingRow;                               // 0x9A8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3AAB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           TrueModInfo;                                       // 0x9B0(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FString, enum class ECFCoreModsSearchSortField> SortMap;                                           // 0x9C0(0x50)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ParentPage_C* GetDefaultObj();

	class UWidget* GetClose_B();
	void PlayFadeIn(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	void BPEscapeClosed(bool ReturnValue);
	bool GetVisibility_0(enum class ESlateVisibility ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, bool* CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility* K2Node_Select_Default);
	bool ReturnModsOfCurrentPage(const TArray<struct FInstallProgressMod>& TrueModInfo, const TArray<struct FInstallProgressMod>& TempArray, bool* Temp_bool_Variable, int32* CallFunc_CalculateModsPerPage_Mods, int32* CallFunc_Int32_SubOne_ReturnValue, int32* CallFunc_Array_Add_ReturnValue, int32* CallFunc_Multiply_IntInt_ReturnValue, int32* CallFunc_Multiply_IntInt_ReturnValue_1, int32* CallFunc_Int32_SubOne_ReturnValue_1);
	bool MoreImagesLeftToDownload(bool ReturnValue, int32* CallFunc_CalculateModsPerRow_Mods, int32* CallFunc_Multiply_IntInt_ReturnValue);
	int32 GetModIndexesForCurrentRow(int32* First, int32* CallFunc_CalculateModsPerRow_Mods, int32* CallFunc_Int32_SubOne_ReturnValue, int32* CallFunc_Multiply_IntInt_ReturnValue, int32* CallFunc_Int32_SubOne_ReturnValue_1);
	int32 DownloadNextBatchOfMods(bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	class FString DownloadBatchOfMods(class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, bool* CallFunc_IsValid_ReturnValue, int32 CallFunc_GetModIndexesForCurrentRow_First, int32 CallFunc_GetModIndexesForCurrentRow_Last);
	bool CheckIfImagesAreReady(bool* Temp_bool_Variable, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, bool* CallFunc_IsValid_ReturnValue, int32 CallFunc_GetModIndexesForCurrentRow_First, int32 CallFunc_GetModIndexesForCurrentRow_Last);
	bool DownloadImagesInAllMods();
	class UUniformGridSlot* CreateEmptySlot(int32* CallFunc_CalculateModsPerRow_Mods, bool* CallFunc_IsValid_ReturnValue);
	bool SwitchControllerAction(enum class EViewState State, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	bool Nav_Down_from_DropdownTime(enum class EUINavigation Navigation, class UWidget* ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot);
	bool Nav_Down_from_DropdownSort(enum class EUINavigation Navigation, class UWidget* ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot);
	bool Nav_Down_from_DropdownCategory(enum class EUINavigation Navigation, class UWidget* ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot);
	void Nav_for_Up_Move_from_List(enum class EUINavigation Navigation, class UWidget* ReturnValue);
	bool SetNavigationRuleForList(bool* K2Node_SwitchInteger_CmpSuccess, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue);
	bool SetListFocus(class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot);
	bool UpdatePaginations(TArray<struct FInstallProgressMod>* TotalList, bool* Temp_bool_Variable, int32* CallFunc_CalculateModsPerPage_Mods, double* CallFunc_FMod_Remainder, int32* CallFunc_FMod_ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue, int32* K2Node_Select_Default);
	bool ClearImageCache();
	bool BindToDropdown();
	TArray<class UUI_CustomComboBox_C*> CloseAllDropdownApartFrom(const TArray<class UUI_CustomComboBox_C*>& Dropdowns, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue);
	bool CloseAllDropDown(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue);
	bool SetEnableStageForGameSlot(bool* EnableStage, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot);
	bool BindToGameSlot(const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot);
	bool ClearAllModsInPage(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
	int32 UpdateNotificationInSwitcher(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, int32* CallFunc_SelectInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue_4);
	void InitWidgetStoreMenuRefs();
	struct FSlateColor UpdateAllThemeSettings(bool* CallFunc_IsValid_ReturnValue);
	bool IsUrlValid(bool ReturnValue);
	TArray<struct FFormatArgumentData> UpdatePagesPagination(bool* CallFunc_IsValid_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, class FText* CallFunc_Format_ReturnValue);
	void FilterModInfo(const struct FCFCoreSearchModsFilter& ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue_1, const struct FCFCoreSearchModsFilter& CallFunc_MakeSearchModsFilter_ReturnValue);
	enum class ENUM_SideTabs GetCurrentTab();
	class FString UpdateSearchText(class FText* CallFunc_Conv_IntToText_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1);
	bool LoadSavedUpImagesAsync(int32 CallFunc_GetModIndexesForCurrentRow_First, int32 CallFunc_GetModIndexesForCurrentRow_Last, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, bool* CallFunc_IsValid_ReturnValue);
	int32 InitiliazeImageDownloads(bool ReadyToStart, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_Array_Add_ReturnValue);
	bool CalculateModsPerRow(const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue);
	bool CalculateModsPerPage(const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue);
	int32 PrevPage(bool* CallFunc_IsValid_ReturnValue);
	bool NextPage(bool* CallFunc_IsValid_ReturnValue);
	void GetCurrentSearchInput(class FText CurrentSearchInput);
	void OnPageActiveted(class FText* Search_Input);
	bool SetCurrentClassMods(bool* CallFunc_IsValid_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int32* CallFunc_Array_Add_ReturnValue);
	void ResetPageNum();
	bool SetStypleOfPageArrowsButtons();
	class UUniformGridSlot* CreateModSlot(const struct FInstallProgressMod& K2Node_MakeStruct_InstallProgressMod, int32* CallFunc_CalculateModsPerRow_Mods);
	bool IsSearchInputValid(bool Return_Value);
	void OnPageLoaded();
	int32 SearchForAuthorsName(class FText Input, TArray<struct FModAuthor>* Authors, class FString* CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void UpdateClasses();
	bool SetupTimeFilter(enum class ENUM_TimeFilters SelectedDefaultOption, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8* CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, int32* CallFunc_Conv_ByteToInt_ReturnValue, int32* CallFunc_MakeLiteralInt_ReturnValue);
	bool SetupSortByOptions(enum class ECFCoreModsSearchSortField SelectedDefaultOption, enum class ECFCoreModsSearchSortField* Temp_byte_Variable, enum class ECFCoreModsSearchSortField* Temp_byte_Variable_1, class FText* K2Node_Select_Default, class FText* K2Node_Select_Default_1, class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1);
	void SelectClass(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
	struct FEventReply OnMouseButtonDown(const struct FEventReply& ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	bool BuildPage(bool* Temp_bool_Variable, int32* CallFunc_Int32_SubOne_ReturnValue, int32* CallFunc_CalculateModsPerPage_Mods, int32* CallFunc_Array_LastIndex_ReturnValue);
	int32 CheckWhichTextAppearsFirst(bool* Temp_bool_Variable, class FString* CallFunc_Conv_TextToString_ReturnValue, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue);
	int32 IsModsListEmpty(bool* IsEmpty, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	void BndEvt__ParentPageWidget_SortBySelect_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature(class FString* Option);
	void BndEvt__ParentPageWidget_CategoriesSelect2_K2Node_ComponentBoundEvent_5_OnOptionSelected__DelegateSignature(class FString* Option);
	int64 Event_Update_Filter_By_Options();
	void Event_On_Class_Selected();
	void Event_Search_Mods();
	void ConstructParentPage();
	void FillTheModList();
	void GetMods();
	void UpdateSearch(class FText SearchInput);
	void Construct();
	void OnSearch(class FText* Search_Input);
	void NextPageButton();
	void PrevPageButton();
	void PreConstruct(bool* IsDesignTime);
	void BndEvt__UI_ParentPage_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void BndEvt__UI_ParentPage_UI_PaginationLeftRight_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	void BndEvt__UI_ParentPage_UI_PaginationRight_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	TArray<int64> SearchForModIDs();
	void GetModIDs(const TArray<int64>& ForModIDs);
	TArray<int64> ExecuteUbergraph_UI_ParentPage(const TArray<int64>& K2Node_CustomEvent_ForModIDs, int64* K2Node_CustomEvent_Current_Class_Category_ID, bool* CallFunc_IsValid_ReturnValue, class FText* K2Node_Event_SearchInput);
};

}


