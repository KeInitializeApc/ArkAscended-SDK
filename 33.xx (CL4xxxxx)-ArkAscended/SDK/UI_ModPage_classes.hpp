#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x850 (0xFA8 - 0x758)
// WidgetBlueprintGeneratedClass UI_ModPage.UI_ModPage_C
class UUI_ModPage_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      FadeInDescription;                                 // 0x760(0x8)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      SwitchScreenshot;                                  // 0x768(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      LoadInDownloadedScrrenshot;                        // 0x770(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      OnBeginPlayBackground;                             // 0x778(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      NotifyAnim;                                        // 0x780(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      HoverInDownloadedThumbnail;                        // 0x788(0x8)(Edit, Net, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      OnScreenshotLoaded;                                // 0x790(0x8)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      HoverInPreloadedThumbnail;                         // 0x798(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      OnBeginPlay;                                       // 0x7A0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class USizeBox*                              Box_Card_BrokenFile;                               // 0x7A8(0x8)(ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class USizeBox*                              Box_Card_Installed;                                // 0x7B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class USizeBox*                              Box_Card_OutOfDate;                                // 0x7B8(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	class USizeBox*                              Box_Card_Purchased;                                // 0x7C0(0x8)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UButton*                               Button_Close;                                      // 0x7C8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Comments;                                   // 0x7D0(0x8)(Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	class UButton*                               Button_GameImages;                                 // 0x7D8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	class UButton*                               Button_ModInstalled;                               // 0x7E0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               BUTTON_REPORT;                                     // 0x7E8(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          CategoriesVer;                                     // 0x7F0(0x8)(ExportObject, EditFixedSize, InstancedReference, SubobjectReference)
	class UCFCoreRichText*                       CFCoreRichText_97;                                 // 0x7F8(0x8)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, Interp, AutoWeak)
	class UHorizontalBox*                        DefaultOptions;                                    // 0x800(0x8)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UWrapBox*                              HB_ModCards;                                       // 0x808(0x8)(ConstParm, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	class UImage*                                Image;                                             // 0x810(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	class UImage*                                Image_47;                                          // 0x818(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NoDestructor)
	class UImage*                                Image_96;                                          // 0x820(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, AutoWeak)
	class UImage*                                Image_247;                                         // 0x828(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UImage*                                Image_326;                                         // 0x830(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional, AutoWeak, AssetRegistrySearchable)
	class UImage*                                IMG_AddonsIcon;                                    // 0x838(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_AddonsIcon_1;                                  // 0x840(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_AddonsIcon_2;                                  // 0x848(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_BackGround;                                    // 0x850(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Crown;                                         // 0x858(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	class UImage*                                IMG_DownloadIcon;                                  // 0x860(0x8)(Edit, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UImage*                                IMG_Files;                                         // 0x868(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UImage*                                IMG_GameImagesBackground;                          // 0x870(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class UImage*                                IMG_HB1;                                           // 0x878(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, InstancedReference, SubobjectReference)
	class UImage*                                IMG_HB2;                                           // 0x880(0x8)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UImage*                                IMG_HB3;                                           // 0x888(0x8)(Edit, BlueprintVisible, Parm, ReturnParm, InstancedReference, SubobjectReference)
	class UImage*                                IMG_HB3_1;                                         // 0x890(0x8)(Edit, BlueprintVisible, Parm, ReturnParm, InstancedReference, SubobjectReference, Interp)
	class UButton*                               IMG_ImageZoom;                                     // 0x898(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UImage*                                IMG_ModThumbnail;                                  // 0x8A0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class UImage*                                IMG_PD_Back;                                       // 0x8A8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UImage*                                IMG_PD_Back_1;                                     // 0x8B0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference, Interp)
	class UImage*                                IMG_PD_Back_2;                                     // 0x8B8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_PD_Back_3;                                     // 0x8C0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference, NonTransactional)
	class UImage*                                IMG_Rating_Back;                                   // 0x8C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UImage*                                IMG_Rating_Back_1;                                 // 0x8D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference, Interp)
	class UImage*                                IMG_Rating_Back_2;                                 // 0x8D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_Screenshot;                                    // 0x8E0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UImage*                                IMG_Spacer;                                        // 0x8E8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UImage*                                IMG_Thumbnail;                                     // 0x8F0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Time;                                          // 0x8F8(0x8)(ConstParm, ExportObject, ReturnParm, InstancedReference, SubobjectReference)
	class UImage*                                IMG_Time_1;                                        // 0x900(0x8)(ConstParm, ExportObject, ReturnParm, InstancedReference, SubobjectReference, Interp)
	class UImage*                                IMG_Version;                                       // 0x908(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UOverlay*                              Overlay_FullWIndow;                                // 0x910(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UOverlay*                              Overlay_Window_Rating;                             // 0x918(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	class UOverlay*                              Overlay_Window_Unavailable;                        // 0x920(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UHorizontalBox*                        PaidPurchaseOptions;                               // 0x928(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class USizeBox*                              SizeBox_Description;                               // 0x930(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, InstancedReference, SubobjectReference)
	class USizeBox*                              SizeBox_ImageCarousel;                             // 0x938(0x8)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class USizeBox*                              SizeBox_ModCards;                                  // 0x940(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	class USizeBox*                              SizeBox_PurchasePrice;                             // 0x948(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class USizeBox*                              SizeBox_ThumbnailPremiumStatus;                    // 0x950(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class USpacer*                               Spacer_6;                                          // 0x958(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, RepNotify, Interp, NonTransactional)
	class USpacer*                               Spacer_UnderRating;                                // 0x960(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UWidgetSwitcher*                       Switcher_InstallOrPay;                             // 0x968(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_By;                                           // 0x970(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Class;                                        // 0x978(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Date;                                         // 0x980(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_DateCreated;                                  // 0x988(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_DateUpdated;                                  // 0x990(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_FileSize;                                     // 0x998(0x8)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_FileSizeAmount;                               // 0x9A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_HB;                                           // 0x9A8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Installs;                                     // 0x9B0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Message;                                      // 0x9B8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_ModAuthor;                                    // 0x9C0(0x8)(Edit, Net, ZeroConstructor, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_ModTitle;                                     // 0x9C8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_ModVersion;                                   // 0x9D0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_ModVersionNumber;                             // 0x9D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Name;                                         // 0x9E0(0x8)(ConstParm, Net, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PageCounter;                                  // 0x9E8(0x8)(ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Rating_Percent;                               // 0x9F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Rating_Percent_1;                             // 0x9F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference, Interp)
	class UTextBlock*                            TEXT_Report;                                       // 0xA00(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Report_1;                                     // 0xA08(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, InstancedReference, SubobjectReference, Interp)
	class UTextBlock*                            TEXT_RT;                                           // 0xA10(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_RT_1;                                         // 0xA18(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, InstancedReference, SubobjectReference, Interp)
	class UTextBlock*                            TEXT_RT_2;                                         // 0xA20(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, InstancedReference, SubobjectReference, RepNotify, Interp)
	class UTextBlock*                            TEXT_UpdatedDate;                                  // 0xA28(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTextBlock*                            TextBlock_4;                                       // 0xA30(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, RepNotify, NonTransactional)
	class UTextBlock*                            TextBlock_254;                                     // 0xA38(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UUI_Button_Ark_Global_LikeDislike_C*   UI_Button_Ark_Global_Dislike;                      // 0xA40(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_Button_Ark_Global_LikeDislike_C*   UI_Button_Ark_Global_Like;                         // 0xA48(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_Button_Ark_Global_Purchase_C*      UI_Button_Ark_Global_Purchase;                     // 0xA50(0x8)(BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_Back;                                    // 0xA58(0x8)(Edit, ExportObject, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_Cancel;                                  // 0xA60(0x8)(BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_Button_ScreenshotNavigation_C*     UI_Button_ScreenshotNavigation_Next;               // 0xA68(0x8)(BlueprintReadOnly, EditFixedSize, InstancedReference, SubobjectReference)
	class UUI_Button_ScreenshotNavigation_C*     UI_Button_ScreenshotNavigation_Previous;           // 0xA70(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, InstancedReference, SubobjectReference)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_Uninstall;                               // 0xA78(0x8)(Net, EditFixedSize, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_Button_InstallSwitcher_C*          UI_InstallButton;                                  // 0xA80(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UVerticalBox*                          VerticalBox_208;                                   // 0xA88(0x8)(Edit, ConstParm, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, RepNotify, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UUI_ZoomImage_C*                       UI_ZoomImageUI;                                    // 0xA90(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class UUI_GameSlot_C*                        UI_GameSlotRef;                                    // 0xA98(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInstallProgressMod                   ModDetails;                                        // 0xAA0(0x480)(BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrentImageIndex;                                 // 0xF20(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ScreenshotsIterator;                               // 0xF24(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0xF28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, DuplicateTransient)
	class UUI_RightClickMenu_C*                  UI_DropdownMenuR;                                  // 0xF30(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_Prompt_GoToComments_C*             UI_GoToCommentsPrompt;                             // 0xF38(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, InstancedReference, SubobjectReference)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0xF40(0x10)(BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         CreatedInServerModPage;                            // 0xF50(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_4A1E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_Prompt_Uninstall_C*                UninstallWB;                                       // 0xF58(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnReturnClicked;                                   // 0xF60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FModsDirInfo                          Mods_Dir_Info;                                     // 0xF70(0x20)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class FString                                CurrentLink;                                       // 0xF90(0x10)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTexture2DDynamic*                     CurrentImg;                                        // 0xFA0(0x8)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ModPage_C* GetDefaultObj();

	bool OnEventBroadcasted(enum class EGameModsEvent* Evt, TArray<struct FInstallProgressMod>* ModsList, struct FInstallProgressMod* NewInformation, int32* CallFunc_Array_Length_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_1, struct FInstallProgressMod* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_EqualEqual_Int64Int64_ReturnValue);
	class UWidget* GetClose_B();
	void SequenceEvent__ENTRYPOINTUI_ModPage_2(class UImage** IMG_Screenshot);
	void SequenceEvent__ENTRYPOINTUI_ModPage_1(class UImage** IMG_Screenshot);
	void SequenceEvent__ENTRYPOINTUI_ModPage_0(class UImage** IMG_Mod);
	void SequenceEvent__ENTRYPOINTUI_ModPage(class UImage** IMG_Mod);
	bool BPGamepadReleased(const struct FKey& TheKey);
	bool BPCycleHighlighted();
	bool BPHighlightWidgetOnStart();
	bool BPEscapeClosed();
	void UpdateRatingVisibility();
	bool ShowCarouselButtons(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility* K2Node_Select_Default);
	void HideCarouselButtons();
	bool GetScrrenshotPaginationText(bool Temp_bool_Variable, int32* Temp_int_Variable, int32* CallFunc_Int32_AddOne_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32* K2Node_Select_Default, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue);
	class UTexture2DDynamic* SetScreenshotImageTo(bool* CallFunc_IsValid_ReturnValue);
	bool IfNoModCardsThenCollapse(const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget** CallFunc_Array_Get_Item, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	bool UpdateModCards(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EInstallStatus Temp_byte_Variable_2, bool* CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class EInstallStatus Temp_byte_Variable_10, bool* CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, enum class ESlateVisibility Temp_byte_Variable_13, enum class ESlateVisibility Temp_byte_Variable_14, enum class ESlateVisibility Temp_byte_Variable_15, enum class ESlateVisibility Temp_byte_Variable_16, enum class ESlateVisibility Temp_byte_Variable_17, bool* CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Variable, enum class ESlateVisibility* K2Node_Select_Default, enum class ESlateVisibility* K2Node_Select_Default_1, enum class ESlateVisibility* K2Node_Select_Default_2);
	bool UpdateModPaidState(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, int32* Temp_int_Variable, int32* Temp_int_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, bool CallFunc_GetIsModPaidStatus_Paid, bool CallFunc_GetIsModPaidStatus_Purchased, enum class ESlateVisibility* K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default_1, int32* K2Node_Select_Default_2, enum class ESlateVisibility* K2Node_Select_Default_3);
	bool DebugScreenshotImageIndexing();
	void AddScreenshotToList(int32* CallFunc_Array_Add_ReturnValue, struct FModAsset* CallFunc_Array_Get_Item, int32* CallFunc_Array_Add_ReturnValue_1);
	class UUMGSequencePlayer* SetFirstImageLoaded(bool* CallFunc_IsValid_ReturnValue);
	void SetModVersion(bool* CallFunc_IsValid_ReturnValue, class FText CallFunc_GetModVersion_FinalAmount);
	int64 InitAllVars(class FText* CallFunc_GetDownloadCount_FinalAmount, class FText CallFunc_GetModVersion_FinalAmount, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_GetModName_Name, class FText CallFunc_Conv_StringToText_ReturnValue_1);
	bool UpdateScreenshotButtonsEnabled(class FText CallFunc_GetScrrenshotPaginationText_ReturnValue);
	bool CanGoToPreviousImage(int32 CallFunc_Int32_SubOne_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool CanGoToNextImage(int32* CallFunc_Int32_AddOne_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool UpdateModUnavailableState(bool Temp_bool_Variable, bool* CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, enum class ESlateVisibility* K2Node_Select_Default);
	void InitializeForServerMods();
	void LaunchCommentsURL(const class FString& CallFunc_Concat_StrStr_ReturnValue, bool* CallFunc_CanLaunchURL_ReturnValue, bool* CallFunc_CanLaunchURL_ReturnValue_1);
	void BackFromZoom();
	bool ActionSwitch(const struct FKey& Key, enum class EViewState State, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4);
	class UUMGSequencePlayer* PlayAnimationThumbnail(bool Temp_bool_Variable, class UWidgetAnimation** K2Node_Select_Default);
	void FindThumbnail(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
	class UTexture2DDynamic* SetThumbnailImage(bool* CallFunc_IsValid_ReturnValue);
	class UUMGSequencePlayer* PlayStartinAnimation(bool* CallFunc_IsValid_ReturnValue);
	bool UpdateCancelButtonState(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default);
	bool UpdateUninstallButtonState();
	int32 AssignLastUpdatedInformation(bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_GetYear_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, int32* CallFunc_GetMonth_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Init_All_Widget_Refs(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
	void UpdateAllThemeSettings();
	class UWidget* CloseBNavigation(enum class EUINavigation* Navigation);
	class UWidget* InstallBCustomNavigation(enum class EUINavigation* Navigation, TArray<class UUI_StoreMenu_C*>* CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_StoreMenu_C** CallFunc_Array_Get_Item);
	class UPanelSlot* SetSubCategories(int32 CallFunc_Add_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, struct FCategory* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_1);
	bool CheckIfHideReadMoreButton(int32* CallFunc_Array_Length_ReturnValue);
	TArray<struct FFormatArgumentData> ShortenModeDownloads(int64 Downloads, class FText ShortenDownloads, int32 CallFunc_Conv_Int64ToInt_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double* CallFunc_Multiply_DoubleDouble_ReturnValue, class FText CallFunc_Format_ReturnValue);
	class UUMGSequencePlayer* UpdateScreenshotImage(bool* CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	int32 SetDateAdded(bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_GetYear_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, int32* CallFunc_GetMonth_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue);
	void InitModPageDefault(class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool* CallFunc_InitializeModView_ReturnValue, bool CallFunc_SubscribeViewToEvents_ReturnValue);
	struct FEventReply OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent, bool* CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	class UTexture2DDynamic* OnFail_13897D64427114E2F64F66A69ECC1173();
	class UTexture2DDynamic* OnSuccess_13897D64427114E2F64F66A69ECC1173();
	class UTexture2DDynamic* OnFail_FC28BA524F43B59D65346B94C5AD9301();
	class UTexture2DDynamic* OnSuccess_FC28BA524F43B59D65346B94C5AD9301();
	class UTexture2DDynamic* OnFail_B48CC73F42DFB1C1D2B1B99E249CD6CA();
	class UTexture2DDynamic* OnSuccess_B48CC73F42DFB1C1D2B1B99E249CD6CA();
	class FText OnSearch();
	class FText UpdateSearch();
	void Animation_UpdateThumbnail(class UImage** IMG_Mod);
	void Animation_ScreenshotLoaded(class UImage** IMG_Screenshot);
	void Animation_SwapImage(class UImage** IMG_Screenshot);
	void BndEvt__ModPage_InstallButton_K2Node_ComponentBoundEvent_3_OnClickInstall_B__DelegateSignature();
	void BndEvt__ModPage_Button_208_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ModPage_Button_208_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ModPage_ImageZoom_B_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ModPage_GameImages_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
	void Event_Next_Image();
	void Event_Previous_Image();
	void Construct();
	void Event_Go_Back();
	void BndEvt__UI_ModPage_UI_Button_Ark_Blue_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature();
	void DownloadThumbnailManually();
	void ButtonCall(const struct FKey& Key, enum class EViewState State);
	void BindControllerAction();
	void Install_Button();
	void CallUninstall();
	void BndEvt__UI_ModPage_Button_Comments_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void OpenComments();
	void DestroyUICommentsPrompt();
	void Destruct();
	void OnCategoryResults(const TArray<struct FCategory>& Categories);
	struct FCFCoreError OnCategoryError();
	void LoadAllScreenshots();
	void Update_Button();
	void BndEvt__GameSlot_InstallButton_K2Node_ComponentBoundEvent_2_OnClickUpdate_B__DelegateSignature();
	void BndEvt__ModPage_Report_B_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void PullDescription();
	struct FCFCoreError OnDescriptionError();
	class FString CustomEvent_0();
	class FString CustomEvent_3();
	struct FCFCoreError CustomEvent_4();
	void Event_On_Uninstall_Aprroved();
	void CheckDiskSpaceToInstall();
	void CustomEvent(struct FModsDirInfo* ModsDirInfo);
	struct FCFCoreError CustomEvent_1();
	void PlayNotEnoughAnimation();
	void BndEvt__UI_ModPage_Button_ModInstalled_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	int64 InitModByID();
	struct FCFCoreMod SuccessIGuess();
	struct FCFCoreError How_could_we_possibly_ever_fail();
	void Event_On_CFCore_Init();
	struct FCFCoreError Event_On_CFCore_Init_Error();
	void Event_On_Sync_Installed_Mods_Success();
	struct FCFCoreError Event_On_Sync_Installed_Mods_Error();
	void InitRestOfPage();
	void Pull_Categories();
	void DownloadAllScreenshots();
	void ByPassInit();
	void BndEvt__UI_ModPage_UI_Button_ScreenshotNavigation_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature();
	void BndEvt__UI_ModPage_UI_Button_ScreenshotNavigation_Next_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature();
	void BndEvt__UI_ModPage_UI_Button_Ark_Blue_C_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	void BndEvt__UI_ModPage_UI_Button_Cancel_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void BndEvt__UI_ModPage_UI_Button_Ark_Global_Purchase_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature();
	float Tick(struct FGeometry* MyGeometry);
	void OnCancel();
	FDelegateProperty_ ExecuteUbergraph_UI_ModPage(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class UTexture2DDynamic** K2Node_CustomEvent_Texture_1, class UTexture2DDynamic** K2Node_CustomEvent_Texture, class UTexture2DDynamic** Temp_object_Variable, bool* CallFunc_IsValid_ReturnValue_2, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_3, int32* Temp_int_Variable, bool Temp_bool_Variable, bool* CallFunc_IsValid_ReturnValue_4, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class FText K2Node_Event_Search_Input, class UImage** K2Node_CustomEvent_IMG_Mod, bool* CallFunc_IsValid_ReturnValue_5, bool* CallFunc_IsValid_ReturnValue_6, class UTexture2DDynamic** CallFunc_Array_Get_Item, class UTexture2DDynamic** CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue, int32* Temp_int_Variable_1, int32* Temp_int_Variable_2, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_7, TArray<struct FCategory>* K2Node_CustomEvent_categories, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_IsValid_ReturnValue_8, int32* CallFunc_Array_Length_ReturnValue_1, class UTexture2DDynamic** Temp_object_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, struct FCategory* CallFunc_Array_Get_Item_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool* CallFunc_IsValid_ReturnValue_9, int32 CallFunc_Conv_Int64ToInt_ReturnValue, class FString* K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_10, const class FString& K2Node_CustomEvent_temp_user_token, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FText* CallFunc_Conv_Int64ToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, bool* CallFunc_CanLaunchURL_ReturnValue, class UTexture2DDynamic** K2Node_CustomEvent_Texture_4, bool* CallFunc_IsValid_ReturnValue_11, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_StringLimit_NewString, class FText CallFunc_Conv_StringToText_ReturnValue_3, const class FString& CallFunc_StringLimit_NewString_1, class FText CallFunc_Conv_StringToText_ReturnValue_4, struct FModsDirInfo* K2Node_CustomEvent_ModsDirInfo, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, bool* CallFunc_IsValid_ReturnValue_12, bool* CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace, struct FCFCoreSettings* CallFunc_MakeSettingsFromProjectConfig_ReturnValue, bool* CallFunc_IsValid_ReturnValue_13, bool* CallFunc_IsValid_ReturnValue_14, class UTexture2DDynamic** Temp_object_Variable_2, bool* CallFunc_IsValid_ReturnValue_15, class UTexture2DDynamic** K2Node_CustomEvent_Texture_2, int32* CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, struct FModAsset* CallFunc_Array_Get_Item_3, class UTexture2DDynamic** K2Node_CustomEvent_Texture_5, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_16, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class UTexture2DDynamic** K2Node_CustomEvent_Texture_3, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
	void OnReturnClicked__DelegateSignature();
};

}


