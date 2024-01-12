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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_FilterBy;                            // 0x760(0x8)(ConstParm, Net, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_FilterByTime;                        // 0x768(0x8)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UImage*                                IMG_NoResultsBackground;                           // 0x770(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UMultiLineEditableTextBox*             MultiLineEditableTextBox;                          // 0x778(0x8)(Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig)
	class UMultiLineEditableTextBox*             MultiLineEditableTextBox_1;                        // 0x780(0x8)(Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, Interp)
	class UVerticalBox*                          NO_MOD_PROJECT;                                    // 0x788(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UOverlay*                              Overlay_CategorySwap;                              // 0x790(0x8)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UProgressBar*                          ProgressBar_Loading;                               // 0x798(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UVerticalBox*                          SearchNotFound_ver;                                // 0x7A0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Filters;                                      // 0x7A8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Pages;                                        // 0x7B0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_SearchModName;                                // 0x7B8(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UThrobber*                             Throbber_Loading;                                  // 0x7C0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back_C_0;                     // 0x7C8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, RepNotify)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_UninstallAllMods;                        // 0x7D0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UUI_CategoriesSelect_C*                UI_CategoriesSelect;                               // 0x7D8(0x8)(BlueprintVisible, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UUI_ClassCategorySelect_C*             UI_ClassSelect;                                    // 0x7E0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UUI_NoModsFound_C*                     UI_NoInstalledModsFound;                           // 0x7E8(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UUI_NoModsFoundInCategoty_C*           UI_NoModsFoundInCategoty;                          // 0x7F0(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, DuplicateTransient)
	class UUI_PaginationLeftRight_C*             UI_PaginationLeft;                                 // 0x7F8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UUI_PaginationLeftRight_C*             UI_PaginationRight;                                // 0x800(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UUI_CustomComboBox_C*                  UI_SortBySelect;                                   // 0x808(0x8)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UUI_CustomComboBox_C*                  UI_TimeFilters;                                    // 0x810(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UUniformGridPanel*                     UniformGridPanel_GameSlots;                        // 0x818(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UWidgetSwitcher*                       WidgetSwitcher_Status;                             // 0x820(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	int32                                        Pages;                                             // 0x828(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PageNum;                                           // 0x82C(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FSTRUCT_Categories>            Categories_Subcategories;                          // 0x830(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class FString                                SelectedCategory;                                  // 0x840(0x10)(ConstParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         IsSearchFound;                                     // 0x850(0x1)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	enum class ECFCoreModsSearchSortField        SelectedSortByOption;                              // 0x851(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_4138[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x858(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, DuplicateTransient)
	class FString                                CombinedAuthorsNames;                              // 0x860(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	TArray<struct FModAuthor>                    AuthorsForCheck;                                   // 0x870(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	TArray<struct FInstallProgressMod>           CurrentClassMods;                                  // 0x880(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	bool                                         IsPageLoaded;                                      // 0x890(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_4139[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CurrentSearchInput;                                // 0x898(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         IsCurrentActiveWidget;                             // 0x8B0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         IsClassCategoriesModAmountLocal;                   // 0x8B1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_413A[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  PageTitle;                                         // 0x8B8(0x18)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         IsDownloading;                                     // 0x8D0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_413B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                GameVersion;                                       // 0x8D8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig)
	class FString                                SearchFilter;                                      // 0x8E8(0x10)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TotalModsResult_Count;                             // 0x8F8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class ENUM_TimeFilters                  Selected_Default_Option;                           // 0x8FC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_413C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<class FString, class UTexture2DDynamic*> Images;                                            // 0x900(0x50)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	int32                                        MaxImagesCached;                                   // 0x950(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_413D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<enum class ECFCoreModsSearchSortField> Array;                                             // 0x958(0x10)(ExportObject, Parm, OutParm, ZeroConstructor)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x968(0x10)(BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<class FString>                        ThumbnailsRequested;                               // 0x978(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	int32                                        ImageDownloadingRow;                               // 0x988(0x4)(Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_413E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           TrueModInfo;                                       // 0x990(0x10)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	TMap<class FString, enum class ECFCoreModsSearchSortField> SortMap;                                           // 0x9A0(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ParentPage_C* GetDefaultObj();

	class UWidget* GetClose_B();
	bool BPEscapeClosed();
	bool GetVisibility_0(class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default);
	bool ReturnModsOfCurrentPage(TArray<struct FInstallProgressMod>* Mod_List, const TArray<struct FInstallProgressMod>& TrueModInfo, bool Temp_bool_Variable, int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Int32_SubOne_ReturnValue, int32* CallFunc_Array_Add_ReturnValue, int32 CallFunc_Int32_SubOne_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool MoreImagesLeftToDownload(int32* CallFunc_Array_Length_ReturnValue);
	int32 GetModIndexesForCurrentRow(int32 Last, int32 CallFunc_Int32_SubOne_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Int32_SubOne_ReturnValue_1);
	bool DownloadNextBatchOfMods(int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue);
	bool DownloadBatchOfMods(int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, struct FInstallProgressMod* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_GetModIndexesForCurrentRow_First, class FString* CallFunc_Array_Get_Item_1);
	bool CheckIfImagesAreReady(bool Temp_bool_Variable, bool CallFunc_MoreImagesLeftToDownload_ReturnValue, int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, struct FInstallProgressMod* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool* K2Node_DynamicCast_bSuccess, int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_GetModIndexesForCurrentRow_First, bool CallFunc_BooleanAND_ReturnValue, class FString* CallFunc_Array_Get_Item_1);
	void DownloadImagesInAllMods(bool CallFunc_InitiliazeImageDownloads_ReadyToStart);
	class UUI_EmptySlot_C* CreateEmptySlot(bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, class UUniformGridSlot** CallFunc_AddChildToUniformGrid_ReturnValue);
	bool SwitchControllerAction(const struct FKey& Key, enum class EViewState State);
	bool Nav_Down_from_DropdownTime(enum class EUINavigation* Navigation, class UWidget* CallFunc_Nav_to_Options_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
	bool Nav_Down_from_DropdownSort(enum class EUINavigation* Navigation, class UWidget* CallFunc_Nav_to_Options_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
	bool Nav_Down_from_DropdownCategory(enum class EUINavigation* Navigation, class UWidget* CallFunc_Nav_to_Options_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
	class UWidget* Nav_for_Up_Move_from_List(enum class EUINavigation* Navigation);
	bool SetNavigationRuleForList(int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class UWidget** CallFunc_Array_Get_Item);
	class UUI_GameSlot_C* SetListFocus(bool* K2Node_DynamicCast_bSuccess);
	bool UpdatePaginations(bool Temp_bool_Variable, int32* CallFunc_Array_Length_ReturnValue, int32* CallFunc_FMod_ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue, int32* K2Node_Select_Default);
	bool ClearImageCache(int32* CallFunc_Map_Length_ReturnValue);
	bool BindToDropdown(int32* Temp_int_Variable, int32* Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32* CallFunc_Array_Length_ReturnValue, class UUI_CustomComboBox_C** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue_1, class UUI_CustomComboBox_C** CallFunc_Array_Get_Item_1);
	TArray<class UUI_CustomComboBox_C*> CloseAllDropdownApartFrom(class UUI_CustomComboBox_C** Dropdown, int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUI_CustomComboBox_C** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue);
	bool CloseAllDropDown(int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class UUI_CustomComboBox_C** CallFunc_Array_Get_Item);
	class UUI_GameSlot_C* SetEnableStageForGameSlot(int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class UWidget** CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess);
	class UUI_GameSlot_C* BindToGameSlot(int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class UWidget** CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess);
	bool ClearAllModsInPage(int32 CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, struct FInstallProgressMod* CallFunc_Array_Get_Item, bool* CallFunc_IsValid_ReturnValue_1);
	bool UpdateNotificationInSwitcher(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage, bool* CallFunc_IsValid_ReturnValue_2, int32* CallFunc_SelectInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue_3, int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_IsValid_ReturnValue_4);
	void InitWidgetStoreMenuRefs();
	struct FSlateColor UpdateAllThemeSettings(bool* CallFunc_IsValid_ReturnValue);
	bool IsUrlValid(class FString* URL);
	TArray<struct FFormatArgumentData> UpdatePagesPagination(bool* CallFunc_IsValid_ReturnValue, class FText CallFunc_Format_ReturnValue);
	struct FCFCoreSearchModsFilter FilterModInfo(int32 CallFunc_Conv_Int64ToInt_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue_1, struct FCFCoreSearchModsFilter* CallFunc_MakeSearchModsFilter_ReturnValue);
	enum class ENUM_SideTabs GetCurrentTab();
	void UpdateSearchText(class FText CallFunc_Conv_IntToText_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1);
	bool LoadSavedUpImagesAsync(int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_GetModIndexesForCurrentRow_First, struct FInstallProgressMod* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32* CallFunc_Array_Length_ReturnValue);
	bool InitiliazeImageDownloads(struct FInstallProgressMod* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Add_ReturnValue);
	bool CalculateModsPerRow(class UGameUserSettings** CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue);
	bool CalculateModsPerPage(class UGameUserSettings** CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue);
	int32 PrevPage(int32* Temp_int_Variable, bool* CallFunc_IsValid_ReturnValue);
	bool NextPage(int32* Temp_int_Variable, bool* CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	class FText GetCurrentSearchInput();
	class FText OnPageActiveted();
	int64 SetCurrentClassMods(bool* CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, struct FInstallProgressMod* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_EqualEqual_Int64Int64_ReturnValue, int32* CallFunc_Array_Add_ReturnValue);
	void ResetPageNum();
	bool SetStypleOfPageArrowsButtons();
	int32 CreateModSlot(struct FInstallProgressMod* K2Node_MakeStruct_InstallProgressMod, int32* CallFunc_Percent_IntInt_ReturnValue, class UUniformGridSlot** CallFunc_AddChildToUniformGrid_ReturnValue);
	bool IsSearchInputValid(bool* Return_Value);
	void OnPageLoaded();
	bool SearchForAuthorsName(class FText Input, TArray<struct FModAuthor>* Authors, bool AuthorFound, int32* CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, struct FModAuthor* CallFunc_Array_Get_Item, int32* CallFunc_FindSubstring_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void UpdateClasses();
	bool SetupTimeFilter(int32* Temp_int_Variable, int32* Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue);
	bool SetupSortByOptions(enum class ECFCoreModsSearchSortField Temp_byte_Variable, enum class ECFCoreModsSearchSortField Temp_byte_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, enum class ECFCoreModsSearchSortField* CallFunc_Array_Get_Item, enum class ECFCoreModsSearchSortField* CallFunc_Array_Get_Item_1, class FText* K2Node_Select_Default, class FText* K2Node_Select_Default_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32* CallFunc_Array_Length_ReturnValue);
	void SelectClass(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
	struct FEventReply OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent, bool* CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool* CallFunc_IsValid_ReturnValue, struct FEventReply* CallFunc_Handled_ReturnValue);
	bool BuildPage(bool Temp_bool_Variable, int32* Temp_int_Variable, int32 CallFunc_Int32_SubOne_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool CheckWhichTextAppearsFirst(class FText* NameOne, class FText NameTwo, int32 _numOfLettersForCheck, bool Temp_bool_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_ToUpper_ReturnValue_1, int32* CallFunc_Array_Length_ReturnValue_1, int32* Temp_int_Variable, int32* CallFunc_GetCharacterAsNumber_ReturnValue, int32* CallFunc_GetCharacterAsNumber_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	bool IsModsListEmpty(int32* CallFunc_Array_Length_ReturnValue);
	class FString BndEvt__ParentPageWidget_SortBySelect_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature();
	class FString BndEvt__ParentPageWidget_CategoriesSelect2_K2Node_ComponentBoundEvent_5_OnOptionSelected__DelegateSignature();
	enum class ENUM_InputDevices Event_On_Input_Device_Changed();
	int64 Event_Update_Filter_By_Options();
	void Event_On_Class_Selected();
	void Event_Search_Mods();
	void ConstructParentPage();
	void FillTheModList();
	void GetMods();
	class FText UpdateSearch();
	void Construct();
	class FText OnSearch();
	void ButtonCall(const struct FKey& Key, enum class EViewState State);
	void BindControllerAction();
	void NextPageButton();
	void PrevPageButton();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__UI_ParentPage_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void BndEvt__UI_ParentPage_UI_PaginationLeftRight_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	void BndEvt__UI_ParentPage_UI_PaginationRight_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	bool ExecuteUbergraph_UI_ParentPage(bool* CallFunc_IsValid_ReturnValue, class FText K2Node_Event_Search_Input, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, bool* CallFunc_IsValid_ReturnValue_1);
};

}


