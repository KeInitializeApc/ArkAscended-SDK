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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      OnBeginPlay;                                       // 0x338(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      Hover;                                             // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x348(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UBorder*                               Boarded_Left;                                      // 0x350(0x8)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Boarder_Right;                                     // 0x358(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Boarder_Top;                                       // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border_Down;                                       // 0x368(0x8)(Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               BORDER_LowerPart;                                  // 0x370(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_GoToModPage;                                // 0x378(0x8)(Edit, ConstParm, BlueprintVisible, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_UpvoteRate_C*               Button_UpvoteRate;                                 // 0x380(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_137;                                         // 0x388(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, EditorOnly, ContainsInstancedReference)
	class UImage*                                Image_326;                                         // 0x390(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional, AutoWeak, AssetRegistrySearchable)
	class UImage*                                IMG_AddonsIcon;                                    // 0x398(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_AddonsIcon_1;                                  // 0x3A0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_AddonsIcon_2;                                  // 0x3A8(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_Disable;                                       // 0x3B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_GameImage;                                     // 0x3B8(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_PAIDMODS_BG;                                   // 0x3C0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_PaidPremium;                               // 0x3C8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       Switcher_ModState;                                 // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_AuthorName;                                   // 0x3D8(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_BrowseMods;                                   // 0x3E0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_BrowseMods_1;                                 // 0x3E8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UTextBlock*                            TEXT_BrowseMods_2;                                 // 0x3F0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UTextBlock*                            TEXT_BrowseMods_3;                                 // 0x3F8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class UTextBlock*                            TEXT_BrowseMods_4;                                 // 0x400(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	class UTextBlock*                            TEXT_ModName;                                      // 0x408(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PRICE;                                        // 0x410(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Downloads_C*                       UI_Downloads;                                      // 0x418(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UUI_DownloadSize_C*                    UI_DownloadSize_149;                               // 0x420(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, Interp, NonTransactional, NoDestructor, ContainsInstancedReference)
	class UUI_InstallationStatus_C*              UI_InstallingStatus;                               // 0x428(0x8)(ConstParm, ExportObject, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            Like;                                              // 0x430(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Prompt_Uninstall_C*                UninstallWB;                                       // 0x440(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnModInstalledComplete;                            // 0x448(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnModInstall;                                      // 0x458(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnModUninstalledComplete;                          // 0x468(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenuRef;                                      // 0x478(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                GameVersion;                                       // 0x480(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig)
	FMulticastInlineDelegateProperty_            OnDisableClicked;                                  // 0x490(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x4A0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FInstallProgressMod                   ModInfo;                                           // 0x4B0(0x480)(BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ImageFinishedLoading;                              // 0x930(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3B90[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ImageUrl;                                          // 0x938(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	class UUI_ParentPage_C*                      ParentPage;                                        // 0x948(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsServerModsState;                                 // 0x950(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3B92[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnModUnInstall;                                    // 0x958(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FModsDirInfo                          Mods_Dir_Info;                                     // 0x968(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInstalledMod                         Out_Installed_Mod;                                 // 0x988(0x3A8)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DebugScreenshotDownloading;                        // 0xD30(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsEnableState;                                     // 0xD31(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_GameSlot_C* GetDefaultObj();

	bool OnEventBroadcasted(struct FCFCoreApiResponsePagination* Pagination, bool* ReturnValue, const struct FInstallProgressMod& NewInformation, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue);
	class UImage* SequenceEvent__ENTRYPOINTUI_GameSlot();
	class FText UpdatePaidPremiumStatus(TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, class FText* CallFunc_Format_ReturnValue);
	enum class ESlateVisibility Change_Slot_Enable_State();
	bool PlayStartingAnimation();
	void GetDownloadCount(class FText FinalAmount, class FText CallFunc_FormatDownloadNumber_FinalAmount);
	bool UpdateModCard(class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs* CallFunc_GetCurrentActivePage_CurrentActiveTab, bool* K2Node_SwitchEnum_CmpSuccess, bool* K2Node_SwitchEnum_CmpSuccess_1);
	struct FFormatArgumentData GetModSize(class FText* Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, class FText* CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_1, class FText* CallFunc_Format_ReturnValue_1);
	bool GetAuthors(const class FString& Local_TotalAuthors, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1, bool* CallFunc_IsEmpty_ReturnValue);
	void GetModName(class FString* Name);
	bool ClearAllModsInAllPages(int32* CallFunc_Add_IntInt_ReturnValue);
	bool UpdateDownloadCount(class FText* CallFunc_GetDownloadCount_FinalAmount);
	int64 UpdateModSize(const struct FCFCoreFileSize& CallFunc_GetModSize_SizeStruct, class FText CallFunc_GetModSize_SizeInText);
	bool Update_LikeStatus();
	void UpdateThemeSettings();
	bool UpdateImage();
	class FString UpdateAuthors(class FText* CallFunc_Conv_StringToText_ReturnValue);
	class FString UpdateModName();
	int32 Try_Set_Game_Version(bool IsNumericallySet, class FString* Temp, TArray<int32>* Result, bool* CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	bool FormatDownloadNumber(int64* Downloads, class FText FinalAmount, class FText CallFunc_Conv_Int64ToText_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_2, class FString* CallFunc_Concat_StrStr_ReturnValue_3, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_Int64ToText_ReturnValue_2, class FText CallFunc_Conv_Int64ToText_ReturnValue_3, class FString* CallFunc_Conv_TextToString_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_3, class FString* CallFunc_Concat_StrStr_ReturnValue_4, class FString* CallFunc_Concat_StrStr_ReturnValue_5, class FString* CallFunc_Concat_StrStr_ReturnValue_6, class FText* CallFunc_Conv_StringToText_ReturnValue_2, class FString* CallFunc_Concat_StrStr_ReturnValue_7, class FText* CallFunc_Conv_StringToText_ReturnValue_3, class FText CallFunc_Conv_Int64ToText_ReturnValue_4);
	class UUI_ToolTipWidget_C* GenerateModNameToolTipWidget(class UWidget** ReturnValue, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue);
	class UUI_ToolTipWidget_C* GenerateAuthorNameToolTipWidget(class UWidget** ReturnValue, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue);
	struct FInstallProgressMod InitModInfo();
	double OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, struct FEventReply* ReturnValue, struct FEventReply* K2Node_MakeStruct_EventReply, class UUI_RightClickMenu_C** CallFunc_CreateRightClickMenu_MenuRef, float* CallFunc_GetMousePosition_LocationY, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	class UTexture2DDynamic* OnFail_9D95364741CA1B5428249F8ACB4C6143();
	class UTexture2DDynamic* OnSuccess_9D95364741CA1B5428249F8ACB4C6143();
	class UTexture2DDynamic* OnFail_B97DCA8245D1E43D54A2A9BEF5BD8D82();
	class UTexture2DDynamic* OnSuccess_B97DCA8245D1E43D54A2A9BEF5BD8D82();
	bool BP_OnItemSelectionChanged();
	void OnListItemObjectSet(class UObject** ListItemObject);
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
	void RequestDownloadImage(const class FString& URL_String);
	bool ExecuteUbergraph_UI_GameSlot(int32 EntryPoint, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UTexture2DDynamic* K2Node_CustomEvent_Texture_3, class UTexture2DDynamic* K2Node_CustomEvent_Texture_2, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_2, const struct FMargin& K2Node_MakeStruct_Margin, class UUMGSequencePlayer** CallFunc_PlayAnimationForward_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, class UUMGSequencePlayer** CallFunc_PlayAnimationReverse_ReturnValue, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, class UTexture2DDynamic* K2Node_CustomEvent_Texture, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool* K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, struct FModsDirInfo* K2Node_CustomEvent_ModsDirInfo, struct FCFCoreError* K2Node_CustomEvent_error, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_3, class FText* CallFunc_Conv_StringToText_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, class UImage** K2Node_CustomEvent_IMG_GameImage, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue_2, struct FSlateBrush* K2Node_MakeStruct_SlateBrush, bool CallFunc_InitializeModView_ReturnValue, bool* CallFunc_HasAnyUserFocus_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue_1, bool CallFunc_NotEqual_StrStr_ReturnValue, struct FSlateBrush* K2Node_MakeStruct_SlateBrush_1, class UUI_ModPage_C* CallFunc_CreateModPageFromStandalone_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_4, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_5);
	void OnModUnInstall__DelegateSignature();
	void OnDisableClicked__DelegateSignature();
	void OnModUninstalledComplete__DelegateSignature();
	void OnModInstall__DelegateSignature();
	void OnModInstalledComplete__DelegateSignature();
	void Like__DelegateSignature();
};

}


