#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA02 (0xD32 - 0x330)
// WidgetBlueprintGeneratedClass UI_GameSlot.UI_GameSlot_C
class UUI_GameSlot_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      OnBeginPlay;                                       // 0x338(0x8)(Edit, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      Hover;                                             // 0x340(0x8)(Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x348(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UBorder*                               Boarded_Left;                                      // 0x350(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Boarder_Right;                                     // 0x358(0x8)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Boarder_Top;                                       // 0x360(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border_Down;                                       // 0x368(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               BORDER_LowerPart;                                  // 0x370(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_GoToModPage;                                // 0x378(0x8)(Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_UpvoteRate_C*               Button_UpvoteRate;                                 // 0x380(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_137;                                         // 0x388(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, EditorOnly, ContainsInstancedReference)
	class UImage*                                Image_326;                                         // 0x390(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional, AutoWeak, AssetRegistrySearchable)
	class UImage*                                IMG_AddonsIcon;                                    // 0x398(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_AddonsIcon_1;                                  // 0x3A0(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_AddonsIcon_2;                                  // 0x3A8(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_Disable;                                       // 0x3B0(0x8)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_GameImage;                                     // 0x3B8(0x8)(Edit, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_PAIDMODS_BG;                                   // 0x3C0(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_PaidPremium;                               // 0x3C8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       Switcher_ModState;                                 // 0x3D0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_AuthorName;                                   // 0x3D8(0x8)(Edit, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_BrowseMods;                                   // 0x3E0(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_BrowseMods_1;                                 // 0x3E8(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UTextBlock*                            TEXT_BrowseMods_2;                                 // 0x3F0(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UTextBlock*                            TEXT_BrowseMods_3;                                 // 0x3F8(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class UTextBlock*                            TEXT_BrowseMods_4;                                 // 0x400(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	class UTextBlock*                            TEXT_ModName;                                      // 0x408(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PRICE;                                        // 0x410(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Downloads_C*                       UI_Downloads;                                      // 0x418(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, DuplicateTransient)
	class UUI_DownloadSize_C*                    UI_DownloadSize_149;                               // 0x420(0x8)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, Interp, NonTransactional, NoDestructor, ContainsInstancedReference)
	class UUI_InstallationStatus_C*              UI_InstallingStatus;                               // 0x428(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            Like;                                              // 0x430(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Prompt_Uninstall_C*                UninstallWB;                                       // 0x440(0x8)(ConstParm, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnModInstalledComplete;                            // 0x448(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnModInstall;                                      // 0x458(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnModUninstalledComplete;                          // 0x468(0x10)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenuRef;                                      // 0x478(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                GameVersion;                                       // 0x480(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnDisableClicked;                                  // 0x490(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x4A0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FInstallProgressMod                   ModInfo;                                           // 0x4B0(0x480)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ImageFinishedLoading;                              // 0x930(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2369[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ImageUrl;                                          // 0x938(0x10)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UUI_ParentPage_C*                      ParentPage;                                        // 0x948(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsServerModsState;                                 // 0x950(0x1)(Edit, ConstParm, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_236B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnModUnInstall;                                    // 0x958(0x10)(Edit, ConstParm, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FModsDirInfo                          Mods_Dir_Info;                                     // 0x968(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInstalledMod                         Out_Installed_Mod;                                 // 0x988(0x3A8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DebugScreenshotDownloading;                        // 0xD30(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsEnableState;                                     // 0xD31(0x1)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_GameSlot_C* GetDefaultObj();

	int32 OnEventBroadcasted(struct FCFCoreApiResponsePagination* Pagination, bool ReturnValue, int32* CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue);
	class UImage* SequenceEvent__ENTRYPOINTUI_GameSlot();
	class FText UpdatePaidPremiumStatus(bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ESlateVisibility K2Node_Select_Default, class FText K2Node_Select_Default_1);
	enum class ESlateVisibility Change_Slot_Enable_State(bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	bool PlayStartingAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void GetDownloadCount(class FText* FinalAmount, class FText CallFunc_FormatDownloadNumber_FinalAmount);
	class UUI_ParentPage_C* UpdateModCard(enum class ENUM_SideTabs* CallFunc_GetCurrentActivePage_CurrentActiveTab, bool* K2Node_SwitchEnum_CmpSuccess, bool* K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	class FText GetModSize(class FText* Result, int32 Temp_int_Loop_Counter_Variable, const struct FFile& CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, int32* CallFunc_Conv_Int64ToInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, class FText* CallFunc_Conv_DoubleToText_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText* CallFunc_Conv_DoubleToText_ReturnValue_1, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1);
	class FString GetAuthors(class FString* CombinedAuthorsNames, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_StringLimit_NewString, const struct FModAuthor& CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsEmpty_ReturnValue);
	void GetModName(class FString* Name);
	bool ClearAllModsInAllPages(class UUI_ParentPage_C* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	bool UpdateDownloadCount(class FText* CallFunc_GetDownloadCount_FinalAmount);
	int64 UpdateModSize();
	bool Update_LikeStatus();
	void UpdateThemeSettings();
	bool UpdateImage(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	class FText UpdateAuthors(const class FString& CallFunc_StringLimit_NewString);
	bool UpdateModName(class FString* CallFunc_GetModName_Name);
	int32 Try_Set_Game_Version(TArray<int32>* Result, const struct FFileIndex& CallFunc_Array_Get_Item, int32* CallFunc_Array_Add_ReturnValue);
	class FText FormatDownloadNumber(int64* Downloads, class FText* FinalAmount, bool* CallFunc_Less_Int64Int64_ReturnValue, int64 CallFunc_Divide_Int64Int64_ReturnValue, int64 CallFunc_Divide_Int64Int64_ReturnValue_1, const class FString& CallFunc_GetSubstring_ReturnValue, int64 CallFunc_Divide_Int64Int64_ReturnValue_2, int64 CallFunc_Divide_Int64Int64_ReturnValue_3, const class FString& CallFunc_GetSubstring_ReturnValue_1, bool* CallFunc_Less_Int64Int64_ReturnValue_1);
	bool GenerateModNameToolTipWidget(class UWidget* ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_ToolTipWidget_C* CallFunc_Create_ReturnValue);
	void GenerateAuthorNameToolTipWidget(class UWidget* ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_ToolTipWidget_C* CallFunc_Create_ReturnValue);
	struct FInstallProgressMod InitModInfo();
	bool OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue, const struct FEventReply& K2Node_MakeStruct_EventReply, class UUI_RightClickMenu_C* CallFunc_CreateRightClickMenu_MenuRef, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetMousePosition_LocationY, double* CallFunc_Subtract_DoubleDouble_ReturnValue, double* CallFunc_Subtract_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double* CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double* CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1);
	class UTexture2DDynamic* OnFail_9D95364741CA1B5428249F8ACB4C6143();
	class UTexture2DDynamic* OnSuccess_9D95364741CA1B5428249F8ACB4C6143();
	class UTexture2DDynamic* OnFail_B97DCA8245D1E43D54A2A9BEF5BD8D82();
	class UTexture2DDynamic* OnSuccess_B97DCA8245D1E43D54A2A9BEF5BD8D82();
	void BP_OnItemSelectionChanged(bool* bIsSelected);
	class UObject* OnListItemObjectSet();
	void InstallMod();
	bool BP_OnItemExpansionChanged();
	void UpdateMod();
	void CallUninstall();
	void BP_OnEntryReleased();
	void CheckDiskSpaceToInstall();
	void CustomEvent(struct FModsDirInfo* ModsDirInfo);
	struct FCFCoreError CustomEvent_1();
	void CancelInstallation();
	void Event_On_Uninstall_Pressed();
	void Event_On_Uninstall_Aprroved();
	class UImage* Animation_UpdateModImage();
	void BndEvt__GameSlot_Button_53_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Event_View_Mod_Page();
	void Construct();
	void UpdateInstallSlot();
	void BndEvt__UI_GameSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_GameSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Destruct();
	void JustDownloadAndPlaceImage();
	float Tick(const struct FGeometry& MyGeometry);
	class FString RequestDownloadImage();
	bool ExecuteUbergraph_UI_GameSlot(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UTexture2DDynamic** K2Node_CustomEvent_Texture_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UTexture2DDynamic** K2Node_CustomEvent_Texture_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class UTexture2DDynamic** K2Node_CustomEvent_Texture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UTexture2DDynamic** K2Node_CustomEvent_Texture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool K2Node_Event_bIsSelected, const struct FCFCoreError& K2Node_CustomEvent_error, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UUI_Prompt_Uninstall_C* CallFunc_Create_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, const class FString& CallFunc_StringLimit_NewString, const class FString& CallFunc_StringLimit_NewString_1, class UObject* K2Node_Select_Default, bool* CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool CallFunc_HasAnyUserFocus_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue_1, bool CallFunc_NotEqual_StrStr_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UObject* K2Node_Select_Default_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5);
	void OnModUnInstall__DelegateSignature();
	void OnDisableClicked__DelegateSignature();
	void OnModUninstalledComplete__DelegateSignature();
	void OnModInstall__DelegateSignature();
	void OnModInstalledComplete__DelegateSignature();
	void Like__DelegateSignature();
};

}


