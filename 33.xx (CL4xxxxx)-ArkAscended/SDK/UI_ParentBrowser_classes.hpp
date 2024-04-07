#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2A8 (0xA10 - 0x768)
// WidgetBlueprintGeneratedClass UI_ParentBrowser.UI_ParentBrowser_C
class UUI_ParentBrowser_C : public UUI_BasePage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x768(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x770(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UUI_Button_Ark_Global_Back_C*          BackButton;                                        // 0x778(0x8)(ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_FilterBy;                            // 0x780(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_FilterByTime;                        // 0x788(0x8)(BlueprintVisible, ExportObject, Net, OutParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UImage*                                IMG_NoResultsBackground;                           // 0x790(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UMultiLineEditableTextBox*             MultiLineEditableTextBox;                          // 0x798(0x8)(BlueprintVisible, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig)
	class UMultiLineEditableTextBox*             MultiLineEditableTextBox_1;                        // 0x7A0(0x8)(BlueprintVisible, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, Interp)
	class UVerticalBox*                          NO_MOD_PROJECT;                                    // 0x7A8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UOverlay*                              Overlay_CategorySwap;                              // 0x7B0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UProgressBar*                          ProgressBar_Loading;                               // 0x7B8(0x8)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UVerticalBox*                          SearchNotFound_ver;                                // 0x7C0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class USizeBox*                              SizeBox_Dropdowns;                                 // 0x7C8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class USizeBox*                              SizeBox_GridList;                                  // 0x7D0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class USizeBox*                              SizeBox_Pagination;                                // 0x7D8(0x8)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UTextBlock*                            TEXT_Filters;                                      // 0x7E0(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UTextBlock*                            TEXT_Pages;                                        // 0x7E8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UTextBlock*                            TEXT_SearchModName;                                // 0x7F0(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UThrobber*                             Throbber_Loading;                                  // 0x7F8(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_UninstallAllMods;                        // 0x800(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UUI_CategoriesSelect_C*                UI_CategoriesSelect;                               // 0x808(0x8)(ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UUI_ClassCategorySelect_C*             UI_ClassSelect;                                    // 0x810(0x8)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UUI_NoModsFound_C*                     UI_NoInstalledModsFound;                           // 0x818(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UUI_NoModsFoundInCategoty_C*           UI_NoModsFoundInCategoty;                          // 0x820(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	class UUI_PaginationLeftRight_C*             UI_PaginationLeft;                                 // 0x828(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UUI_PaginationLeftRight_C*             UI_PaginationRight;                                // 0x830(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UUI_CustomComboBox_C*                  UI_SortBySelect;                                   // 0x838(0x8)(OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UUI_CustomComboBox_C*                  UI_TimeFilters;                                    // 0x840(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UUniformGridPanel*                     UniformGridPanel_GameSlots;                        // 0x848(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UWidgetSwitcher*                       WidgetSwitcher_Status;                             // 0x850(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	int32                                        Pages;                                             // 0x858(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	int32                                        PageNum;                                           // 0x85C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	TArray<struct FSTRUCT_Categories>            Categories_Subcategories;                          // 0x860(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class FString                                SelectedCategory;                                  // 0x870(0x10)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	bool                                         IsSearchFound;                                     // 0x880(0x1)(Edit, Parm, OutParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	enum class ECFCoreModsSearchSortField        SelectedSortByOption;                              // 0x881(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_1C8D[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CombinedAuthorsNames;                              // 0x888(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	TArray<struct FModAuthor>                    AuthorsForCheck;                                   // 0x898(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	TArray<struct FInstallProgressMod>           CurrentClassMods;                                  // 0x8A8(0x10)(ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class FText                                  CurrentSearchInput;                                // 0x8B8(0x18)(BlueprintVisible, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	bool                                         IsCurrentActiveWidget;                             // 0x8D0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	bool                                         IsClassCategoriesModAmountLocal;                   // 0x8D1(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_1C8F[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  PageTitle;                                         // 0x8D8(0x18)(ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	bool                                         IsDownloading;                                     // 0x8F0(0x1)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_1C91[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                GameVersion;                                       // 0x8F8(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig)
	class FString                                SearchFilter;                                      // 0x908(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	int32                                        TotalModsResult_Count;                             // 0x918(0x4)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	enum class ENUM_TimeFilters                  Selected_Default_Option;                           // 0x91C(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_1C94[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<class FString, class UTexture2DDynamic*> Images;                                            // 0x920(0x50)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	int32                                        MaxImagesCached;                                   // 0x970(0x4)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_1C95[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<enum class ECFCoreModsSearchSortField> Array;                                             // 0x978(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x988(0x10)(ExportObject, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<class FString>                        ThumbnailsRequested;                               // 0x998(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	int32                                        ImageDownloadingRow;                               // 0x9A8(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_1C97[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           TrueModInfo;                                       // 0x9B0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	TMap<class FString, enum class ECFCoreModsSearchSortField> SortMap;                                           // 0x9C0(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ParentBrowser_C* GetDefaultObj();

	void PlayFadeOutAnim(float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void PlayFadeIn(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	int32 GetAllModsIDs(const TArray<int64>& LocaluListu, int32* Temp_int_Array_Index_Variable, int32* Temp_int_Loop_Counter_Variable, struct FInstallProgressMod* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	bool GetVisibility_0(enum class ESlateVisibility ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUI_BasePage_C** CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab, bool Temp_bool_Variable, bool* K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	bool ReturnModsOfCurrentPage(const TArray<struct FInstallProgressMod>& TrueModInfo, TArray<struct FInstallProgressMod>* TempArray, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Int32_SubOne_ReturnValue, int32 CallFunc_Int32_SubOne_ReturnValue_1, bool* CallFunc_LessEqual_IntInt_ReturnValue);
	bool MoreImagesLeftToDownload(bool ReturnValue, int32 CallFunc_CalculateModsPerRow_Mods);
	int32 GetModIndexesForCurrentRow(int32 First, int32 CallFunc_CalculateModsPerRow_Mods, int32 CallFunc_Int32_SubOne_ReturnValue, int32 CallFunc_Int32_SubOne_ReturnValue_1);
	bool DownloadNextBatchOfMods();
	bool DownloadBatchOfMods(struct FInstallProgressMod* CallFunc_Array_Get_Item, class UUI_GameSlot_C** K2Node_DynamicCast_AsUI_Game_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32* CallFunc_GetModIndexesForCurrentRow_First, int32* CallFunc_GetModIndexesForCurrentRow_Last, bool* CallFunc_LessEqual_IntInt_ReturnValue, class FString* CallFunc_Array_Get_Item_1);
	bool CheckIfImagesAreReady(bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, struct FInstallProgressMod* CallFunc_Array_Get_Item, class UUI_GameSlot_C** K2Node_DynamicCast_AsUI_Game_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32* CallFunc_GetModIndexesForCurrentRow_First, int32* CallFunc_GetModIndexesForCurrentRow_Last, bool* CallFunc_LessEqual_IntInt_ReturnValue, class FString* CallFunc_Array_Get_Item_1, bool* CallFunc_EqualEqual_StrStr_ReturnValue);
	bool DownloadImagesInAllMods();
	class UUniformGridSlot* CreateEmptySlot(int32 AtIndex, int32 CallFunc_CalculateModsPerRow_Mods, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue);
	bool SwitchControllerAction(enum class EViewState State);
	class UWidget* Nav_Down_from_DropdownTime(class UWidget* ReturnValue, class UWidget** CallFunc_GetChildAt_ReturnValue, class UUI_GameSlot_C** K2Node_DynamicCast_AsUI_Game_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue);
	class UWidget* Nav_Down_from_DropdownSort(class UWidget* ReturnValue, class UWidget** CallFunc_GetChildAt_ReturnValue, class UUI_GameSlot_C** K2Node_DynamicCast_AsUI_Game_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue);
	class UWidget* Nav_Down_from_DropdownCategory(class UWidget* ReturnValue, class UWidget** CallFunc_GetChildAt_ReturnValue, class UUI_GameSlot_C** K2Node_DynamicCast_AsUI_Game_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue);
	enum class EUINavigation Nav_for_Up_Move_from_List(class UWidget* ReturnValue);
	int32 SetNavigationRuleForList(int32* Temp_int_Array_Index_Variable, int32* Temp_int_Loop_Counter_Variable, bool* K2Node_SwitchInteger_CmpSuccess, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget** CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void SetListFocus(class UWidget** CallFunc_GetChildAt_ReturnValue, class UUI_GameSlot_C** K2Node_DynamicCast_AsUI_Game_Slot, bool K2Node_DynamicCast_bSuccess);
	bool UpdatePaginations(bool Temp_bool_Variable, double* CallFunc_Conv_IntToDouble_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue_1, double* CallFunc_FMod_Remainder, int32* CallFunc_FMod_ReturnValue, int32 CallFunc_Int32_AddOne_ReturnValue, int32 K2Node_Select_Default);
	bool ClearImageCache();
	int32 BindToDropdown(const TArray<class UUI_CustomComboBox_C*>& K2Node_MakeArray_Array, class UUI_CustomComboBox_C** CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUI_CustomComboBox_C** CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	int32 CloseAllDropdownApartFrom(TArray<class UUI_CustomComboBox_C*>* Dropdowns, class UUI_CustomComboBox_C** CallFunc_Array_Get_Item, bool* CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UBindButtonSystem** CallFunc_GetEngineSubsystem_ReturnValue, const TArray<class UUI_CustomComboBox_C*>& K2Node_MakeArray_Array);
	int32 CloseAllDropDown(class UBindButtonSystem** CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const TArray<class UUI_CustomComboBox_C*>& K2Node_MakeArray_Array, class UUI_CustomComboBox_C** CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	int32 SetEnableStageForGameSlot(int32* Temp_int_Array_Index_Variable, int32* Temp_int_Loop_Counter_Variable, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget** CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUI_GameSlot_C** K2Node_DynamicCast_AsUI_Game_Slot, bool K2Node_DynamicCast_bSuccess);
	int32 BindToGameSlot(int32* Temp_int_Array_Index_Variable, int32* Temp_int_Loop_Counter_Variable, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget** CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUI_GameSlot_C** K2Node_DynamicCast_AsUI_Game_Slot, bool K2Node_DynamicCast_bSuccess);
	int32 ClearAllModsInPage(int32* Temp_int_Loop_Counter_Variable, int32* Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, struct FInstallProgressMod* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	int32 UpdateNotificationInSwitcher(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class UUI_BasePage_C** CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab, class UUI_ParentBrowser_C** K2Node_DynamicCast_AsUI_Parent_Browser, bool K2Node_DynamicCast_bSuccess, bool* K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsEmpty_ReturnValue);
	void InitWidgetStoreMenuRefs();
	void UpdateAllThemeSettings();
	class FString IsUrlValid(bool ReturnValue, bool* CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	struct FFormatArgumentData UpdatePagesPagination(bool CallFunc_IsValid_ReturnValue, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText* CallFunc_Format_ReturnValue);
	int32 FilterModInfo(const struct FCFCoreSearchModsFilter& ReturnValue, struct FCFCoreSearchModsFilter* CallFunc_MakeSearchModsFilter_ReturnValue);
	enum class ENUM_SideTabs GetCurrentTab();
	void UpdateSearchText(class FText* CallFunc_Conv_IntToText_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
	bool LoadSavedUpImagesAsync(int32* CallFunc_GetModIndexesForCurrentRow_First, int32* CallFunc_GetModIndexesForCurrentRow_Last, struct FInstallProgressMod* CallFunc_Array_Get_Item, bool* CallFunc_LessEqual_IntInt_ReturnValue, class UUI_GameSlot_C** K2Node_DynamicCast_AsUI_Game_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	int32 InitiliazeImageDownloads(bool* ReadyToStart, int32* Temp_int_Array_Index_Variable, int32* Temp_int_Loop_Counter_Variable, struct FInstallProgressMod* CallFunc_Array_Get_Item, class UUI_GameSlot_C** K2Node_DynamicCast_AsUI_Game_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	bool CalculateModsPerRow(int32* Mods, struct FIntPoint* CallFunc_GetScreenResolution_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue);
	bool CalculateModsPerPage(int32* Mods, struct FIntPoint* CallFunc_GetScreenResolution_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue);
	bool PrevPage(bool CallFunc_IsValid_ReturnValue, int32* CallFunc_Subtract_IntInt_ReturnValue);
	int32 NextPage(bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetCurrentSearchInput(class FText CurrentSearchInput);
	void OnPageActiveted(class FText Search_Input);
	int32 SetCurrentClassMods(bool CallFunc_IsValid_ReturnValue, int32* Temp_int_Array_Index_Variable, int32* Temp_int_Loop_Counter_Variable, struct FInstallProgressMod* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void ResetPageNum();
	bool SetStypleOfPageArrowsButtons(bool CallFunc_Less_IntInt_ReturnValue);
	class UUniformGridSlot* CreateModSlot(int32 AtIndex, struct FInstallProgressMod* K2Node_MakeStruct_InstallProgressMod, int32 CallFunc_CalculateModsPerRow_Mods, int32 CallFunc_Percent_IntInt_ReturnValue);
	void IsSearchInputValid(bool Return_Value, bool* CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	int32 SearchForAuthorsName(class FText Input, bool* AuthorFound, class FString* CallFunc_Conv_TextToString_ReturnValue, int32* Temp_int_Array_Index_Variable, int32* Temp_int_Loop_Counter_Variable, struct FModAuthor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32* CallFunc_FindSubstring_ReturnValue);
	void UpdateClasses();
	int32 SetupTimeFilter(enum class ENUM_TimeFilters* SelectedDefaultOption, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	int32 SetupSortByOptions(enum class ECFCoreModsSearchSortField* SelectedDefaultOption, enum class ECFCoreModsSearchSortField Temp_byte_Variable, int32* Temp_int_Array_Index_Variable, enum class ECFCoreModsSearchSortField Temp_byte_Variable_1, int32* Temp_int_Loop_Counter_Variable, const TArray<enum class ECFCoreModsSearchSortField>& K2Node_MakeArray_Array, enum class ECFCoreModsSearchSortField* CallFunc_Array_Get_Item, enum class ECFCoreModsSearchSortField* CallFunc_Array_Get_Item_1, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void SelectClass(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	struct FPointerEvent OnMouseButtonDown(const struct FEventReply& ReturnValue, bool* CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_IsValid_ReturnValue, struct FEventReply* CallFunc_Handled_ReturnValue);
	bool BuildPage(bool Temp_bool_Variable, int32 CallFunc_Int32_SubOne_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_LessEqual_IntInt_ReturnValue, bool* CallFunc_LessEqual_IntInt_ReturnValue_1);
	int32 CheckWhichTextAppearsFirst(int32 _numOfLettersForCheck, bool Temp_bool_Variable, class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_ToUpper_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FString* CallFunc_ToUpper_ReturnValue_1, bool* CallFunc_LessEqual_IntInt_ReturnValue);
	bool IsModsListEmpty(bool* IsEmpty);
	void BndEvt__ParentPageWidget_SortBySelect_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature(const class FString& Option);
	void BndEvt__ParentPageWidget_CategoriesSelect2_K2Node_ComponentBoundEvent_5_OnOptionSelected__DelegateSignature(const class FString& Option);
	enum class ENUM_InputDevices Event_On_Input_Device_Changed();
	int64 Event_Update_Filter_By_Options();
	void Event_On_Class_Selected();
	void Event_Search_Mods();
	void FillTheModList();
	void GetMods();
	void UpdateSearch(class FText SearchInput);
	void Construct();
	void OnSearch(class FText Search_Input);
	struct FKey ButtonCall(enum class EViewState State);
	void BindControllerAction();
	void NextPageButton();
	void PrevPageButton();
	void PreConstruct(bool* IsDesignTime);
	void BndEvt__UI_ParentPage_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void BndEvt__UI_ParentPage_UI_PaginationLeftRight_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	void BndEvt__UI_ParentPage_UI_PaginationRight_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	void ReloadPage();
	void ConstructPage();
	float Tick();
	class UTexture2D* ExecuteUbergraph_UI_ParentBrowser(int32* EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int64* K2Node_CustomEvent_Current_Class_Category_ID, bool CallFunc_IsValid_ReturnValue_2, const struct FKey& K2Node_CustomEvent_Key, class UBindButtonSystem** CallFunc_GetEngineSubsystem_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


