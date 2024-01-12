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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      OnBeginPlay;                                       // 0x338(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      Hover;                                             // 0x340(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x348(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UBorder*                               Boarded_Left;                                      // 0x350(0x8)(Edit, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UBorder*                               Boarder_Right;                                     // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UBorder*                               Boarder_Top;                                       // 0x360(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UBorder*                               Border_Down;                                       // 0x368(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UBorder*                               BORDER_LowerPart;                                  // 0x370(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UButton*                               Button_GoToModPage;                                // 0x378(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UUI_Button_UpvoteRate_C*               Button_UpvoteRate;                                 // 0x380(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UImage*                                Image_137;                                         // 0x388(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, EditorOnly, ContainsInstancedReference)
	class UImage*                                Image_326;                                         // 0x390(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional, AutoWeak, AssetRegistrySearchable)
	class UImage*                                IMG_AddonsIcon;                                    // 0x398(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_AddonsIcon_1;                                  // 0x3A0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_AddonsIcon_2;                                  // 0x3A8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_Disable;                                       // 0x3B0(0x8)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UImage*                                IMG_GameImage;                                     // 0x3B8(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UImage*                                IMG_PAIDMODS_BG;                                   // 0x3C0(0x8)(ConstParm, ExportObject, Transient, InstancedReference, SubobjectReference)
	class USizeBox*                              SizeBox_PaidPremium;                               // 0x3C8(0x8)(BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UWidgetSwitcher*                       Switcher_ModState;                                 // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_AuthorName;                                   // 0x3D8(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_BrowseMods;                                   // 0x3E0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_BrowseMods_1;                                 // 0x3E8(0x8)(ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UTextBlock*                            TEXT_BrowseMods_2;                                 // 0x3F0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UTextBlock*                            TEXT_BrowseMods_3;                                 // 0x3F8(0x8)(ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class UTextBlock*                            TEXT_BrowseMods_4;                                 // 0x400(0x8)(ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	class UTextBlock*                            TEXT_ModName;                                      // 0x408(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PRICE;                                        // 0x410(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UUI_Downloads_C*                       UI_Downloads;                                      // 0x418(0x8)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UUI_DownloadSize_C*                    UI_DownloadSize_149;                               // 0x420(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, Interp, NonTransactional, NoDestructor, ContainsInstancedReference)
	class UUI_InstallationStatus_C*              UI_InstallingStatus;                               // 0x428(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            Like;                                              // 0x430(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UUI_Prompt_Uninstall_C*                UninstallWB;                                       // 0x440(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnModInstalledComplete;                            // 0x448(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnModInstall;                                      // 0x458(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnModUninstalledComplete;                          // 0x468(0x10)(ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenuRef;                                      // 0x478(0x8)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                GameVersion;                                       // 0x480(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig)
	FMulticastInlineDelegateProperty_            OnDisableClicked;                                  // 0x490(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x4A0(0x10)(BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FInstallProgressMod                   ModInfo;                                           // 0x4B0(0x480)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         ImageFinishedLoading;                              // 0x930(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_3326[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ImageUrl;                                          // 0x938(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UUI_ParentPage_C*                      ParentPage;                                        // 0x948(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         IsServerModsState;                                 // 0x950(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_3327[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnModUnInstall;                                    // 0x958(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FModsDirInfo                          Mods_Dir_Info;                                     // 0x968(0x20)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FInstalledMod                         Out_Installed_Mod;                                 // 0x988(0x3A8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         DebugScreenshotDownloading;                        // 0xD30(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         IsEnableState;                                     // 0xD31(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_GameSlot_C* GetDefaultObj();

	bool OnEventBroadcasted(enum class EGameModsEvent* Evt, TArray<struct FInstallProgressMod>* ModsList, struct FInstallProgressMod* NewInformation, int32* CallFunc_Array_Length_ReturnValue, struct FInstallProgressMod* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_EqualEqual_Int64Int64_ReturnValue);
	class UImage* SequenceEvent__ENTRYPOINTUI_GameSlot();
	TArray<struct FFormatArgumentData> UpdatePaidPremiumStatus(bool Temp_bool_Variable, bool* CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_GetIsModPaidStatus_Paid, bool CallFunc_GetIsModPaidStatus_Purchased, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default, class FText* K2Node_Select_Default_1);
	bool Change_Slot_Enable_State(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility* K2Node_Select_Default);
	class UUMGSequencePlayer* PlayStartingAnimation(bool* CallFunc_IsValid_ReturnValue);
	void GetDownloadCount(class FText* FinalAmount, class FText CallFunc_FormatDownloadNumber_FinalAmount);
	bool UpdateModCard(bool* CallFunc_IsValid_ReturnValue, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage);
	TArray<struct FFormatArgumentData> GetModSize(class FText* Result, int32 CallFunc_Add_IntInt_ReturnValue, struct FFile* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool* CallFunc_EqualEqual_Int64Int64_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1);
	bool GetAuthors(class FString* Local_TotalAuthors, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_StringLimit_NewString, struct FModAuthor* CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void GetModName(class FString* Name);
	bool ClearAllModsInAllPages(int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UUI_ParentPage_C** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue);
	void UpdateDownloadCount(bool* CallFunc_IsValid_ReturnValue, class FText* CallFunc_GetDownloadCount_FinalAmount);
	int64 UpdateModSize(bool* CallFunc_IsValid_ReturnValue);
	void Update_LikeStatus(bool* CallFunc_IsValid_ReturnValue);
	void UpdateThemeSettings();
	class UUMGSequencePlayer* UpdateImage(bool* CallFunc_IsValid_ReturnValue);
	class FString UpdateAuthors(bool* CallFunc_IsValid_ReturnValue, const class FString& CallFunc_StringLimit_NewString, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UpdateModName(bool* CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetModName_Name);
	bool Try_Set_Game_Version(TArray<int32>* Result, struct FFileIndex* CallFunc_Array_Get_Item, class FString* CallFunc_Split_LeftS, class FString* CallFunc_Split_RightS, bool* CallFunc_Split_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, int32* CallFunc_Array_Add_ReturnValue);
	bool FormatDownloadNumber(int64 Downloads, class FText* FinalAmount, bool CallFunc_Less_Int64Int64_ReturnValue, int64* CallFunc_Divide_Int64Int64_ReturnValue, class FText* CallFunc_Conv_Int64ToText_ReturnValue, int64* CallFunc_Divide_Int64Int64_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText* CallFunc_Conv_Int64ToText_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_1, int64* CallFunc_Divide_Int64Int64_ReturnValue_2, int64* CallFunc_Divide_Int64Int64_ReturnValue_3, class FText* CallFunc_Conv_Int64ToText_ReturnValue_2, class FText* CallFunc_Conv_Int64ToText_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_GetSubstring_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, class FText CallFunc_Conv_StringToText_ReturnValue_3, class FText* CallFunc_Conv_Int64ToText_ReturnValue_4, bool CallFunc_Less_Int64Int64_ReturnValue_1);
	class UUI_ToolTipWidget_C* GenerateModNameToolTipWidget(bool* CallFunc_IsValid_ReturnValue);
	class UUI_ToolTipWidget_C* GenerateAuthorNameToolTipWidget();
	struct FInstallProgressMod InitModInfo();
	double OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent, bool* CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	class UTexture2DDynamic* OnFail_9D95364741CA1B5428249F8ACB4C6143();
	class UTexture2DDynamic* OnSuccess_9D95364741CA1B5428249F8ACB4C6143();
	class UTexture2DDynamic* OnFail_B97DCA8245D1E43D54A2A9BEF5BD8D82();
	class UTexture2DDynamic* OnSuccess_B97DCA8245D1E43D54A2A9BEF5BD8D82();
	void BP_OnItemSelectionChanged(bool bIsSelected);
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
	float Tick(struct FGeometry* MyGeometry);
	class FString RequestDownloadImage();
	bool ExecuteUbergraph_UI_GameSlot(bool* CallFunc_IsValid_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UTexture2DDynamic** K2Node_CustomEvent_Texture_3, class UTexture2DDynamic** K2Node_CustomEvent_Texture_2, class UTexture2DDynamic** Temp_object_Variable, bool* CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, class UObject** Temp_object_Variable_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, const struct FMargin& K2Node_MakeStruct_Margin, bool* CallFunc_IsValid_ReturnValue_2, const struct FMargin& K2Node_MakeStruct_Margin_1, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4, class UTexture2DDynamic** K2Node_CustomEvent_Texture_1, class UTexture2DDynamic** K2Node_CustomEvent_Texture, class UTexture2DDynamic** Temp_object_Variable_2, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool* CallFunc_IsValid_ReturnValue_5, bool* CallFunc_IsValid_ReturnValue_6, class UObject** Temp_object_Variable_3, struct FModsDirInfo* K2Node_CustomEvent_ModsDirInfo, bool Temp_bool_Variable_1, bool* CallFunc_IsValid_ReturnValue_7, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_8, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UImage** K2Node_CustomEvent_IMG_GameImage, const class FString& CallFunc_StringLimit_NewString, const class FString& CallFunc_StringLimit_NewString_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, bool Temp_bool_IsClosed_Variable, bool* CallFunc_IsValid_ReturnValue_9, bool* CallFunc_IsValid_ReturnValue_10, class UObject** K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool* CallFunc_IsValid_ReturnValue_11, bool CallFunc_SubscribeViewToEvents_ReturnValue, bool* CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace, bool* CallFunc_IsValid_ReturnValue_12, bool* CallFunc_InitializeModView_ReturnValue, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool Temp_bool_IsClosed_Variable_1, bool* CallFunc_HasAnyUserFocus_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_13, bool* CallFunc_IsValid_ReturnValue_14, class UObject** K2Node_Select_Default_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5);
	void OnModUnInstall__DelegateSignature();
	void OnDisableClicked__DelegateSignature();
	void OnModUninstalledComplete__DelegateSignature();
	void OnModInstall__DelegateSignature();
	void OnModInstalledComplete__DelegateSignature();
	void Like__DelegateSignature();
};

}


