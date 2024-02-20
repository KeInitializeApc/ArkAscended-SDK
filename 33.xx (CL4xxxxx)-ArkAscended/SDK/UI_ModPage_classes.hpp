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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeInDescription;                                 // 0x760(0x8)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      SwitchScreenshot;                                  // 0x768(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      LoadInDownloadedScrrenshot;                        // 0x770(0x8)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      OnBeginPlayBackground;                             // 0x778(0x8)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      HoverInDownloadedThumbnail;                        // 0x780(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      HoverInPreloadedThumbnail;                         // 0x788(0x8)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      OnBeginPlay;                                       // 0x790(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              Box_Card_BrokenFile;                               // 0x798(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              Box_Card_Installed;                                // 0x7A0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              Box_Card_OutOfDate;                                // 0x7A8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              Box_Card_Purchased;                                // 0x7B0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Close;                                      // 0x7B8(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Comments;                                   // 0x7C0(0x8)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_GameImages;                                 // 0x7C8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Report;                                     // 0x7D0(0x8)(Edit, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          CategoriesVer;                                     // 0x7D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UCFCoreRichText*                       CFCoreRichText_97;                                 // 0x7E0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, DuplicateTransient, Interp, AutoWeak)
	class UHorizontalBox*                        DefaultOptions;                                    // 0x7E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class UWrapBox*                              HB_ModCards;                                       // 0x7F0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image;                                             // 0x7F8(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	class UImage*                                Image_96;                                          // 0x800(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, AutoWeak)
	class UImage*                                Image_247;                                         // 0x808(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UImage*                                Image_326;                                         // 0x810(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional, AutoWeak, AssetRegistrySearchable)
	class UImage*                                IMG_AddonsIcon;                                    // 0x818(0x8)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_AddonsIcon_1;                                  // 0x820(0x8)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_AddonsIcon_2;                                  // 0x828(0x8)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_BackGround;                                    // 0x830(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Crown;                                         // 0x838(0x8)(ConstParm, ExportObject, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_DownloadIcon;                                  // 0x840(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Files;                                         // 0x848(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_GameImagesBackground;                          // 0x850(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_HB1;                                           // 0x858(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_HB2;                                           // 0x860(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_HB3;                                           // 0x868(0x8)(BlueprintReadOnly, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_HB3_1;                                         // 0x870(0x8)(BlueprintReadOnly, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UButton*                               IMG_ImageZoom;                                     // 0x878(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_ModThumbnail;                                  // 0x880(0x8)(BlueprintReadOnly, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_PD_Back;                                       // 0x888(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_PD_Back_1;                                     // 0x890(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_PD_Back_2;                                     // 0x898(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_PD_Back_3;                                     // 0x8A0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class UImage*                                IMG_Rating_Back;                                   // 0x8A8(0x8)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Rating_Back_1;                                 // 0x8B0(0x8)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_Rating_Back_2;                                 // 0x8B8(0x8)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_Screenshot;                                    // 0x8C0(0x8)(Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Spacer;                                        // 0x8C8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Time;                                          // 0x8D0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Time_1;                                        // 0x8D8(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_Version;                                       // 0x8E0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UOverlay*                              Overlay_FullWIndow;                                // 0x8E8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UOverlay*                              Overlay_Window_Rating;                             // 0x8F0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UOverlay*                              Overlay_Window_Unavailable;                        // 0x8F8(0x8)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        PaidPurchaseOptions;                               // 0x900(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_Description;                               // 0x908(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_ImageCarousel;                             // 0x910(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_ModCards;                                  // 0x918(0x8)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_PurchasePrice;                             // 0x920(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_ThumbnailPremiumStatus;                    // 0x928(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class USpacer*                               Spacer_6;                                          // 0x930(0x8)(Edit, ExportObject, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, RepNotify, Interp, NonTransactional)
	class USpacer*                               Spacer_UnderRating;                                // 0x938(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       Switcher_InstallOrPay;                             // 0x940(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_By;                                           // 0x948(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Class;                                        // 0x950(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Date;                                         // 0x958(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_DateCreated;                                  // 0x960(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_DateUpdated;                                  // 0x968(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_FileSize;                                     // 0x970(0x8)(Edit, ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_FileSizeAmount;                               // 0x978(0x8)(Edit, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_HB;                                           // 0x980(0x8)(Edit, ConstParm, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Installs;                                     // 0x988(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_ModAuthor;                                    // 0x990(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_ModTitle;                                     // 0x998(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_ModVersion;                                   // 0x9A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_ModVersionNumber;                             // 0x9A8(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PageCounter;                                  // 0x9B0(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PriceOfMod;                                   // 0x9B8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Rating_Percent;                               // 0x9C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Report;                                       // 0x9C8(0x8)(Edit, ConstParm, Net, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Report_1;                                     // 0x9D0(0x8)(Edit, ConstParm, Net, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UTextBlock*                            TEXT_RT;                                           // 0x9D8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_RT_1;                                         // 0x9E0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UTextBlock*                            TEXT_RT_2;                                         // 0x9E8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UTextBlock*                            TEXT_UpdatedDate;                                  // 0x9F0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TextBlock_4;                                       // 0x9F8(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, RepNotify, NonTransactional)
	class UTextBlock*                            TextBlock_254;                                     // 0xA00(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UUI_Button_Ark_Global_LikeDislike_C*   UI_Button_Ark_Global_Dislike;                      // 0xA08(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_LikeDislike_C*   UI_Button_Ark_Global_Like;                         // 0xA10(0x8)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Purchase_C*      UI_Button_Ark_Global_Purchase;                     // 0xA18(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_Back;                                    // 0xA20(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_Cancel;                                  // 0xA28(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_ScreenshotNavigation_C*     UI_Button_ScreenshotNavigation_Next;               // 0xA30(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_ScreenshotNavigation_C*     UI_Button_ScreenshotNavigation_Previous;           // 0xA38(0x8)(Edit, ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_Uninstall;                               // 0xA40(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_InstallSwitcher_C*          UI_InstallButton;                                  // 0xA48(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          VerticalBox_208;                                   // 0xA50(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, RepNotify, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UUI_ZoomImage_C*                       UI_ZoomImageUI;                                    // 0xA58(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UUI_GameSlot_C*                        UI_GameSlotRef;                                    // 0xA60(0x8)(Edit, ConstParm, ExportObject, OutParm, EditConst, GlobalConfig, SubobjectReference)
	struct FInstallProgressMod                   ModDetails;                                        // 0xA68(0x498)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrentImageIndex;                                 // 0xF00(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ScreenshotsIterator;                               // 0xF04(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0xF08(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	class UUI_RightClickMenu_C*                  UI_DropdownMenuR;                                  // 0xF10(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Prompt_GoToComments_C*             UI_GoToCommentsPrompt;                             // 0xF18(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0xF20(0x10)(BlueprintReadOnly, Net, OutParm, Config, InstancedReference, SubobjectReference)
	bool                                         CreatedInServerModPage;                            // 0xF30(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1706[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_Prompt_Uninstall_C*                UninstallWB;                                       // 0xF38(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnReturnClicked;                                   // 0xF40(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FModsDirInfo                          Mods_Dir_Info;                                     // 0xF50(0x20)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CurrentLink;                                       // 0xF70(0x10)(BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2DDynamic*                     CurrentImg;                                        // 0xF80(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<int64>                                IDPurchased_Paid_Mods;                             // 0xF88(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FTimerHandle                          Premium_Check_Handle;                              // 0xF98(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ModPage_C* GetDefaultObj();

	bool OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, bool ReturnValue, struct FInstallProgressMod* TempMod);
	class UWidget* GetClose_B();
	void SequenceEvent__ENTRYPOINTUI_ModPage_2(class UImage* IMG_Screenshot);
	void SequenceEvent__ENTRYPOINTUI_ModPage_1(class UImage* IMG_Screenshot);
	class UImage* SequenceEvent__ENTRYPOINTUI_ModPage_0();
	class UImage* SequenceEvent__ENTRYPOINTUI_ModPage();
	bool Update_Purchase_Button_Enabled();
	bool GetModInCurrentPagePurchased(bool ReturnValue);
	bool DestroyPurchaseResponseHandle();
	TArray<int64> GetIdOfModInCurrentPage(int64 As_ID);
	bool BPGamepadReleased(bool ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1);
	void BPCycleHighlighted(bool ReturnValue);
	void BPHighlightWidgetOnStart(bool ReturnValue);
	void BPEscapeClosed(bool ReturnValue);
	void UpdateRatingVisibility();
	bool ShowCarouselButtons(bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, enum class ESlateVisibility* K2Node_Select_Default);
	void HideCarouselButtons();
	class FString GetScrrenshotPaginationText(class FText ReturnValue, bool* Temp_bool_Variable, int32* CallFunc_Int32_AddOne_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, int32* K2Node_Select_Default, class FText* CallFunc_Conv_StringToText_ReturnValue);
	void SetScreenshotImageTo(class UTexture2DDynamic** Texture, bool* CallFunc_IsValid_ReturnValue);
	int32 IfNoModCardsThenCollapse(const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue);
	void UpdateModCards(enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, enum class EInstallStatus* Temp_byte_Variable_2, bool* CallFunc_IsValid_ReturnValue, enum class ESlateVisibility* Temp_byte_Variable_3, enum class ESlateVisibility* Temp_byte_Variable_4, enum class ESlateVisibility* Temp_byte_Variable_5, enum class ESlateVisibility* Temp_byte_Variable_6, enum class ESlateVisibility* Temp_byte_Variable_7, enum class ESlateVisibility* Temp_byte_Variable_8, enum class ESlateVisibility* Temp_byte_Variable_9, enum class EInstallStatus* Temp_byte_Variable_10, bool* CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility* Temp_byte_Variable_11, enum class ESlateVisibility* Temp_byte_Variable_12, enum class ESlateVisibility* Temp_byte_Variable_13, enum class ESlateVisibility* Temp_byte_Variable_14, enum class ESlateVisibility* Temp_byte_Variable_15, enum class ESlateVisibility* Temp_byte_Variable_16, enum class ESlateVisibility* Temp_byte_Variable_17, bool* CallFunc_IsValid_ReturnValue_2, bool CallFunc_GetIsModValid_IsValid, bool* Temp_bool_Variable, bool CallFunc_GetIsModValid_IsValid_1, enum class ESlateVisibility* K2Node_Select_Default, enum class ESlateVisibility* K2Node_Select_Default_1, enum class ESlateVisibility* K2Node_Select_Default_2);
	bool UpdateModPaidState(enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, bool* Temp_bool_Variable, bool* Temp_bool_Variable_1, enum class ESlateVisibility* Temp_byte_Variable_2, enum class ESlateVisibility* Temp_byte_Variable_3, bool* Temp_bool_Variable_2, enum class ESlateVisibility* Temp_byte_Variable_4, enum class ESlateVisibility* Temp_byte_Variable_5, bool* Temp_bool_Variable_3, bool CallFunc_GetIsModValid_IsValid, enum class ESlateVisibility* K2Node_Select_Default, enum class ESlateVisibility* K2Node_Select_Default_1, int32* K2Node_Select_Default_2, enum class ESlateVisibility* K2Node_Select_Default_3);
	bool DebugScreenshotImageIndexing();
	struct FModAsset AddScreenshotToList(int32* CallFunc_Array_Add_ReturnValue, int32* CallFunc_Array_Add_ReturnValue_1);
	void SetFirstImageLoaded(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	class FText SetModVersion(bool* CallFunc_IsValid_ReturnValue);
	int64 InitAllVars(TArray<int64>* CallFunc_GetIdOfModInCurrentPage_As_Array, class FText CallFunc_GetDownloadCount_FinalAmount, class FText* CallFunc_Conv_StringToText_ReturnValue, class FString* CallFunc_GetAuthorName_CombinedAuthorsNames, class FText* CallFunc_Format_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FString* CallFunc_GetModName_Name, class FText* CallFunc_Conv_StringToText_ReturnValue_2);
	void UpdateScreenshotButtonsEnabled(class FText CallFunc_GetScrrenshotPaginationText_ReturnValue, bool* CallFunc_CanGoToNextImage_ReturnValue, bool* CallFunc_CanGoToPreviousImage_ReturnValue);
	bool CanGoToPreviousImage(int32 CurrentPage, bool ReturnValue, int32* CallFunc_Int32_SubOne_ReturnValue);
	bool CanGoToNextImage(int32 CurrentPage, bool ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue);
	struct FSlateBrush UpdateModUnavailableState(bool* Temp_bool_Variable, bool* CallFunc_IsValid_ReturnValue, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool CallFunc_GetIsModAvailable_Is_Available, enum class ESlateVisibility* K2Node_Select_Default);
	void InitializeForServerMods();
	bool LaunchCommentsURL();
	void BackFromZoom();
	bool ActionSwitch(enum class EViewState State, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4);
	void PlayAnimationThumbnail(bool* AlreadyLoaded, bool* Temp_bool_Variable, class UWidgetAnimation** K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void FindThumbnail(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
	void SetThumbnailImage(class UTexture2DDynamic** Texture, bool* CallFunc_IsValid_ReturnValue);
	void PlayStartinAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	bool UpdateCancelButtonState(bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, bool* CallFunc_IsValid_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default);
	bool UpdateUninstallButtonState(bool CallFunc_GetIsModValid_IsValid, bool CallFunc_GetIsModAvailable_Is_Available);
	class FString AssignLastUpdatedInformation(bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_GetDay_ReturnValue, int32 CallFunc_GetYear_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue);
	void Init_All_Widget_Refs(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
	void UpdateAllThemeSettings();
	void CloseBNavigation(enum class EUINavigation Navigation, class UWidget* ReturnValue);
	class UUI_StoreMenu_C* InstallBCustomNavigation(enum class EUINavigation Navigation, class UWidget* ReturnValue);
	class UPanelSlot* SetSubCategories(class FText* CallFunc_Conv_StringToText_ReturnValue);
	int32 CheckIfHideReadMoreButton(class FString* Text, int32* CallFunc_Multiply_IntInt_ReturnValue, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
	TArray<struct FFormatArgumentData> ShortenModeDownloads(int64* Downloads, class FText ShortenDownloads, class FText _currentSuffix, double* _currentDownloads, int32 CallFunc_Conv_Int64ToInt_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, class FText* CallFunc_Format_ReturnValue);
	bool UpdateScreenshotImage(bool* CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	class FString SetDateAdded(bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_GetDay_ReturnValue, int32 CallFunc_GetYear_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue);
	bool InitModPageDefault(class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_SubscribeViewToEvents_ReturnValue);
	bool OnMouseButtonDown(const struct FEventReply& ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	void OnFail_13897D64427114E2F64F66A69E6EA523(class UTexture2DDynamic** Texture);
	void OnSuccess_13897D64427114E2F64F66A69E6EA523(class UTexture2DDynamic** Texture);
	void OnFail_B48CC73F42DFB1C1D2B1B99E249CD6CA(class UTexture2DDynamic** Texture);
	void OnSuccess_B48CC73F42DFB1C1D2B1B99E249CD6CA(class UTexture2DDynamic** Texture);
	void OnFail_3542F98044515BAC9AFEC2B1BDA4DAA4(class UTexture2DDynamic** Texture);
	void OnSuccess_3542F98044515BAC9AFEC2B1BDA4DAA4(class UTexture2DDynamic** Texture);
	void OnSearch(class FText* Search_Input);
	void UpdateSearch(class FText SearchInput);
	class UImage* Animation_UpdateThumbnail();
	void Animation_ScreenshotLoaded(class UImage* IMG_Screenshot);
	void Animation_SwapImage(class UImage* IMG_Screenshot);
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
	void CustomEvent(struct FModsDirInfo* ModsDirInfo);
	struct FCFCoreError CustomEvent_1();
	void PlayNotEnoughAnimation();
	void DownloadAllScreenshots();
	void BndEvt__UI_ModPage_UI_Button_ScreenshotNavigation_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature();
	void BndEvt__UI_ModPage_UI_Button_ScreenshotNavigation_Next_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature();
	void BndEvt__UI_ModPage_UI_Button_Ark_Blue_C_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	void BndEvt__UI_ModPage_UI_Button_Cancel_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	float Tick();
	void OnCancel();
	void Construct();
	void Event_Go_Back();
	void BndEvt__UI_ModPage_UI_Button_Ark_Blue_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature();
	void DownloadThumbnailManually();
	struct FKey ButtonCall(enum class EViewState State);
	void BindControllerAction();
	void Destruct();
	TArray<struct FCategory> OnCategoryResults();
	struct FCFCoreError OnCategoryError();
	void BndEvt__ModPage_Report_B_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void PullDescription();
	struct FCFCoreError OnDescriptionError();
	class FString CustomEvent_0();
	class FString CustomEvent_3();
	struct FCFCoreError CustomEvent_4();
	int64 InitModByID();
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
	FDelegateProperty_ ExecuteUbergraph_UI_ModPage(class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_4, bool* CallFunc_IsValid_ReturnValue_5, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_3, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_4, bool* Temp_bool_Variable, class FText* K2Node_Event_SearchInput, bool* CallFunc_IsValid_ReturnValue_6, class UImage* K2Node_CustomEvent_IMG_Screenshot_1, class UImage* K2Node_CustomEvent_IMG_Screenshot, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_5, bool* CallFunc_IsValid_ReturnValue_7, class FText* CallFunc_Conv_StringToText_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue_2, const struct FModsDirInfo& K2Node_CustomEvent_ModsDirInfo, struct FCFCoreError* K2Node_CustomEvent_error_9, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_6, bool* CallFunc_IsValid_ReturnValue_8, bool CallFunc_GetIsModAvailable_Is_Available, bool* CallFunc_IsValid_ReturnValue_9, bool* CallFunc_IsValid_ReturnValue_10, bool* CallFunc_IsValid_ReturnValue_11, bool* CallFunc_CanGoToPreviousImage_ReturnValue, bool* CallFunc_CanGoToNextImage_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_7, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, bool* CallFunc_IsValid_ReturnValue_12, bool* CallFunc_IsValid_ReturnValue_13, bool* CallFunc_IsValid_ReturnValue_14, class FText* CallFunc_Conv_StringToText_ReturnValue_3, int32 CallFunc_Conv_Int64ToInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error_8, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_9, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue_10, class UTexture2DDynamic* Temp_object_Variable, bool* CallFunc_IsValid_ReturnValue_15, class UTexture2DDynamic* K2Node_CustomEvent_Texture, struct FCFCoreError* K2Node_CustomEvent_error_7, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, class FString* K2Node_Select_Default, class FText* CallFunc_Conv_StringToText_ReturnValue_4, class FString* CallFunc_Conv_TextToString_ReturnValue_1, struct FCFCoreError* K2Node_CustomEvent_error_6, bool* CallFunc_IsValid_ReturnValue_16, int64* K2Node_CustomEvent_modId, const struct FCFCoreMod& K2Node_CustomEvent_mod, struct FCFCoreError* K2Node_CustomEvent_error_5, struct FCFCoreError* K2Node_CustomEvent_error_4, struct FCFCoreSettings* CallFunc_MakeSettingsFromProjectConfig_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UTexture2DDynamic* Temp_object_Variable_1, class UTexture2DDynamic* K2Node_CustomEvent_Texture_2, struct FCFCoreError* K2Node_CustomEvent_error_3, class UTexture2DDynamic* Temp_object_Variable_2, class UTexture2DDynamic* K2Node_CustomEvent_Texture_4, class UTexture2DDynamic* K2Node_CustomEvent_Texture_3, struct FCFCoreError* K2Node_CustomEvent_error_2, TArray<int64>* CallFunc_GetIdOfModInCurrentPage_As_Array, struct FCFCoreError* K2Node_CustomEvent_error_1, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_2, TArray<int64>* CallFunc_GetIdOfModInCurrentPage_As_Array_1, TArray<int64>* CallFunc_GetIdOfModInCurrentPage_As_Array_2, struct FCFCoreError* K2Node_CustomEvent_error, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_11, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_3, TArray<int64>* CallFunc_GetIdOfModInCurrentPage_As_Array_3, bool* CallFunc_IsValid_ReturnValue_17, bool CallFunc_GetModInCurrentPagePurchased_ReturnValue, class UTexture2DDynamic* K2Node_CustomEvent_Texture_5, class UUI_NotificationManager_C* CallFunc_GetNotifManager_Output, bool* CallFunc_IsValid_ReturnValue_18);
	void OnReturnClicked__DelegateSignature();
};

}


