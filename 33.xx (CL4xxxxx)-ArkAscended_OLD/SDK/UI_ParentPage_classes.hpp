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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_FilterBy;                            // 0x760(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_FilterByTime;                        // 0x768(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UImage*                                IMG_NoResultsBackground;                           // 0x770(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UMultiLineEditableTextBox*             MultiLineEditableTextBox;                          // 0x778(0x8)(Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig)
	class UMultiLineEditableTextBox*             MultiLineEditableTextBox_1;                        // 0x780(0x8)(Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, Interp)
	class UVerticalBox*                          NO_MOD_PROJECT;                                    // 0x788(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, InstancedReference, SubobjectReference)
	class UOverlay*                              Overlay_CategorySwap;                              // 0x790(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, InstancedReference, SubobjectReference)
	class UProgressBar*                          ProgressBar_Loading;                               // 0x798(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UVerticalBox*                          SearchNotFound_ver;                                // 0x7A0(0x8)(ConstParm, BlueprintReadOnly, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Filters;                                      // 0x7A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Pages;                                        // 0x7B0(0x8)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_SearchModName;                                // 0x7B8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UThrobber*                             Throbber_Loading;                                  // 0x7C0(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Transient, InstancedReference, SubobjectReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back_C_0;                     // 0x7C8(0x8)(BlueprintVisible, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, RepNotify)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_UninstallAllMods;                        // 0x7D0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
	class UUI_CategoriesSelect_C*                UI_CategoriesSelect;                               // 0x7D8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UUI_ClassCategorySelect_C*             UI_ClassSelect;                                    // 0x7E0(0x8)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
	class UUI_NoModsFound_C*                     UI_NoInstalledModsFound;                           // 0x7E8(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UUI_NoModsFoundInCategoty_C*           UI_NoModsFoundInCategoty;                          // 0x7F0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DuplicateTransient)
	class UUI_PaginationLeftRight_C*             UI_PaginationLeft;                                 // 0x7F8(0x8)(ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UUI_PaginationLeftRight_C*             UI_PaginationRight;                                // 0x800(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UUI_CustomComboBox_C*                  UI_SortBySelect;                                   // 0x808(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
	class UUI_CustomComboBox_C*                  UI_TimeFilters;                                    // 0x810(0x8)(ExportObject, EditFixedSize, Parm, Transient, InstancedReference, SubobjectReference)
	class UUniformGridPanel*                     UniformGridPanel_GameSlots;                        // 0x818(0x8)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UWidgetSwitcher*                       WidgetSwitcher_Status;                             // 0x820(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, InstancedReference, SubobjectReference)
	int32                                        Pages;                                             // 0x828(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PageNum;                                           // 0x82C(0x4)(ConstParm, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FSTRUCT_Categories>            Categories_Subcategories;                          // 0x830(0x10)(Edit, ExportObject, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
	class FString                                SelectedCategory;                                  // 0x840(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	bool                                         IsSearchFound;                                     // 0x850(0x1)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class ECFCoreModsSearchSortField        SelectedSortByOption;                              // 0x851(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_4144[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x858(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, InstancedReference, DuplicateTransient)
	class FString                                CombinedAuthorsNames;                              // 0x860(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FModAuthor>                    AuthorsForCheck;                                   // 0x870(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<struct FInstallProgressMod>           CurrentClassMods;                                  // 0x880(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         IsPageLoaded;                                      // 0x890(0x1)(Edit, ConstParm, ExportObject, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_4148[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CurrentSearchInput;                                // 0x898(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         IsCurrentActiveWidget;                             // 0x8B0(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	bool                                         IsClassCategoriesModAmountLocal;                   // 0x8B1(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_4149[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  PageTitle;                                         // 0x8B8(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
	bool                                         IsDownloading;                                     // 0x8D0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_414A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                GameVersion;                                       // 0x8D8(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, InstancedReference)
	class FString                                SearchFilter;                                      // 0x8E8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TotalModsResult_Count;                             // 0x8F8(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	enum class ENUM_TimeFilters                  Selected_Default_Option;                           // 0x8FC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_414B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<class FString, class UTexture2DDynamic*> Images;                                            // 0x900(0x50)(Edit, ExportObject, EditFixedSize, OutParm, Transient, InstancedReference, SubobjectReference)
	int32                                        MaxImagesCached;                                   // 0x950(0x4)(BlueprintVisible, ExportObject, Parm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_414C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<enum class ECFCoreModsSearchSortField> Array;                                             // 0x958(0x10)(ExportObject, Parm, OutParm, ZeroConstructor)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x968(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<class FString>                        ThumbnailsRequested;                               // 0x978(0x10)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	int32                                        ImageDownloadingRow;                               // 0x988(0x4)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_414D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           TrueModInfo;                                       // 0x990(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TMap<class FString, enum class ECFCoreModsSearchSortField> SortMap;                                           // 0x9A0(0x50)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ParentPage_C* GetDefaultObj();

	class UWidget* GetClose_B();
	void BPEscapeClosed(bool* ReturnValue);
	bool GetVisibility_0(enum class ESlateVisibility* ReturnValue, bool CallFunc_IsAnyModInstalling_ReturnValue, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs* CallFunc_GetCurrentActivePage_CurrentActiveTab, bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default);
	int32 ReturnModsOfCurrentPage(const TArray<struct FInstallProgressMod>& Mod_List, TArray<struct FInstallProgressMod>* FinalOutputArray, bool* Temp_bool_Variable, int32* CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32* CallFunc_CalculateModsPerPage_Mods, int32* CallFunc_Array_Add_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue);
	bool MoreImagesLeftToDownload(bool* ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue);
	int32 GetModIndexesForCurrentRow(int32* Last, int32 CallFunc_Multiply_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue);
	bool DownloadNextBatchOfMods(int32* CallFunc_Add_IntInt_ReturnValue);
	class FString DownloadBatchOfMods(int32* CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, int32 CallFunc_GetModIndexesForCurrentRow_Last, bool CallFunc_LessEqual_IntInt_ReturnValue);
	class FString CheckIfImagesAreReady(bool* Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_MoreImagesLeftToDownload_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, int32 CallFunc_GetModIndexesForCurrentRow_Last, bool CallFunc_LessEqual_IntInt_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void DownloadImagesInAllMods(bool CallFunc_InitiliazeImageDownloads_ReadyToStart);
	bool CreateEmptySlot(int32* AtIndex, int32* CallFunc_Percent_IntInt_ReturnValue, int32* CallFunc_Divide_IntInt_ReturnValue, class UUI_EmptySlot_C* CallFunc_Create_ReturnValue, class UUniformGridSlot** CallFunc_AddChildToUniformGrid_ReturnValue);
	bool SwitchControllerAction(const struct FKey& Key, enum class EViewState State);
	bool Nav_Down_from_DropdownTime(class UWidget** ReturnValue, class UWidget** CallFunc_Nav_to_Options_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, bool CallFunc_IsVisible_ReturnValue);
	bool Nav_Down_from_DropdownSort(class UWidget** ReturnValue, class UWidget** CallFunc_Nav_to_Options_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, bool CallFunc_IsVisible_ReturnValue);
	bool Nav_Down_from_DropdownCategory(class UWidget** ReturnValue, class UWidget** CallFunc_Nav_to_Options_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, bool CallFunc_IsVisible_ReturnValue);
	enum class EUINavigation Nav_for_Up_Move_from_List(class UWidget** ReturnValue);
	bool SetNavigationRuleForList(bool* K2Node_SwitchInteger_CmpSuccess, int32* CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue);
	bool SetListFocus(class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot);
	int32 UpdatePaginations(TArray<struct FInstallProgressMod>* TotalList, bool* Temp_bool_Variable, int32* CallFunc_CalculateModsPerPage_Mods, double* CallFunc_Conv_IntToDouble_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue_1, int32* K2Node_Select_Default);
	bool ClearImageCache();
	bool BindToDropdown(int32* CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue_1, TArray<class UUI_CustomComboBox_C*>* K2Node_MakeArray_Array);
	class UBindButtonSystem* CloseAllDropdownApartFrom(class UUI_CustomComboBox_C** Dropdown, int32* CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_CustomComboBox_C*>* K2Node_MakeArray_Array);
	bool CloseAllDropDown(int32* CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_CustomComboBox_C*>* K2Node_MakeArray_Array);
	bool SetEnableStageForGameSlot(bool* EnableStage, int32* CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot);
	bool BindToGameSlot(int32* CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot);
	bool ClearAllModsInPage(int32* CallFunc_Add_IntInt_ReturnValue);
	bool UpdateNotificationInSwitcher(class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs* CallFunc_GetCurrentActivePage_CurrentActiveTab, bool CallFunc_IsEmpty_ReturnValue);
	void InitWidgetStoreMenuRefs();
	struct FSlateColor UpdateAllThemeSettings();
	void IsUrlValid(class FString* URL, bool* ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	struct FFormatArgumentData UpdatePagesPagination(int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, class FText* CallFunc_Format_ReturnValue);
	struct FCFCoreSearchModsFilter FilterModInfo(struct FCFCoreSearchModsFilter* ReturnValue);
	enum class ENUM_SideTabs GetCurrentTab();
	bool UpdateSearchText(class FText* CallFunc_Conv_IntToText_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue_1);
	bool LoadSavedUpImagesAsync(int32* CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetModIndexesForCurrentRow_Last, bool CallFunc_LessEqual_IntInt_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, bool CallFunc_Array_IsValidIndex_ReturnValue);
	bool InitiliazeImageDownloads(bool CallFunc_Array_IsValidIndex_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, int32* CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Add_ReturnValue);
	bool CalculateModsPerRow(int32 Mods, double* CallFunc_Conv_IntToDouble_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue_1, double* CallFunc_Divide_DoubleDouble_ReturnValue);
	bool CalculateModsPerPage(int32 Mods, double* CallFunc_Conv_IntToDouble_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue_1, double* CallFunc_Divide_DoubleDouble_ReturnValue);
	bool PrevPage(int32 CallFunc_Subtract_IntInt_ReturnValue);
	bool NextPage(int32* CallFunc_Add_IntInt_ReturnValue);
	class FText GetCurrentSearchInput();
	class FText OnPageActiveted();
	bool SetCurrentClassMods(int32* CallFunc_Add_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int32* CallFunc_Array_Add_ReturnValue);
	void ResetPageNum();
	bool SetStypleOfPageArrowsButtons();
	int32 CreateModSlot(int32* AtIndex, class UUI_GameSlot_C* CallFunc_Create_ReturnValue, int32* CallFunc_Divide_IntInt_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, class UUniformGridSlot** CallFunc_AddChildToUniformGrid_ReturnValue);
	bool IsSearchInputValid(bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnPageLoaded();
	int32 SearchForAuthorsName(class FText Input, class FString* CallFunc_Conv_TextToString_ReturnValue, bool* CallFunc_NotEqual_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue);
	void UpdateClasses();
	bool SetupTimeFilter(uint8* CallFunc_Conv_IntToByte_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, uint8* CallFunc_GetValidValue_ReturnValue, uint8* CallFunc_Conv_IntToByte_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue);
	bool SetupSortByOptions(enum class ECFCoreModsSearchSortField* Temp_byte_Variable, enum class ECFCoreModsSearchSortField* Temp_byte_Variable_1, int32* CallFunc_Add_IntInt_ReturnValue, TArray<enum class ECFCoreModsSearchSortField>* K2Node_MakeArray_Array, class FText* K2Node_Select_Default, class FText* K2Node_Select_Default_1, class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1);
	bool SelectClass();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, struct FEventReply* ReturnValue);
	int32 BuildPage(bool* Temp_bool_Variable, int32* CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32* CallFunc_CalculateModsPerPage_Mods, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue);
	bool CheckWhichTextAppearsFirst(class FText* NameOne, class FText* NameTwo, bool* Name_One_Appears_First, bool* Temp_bool_Variable, class FString* CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, int32* CallFunc_GetCharacterAsNumber_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32* CallFunc_GetCharacterAsNumber_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_NotEqual_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue);
	bool IsModsListEmpty();
	void BndEvt__ParentPageWidget_SortBySelect_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature(const class FString& Option);
	void BndEvt__ParentPageWidget_CategoriesSelect2_K2Node_ComponentBoundEvent_5_OnOptionSelected__DelegateSignature(const class FString& Option);
	void Event_On_Input_Device_Changed(enum class ENUM_InputDevices* Device);
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
	bool PreConstruct();
	void BndEvt__UI_ParentPage_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void BndEvt__UI_ParentPage_UI_PaginationLeftRight_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	void BndEvt__UI_ParentPage_UI_PaginationRight_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	bool ExecuteUbergraph_UI_ParentPage(int32* EntryPoint, const class FString& K2Node_ComponentBoundEvent_Option_1, const class FString& K2Node_ComponentBoundEvent_Option, enum class ENUM_InputDevices K2Node_CustomEvent_Device, int64 K2Node_CustomEvent_Current_Class_Category_ID, class FText* K2Node_Event_SearchInput, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, bool* CallFunc_Map_Find_ReturnValue);
};

}


