#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA48 (0xD78 - 0x330)
// WidgetBlueprintGeneratedClass UI_GameSlot.UI_GameSlot_C
class UUI_GameSlot_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      OnBeginPlay;                                       // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      Hover;                                             // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x348(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UBorder*                               Boarded_Left;                                      // 0x350(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Boarder_Right;                                     // 0x358(0x8)(BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Boarder_Top;                                       // 0x360(0x8)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border_Down;                                       // 0x368(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               BORDER_LowerPart;                                  // 0x370(0x8)(Edit, ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_GoToModPage;                                // 0x378(0x8)(Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_UpvoteRate_C*               Button_UpvoteRate;                                 // 0x380(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_137;                                         // 0x388(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, Interp, EditorOnly, ContainsInstancedReference)
	class UImage*                                Image_326;                                         // 0x390(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional, AutoWeak, AssetRegistrySearchable)
	class UImage*                                IMG_AddonsIcon;                                    // 0x398(0x8)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_AddonsIcon_1;                                  // 0x3A0(0x8)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_AddonsIcon_2;                                  // 0x3A8(0x8)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_Disable;                                       // 0x3B0(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_GameImage;                                     // 0x3B8(0x8)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_PAIDMODS_BG;                                   // 0x3C0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_PaidPremium;                               // 0x3C8(0x8)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       Switcher_ModState;                                 // 0x3D0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_AuthorName;                                   // 0x3D8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_BrowseMods;                                   // 0x3E0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_BrowseMods_1;                                 // 0x3E8(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UTextBlock*                            TEXT_BrowseMods_2;                                 // 0x3F0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UTextBlock*                            TEXT_BrowseMods_3;                                 // 0x3F8(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class UTextBlock*                            TEXT_BrowseMods_4;                                 // 0x400(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	class UTextBlock*                            TEXT_ModName;                                      // 0x408(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PRICE;                                        // 0x410(0x8)(ConstParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Downloads_C*                       UI_Downloads;                                      // 0x418(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, DuplicateTransient)
	class UUI_DownloadSize_C*                    UI_DownloadSize_149;                               // 0x420(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, Interp, NonTransactional, NoDestructor, ContainsInstancedReference)
	class UUI_InstallationStatus_C*              UI_InstallingStatus;                               // 0x428(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            Like;                                              // 0x430(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Prompt_Uninstall_C*                UninstallWB;                                       // 0x440(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnModInstalledComplete;                            // 0x448(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnModInstall;                                      // 0x458(0x10)(Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnModUninstalledComplete;                          // 0x468(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenuRef;                                      // 0x478(0x8)(Edit, ConstParm, BlueprintVisible, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                GameVersion;                                       // 0x480(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Config, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnDisableClicked;                                  // 0x490(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x4A0(0x10)(BlueprintReadOnly, Net, OutParm, Config, InstancedReference, SubobjectReference)
	struct FInstallProgressMod                   ModInfo;                                           // 0x4B0(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ImageFinishedLoading;                              // 0x948(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1EC8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ImageUrl;                                          // 0x950(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, Config, InstancedReference, SubobjectReference)
	class UUI_ParentPage_C*                      ParentPage;                                        // 0x960(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsServerModsState;                                 // 0x968(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1ECA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnModUnInstall;                                    // 0x970(0x10)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FModsDirInfo                          Mods_Dir_Info;                                     // 0x980(0x20)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FInstalledMod                         Out_Installed_Mod;                                 // 0x9A0(0x3C0)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DebugScreenshotDownloading;                        // 0xD60(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsEnableState;                                     // 0xD61(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1ECE[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                IDof_Owned_Mods;                                   // 0xD68(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_GameSlot_C* GetDefaultObj();

	bool OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, bool ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	class UImage* SequenceEvent__ENTRYPOINTUI_GameSlot();
	TArray<struct FFormatArgumentData> UpdatePaidPremiumStatus(bool* Temp_bool_Variable, bool* CallFunc_IsValid_ReturnValue, bool* Temp_bool_Variable_1, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, class FText* CallFunc_Conv_StringToText_ReturnValue, class FText* CallFunc_Format_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default, class FText* K2Node_Select_Default_1);
	void Change_Slot_Enable_State(bool IsEnableState, bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, enum class ESlateVisibility* K2Node_Select_Default);
	void PlayStartingAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	class FText GetDownloadCount();
	bool UpdateModCard(bool* CallFunc_IsValid_ReturnValue);
	void GetModName(class FString* Name);
	bool ClearAllModsInAllPages(bool* CallFunc_IsValid_ReturnValue);
	void UpdateDownloadCount(bool* CallFunc_IsValid_ReturnValue, class FText CallFunc_GetDownloadCount_FinalAmount);
	int64 UpdateModSize(bool* CallFunc_IsValid_ReturnValue);
	void Update_LikeStatus(bool* CallFunc_IsValid_ReturnValue);
	void UpdateThemeSettings();
	void UpdateImage(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	class FString UpdateAuthors(bool* CallFunc_IsValid_ReturnValue, class FString* CallFunc_GetAuthorName_CombinedAuthorsNames, class FText* CallFunc_Conv_StringToText_ReturnValue);
	void UpdateModName(bool* CallFunc_IsValid_ReturnValue, class FString* CallFunc_GetModName_Name);
	struct FFileIndex Try_Set_Game_Version(class FString* CallFunc_Split_LeftS, class FString* CallFunc_Split_RightS, bool* CallFunc_Split_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, int32* CallFunc_Array_Add_ReturnValue);
	bool FormatDownloadNumber(int64* Downloads, class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FString* CallFunc_GetSubstring_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_3, class FString* CallFunc_GetSubstring_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue_2, class FText* CallFunc_Conv_StringToText_ReturnValue_3);
	class UUI_ToolTipWidget_C* GenerateModNameToolTipWidget(class UWidget* ReturnValue, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	class UUI_ToolTipWidget_C* GenerateAuthorNameToolTipWidget(class UWidget* ReturnValue, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue);
	void InitModInfo(struct FInstallProgressMod* NewModInfo);
	double OnMouseButtonDown(const struct FEventReply& ReturnValue, bool* CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float* CallFunc_GetMousePosition_LocationX, bool* CallFunc_GetMousePosition_ReturnValue);
	void OnFail_9D95364741CA1B5428249F8ACB4C6143(class UTexture2DDynamic** Texture);
	void OnSuccess_9D95364741CA1B5428249F8ACB4C6143(class UTexture2DDynamic** Texture);
	void OnFail_B97DCA8245D1E43D54A2A9BEF5BD8D82(class UTexture2DDynamic** Texture);
	void OnSuccess_B97DCA8245D1E43D54A2A9BEF5BD8D82(class UTexture2DDynamic** Texture);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool* bIsExpanded);
	void BP_OnItemSelectionChanged(bool* bIsSelected);
	class UObject* OnListItemObjectSet();
	void InstallMod();
	void UpdateMod();
	void CallUninstall();
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
	float Tick();
	class FString RequestDownloadImage();
	bool ExecuteUbergraph_UI_GameSlot(class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UTexture2DDynamic* K2Node_CustomEvent_Texture_3, class UTexture2DDynamic* K2Node_CustomEvent_Texture_2, class UTexture2DDynamic* Temp_object_Variable, bool* CallFunc_IsValid_ReturnValue, bool* Temp_bool_Variable, class UObject* Temp_object_Variable_1, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer** CallFunc_PlayAnimationForward_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, class UUMGSequencePlayer** CallFunc_PlayAnimationReverse_ReturnValue, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, class UTexture2DDynamic* K2Node_CustomEvent_Texture, class UTexture2DDynamic* Temp_object_Variable_2, bool* CallFunc_IsValid_ReturnValue_4, bool* CallFunc_IsValid_ReturnValue_5, bool* CallFunc_IsValid_ReturnValue_6, const struct FModsDirInfo& K2Node_CustomEvent_ModsDirInfo, struct FCFCoreError* K2Node_CustomEvent_error, class UObject* Temp_object_Variable_3, bool* Temp_bool_Variable_1, bool* CallFunc_IsValid_ReturnValue_7, class FText* CallFunc_Conv_StringToText_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue_2, class UUI_NotificationManager_C* CallFunc_GetNotifManager_Output, class UImage* K2Node_CustomEvent_IMG_GameImage, bool* CallFunc_IsValid_ReturnValue_8, bool* CallFunc_IsValid_ReturnValue_9, bool* CallFunc_IsValid_ReturnValue_10, class UObject** K2Node_Select_Default, bool CallFunc_SubscribeViewToEvents_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_11, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool* CallFunc_HasAnyUserFocus_ReturnValue, bool* CallFunc_IsValid_ReturnValue_12, class UObject** K2Node_Select_Default_1, bool* CallFunc_IsValid_ReturnValue_13, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UUI_ModPage_C** CallFunc_CreateModPageMenu_ModPageRef, class FString* K2Node_CustomEvent_URL_String, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_4, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_5, bool* CallFunc_IsValid_ReturnValue_14);
	void OnModUnInstall__DelegateSignature();
	void OnDisableClicked__DelegateSignature();
	void OnModUninstalledComplete__DelegateSignature();
	void OnModInstall__DelegateSignature();
	void OnModInstalledComplete__DelegateSignature();
	void Like__DelegateSignature();
};

}


