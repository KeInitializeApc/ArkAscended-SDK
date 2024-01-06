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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      FadeInDescription;                                 // 0x760(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      SwitchScreenshot;                                  // 0x768(0x8)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      LoadInDownloadedScrrenshot;                        // 0x770(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      OnBeginPlayBackground;                             // 0x778(0x8)(ConstParm, BlueprintReadOnly, Parm, Transient, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      NotifyAnim;                                        // 0x780(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      HoverInDownloadedThumbnail;                        // 0x788(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      OnScreenshotLoaded;                                // 0x790(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      HoverInPreloadedThumbnail;                         // 0x798(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      OnBeginPlay;                                       // 0x7A0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              Box_Card_BrokenFile;                               // 0x7A8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class USizeBox*                              Box_Card_Installed;                                // 0x7B0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              Box_Card_OutOfDate;                                // 0x7B8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              Box_Card_Purchased;                                // 0x7C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UButton*                               Button_Close;                                      // 0x7C8(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Comments;                                   // 0x7D0(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UButton*                               Button_GameImages;                                 // 0x7D8(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UButton*                               Button_ModInstalled;                               // 0x7E0(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               BUTTON_REPORT;                                     // 0x7E8(0x8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          CategoriesVer;                                     // 0x7F0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UCFCoreRichText*                       CFCoreRichText_97;                                 // 0x7F8(0x8)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, Interp, AutoWeak)
	class UHorizontalBox*                        DefaultOptions;                                    // 0x800(0x8)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UWrapBox*                              HB_ModCards;                                       // 0x808(0x8)(BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UImage*                                Image;                                             // 0x810(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	class UImage*                                Image_47;                                          // 0x818(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NoDestructor)
	class UImage*                                Image_96;                                          // 0x820(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, AutoWeak)
	class UImage*                                Image_247;                                         // 0x828(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UImage*                                Image_326;                                         // 0x830(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional, AutoWeak, AssetRegistrySearchable)
	class UImage*                                IMG_AddonsIcon;                                    // 0x838(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_AddonsIcon_1;                                  // 0x840(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_AddonsIcon_2;                                  // 0x848(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_BackGround;                                    // 0x850(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Crown;                                         // 0x858(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UImage*                                IMG_DownloadIcon;                                  // 0x860(0x8)(Edit, ConstParm, BlueprintReadOnly, Transient, InstancedReference, SubobjectReference)
	class UImage*                                IMG_Files;                                         // 0x868(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UImage*                                IMG_GameImagesBackground;                          // 0x870(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UImage*                                IMG_HB1;                                           // 0x878(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UImage*                                IMG_HB2;                                           // 0x880(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, Transient, InstancedReference, SubobjectReference)
	class UImage*                                IMG_HB3;                                           // 0x888(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UImage*                                IMG_HB3_1;                                         // 0x890(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference, Interp)
	class UButton*                               IMG_ImageZoom;                                     // 0x898(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UImage*                                IMG_ModThumbnail;                                  // 0x8A0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UImage*                                IMG_PD_Back;                                       // 0x8A8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, InstancedReference, SubobjectReference)
	class UImage*                                IMG_PD_Back_1;                                     // 0x8B0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, InstancedReference, SubobjectReference, Interp)
	class UImage*                                IMG_PD_Back_2;                                     // 0x8B8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, InstancedReference, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_PD_Back_3;                                     // 0x8C0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, InstancedReference, SubobjectReference, NonTransactional)
	class UImage*                                IMG_Rating_Back;                                   // 0x8C8(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UImage*                                IMG_Rating_Back_1;                                 // 0x8D0(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference, Interp)
	class UImage*                                IMG_Rating_Back_2;                                 // 0x8D8(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_Screenshot;                                    // 0x8E0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UImage*                                IMG_Spacer;                                        // 0x8E8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UImage*                                IMG_Thumbnail;                                     // 0x8F0(0x8)(BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Time;                                          // 0x8F8(0x8)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UImage*                                IMG_Time_1;                                        // 0x900(0x8)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference, Interp)
	class UImage*                                IMG_Version;                                       // 0x908(0x8)(Edit, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UOverlay*                              Overlay_FullWIndow;                                // 0x910(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UOverlay*                              Overlay_Window_Rating;                             // 0x918(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UOverlay*                              Overlay_Window_Unavailable;                        // 0x920(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UHorizontalBox*                        PaidPurchaseOptions;                               // 0x928(0x8)(Edit, Net, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class USizeBox*                              SizeBox_Description;                               // 0x930(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class USizeBox*                              SizeBox_ImageCarousel;                             // 0x938(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class USizeBox*                              SizeBox_ModCards;                                  // 0x940(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class USizeBox*                              SizeBox_PurchasePrice;                             // 0x948(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class USizeBox*                              SizeBox_ThumbnailPremiumStatus;                    // 0x950(0x8)(Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class USpacer*                               Spacer_6;                                          // 0x958(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, RepNotify, Interp, NonTransactional)
	class USpacer*                               Spacer_UnderRating;                                // 0x960(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UWidgetSwitcher*                       Switcher_InstallOrPay;                             // 0x968(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_By;                                           // 0x970(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Class;                                        // 0x978(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Date;                                         // 0x980(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_DateCreated;                                  // 0x988(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_DateUpdated;                                  // 0x990(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_FileSize;                                     // 0x998(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_FileSizeAmount;                               // 0x9A0(0x8)(ExportObject, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_HB;                                           // 0x9A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Installs;                                     // 0x9B0(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Message;                                      // 0x9B8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_ModAuthor;                                    // 0x9C0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_ModTitle;                                     // 0x9C8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_ModVersion;                                   // 0x9D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_ModVersionNumber;                             // 0x9D8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Name;                                         // 0x9E0(0x8)(Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PageCounter;                                  // 0x9E8(0x8)(Edit, BlueprintVisible, Net, Parm, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Rating_Percent;                               // 0x9F0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Rating_Percent_1;                             // 0x9F8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, InstancedReference, SubobjectReference, Interp)
	class UTextBlock*                            TEXT_Report;                                       // 0xA00(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Report_1;                                     // 0xA08(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, InstancedReference, SubobjectReference, Interp)
	class UTextBlock*                            TEXT_RT;                                           // 0xA10(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_RT_1;                                         // 0xA18(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference, Interp)
	class UTextBlock*                            TEXT_RT_2;                                         // 0xA20(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference, RepNotify, Interp)
	class UTextBlock*                            TEXT_UpdatedDate;                                  // 0xA28(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UTextBlock*                            TextBlock_4;                                       // 0xA30(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, RepNotify, NonTransactional)
	class UTextBlock*                            TextBlock_254;                                     // 0xA38(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UUI_Button_Ark_Global_LikeDislike_C*   UI_Button_Ark_Global_Dislike;                      // 0xA40(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_Button_Ark_Global_LikeDislike_C*   UI_Button_Ark_Global_Like;                         // 0xA48(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_Button_Ark_Global_Purchase_C*      UI_Button_Ark_Global_Purchase;                     // 0xA50(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_Back;                                    // 0xA58(0x8)(ConstParm, ExportObject, Parm, Transient, InstancedReference, SubobjectReference)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_Cancel;                                  // 0xA60(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	class UUI_Button_ScreenshotNavigation_C*     UI_Button_ScreenshotNavigation_Next;               // 0xA68(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_Button_ScreenshotNavigation_C*     UI_Button_ScreenshotNavigation_Previous;           // 0xA70(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_Uninstall;                               // 0xA78(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UUI_Button_InstallSwitcher_C*          UI_InstallButton;                                  // 0xA80(0x8)(Edit, ConstParm, Net, Transient, InstancedReference, SubobjectReference)
	class UVerticalBox*                          VerticalBox_208;                                   // 0xA88(0x8)(Edit, ConstParm, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, RepNotify, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UUI_ZoomImage_C*                       UI_ZoomImageUI;                                    // 0xA90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_GameSlot_C*                        UI_GameSlotRef;                                    // 0xA98(0x8)(Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInstallProgressMod                   ModDetails;                                        // 0xAA0(0x480)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, InstancedReference, SubobjectReference)
	int32                                        CurrentImageIndex;                                 // 0xF20(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	int32                                        ScreenshotsIterator;                               // 0xF24(0x4)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0xF28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, DuplicateTransient)
	class UUI_RightClickMenu_C*                  UI_DropdownMenuR;                                  // 0xF30(0x8)(ConstParm, ExportObject, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_Prompt_GoToComments_C*             UI_GoToCommentsPrompt;                             // 0xF38(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0xF40(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CreatedInServerModPage;                            // 0xF50(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_3D9E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_Prompt_Uninstall_C*                UninstallWB;                                       // 0xF58(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnReturnClicked;                                   // 0xF60(0x10)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FModsDirInfo                          Mods_Dir_Info;                                     // 0xF70(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CurrentLink;                                       // 0xF90(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UTexture2DDynamic*                     CurrentImg;                                        // 0xFA0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ModPage_C* GetDefaultObj();

	bool OnEventBroadcasted(struct FCFCoreApiResponsePagination* Pagination, bool* ReturnValue, const struct FInstallProgressMod& NewInformation, const struct FInstallProgressMod& TempMod, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue);
	class UWidget* GetClose_B();
	class UImage* SequenceEvent__ENTRYPOINTUI_ModPage_2();
	class UImage* SequenceEvent__ENTRYPOINTUI_ModPage_1();
	class UImage* SequenceEvent__ENTRYPOINTUI_ModPage_0();
	class UImage* SequenceEvent__ENTRYPOINTUI_ModPage();
	bool BPGamepadReleased(bool* ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1);
	void BPCycleHighlighted(bool* ReturnValue);
	void BPHighlightWidgetOnStart(bool* ReturnValue);
	void BPEscapeClosed(bool* ReturnValue);
	void UpdateRatingVisibility();
	enum class ESlateVisibility ShowCarouselButtons();
	void HideCarouselButtons();
	class FString GetScrrenshotPaginationText(class FText* ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue);
	bool SetScreenshotImageTo();
	bool IfNoModCardsThenCollapse(int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue);
	enum class ESlateVisibility UpdateModCards();
	enum class ESlateVisibility UpdateModPaidState(bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue);
	void DebugScreenshotImageIndexing(bool Increase);
	struct FModAsset AddScreenshotToList(int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
	class UUMGSequencePlayer* SetFirstImageLoaded();
	bool SetModVersion(class FText* CallFunc_GetModVersion_FinalAmount);
	int64 InitAllVars(class FText* CallFunc_GetDownloadCount_FinalAmount, class FText* CallFunc_GetModVersion_FinalAmount, class FText* CallFunc_Conv_StringToText_ReturnValue, const struct FCFCoreFileSize& CallFunc_GetModSize_SizeStruct, class FText CallFunc_GetModSize_SizeInText, class FText* CallFunc_Conv_StringToText_ReturnValue_1);
	bool UpdateScreenshotButtonsEnabled();
	bool CanGoToPreviousImage(int32 CurrentPage, bool* ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue);
	bool CanGoToNextImage(int32 CurrentPage, bool* ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue);
	enum class ESlateVisibility UpdateModUnavailableState(struct FSlateBrush* K2Node_MakeStruct_SlateBrush);
	void InitializeForServerMods();
	void LaunchCommentsURL(class FString* CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_CanLaunchURL_ReturnValue, bool CallFunc_CanLaunchURL_ReturnValue_1);
	void BackFromZoom();
	bool ActionSwitch(const struct FKey& Key, enum class EViewState State, bool CallFunc_IsVisible_ReturnValue, bool* K2Node_SwitchEnum_CmpSuccess, bool* K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsVisible_ReturnValue_1);
	class UUMGSequencePlayer* PlayAnimationThumbnail(bool* AlreadyLoaded);
	bool FindThumbnail();
	bool SetThumbnailImage();
	bool PlayStartinAnimation();
	enum class ESlateVisibility UpdateCancelButtonState(bool* CallFunc_BooleanOR_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue);
	bool UpdateUninstallButtonState(bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue, bool* K2Node_SwitchEnum_CmpSuccess);
	class FString AssignLastUpdatedInformation(int32* CallFunc_GetDay_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue_2, class FString* CallFunc_Concat_StrStr_ReturnValue_3, class FText* CallFunc_Conv_StringToText_ReturnValue);
	bool Init_All_Widget_Refs();
	void UpdateAllThemeSettings();
	void CloseBNavigation(enum class EUINavigation Navigation, class UWidget** ReturnValue);
	class UUI_StoreMenu_C* InstallBCustomNavigation(enum class EUINavigation Navigation, class UWidget** ReturnValue, const TArray<class UUI_StoreMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets);
	class UPanelSlot* SetSubCategories(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class FText* CallFunc_Conv_StringToText_ReturnValue);
	int32 CheckIfHideReadMoreButton(bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
	struct FFormatArgumentData ShortenModeDownloads(int64* Downloads, double* _currentDownloads, double* CallFunc_Conv_IntToDouble_ReturnValue, int32* CallFunc_FTrunc_ReturnValue, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, class FText* CallFunc_Format_ReturnValue);
	class UUMGSequencePlayer* UpdateScreenshotImage(bool CallFunc_Array_IsValidIndex_ReturnValue);
	class FString SetDateAdded(int32* CallFunc_GetDay_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue_2, class FString* CallFunc_Concat_StrStr_ReturnValue_3, class FText* CallFunc_Conv_StringToText_ReturnValue);
	bool InitModPageDefault(class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_InitializeModView_ReturnValue);
	bool OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, struct FEventReply* ReturnValue);
	class UTexture2DDynamic* OnFail_13897D64427114E2F64F66A69ECC1173();
	class UTexture2DDynamic* OnSuccess_13897D64427114E2F64F66A69ECC1173();
	class UTexture2DDynamic* OnFail_FC28BA524F43B59D65346B94C5AD9301();
	class UTexture2DDynamic* OnSuccess_FC28BA524F43B59D65346B94C5AD9301();
	class UTexture2DDynamic* OnFail_B48CC73F42DFB1C1D2B1B99E249CD6CA();
	class UTexture2DDynamic* OnSuccess_B48CC73F42DFB1C1D2B1B99E249CD6CA();
	class FText OnSearch();
	class FText UpdateSearch();
	class UImage* Animation_UpdateThumbnail();
	class UImage* Animation_ScreenshotLoaded();
	class UImage* Animation_SwapImage();
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
	void CustomEvent_3(class FString* Temp_user_token);
	struct FCFCoreError CustomEvent_4();
	void Event_On_Uninstall_Aprroved();
	void CheckDiskSpaceToInstall();
	void CustomEvent(struct FModsDirInfo* ModsDirInfo);
	struct FCFCoreError CustomEvent_1();
	void PlayNotEnoughAnimation();
	void BndEvt__UI_ModPage_Button_ModInstalled_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void InitModByID(int64* ModId);
	void SuccessIGuess(const struct FCFCoreMod& Mod);
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
	float Tick(const struct FGeometry& MyGeometry);
	void OnCancel();
	float ExecuteUbergraph_UI_ModPage(int32 EntryPoint, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, class UTexture2DDynamic* K2Node_CustomEvent_Texture, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class FText* K2Node_Event_SearchInput, class UImage* K2Node_CustomEvent_IMG_Screenshot_1, class UImage* K2Node_CustomEvent_IMG_Screenshot, int32* CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Subtract_IntInt_ReturnValue, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_3, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error_6, class FString* CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Array_Index_Variable, class FString* CallFunc_Concat_StrStr_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue_2, class FString* CallFunc_Concat_StrStr_ReturnValue_3, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error_5, class FString* K2Node_CustomEvent_description, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FString* K2Node_CustomEvent_temp_user_token, class FString* CallFunc_Concat_StrStr_ReturnValue_4, class FString* CallFunc_Concat_StrStr_ReturnValue_5, struct FCFCoreError* K2Node_CustomEvent_error_4, class FText CallFunc_Conv_Int64ToText_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_6, bool CallFunc_CanLaunchURL_ReturnValue, class UTexture2DDynamic* K2Node_CustomEvent_Texture_4, class FText* CallFunc_Conv_StringToText_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue_3, class FText* CallFunc_Conv_StringToText_ReturnValue_4, struct FModsDirInfo* K2Node_CustomEvent_ModsDirInfo, struct FCFCoreError* K2Node_CustomEvent_error_3, class UUMGSequencePlayer** CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer** CallFunc_PlayAnimationForward_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error_2, struct FInstallProgressMod* CallFunc_MakeFInstallProgressMod_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_4, bool* CallFunc_Not_PreBool_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error_1, struct FCFCoreError* K2Node_CustomEvent_error, class UTexture2DDynamic* K2Node_CustomEvent_Texture_2, int32* CallFunc_Add_IntInt_ReturnValue_1, class UTexture2DDynamic* K2Node_CustomEvent_Texture_5, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue_2, bool CallFunc_NotEqual_StrStr_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue_2, bool* CallFunc_BooleanAND_ReturnValue, class UTexture2DDynamic* K2Node_CustomEvent_Texture_3);
	void OnReturnClicked__DelegateSignature();
};

}


