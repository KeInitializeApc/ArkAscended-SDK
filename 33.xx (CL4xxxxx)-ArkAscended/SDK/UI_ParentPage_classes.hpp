#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x298 (0x9F0 - 0x758)
// WidgetBlueprintGeneratedClass UI_ParentPage.UI_ParentPage_C
class UUI_ParentPage_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_FilterBy;                            // 0x760(0x8)(EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_FilterByTime;                        // 0x768(0x8)(OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_NoResultsBackground;                           // 0x770(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMultiLineEditableTextBox*             MultiLineEditableTextBox;                          // 0x778(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UMultiLineEditableTextBox*             MultiLineEditableTextBox_1;                        // 0x780(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class UVerticalBox*                          NO_MOD_PROJECT;                                    // 0x788(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UOverlay*                              Overlay_CategorySwap;                              // 0x790(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UProgressBar*                          ProgressBar_Loading;                               // 0x798(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          SearchNotFound_ver;                                // 0x7A0(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Filters;                                      // 0x7A8(0x8)(BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Pages;                                        // 0x7B0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_SearchModName;                                // 0x7B8(0x8)(BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UThrobber*                             Throbber_Loading;                                  // 0x7C0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back_C_0;                     // 0x7C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, RepNotify)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_UninstallAllMods;                        // 0x7D0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CategoriesSelect_C*                UI_CategoriesSelect;                               // 0x7D8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
	class UUI_ClassCategorySelect_C*             UI_ClassSelect;                                    // 0x7E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_NoModsFound_C*                     UI_NoInstalledModsFound;                           // 0x7E8(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_NoModsFoundInCategoty_C*           UI_NoModsFoundInCategoty;                          // 0x7F0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UUI_PaginationLeftRight_C*             UI_PaginationLeft;                                 // 0x7F8(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_PaginationLeftRight_C*             UI_PaginationRight;                                // 0x800(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBox_C*                  UI_SortBySelect;                                   // 0x808(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBox_C*                  UI_TimeFilters;                                    // 0x810(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUniformGridPanel*                     UniformGridPanel_GameSlots;                        // 0x818(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       WidgetSwitcher_Status;                             // 0x820(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Pages;                                             // 0x828(0x4)(ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PageNum;                                           // 0x82C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FSTRUCT_Categories>            Categories_Subcategories;                          // 0x830(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                SelectedCategory;                                  // 0x840(0x10)(Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsSearchFound;                                     // 0x850(0x1)(ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ECFCoreModsSearchSortField        SelectedSortByOption;                              // 0x851(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4B39[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x858(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, InstancedReference, DuplicateTransient)
	class FString                                CombinedAuthorsNames;                              // 0x860(0x10)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FModAuthor>                    AuthorsForCheck;                                   // 0x870(0x10)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           CurrentClassMods;                                  // 0x880(0x10)(ConstParm, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsPageLoaded;                                      // 0x890(0x1)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4B3A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CurrentSearchInput;                                // 0x898(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsCurrentActiveWidget;                             // 0x8B0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsClassCategoriesModAmountLocal;                   // 0x8B1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4B3B[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  PageTitle;                                         // 0x8B8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsDownloading;                                     // 0x8D0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4B3C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                GameVersion;                                       // 0x8D8(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FString                                SearchFilter;                                      // 0x8E8(0x10)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TotalModsResult_Count;                             // 0x8F8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_TimeFilters                  Selected_Default_Option;                           // 0x8FC(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4B3D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<class FString, class UTexture2DDynamic*> Images;                                            // 0x900(0x50)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxImagesCached;                                   // 0x950(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4B3E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<enum class ECFCoreModsSearchSortField> Array;                                             // 0x958(0x10)(ExportObject, Parm, OutParm, ZeroConstructor)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x968(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<class FString>                        ThumbnailsRequested;                               // 0x978(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ImageDownloadingRow;                               // 0x988(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4B3F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           TrueModInfo;                                       // 0x990(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FString, enum class ECFCoreModsSearchSortField> SortMap;                                           // 0x9A0(0x50)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ParentPage_C* GetDefaultObj();

	void GetClose_B(class UWidget* Widget);
	void BPEscapeClosed(bool ReturnValue);
	bool GetVisibility_0(enum class ESlateVisibility ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, enum class ENUM_SideTabs* CallFunc_GetCurrentActivePage_CurrentActiveTab, bool Temp_bool_Variable, bool* K2Node_SwitchEnum_CmpSuccess, bool* CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	bool ReturnModsOfCurrentPage(const TArray<struct FInstallProgressMod>& Mod_List, const TArray<struct FInstallProgressMod>& TrueModInfo, TArray<struct FInstallProgressMod>* TempArray, bool Temp_bool_Variable, int32* CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool MoreImagesLeftToDownload(bool ReturnValue, int32 CallFunc_CalculateModsPerRow_Mods, int32* CallFunc_Array_Length_ReturnValue);
	int32 GetModIndexesForCurrentRow(int32 First, int32 CallFunc_CalculateModsPerRow_Mods);
	int32 DownloadNextBatchOfMods(bool CallFunc_EqualEqual_IntInt_ReturnValue);
	bool DownloadBatchOfMods(const struct FInstallProgressMod& CallFunc_Array_Get_Item, class UUI_GameSlot_C** K2Node_DynamicCast_AsUI_Game_Slot, int32* CallFunc_GetModIndexesForCurrentRow_First, int32* CallFunc_GetModIndexesForCurrentRow_Last, const class FString& CallFunc_Array_Get_Item_1);
	bool CheckIfImagesAreReady(bool Temp_bool_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, class UUI_GameSlot_C** K2Node_DynamicCast_AsUI_Game_Slot, int32* CallFunc_Array_Length_ReturnValue, int32* CallFunc_GetModIndexesForCurrentRow_First, int32* CallFunc_GetModIndexesForCurrentRow_Last, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Array_Get_Item_1);
	bool DownloadImagesInAllMods();
	class UUniformGridSlot* CreateEmptySlot(int32* AtIndex, int32 CallFunc_CalculateModsPerRow_Mods, class UUI_EmptySlot_C* CallFunc_Create_ReturnValue);
	bool SwitchControllerAction(const struct FKey& Key, enum class EViewState State, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	bool Nav_Down_from_DropdownTime(enum class EUINavigation Navigation, class UWidget* ReturnValue, class UWidget** CallFunc_GetChildAt_ReturnValue, class UUI_GameSlot_C** K2Node_DynamicCast_AsUI_Game_Slot, bool* CallFunc_IsVisible_ReturnValue);
	bool Nav_Down_from_DropdownSort(enum class EUINavigation Navigation, class UWidget* ReturnValue, class UWidget** CallFunc_GetChildAt_ReturnValue, class UUI_GameSlot_C** K2Node_DynamicCast_AsUI_Game_Slot, bool* CallFunc_IsVisible_ReturnValue);
	bool Nav_Down_from_DropdownCategory(enum class EUINavigation Navigation, class UWidget* ReturnValue, class UWidget** CallFunc_GetChildAt_ReturnValue, class UUI_GameSlot_C** K2Node_DynamicCast_AsUI_Game_Slot, bool* CallFunc_IsVisible_ReturnValue);
	void Nav_for_Up_Move_from_List(enum class EUINavigation Navigation, class UWidget* ReturnValue);
	int32 SetNavigationRuleForList(int32 Temp_int_Loop_Counter_Variable, bool* K2Node_SwitchInteger_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	bool SetListFocus(class UWidget** CallFunc_GetChildAt_ReturnValue, class UUI_GameSlot_C** K2Node_DynamicCast_AsUI_Game_Slot);
	int32 UpdatePaginations(bool Temp_bool_Variable, int32* CallFunc_Array_Length_ReturnValue, double* CallFunc_FMod_Remainder, int32* CallFunc_FMod_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 K2Node_Select_Default);
	bool ClearImageCache();
	int32 BindToDropdown(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const TArray<class UUI_CustomComboBox_C*>& K2Node_MakeArray_Array, int32* CallFunc_Array_Length_ReturnValue, class UUI_CustomComboBox_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_1, class UUI_CustomComboBox_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	int32 CloseAllDropdownApartFrom(TArray<class UUI_CustomComboBox_C*>* Dropdowns, class UUI_CustomComboBox_C* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue, const TArray<class UUI_CustomComboBox_C*>& K2Node_MakeArray_Array);
	int32 CloseAllDropDown(class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue, const TArray<class UUI_CustomComboBox_C*>& K2Node_MakeArray_Array, int32* CallFunc_Array_Length_ReturnValue, class UUI_CustomComboBox_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	bool SetEnableStageForGameSlot(int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUI_GameSlot_C** K2Node_DynamicCast_AsUI_Game_Slot);
	bool BindToGameSlot(int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUI_GameSlot_C** K2Node_DynamicCast_AsUI_Game_Slot);
	bool ClearAllModsInPage(int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Array_Length_ReturnValue, const struct FInstallProgressMod& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	bool UpdateNotificationInSwitcher(enum class ENUM_SideTabs* CallFunc_GetCurrentActivePage_CurrentActiveTab, bool* K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsEmpty_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void InitWidgetStoreMenuRefs();
	struct FSlateColor UpdateAllThemeSettings();
	bool IsUrlValid(class FString* URL, bool ReturnValue);
	class FText UpdatePagesPagination(int64* CallFunc_Conv_IntToInt64_ReturnValue, int64* CallFunc_Conv_IntToInt64_ReturnValue_1, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array);
	void FilterModInfo(const struct FCFCoreSearchModsFilter& ReturnValue, int32* CallFunc_Conv_Int64ToInt_ReturnValue, int32* CallFunc_Conv_Int64ToInt_ReturnValue_1, struct FCFCoreSearchModsFilter* CallFunc_MakeSearchModsFilter_ReturnValue);
	void GetCurrentTab(enum class ENUM_SideTabs CurrentActiveTab);
	class FText UpdateSearchText();
	bool LoadSavedUpImagesAsync(int32* CallFunc_GetModIndexesForCurrentRow_First, int32* CallFunc_GetModIndexesForCurrentRow_Last, const struct FInstallProgressMod& CallFunc_Array_Get_Item, class UUI_GameSlot_C** K2Node_DynamicCast_AsUI_Game_Slot, int32* CallFunc_Array_Length_ReturnValue);
	int32 InitiliazeImageDownloads(bool* ReadyToStart, int32 Temp_int_Loop_Counter_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, class UUI_GameSlot_C** K2Node_DynamicCast_AsUI_Game_Slot, int32* CallFunc_Array_Length_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32* CallFunc_Array_Add_ReturnValue);
	bool CalculateModsPerRow(int32 Mods, struct FIntPoint* CallFunc_GetScreenResolution_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	bool CalculateModsPerPage(int32 Mods, struct FIntPoint* CallFunc_GetScreenResolution_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	bool PrevPage(int32* CallFunc_Subtract_IntInt_ReturnValue);
	int32 NextPage(bool CallFunc_Less_IntInt_ReturnValue);
	void GetCurrentSearchInput(class FText CurrentSearchInput);
	class FText OnPageActiveted();
	int32 SetCurrentClassMods(int32 Temp_int_Loop_Counter_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int64* CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, int32* CallFunc_Array_Add_ReturnValue);
	void ResetPageNum();
	bool SetStypleOfPageArrowsButtons(bool CallFunc_Less_IntInt_ReturnValue);
	class UUniformGridSlot* CreateModSlot(int32* AtIndex, class UUI_GameSlot_C* CallFunc_Create_ReturnValue, struct FInstallProgressMod* K2Node_MakeStruct_InstallProgressMod, int32 CallFunc_CalculateModsPerRow_Mods);
	bool IsSearchInputValid(bool* Return_Value);
	void OnPageLoaded();
	int32 SearchForAuthorsName(class FText Input, bool* AuthorFound, int32* CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FModAuthor& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32* CallFunc_FindSubstring_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void UpdateClasses();
	int32 SetupTimeFilter(enum class ENUM_TimeFilters* SelectedDefaultOption, uint8* CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, const struct FSTRUCT_CustomComboBoxOption& K2Node_MakeStruct_STRUCT_CustomComboBoxOption, bool CallFunc_Less_IntInt_ReturnValue);
	class FString SetupSortByOptions(enum class ECFCoreModsSearchSortField* SelectedDefaultOption, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, class FText Temp_text_Variable_17, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, class FText Temp_text_Variable_20, class FText Temp_text_Variable_21, class FText Temp_text_Variable_22, class FText Temp_text_Variable_23, int32 Temp_int_Loop_Counter_Variable, const TArray<enum class ECFCoreModsSearchSortField>& K2Node_MakeArray_Array, enum class ECFCoreModsSearchSortField CallFunc_Array_Get_Item, enum class ECFCoreModsSearchSortField CallFunc_Array_Get_Item_1, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, const struct FSTRUCT_CustomComboBoxOption& K2Node_MakeStruct_STRUCT_CustomComboBoxOption, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	bool SelectClass();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue);
	bool BuildPage(bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue);
	int32 CheckWhichTextAppearsFirst(int32 _numOfLettersForCheck, bool Temp_bool_Variable, const class FString& CallFunc_ToUpper_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue_1, int32* CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	bool IsModsListEmpty(int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	class FString BndEvt__ParentPageWidget_SortBySelect_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature();
	class FString BndEvt__ParentPageWidget_CategoriesSelect2_K2Node_ComponentBoundEvent_5_OnOptionSelected__DelegateSignature();
	enum class ENUM_InputDevices Event_On_Input_Device_Changed();
	int64 Event_Update_Filter_By_Options();
	void Event_On_Class_Selected();
	void Event_Search_Mods();
	void ConstructParentPage();
	void FillTheModList();
	void GetMods();
	void UpdateSearch(class FText SearchInput);
	void Construct();
	class FText OnSearch();
	void ButtonCall(const struct FKey& Key, enum class EViewState State);
	void BindControllerAction();
	void NextPageButton();
	void PrevPageButton();
	bool PreConstruct();
	void BndEvt__UI_ParentPage_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void BndEvt__UI_ParentPage_UI_PaginationLeftRight_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	void BndEvt__UI_ParentPage_UI_PaginationRight_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	enum class ECFCoreModsSearchSortField ExecuteUbergraph_UI_ParentPage(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue, class FText K2Node_Event_SearchInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FText K2Node_Event_Search_Input, enum class EViewState K2Node_CustomEvent_State, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool* CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool* CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


