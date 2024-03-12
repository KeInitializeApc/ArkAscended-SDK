#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x848 (0xFA0 - 0x758)
// WidgetBlueprintGeneratedClass UI_ModPage.UI_ModPage_C
class UUI_ModPage_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      FadeInDescription;                                 // 0x760(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      SwitchScreenshot;                                  // 0x768(0x8)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      LoadInDownloadedScrrenshot;                        // 0x770(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      OnBeginPlayBackground;                             // 0x778(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      HoverInDownloadedThumbnail;                        // 0x780(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      HoverInPreloadedThumbnail;                         // 0x788(0x8)(ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      OnBeginPlay;                                       // 0x790(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              Box_Card_BrokenFile;                               // 0x798(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              Box_Card_Installed;                                // 0x7A0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              Box_Card_OutOfDate;                                // 0x7A8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              Box_Card_Purchased;                                // 0x7B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Close;                                      // 0x7B8(0x8)(ExportObject, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Comments;                                   // 0x7C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_GameImages;                                 // 0x7C8(0x8)(ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               BUTTON_REPORT;                                     // 0x7D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          CategoriesVer;                                     // 0x7D8(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCFCoreRichText*                       CFCoreRichText_97;                                 // 0x7E0(0x8)(Edit, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, Interp, AutoWeak)
	class UHorizontalBox*                        DefaultOptions;                                    // 0x7E8(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	class UWrapBox*                              HB_ModCards;                                       // 0x7F0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image;                                             // 0x7F8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UImage*                                Image_96;                                          // 0x800(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, AutoWeak)
	class UImage*                                Image_247;                                         // 0x808(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UImage*                                Image_326;                                         // 0x810(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional, AutoWeak, AssetRegistrySearchable)
	class UImage*                                IMG_AddonsIcon;                                    // 0x818(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_AddonsIcon_1;                                  // 0x820(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_AddonsIcon_2;                                  // 0x828(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_BackGround;                                    // 0x830(0x8)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Crown;                                         // 0x838(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_DownloadIcon;                                  // 0x840(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Files;                                         // 0x848(0x8)(Net, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_GameImagesBackground;                          // 0x850(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_HB1;                                           // 0x858(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_HB2;                                           // 0x860(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_HB3;                                           // 0x868(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_HB3_1;                                         // 0x870(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UButton*                               IMG_ImageZoom;                                     // 0x878(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_ModThumbnail;                                  // 0x880(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_PD_Back;                                       // 0x888(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_PD_Back_1;                                     // 0x890(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_PD_Back_2;                                     // 0x898(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_PD_Back_3;                                     // 0x8A0(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class UImage*                                IMG_Rating_Back;                                   // 0x8A8(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Rating_Back_1;                                 // 0x8B0(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_Rating_Back_2;                                 // 0x8B8(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_Screenshot;                                    // 0x8C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Spacer;                                        // 0x8C8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Time;                                          // 0x8D0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Time_1;                                        // 0x8D8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_Version;                                       // 0x8E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UOverlay*                              Overlay_FullWIndow;                                // 0x8E8(0x8)(ConstParm, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UOverlay*                              Overlay_Window_Rating;                             // 0x8F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UOverlay*                              Overlay_Window_Unavailable;                        // 0x8F8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        PaidPurchaseOptions;                               // 0x900(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_Description;                               // 0x908(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_ImageCarousel;                             // 0x910(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_ModCards;                                  // 0x918(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_PurchasePrice;                             // 0x920(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_ThumbnailPremiumStatus;                    // 0x928(0x8)(ConstParm, BlueprintVisible, Net, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USpacer*                               Spacer_6;                                          // 0x930(0x8)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, RepNotify, Interp, NonTransactional)
	class USpacer*                               Spacer_UnderRating;                                // 0x938(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       Switcher_InstallOrPay;                             // 0x940(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_By;                                           // 0x948(0x8)(BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Class;                                        // 0x950(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Date;                                         // 0x958(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_DateCreated;                                  // 0x960(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_DateUpdated;                                  // 0x968(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_FileSize;                                     // 0x970(0x8)(BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_FileSizeAmount;                               // 0x978(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_HB;                                           // 0x980(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Installs;                                     // 0x988(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_ModAuthor;                                    // 0x990(0x8)(Edit, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_ModTitle;                                     // 0x998(0x8)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_ModVersion;                                   // 0x9A0(0x8)(Edit, ExportObject, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_ModVersionNumber;                             // 0x9A8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PageCounter;                                  // 0x9B0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PriceOfMod;                                   // 0x9B8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Rating_Percent;                               // 0x9C0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Report;                                       // 0x9C8(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Report_1;                                     // 0x9D0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UTextBlock*                            TEXT_RT;                                           // 0x9D8(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_RT_1;                                         // 0x9E0(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UTextBlock*                            TEXT_RT_2;                                         // 0x9E8(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UTextBlock*                            TEXT_UpdatedDate;                                  // 0x9F0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TextBlock_4;                                       // 0x9F8(0x8)(BlueprintVisible, ExportObject, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, RepNotify, NonTransactional)
	class UTextBlock*                            TextBlock_254;                                     // 0xA00(0x8)(BlueprintVisible, ExportObject, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UUI_Button_Ark_Global_LikeDislike_C*   UI_Button_Ark_Global_Dislike;                      // 0xA08(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_LikeDislike_C*   UI_Button_Ark_Global_Like;                         // 0xA10(0x8)(Edit, Net, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Purchase_C*      UI_Button_Ark_Global_Purchase;                     // 0xA18(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_Back;                                    // 0xA20(0x8)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_Cancel;                                  // 0xA28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_ScreenshotNavigation_C*     UI_Button_ScreenshotNavigation_Next;               // 0xA30(0x8)(Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_ScreenshotNavigation_C*     UI_Button_ScreenshotNavigation_Previous;           // 0xA38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_Uninstall;                               // 0xA40(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_InstallSwitcher_C*          UI_InstallButton;                                  // 0xA48(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          VerticalBox_208;                                   // 0xA50(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, RepNotify, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UUI_ZoomImage_C*                       UI_ZoomImageUI;                                    // 0xA58(0x8)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_GameSlot_C*                        UI_GameSlotRef;                                    // 0xA60(0x8)(Edit, BlueprintReadOnly, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FInstallProgressMod                   ModDetails;                                        // 0xA68(0x498)(Edit, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrentImageIndex;                                 // 0xF00(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ScreenshotsIterator;                               // 0xF04(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0xF08(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, Transient, EditConst, InstancedReference, DuplicateTransient)
	class UUI_RightClickMenu_C*                  UI_DropdownMenuR;                                  // 0xF10(0x8)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Prompt_GoToComments_C*             UI_GoToCommentsPrompt;                             // 0xF18(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0xF20(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         CreatedInServerModPage;                            // 0xF30(0x1)(ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4F6F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_Prompt_Uninstall_C*                UninstallWB;                                       // 0xF38(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnReturnClicked;                                   // 0xF40(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FModsDirInfo                          Mods_Dir_Info;                                     // 0xF50(0x20)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CurrentLink;                                       // 0xF70(0x10)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2DDynamic*                     CurrentImg;                                        // 0xF80(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int64>                                IDPurchased_Paid_Mods;                             // 0xF88(0x10)(ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTimerHandle                          Premium_Check_Handle;                              // 0xF98(0x8)(BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ModPage_C* GetDefaultObj();

	int32 OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, int32 Temp_int_Array_Index_Variable, bool* CallFunc_Greater_IntInt_ReturnValue, const struct FInstallProgressMod& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_Int64Int64_ReturnValue);
	void GetClose_B(class UWidget* Widget);
	class UImage* SequenceEvent__ENTRYPOINTUI_ModPage_2();
	class UImage* SequenceEvent__ENTRYPOINTUI_ModPage_1();
	void SequenceEvent__ENTRYPOINTUI_ModPage_0(class UImage** IMG_Mod);
	void SequenceEvent__ENTRYPOINTUI_ModPage(class UImage** IMG_Mod);
	bool Update_Purchase_Button_Enabled(bool* CallFunc_GetIsModPaidStatus_Premium, bool* CallFunc_GetIsModPaidStatus_Purchased, double* CallFunc_GetIsModPaidStatus_Tier_Price, const class FString& CallFunc_GetIsModPaidStatus_Currency_Symbol);
	bool GetModInCurrentPagePurchased(bool* CallFunc_GetIsModPaidStatus_Premium, bool* CallFunc_GetIsModPaidStatus_Purchased, double* CallFunc_GetIsModPaidStatus_Tier_Price, const class FString& CallFunc_GetIsModPaidStatus_Currency_Symbol);
	void DestroyPurchaseResponseHandle(bool* CallFunc_K2_IsValidTimerHandle_ReturnValue);
	int64 GetIdOfModInCurrentPage(const TArray<int64>& As_Array, TArray<int64>* K2Node_MakeArray_Array);
	bool BPGamepadReleased(struct FKey* TheKey, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1);
	bool BPCycleHighlighted();
	bool BPHighlightWidgetOnStart();
	bool BPEscapeClosed();
	void UpdateRatingVisibility();
	bool ShowCarouselButtons(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void HideCarouselButtons();
	class FText GetScrrenshotPaginationText(bool Temp_bool_Variable, int32* Temp_int_Variable, bool* CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	bool SetScreenshotImageTo();
	int32 IfNoModCardsThenCollapse(int32 Temp_int_Array_Index_Variable, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, int32 Temp_int_Loop_Counter_Variable);
	bool UpdateModCards(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EInstallStatus Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class EInstallStatus Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, enum class ESlateVisibility Temp_byte_Variable_13, enum class ESlateVisibility Temp_byte_Variable_14, enum class ESlateVisibility Temp_byte_Variable_15, enum class ESlateVisibility Temp_byte_Variable_16, enum class ESlateVisibility Temp_byte_Variable_17, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2);
	bool UpdateModPaidState(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, int32* Temp_int_Variable, int32* Temp_int_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, bool* CallFunc_GetIsModPaidStatus_Premium, bool* CallFunc_GetIsModPaidStatus_Purchased, double* CallFunc_GetIsModPaidStatus_Tier_Price, const class FString& CallFunc_GetIsModPaidStatus_Currency_Symbol, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, int32 K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3);
	void DebugScreenshotImageIndexing(bool* Increase);
	int32 AddScreenshotToList(const struct FModAsset& CallFunc_Array_Get_Item);
	class UUMGSequencePlayer* SetFirstImageLoaded(bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	bool SetModVersion(class FText CallFunc_GetModVersion_FinalAmount);
	class FText InitAllVars(bool* CallFunc_GetIsModPaidStatus_Premium, bool* CallFunc_GetIsModPaidStatus_Purchased, double* CallFunc_GetIsModPaidStatus_Tier_Price, const class FString& CallFunc_GetIsModPaidStatus_Currency_Symbol, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_GetModVersion_FinalAmount, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, const class FString& CallFunc_GetAuthorName_CombinedAuthorsNames, struct FCFCoreFileSize* CallFunc_Get_Mod_Size_SizeStruct, class FText CallFunc_Get_Mod_Size_SizeInText, int64 CallFunc_Get_Mod_Size_bytes);
	bool UpdateScreenshotButtonsEnabled();
	bool CanGoToPreviousImage(bool* CallFunc_Array_IsValidIndex_ReturnValue);
	bool CanGoToNextImage(bool* CallFunc_Array_IsValidIndex_ReturnValue);
	bool UpdateModUnavailableState(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void InitializeForServerMods();
	void LaunchCommentsURL(const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_CanLaunchURL_ReturnValue, bool CallFunc_CanLaunchURL_ReturnValue_1);
	void BackFromZoom();
	bool ActionSwitch(const struct FKey& Key, enum class EViewState State, bool CallFunc_IsVisible_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsVisible_ReturnValue_1);
	class UUMGSequencePlayer* PlayAnimationThumbnail(bool AlreadyLoaded, bool Temp_bool_Variable, class UWidgetAnimation* K2Node_Select_Default);
	bool FindThumbnail();
	bool SetThumbnailImage();
	bool PlayStartinAnimation();
	bool UpdateCancelButtonState(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	bool UpdateUninstallButtonState(bool K2Node_SwitchEnum_CmpSuccess);
	class FText AssignLastUpdatedInformation(int32 CallFunc_GetDay_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	bool Init_All_Widget_Refs();
	void UpdateAllThemeSettings();
	class UWidget* CloseBNavigation();
	TArray<class UUI_StoreMenu_C*> InstallBCustomNavigation(class UUI_StoreMenu_C* CallFunc_Array_Get_Item);
	int32 SetSubCategories(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UUI_Option_ModPageCategory_C* CallFunc_Create_ReturnValue, const struct FCategory& CallFunc_Array_Get_Item, bool* CallFunc_Greater_IntInt_ReturnValue, class UPanelSlot** CallFunc_AddChild_ReturnValue);
	int32 CheckIfHideReadMoreButton(const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
	class FText ShortenModeDownloads(double _currentDownloads, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, double* CallFunc_Multiply_IntFloat_ReturnValue, class FText* CallFunc_Conv_DoubleToText_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array);
	class UUMGSequencePlayer* UpdateScreenshotImage(bool* CallFunc_Array_IsValidIndex_ReturnValue);
	class FText SetDateAdded(int32 CallFunc_GetDay_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	bool InitModPageDefault();
	bool OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent, bool* CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue);
	class UTexture2DDynamic* OnFail_13897D64427114E2F64F66A69E6EA523();
	class UTexture2DDynamic* OnSuccess_13897D64427114E2F64F66A69E6EA523();
	class UTexture2DDynamic* OnFail_B48CC73F42DFB1C1D2B1B99E249CD6CA();
	class UTexture2DDynamic* OnSuccess_B48CC73F42DFB1C1D2B1B99E249CD6CA();
	class UTexture2DDynamic* OnFail_3542F98044515BAC9AFEC2B1BDA4DAA4();
	class UTexture2DDynamic* OnSuccess_3542F98044515BAC9AFEC2B1BDA4DAA4();
	class FText OnSearch();
	class FText UpdateSearch();
	void Animation_UpdateThumbnail(class UImage** IMG_Mod);
	class UImage* Animation_ScreenshotLoaded();
	class UImage* Animation_SwapImage();
	void BndEvt__ModPage_InstallButton_K2Node_ComponentBoundEvent_3_OnClickInstall_B__DelegateSignature();
	void BndEvt__ModPage_Button_208_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ModPage_Button_208_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ModPage_ImageZoom_B_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ModPage_GameImages_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
	void Event_Next_Image();
	void Event_Previous_Image();
	void Install_Button();
	void CallUninstall();
	void BndEvt__UI_ModPage_Button_Comments_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void OpenComments();
	void DestroyUICommentsPrompt();
	void LoadAllScreenshots();
	void Update_Button();
	void BndEvt__GameSlot_InstallButton_K2Node_ComponentBoundEvent_2_OnClickUpdate_B__DelegateSignature();
	void Event_On_Uninstall_Aprroved();
	void CheckDiskSpaceToInstall();
	struct FModsDirInfo CustomEvent();
	struct FCFCoreError CustomEvent_1();
	void PlayNotEnoughAnimation();
	void DownloadAllScreenshots();
	void BndEvt__UI_ModPage_UI_Button_ScreenshotNavigation_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature();
	void BndEvt__UI_ModPage_UI_Button_ScreenshotNavigation_Next_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature();
	void BndEvt__UI_ModPage_UI_Button_Ark_Blue_C_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	void BndEvt__UI_ModPage_UI_Button_Cancel_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	float Tick(struct FGeometry* MyGeometry);
	void OnCancel();
	void Construct();
	void Event_Go_Back();
	void BndEvt__UI_ModPage_UI_Button_Ark_Blue_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature();
	void DownloadThumbnailManually();
	void ButtonCall(const struct FKey& Key, enum class EViewState State);
	void BindControllerAction();
	void Destruct();
	TArray<struct FCategory> OnCategoryResults();
	struct FCFCoreError OnCategoryError();
	void BndEvt__ModPage_Report_B_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void PullDescription();
	struct FCFCoreError OnDescriptionError();
	void CustomEvent_0(class FString* Description);
	class FString CustomEvent_3();
	struct FCFCoreError CustomEvent_4();
	void InitModByID(int64 ModId);
	struct FCFCoreMod SuccessIGuess();
	struct FCFCoreError How_could_we_possibly_ever_fail();
	void Event_On_CFCore_Init();
	struct FCFCoreError Event_On_CFCore_Init_Error();
	void Event_On_Sync_Installed_Mods_Success();
	struct FCFCoreError Event_On_Sync_Installed_Mods_Error();
	void InitRestOfPage();
	void Pull_Categories();
	void LoadPageBySkippingInit();
	class FString OnSuccessGeneratePremium();
	struct FCFCoreError OnErrorGeneratePremium();
	void PremiumModChecking();
	TArray<int64> OnSuccessPremiumModsCheck();
	struct FCFCoreError FailedPremiumModsChecks();
	TArray<int64> Success();
	struct FCFCoreError OnError();
	void DisablePurchaseButtonTemporarily();
	void BndEvt__UI_ModPage_UI_Button_Ark_Global_Purchase_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature();
	FDelegateProperty_ ExecuteUbergraph_UI_ModPage(int32* EntryPoint, int32* Temp_int_Variable, class UUI_Prompt_Uninstall_C* CallFunc_Create_ReturnValue, const class FString& Temp_string_Variable, bool Temp_bool_Variable, class UImage** K2Node_CustomEvent_IMG_Mod, class UTexture2DDynamic* CallFunc_Array_Get_Item, class UTexture2DDynamic* CallFunc_Array_Get_Item_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_StringLimit_NewString, const class FString& CallFunc_StringLimit_NewString_1, const struct FModAsset& CallFunc_Array_Get_Item_2, bool* CallFunc_Greater_IntInt_ReturnValue, int32* Temp_int_Variable_1, class UAsyncTaskDownloadImage** CallFunc_DownloadImage_ReturnValue, bool* CallFunc_NotEqual_StrStr_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, class UUI_Prompt_GoToComments_C* CallFunc_Create_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 Temp_int_Loop_Counter_Variable, class UUI_ZoomImage_C* CallFunc_Create_ReturnValue_2, struct FKey* K2Node_CustomEvent_Key, class FText CallFunc_MakeLiteralText_ReturnValue, class UAsyncTaskDownloadImage** CallFunc_DownloadImage_ReturnValue_1, const struct FCategory& CallFunc_Array_Get_Item_3, class UAsyncTaskDownloadImage** CallFunc_DownloadImage_ReturnValue_2, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue_1, bool* CallFunc_NotEqual_StrStr_ReturnValue_1, class UTexture2DDynamic** Temp_object_Variable, class UTexture2DDynamic** K2Node_CustomEvent_Texture, const class FString& K2Node_CustomEvent_description, class UTexture2DDynamic** K2Node_CustomEvent_Texture_1, const class FString& K2Node_Select_Default, const class FString& K2Node_CustomEvent_temp_user_token, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class FText CallFunc_Conv_Int64ToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, bool CallFunc_CanLaunchURL_ReturnValue, const struct FCFCoreSettings& CallFunc_MakeSettingsFromProjectConfig_ReturnValue, class UTexture2DDynamic** Temp_object_Variable_1, class UTexture2DDynamic** K2Node_CustomEvent_Texture_2, class UTexture2DDynamic** Temp_object_Variable_2, int32* Temp_int_Variable_2, class UTexture2DDynamic** K2Node_CustomEvent_Texture_4, class UTexture2DDynamic** K2Node_CustomEvent_Texture_3, class FString* K2Node_CustomEvent_url, bool CallFunc_CanLaunchURL_ReturnValue_1, bool* CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace, bool* CallFunc_K2_IsValidTimerHandle_ReturnValue, bool* CallFunc_GetIsModPaidStatus_Premium, bool* CallFunc_GetIsModPaidStatus_Purchased, double* CallFunc_GetIsModPaidStatus_Tier_Price, const class FString& CallFunc_GetIsModPaidStatus_Currency_Symbol, class UTexture2DDynamic** K2Node_CustomEvent_Texture_5);
	void OnReturnClicked__DelegateSignature();
};

}


