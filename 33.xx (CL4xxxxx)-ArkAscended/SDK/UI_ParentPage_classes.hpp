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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x760(0x8)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	class UHorizontalBox*                        HorizontalBox_FilterBy;                            // 0x768(0x8)(Edit, Net, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_FilterByTime;                        // 0x770(0x8)(Edit, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_NoResultsBackground;                           // 0x778(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMultiLineEditableTextBox*             MultiLineEditableTextBox;                          // 0x780(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig)
	class UMultiLineEditableTextBox*             MultiLineEditableTextBox_1;                        // 0x788(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, Interp)
	class UVerticalBox*                          NO_MOD_PROJECT;                                    // 0x790(0x8)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UOverlay*                              Overlay_CategorySwap;                              // 0x798(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UProgressBar*                          ProgressBar_Loading;                               // 0x7A0(0x8)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          SearchNotFound_ver;                                // 0x7A8(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_Dropdowns;                                 // 0x7B0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_GridList;                                  // 0x7B8(0x8)(ConstParm, BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_Pagination;                                // 0x7C0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Filters;                                      // 0x7C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Pages;                                        // 0x7D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_SearchModName;                                // 0x7D8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UThrobber*                             Throbber_Loading;                                  // 0x7E0(0x8)(ConstParm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back_C_0;                     // 0x7E8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, RepNotify)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_UninstallAllMods;                        // 0x7F0(0x8)(Edit, BlueprintVisible, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CategoriesSelect_C*                UI_CategoriesSelect;                               // 0x7F8(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UUI_ClassCategorySelect_C*             UI_ClassSelect;                                    // 0x800(0x8)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_NoModsFound_C*                     UI_NoInstalledModsFound;                           // 0x808(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_NoModsFoundInCategoty_C*           UI_NoModsFoundInCategoty;                          // 0x810(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UUI_PaginationLeftRight_C*             UI_PaginationLeft;                                 // 0x818(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_PaginationLeftRight_C*             UI_PaginationRight;                                // 0x820(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBox_C*                  UI_SortBySelect;                                   // 0x828(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBox_C*                  UI_TimeFilters;                                    // 0x830(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUniformGridPanel*                     UniformGridPanel_GameSlots;                        // 0x838(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       WidgetSwitcher_Status;                             // 0x840(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Pages;                                             // 0x848(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PageNum;                                           // 0x84C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FSTRUCT_Categories>            Categories_Subcategories;                          // 0x850(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                SelectedCategory;                                  // 0x860(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsSearchFound;                                     // 0x870(0x1)(Edit, ConstParm, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ECFCoreModsSearchSortField        SelectedSortByOption;                              // 0x871(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2CF7[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x878(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, Transient, EditConst, InstancedReference, DuplicateTransient)
	class FString                                CombinedAuthorsNames;                              // 0x880(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FModAuthor>                    AuthorsForCheck;                                   // 0x890(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           CurrentClassMods;                                  // 0x8A0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsPageLoaded;                                      // 0x8B0(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2CF8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CurrentSearchInput;                                // 0x8B8(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsCurrentActiveWidget;                             // 0x8D0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsClassCategoriesModAmountLocal;                   // 0x8D1(0x1)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2CF9[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  PageTitle;                                         // 0x8D8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsDownloading;                                     // 0x8F0(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2CFA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                GameVersion;                                       // 0x8F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig)
	class FString                                SearchFilter;                                      // 0x908(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TotalModsResult_Count;                             // 0x918(0x4)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_TimeFilters                  Selected_Default_Option;                           // 0x91C(0x1)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2CFB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<class FString, class UTexture2DDynamic*> Images;                                            // 0x920(0x50)(ConstParm, BlueprintVisible, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxImagesCached;                                   // 0x970(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2CFC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<enum class ECFCoreModsSearchSortField> Array;                                             // 0x978(0x10)(ExportObject, Parm, OutParm, ZeroConstructor)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x988(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class FString>                        ThumbnailsRequested;                               // 0x998(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ImageDownloadingRow;                               // 0x9A8(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2CFD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           TrueModInfo;                                       // 0x9B0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FString, enum class ECFCoreModsSearchSortField> SortMap;                                           // 0x9C0(0x50)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ParentPage_C* GetDefaultObj();

	void GetClose_B(class UWidget* Widget);
	bool PlayFadeIn();
	bool BPEscapeClosed();
	bool GetVisibility_0(class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool* CallFunc_Array_IsValidIndex_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	bool ReturnModsOfCurrentPage(const TArray<struct FInstallProgressMod>& TempArray, bool Temp_bool_Variable, int32* Temp_int_Variable, bool* CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	int32 MoreImagesLeftToDownload(int32* CallFunc_CalculateModsPerRow_Mods, bool* CallFunc_Greater_IntInt_ReturnValue);
	int32 GetModIndexesForCurrentRow(int32 First, int32* CallFunc_CalculateModsPerRow_Mods);
	int32 DownloadNextBatchOfMods(int32* Temp_int_Variable, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	bool DownloadBatchOfMods(int32* Temp_int_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, bool* CallFunc_Array_IsValidIndex_ReturnValue, bool* K2Node_DynamicCast_bSuccess, int32 CallFunc_GetModIndexesForCurrentRow_First, int32* CallFunc_GetModIndexesForCurrentRow_Last, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item_1);
	bool CheckIfImagesAreReady(bool Temp_bool_Variable, int32* Temp_int_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, bool* CallFunc_Array_IsValidIndex_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetModIndexesForCurrentRow_First, int32* CallFunc_GetModIndexesForCurrentRow_Last, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	bool DownloadImagesInAllMods();
	class UUniformGridSlot* CreateEmptySlot(int32 AtIndex, int32* CallFunc_CalculateModsPerRow_Mods, int32* CallFunc_Percent_IntInt_ReturnValue, class UUI_EmptySlot_C* CallFunc_Create_ReturnValue);
	bool SwitchControllerAction(const struct FKey& Key, enum class EViewState State, bool* CallFunc_EqualEqual_KeyKey_ReturnValue);
	class UUI_GameSlot_C* Nav_Down_from_DropdownTime(class UWidget** CallFunc_GetChildAt_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue);
	class UUI_GameSlot_C* Nav_Down_from_DropdownSort(class UWidget** CallFunc_GetChildAt_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue);
	class UUI_GameSlot_C* Nav_Down_from_DropdownCategory(class UWidget** CallFunc_GetChildAt_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue);
	class UWidget* Nav_for_Up_Move_from_List();
	bool SetNavigationRuleForList(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item);
	class UUI_GameSlot_C* SetListFocus(class UWidget** CallFunc_GetChildAt_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
	int32 UpdatePaginations(bool Temp_bool_Variable, int32 K2Node_Select_Default);
	int32 ClearImageCache(bool* CallFunc_Greater_IntInt_ReturnValue);
	bool BindToDropdown(int32* Temp_int_Variable, int32* Temp_int_Variable_1, TArray<class UUI_CustomComboBox_C*>* K2Node_MakeArray_Array, class UUI_CustomComboBox_C* CallFunc_Array_Get_Item, class UUI_CustomComboBox_C* CallFunc_Array_Get_Item_1);
	class UBindButtonSystem* CloseAllDropdownApartFrom(const TArray<class UUI_CustomComboBox_C*>& Dropdowns, int32* Temp_int_Variable, class UUI_CustomComboBox_C* CallFunc_Array_Get_Item, TArray<class UUI_CustomComboBox_C*>* K2Node_MakeArray_Array);
	bool CloseAllDropDown(int32* Temp_int_Variable, TArray<class UUI_CustomComboBox_C*>* K2Node_MakeArray_Array, class UUI_CustomComboBox_C* CallFunc_Array_Get_Item);
	class UUI_GameSlot_C* SetEnableStageForGameSlot(bool* EnableStage, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess);
	class UUI_GameSlot_C* BindToGameSlot(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess);
	bool ClearAllModsInPage(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item);
	bool UpdateNotificationInSwitcher(class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage, bool K2Node_SwitchEnum_CmpSuccess, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	void InitWidgetStoreMenuRefs();
	struct FSlateColor UpdateAllThemeSettings();
	bool IsUrlValid(bool CallFunc_EqualEqual_StrStr_ReturnValue);
	class FText UpdatePagesPagination(int64* CallFunc_Conv_IntToInt64_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, int64* CallFunc_Conv_IntToInt64_ReturnValue_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array);
	int32 FilterModInfo(const struct FCFCoreSearchModsFilter& CallFunc_MakeSearchModsFilter_ReturnValue);
	void GetCurrentTab(enum class ENUM_SideTabs* CurrentActiveTab);
	class FText UpdateSearchText(const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	int32 LoadSavedUpImagesAsync(int32* Temp_int_Variable, int32 CallFunc_GetModIndexesForCurrentRow_First, int32* CallFunc_GetModIndexesForCurrentRow_Last, const struct FInstallProgressMod& CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_Array_IsValidIndex_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue);
	int32 InitiliazeImageDownloads(bool ReadyToStart, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, bool* CallFunc_Array_IsValidIndex_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_Greater_IntInt_ReturnValue);
	bool CalculateModsPerRow(const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, bool* CallFunc_NearlyEqual_FloatFloat_ReturnValue);
	bool CalculateModsPerPage(const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, bool* CallFunc_NearlyEqual_FloatFloat_ReturnValue);
	bool PrevPage(int32* Temp_int_Variable, bool* CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	bool NextPage(int32* Temp_int_Variable);
	class FText GetCurrentSearchInput();
	class FText OnPageActiveted();
	int32 SetCurrentClassMods(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, int64* CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue);
	void ResetPageNum();
	bool SetStypleOfPageArrowsButtons(bool* CallFunc_Greater_IntInt_ReturnValue);
	class UUniformGridSlot* CreateModSlot(int32 AtIndex, class UUI_GameSlot_C* CallFunc_Create_ReturnValue, const struct FInstallProgressMod& K2Node_MakeStruct_InstallProgressMod, int32* CallFunc_CalculateModsPerRow_Mods, int32* CallFunc_Percent_IntInt_ReturnValue);
	bool IsSearchInputValid(bool Return_Value);
	void OnPageLoaded();
	int32 SearchForAuthorsName(class FText Input, bool AuthorFound, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FModAuthor& CallFunc_Array_Get_Item, int32* CallFunc_FindSubstring_ReturnValue);
	void UpdateClasses();
	bool SetupTimeFilter(enum class ENUM_TimeFilters SelectedDefaultOption, int32* Temp_int_Variable, int32* Temp_int_Variable_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32* CallFunc_MakeLiteralInt_ReturnValue);
	bool SetupSortByOptions(enum class ECFCoreModsSearchSortField SelectedDefaultOption, class FText* Temp_text_Variable, class FText* Temp_text_Variable_1, class FText* Temp_text_Variable_2, class FText* Temp_text_Variable_3, class FText* Temp_text_Variable_4, class FText* Temp_text_Variable_5, class FText* Temp_text_Variable_6, class FText* Temp_text_Variable_7, class FText* Temp_text_Variable_8, class FText* Temp_text_Variable_9, class FText* Temp_text_Variable_10, class FText* Temp_text_Variable_11, enum class ECFCoreModsSearchSortField Temp_byte_Variable, class FText* Temp_text_Variable_12, class FText* Temp_text_Variable_13, class FText* Temp_text_Variable_14, class FText* Temp_text_Variable_15, class FText* Temp_text_Variable_16, class FText* Temp_text_Variable_17, class FText* Temp_text_Variable_18, class FText* Temp_text_Variable_19, class FText* Temp_text_Variable_20, class FText* Temp_text_Variable_21, class FText* Temp_text_Variable_22, class FText* Temp_text_Variable_23, int32 Temp_int_Array_Index_Variable, enum class ECFCoreModsSearchSortField Temp_byte_Variable_1, int32 Temp_int_Loop_Counter_Variable, TArray<enum class ECFCoreModsSearchSortField>* K2Node_MakeArray_Array, enum class ECFCoreModsSearchSortField CallFunc_Array_Get_Item, enum class ECFCoreModsSearchSortField CallFunc_Array_Get_Item_1, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1);
	bool SelectClass();
	bool OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent, bool* CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, struct FEventReply* CallFunc_Handled_ReturnValue);
	bool BuildPage(bool Temp_bool_Variable, int32* Temp_int_Variable, int32* CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1);
	int32 CheckWhichTextAppearsFirst(bool Temp_bool_Variable, const class FString& CallFunc_ToUpper_ReturnValue, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue_1, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_1, bool* CallFunc_Greater_IntInt_ReturnValue, int32* Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue_1);
	int32 IsModsListEmpty(bool IsEmpty, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	class FString BndEvt__ParentPageWidget_SortBySelect_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature();
	class FString BndEvt__ParentPageWidget_CategoriesSelect2_K2Node_ComponentBoundEvent_5_OnOptionSelected__DelegateSignature();
	int64 Event_Update_Filter_By_Options();
	void Event_On_Class_Selected();
	void Event_Search_Mods();
	void ConstructParentPage();
	void FillTheModList();
	void GetMods();
	class FText UpdateSearch();
	void Construct();
	class FText OnSearch();
	void NextPageButton();
	void PrevPageButton();
	bool PreConstruct();
	void BndEvt__UI_ParentPage_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void BndEvt__UI_ParentPage_UI_PaginationLeftRight_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	void BndEvt__UI_ParentPage_UI_PaginationRight_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	TArray<int64> SearchForModIDs();
	TArray<int64> GetModIDs();
	TArray<int64> ExecuteUbergraph_UI_ParentPage(int32* EntryPoint, const TArray<int64>& K2Node_CustomEvent_ForModIDs, int64* K2Node_CustomEvent_Current_Class_Category_ID);
};

}


