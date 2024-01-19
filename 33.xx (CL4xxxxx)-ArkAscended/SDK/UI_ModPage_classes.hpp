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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      FadeInDescription;                                 // 0x760(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      SwitchScreenshot;                                  // 0x768(0x8)(Edit, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      LoadInDownloadedScrrenshot;                        // 0x770(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      OnBeginPlayBackground;                             // 0x778(0x8)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      NotifyAnim;                                        // 0x780(0x8)(Edit, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      HoverInDownloadedThumbnail;                        // 0x788(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      OnScreenshotLoaded;                                // 0x790(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      HoverInPreloadedThumbnail;                         // 0x798(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      OnBeginPlay;                                       // 0x7A0(0x8)(Edit, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              Box_Card_BrokenFile;                               // 0x7A8(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              Box_Card_Installed;                                // 0x7B0(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              Box_Card_OutOfDate;                                // 0x7B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              Box_Card_Purchased;                                // 0x7C0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Close;                                      // 0x7C8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Comments;                                   // 0x7D0(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_GameImages;                                 // 0x7D8(0x8)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_ModInstalled;                               // 0x7E0(0x8)(BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Report;                                     // 0x7E8(0x8)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          CategoriesVer;                                     // 0x7F0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCFCoreRichText*                       CFCoreRichText_97;                                 // 0x7F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, SubobjectReference, Interp, AutoWeak)
	class UHorizontalBox*                        DefaultOptions;                                    // 0x800(0x8)(Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UWrapBox*                              HB_ModCards;                                       // 0x808(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image;                                             // 0x810(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	class UImage*                                Image_47;                                          // 0x818(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NoDestructor)
	class UImage*                                Image_96;                                          // 0x820(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, AutoWeak)
	class UImage*                                Image_247;                                         // 0x828(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UImage*                                Image_326;                                         // 0x830(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional, AutoWeak, AssetRegistrySearchable)
	class UImage*                                IMG_AddonsIcon;                                    // 0x838(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_AddonsIcon_1;                                  // 0x840(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_AddonsIcon_2;                                  // 0x848(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_BackGround;                                    // 0x850(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Crown;                                         // 0x858(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_DownloadIcon;                                  // 0x860(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Files;                                         // 0x868(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_GameImagesBackground;                          // 0x870(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_HB1;                                           // 0x878(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_HB2;                                           // 0x880(0x8)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_HB3;                                           // 0x888(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_HB3_1;                                         // 0x890(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UButton*                               IMG_ImageZoom;                                     // 0x898(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_ModThumbnail;                                  // 0x8A0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_PD_Back;                                       // 0x8A8(0x8)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_PD_Back_1;                                     // 0x8B0(0x8)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_PD_Back_2;                                     // 0x8B8(0x8)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_PD_Back_3;                                     // 0x8C0(0x8)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class UImage*                                IMG_Rating_Back;                                   // 0x8C8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Rating_Back_1;                                 // 0x8D0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_Rating_Back_2;                                 // 0x8D8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_Screenshot;                                    // 0x8E0(0x8)(Edit, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Spacer;                                        // 0x8E8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Thumbnail;                                     // 0x8F0(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Time;                                          // 0x8F8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Time_1;                                        // 0x900(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_Version;                                       // 0x908(0x8)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UOverlay*                              Overlay_FullWIndow;                                // 0x910(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UOverlay*                              Overlay_Window_Rating;                             // 0x918(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UOverlay*                              Overlay_Window_Unavailable;                        // 0x920(0x8)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        PaidPurchaseOptions;                               // 0x928(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_Description;                               // 0x930(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_ImageCarousel;                             // 0x938(0x8)(EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_ModCards;                                  // 0x940(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_PurchasePrice;                             // 0x948(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_ThumbnailPremiumStatus;                    // 0x950(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USpacer*                               Spacer_6;                                          // 0x958(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	class USpacer*                               Spacer_UnderRating;                                // 0x960(0x8)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       Switcher_InstallOrPay;                             // 0x968(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_By;                                           // 0x970(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Class;                                        // 0x978(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Date;                                         // 0x980(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_DateCreated;                                  // 0x988(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_DateUpdated;                                  // 0x990(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_FileSize;                                     // 0x998(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_FileSizeAmount;                               // 0x9A0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_HB;                                           // 0x9A8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Installs;                                     // 0x9B0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Message;                                      // 0x9B8(0x8)(Edit, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_ModAuthor;                                    // 0x9C0(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_ModTitle;                                     // 0x9C8(0x8)(ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_ModVersion;                                   // 0x9D0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_ModVersionNumber;                             // 0x9D8(0x8)(ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Name;                                         // 0x9E0(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PageCounter;                                  // 0x9E8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Rating_Percent;                               // 0x9F0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Rating_Percent_1;                             // 0x9F8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UTextBlock*                            TEXT_Report;                                       // 0xA00(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Report_1;                                     // 0xA08(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UTextBlock*                            TEXT_RT;                                           // 0xA10(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_RT_1;                                         // 0xA18(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UTextBlock*                            TEXT_RT_2;                                         // 0xA20(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UTextBlock*                            TEXT_UpdatedDate;                                  // 0xA28(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TextBlock_4;                                       // 0xA30(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	class UTextBlock*                            TextBlock_254;                                     // 0xA38(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UUI_Button_Ark_Global_LikeDislike_C*   UI_Button_Ark_Global_Dislike;                      // 0xA40(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_LikeDislike_C*   UI_Button_Ark_Global_Like;                         // 0xA48(0x8)(BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Purchase_C*      UI_Button_Ark_Global_Purchase;                     // 0xA50(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_Back;                                    // 0xA58(0x8)(ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_Cancel;                                  // 0xA60(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_ScreenshotNavigation_C*     UI_Button_ScreenshotNavigation_Next;               // 0xA68(0x8)(ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_ScreenshotNavigation_C*     UI_Button_ScreenshotNavigation_Previous;           // 0xA70(0x8)(Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_Uninstall;                               // 0xA78(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_InstallSwitcher_C*          UI_InstallButton;                                  // 0xA80(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          VerticalBox_208;                                   // 0xA88(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UUI_ZoomImage_C*                       UI_ZoomImageUI;                                    // 0xA90(0x8)(Edit, ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_GameSlot_C*                        UI_GameSlotRef;                                    // 0xA98(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInstallProgressMod                   ModDetails;                                        // 0xAA0(0x480)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrentImageIndex;                                 // 0xF20(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ScreenshotsIterator;                               // 0xF24(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0xF28(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, InstancedReference, DuplicateTransient)
	class UUI_RightClickMenu_C*                  UI_DropdownMenuR;                                  // 0xF30(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Prompt_GoToComments_C*             UI_GoToCommentsPrompt;                             // 0xF38(0x8)(Edit, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0xF40(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         CreatedInServerModPage;                            // 0xF50(0x1)(ConstParm, ExportObject, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_193B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_Prompt_Uninstall_C*                UninstallWB;                                       // 0xF58(0x8)(ConstParm, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnReturnClicked;                                   // 0xF60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FModsDirInfo                          Mods_Dir_Info;                                     // 0xF70(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CurrentLink;                                       // 0xF90(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2DDynamic*                     CurrentImg;                                        // 0xFA0(0x8)(ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ModPage_C* GetDefaultObj();

	int32 OnEventBroadcasted(struct FCFCoreApiResponsePagination* Pagination, bool ReturnValue, int32* CallFunc_Array_Length_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_1, const struct FInstallProgressMod& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue);
	void GetClose_B(class UWidget* Widget);
	void SequenceEvent__ENTRYPOINTUI_ModPage_2(class UImage** IMG_Screenshot);
	void SequenceEvent__ENTRYPOINTUI_ModPage_1(class UImage** IMG_Screenshot);
	void SequenceEvent__ENTRYPOINTUI_ModPage_0(class UImage* IMG_Mod);
	void SequenceEvent__ENTRYPOINTUI_ModPage(class UImage* IMG_Mod);
	bool BPGamepadReleased(bool ReturnValue, bool* CallFunc_IsVisible_ReturnValue, bool* CallFunc_IsVisible_ReturnValue_1);
	void BPCycleHighlighted(bool ReturnValue);
	void BPHighlightWidgetOnStart(bool ReturnValue);
	void BPEscapeClosed(bool ReturnValue);
	void UpdateRatingVisibility();
	enum class ESlateVisibility ShowCarouselButtons(bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void HideCarouselButtons();
	class FText GetScrrenshotPaginationText(class FText ReturnValue, bool Temp_bool_Variable, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default);
	bool SetScreenshotImageTo();
	int32 IfNoModCardsThenCollapse(TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, bool* CallFunc_HasAnyChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue);
	bool UpdateModCards(bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2);
	bool UpdateModPaidState(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, int32 K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3);
	bool DebugScreenshotImageIndexing();
	void AddScreenshotToList(int32* CallFunc_Array_Add_ReturnValue, const struct FModAsset& CallFunc_Array_Get_Item, int32* CallFunc_Array_Add_ReturnValue_1);
	bool SetFirstImageLoaded(bool CallFunc_EqualEqual_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	bool SetModVersion(class FText CallFunc_GetModVersion_FinalAmount);
	class FText InitAllVars(class FText* CallFunc_GetDownloadCount_FinalAmount, class FText CallFunc_GetModVersion_FinalAmount, class FString* CallFunc_GetModName_Name);
	bool UpdateScreenshotButtonsEnabled();
	bool CanGoToPreviousImage(bool ReturnValue, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool CanGoToNextImage(bool ReturnValue, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool UpdateModUnavailableState(bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void InitializeForServerMods();
	bool LaunchCommentsURL();
	void BackFromZoom();
	bool ActionSwitch(const struct FKey& Key, enum class EViewState State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool* CallFunc_IsVisible_ReturnValue, bool* K2Node_SwitchEnum_CmpSuccess, bool* K2Node_SwitchEnum_CmpSuccess_1, bool* CallFunc_IsVisible_ReturnValue_1);
	bool PlayAnimationThumbnail(bool Temp_bool_Variable, class UWidgetAnimation* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	bool FindThumbnail();
	bool SetThumbnailImage();
	bool PlayStartinAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	bool UpdateCancelButtonState(bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	bool UpdateUninstallButtonState(bool* CallFunc_BooleanOR_ReturnValue, bool* K2Node_SwitchEnum_CmpSuccess);
	class FText AssignLastUpdatedInformation(int32 CallFunc_GetMonth_ReturnValue);
	bool Init_All_Widget_Refs();
	void UpdateAllThemeSettings();
	void CloseBNavigation(enum class EUINavigation Navigation, class UWidget* ReturnValue);
	TArray<class UUI_StoreMenu_C*> InstallBCustomNavigation(enum class EUINavigation Navigation, class UWidget* ReturnValue, class UUI_StoreMenu_C* CallFunc_Array_Get_Item);
	bool SetSubCategories(int32 Temp_int_Loop_Counter_Variable, class UUI_Option_ModPageCategory_C* CallFunc_Create_ReturnValue, const struct FCategory& CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_1, class UPanelSlot** CallFunc_AddChild_ReturnValue);
	TArray<class FString> CheckIfHideReadMoreButton(int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
	class FText ShortenModeDownloads(int64* Downloads, class FText* ShortenDownloads, int32* CallFunc_Conv_Int64ToInt_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class FText* CallFunc_Conv_DoubleToText_ReturnValue, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array);
	bool UpdateScreenshotImage(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	class FText SetDateAdded(int32 CallFunc_GetMonth_ReturnValue);
	bool InitModPageDefault(class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1);
	bool OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue);
	class UTexture2DDynamic* OnFail_13897D64427114E2F64F66A69ECC1173();
	class UTexture2DDynamic* OnSuccess_13897D64427114E2F64F66A69ECC1173();
	class UTexture2DDynamic* OnFail_FC28BA524F43B59D65346B94C5AD9301();
	class UTexture2DDynamic* OnSuccess_FC28BA524F43B59D65346B94C5AD9301();
	class UTexture2DDynamic* OnFail_B48CC73F42DFB1C1D2B1B99E249CD6CA();
	class UTexture2DDynamic* OnSuccess_B48CC73F42DFB1C1D2B1B99E249CD6CA();
	class FText OnSearch();
	void UpdateSearch(class FText SearchInput);
	void Animation_UpdateThumbnail(class UImage* IMG_Mod);
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
	void CustomEvent_0(const class FString& Description);
	void CustomEvent_3(const class FString& Temp_user_token);
	struct FCFCoreError CustomEvent_4();
	void Event_On_Uninstall_Aprroved();
	void CheckDiskSpaceToInstall();
	void CustomEvent(struct FModsDirInfo* ModsDirInfo);
	struct FCFCoreError CustomEvent_1();
	void PlayNotEnoughAnimation();
	void BndEvt__UI_ModPage_Button_ModInstalled_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void InitModByID(int64 ModId);
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
	int32 ExecuteUbergraph_UI_ModPage(int32 EntryPoint, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UTexture2DDynamic** K2Node_CustomEvent_Texture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UTexture2DDynamic** K2Node_CustomEvent_Texture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool Temp_bool_Variable, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FText K2Node_Event_Search_Input, class FText K2Node_Event_SearchInput, class UImage** K2Node_CustomEvent_IMG_Mod, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_2, class UTexture2DDynamic* CallFunc_Array_Get_Item, class UTexture2DDynamic* CallFunc_Array_Get_Item_1, int32* CallFunc_Subtract_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class UUI_ZoomImage_C* CallFunc_Create_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_3, enum class EViewState K2Node_CustomEvent_State, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, const TArray<struct FCategory>& K2Node_CustomEvent_categories, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_1, bool CallFunc_NotEqual_StrStr_ReturnValue, const struct FCFCoreError& K2Node_CustomEvent_error_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class UUI_Prompt_Uninstall_C* CallFunc_Create_ReturnValue_1, const struct FCategory& CallFunc_Array_Get_Item_2, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue_1, int32* CallFunc_Conv_Int64ToInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, const struct FCFCoreError& K2Node_CustomEvent_error_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, const class FString& K2Node_CustomEvent_description, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_4, const class FString& K2Node_Select_Default, const struct FCFCoreError& K2Node_CustomEvent_error_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_5, class UTexture2DDynamic** K2Node_CustomEvent_Texture_4, const class FString& CallFunc_StringLimit_NewString, const class FString& CallFunc_StringLimit_NewString_1, const struct FCFCoreError& K2Node_CustomEvent_error_3, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_7, const struct FCFCoreError& K2Node_CustomEvent_error_2, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, bool* CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, const struct FCFCoreError& K2Node_CustomEvent_error_1, class UUI_Prompt_GoToComments_C* CallFunc_Create_ReturnValue_2, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, const struct FCFCoreError& K2Node_CustomEvent_error, class UTexture2DDynamic** K2Node_CustomEvent_Texture_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, int32* CallFunc_Array_Length_ReturnValue_2, const struct FModAsset& CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue, class UTexture2DDynamic** K2Node_CustomEvent_Texture_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue_2, bool CallFunc_NotEqual_StrStr_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UTexture2DDynamic** K2Node_CustomEvent_Texture_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
	void OnReturnClicked__DelegateSignature();
};

}


