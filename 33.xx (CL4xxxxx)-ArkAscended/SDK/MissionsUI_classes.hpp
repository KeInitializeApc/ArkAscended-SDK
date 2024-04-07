#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E0 (0xEC8 - 0xCE8)
// WidgetBlueprintGeneratedClass MissionsUI.MissionsUI_C
class UMissionsUI_C : public UUI_MissionList
{
public:
	class UVerticalBox*                          ActiveMissionBox;                                  // 0xCE8(0x8)(ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UMissionBiomeCompletionButton_C*       AllMissionsButton;                                 // 0xCF0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   AlphabeticalSortButton;                            // 0xCF8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UMissionBiomeCompletionButton_C*       ArcticBiomeButton;                                 // 0xD00(0x8)(Edit, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UMissionBiomeCompletionButton_C*       BogBiomeButton;                                    // 0xD08(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                DetailsTabBackgroundImage;                         // 0xD10(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   DistanceSortButton;                                // 0xD18(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               EffectsButton;                                     // 0xD20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UScrollBox*                            EffectsScrollBox;                                  // 0xD28(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            EffectsTabButtonLabel;                             // 0xD30(0x8)(Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UVerticalBox*                          EffectsTabPanel;                                   // 0xD38(0x8)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            EmptyListPlaceholderTextBlock;                     // 0xD40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UHorizontalBox*                        FilterPanel;                                       // 0xD48(0x8)(ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class USizeBox*                              Gen1BiomeFilterPanel;                              // 0xD50(0x8)(Edit, BlueprintVisible, Net, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            HexagonRewardsLabel;                               // 0xD58(0x8)(BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                Image_111;                                         // 0xD60(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NoDestructor, AutoWeak)
	class UImage*                                Image_149;                                         // 0xD68(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp, NonTransactional, NoDestructor, ContainsInstancedReference)
	class UImage*                                Image_277;                                         // 0xD70(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp, NonTransactional, NoDestructor, AssetRegistrySearchable)
	class UImage*                                Image_684;                                         // 0xD78(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, NonTransactional, EditorOnly, ContainsInstancedReference, SimpleDisplay)
	class UImage*                                Image_720;                                         // 0xD80(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, NoDestructor, AutoWeak, ContainsInstancedReference, SimpleDisplay)
	class UImage*                                Image_803;                                         // 0xD88(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NonTransactional, AssetRegistrySearchable, SimpleDisplay)
	class UHorizontalBox*                        InnerHexagonRewardsPanel;                          // 0xD90(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UOverlay*                              InnerMissionInfoPanel;                             // 0xD98(0x8)(ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UVerticalBox*                          InnerWorldBuffsRewardsPanel;                       // 0xDA0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            IsMissionActiveLabel;                              // 0xDA8(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            LeaderboardsMissionName;                           // 0xDB0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UMissionBiomeCompletionButton_C*       LunarBiomeButton;                                  // 0xDB8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UBorder*                               MissionDescriptionPanel;                           // 0xDC0(0x8)(BlueprintVisible, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               MissionDetails_LeaderboardsButton;                 // 0xDC8(0x8)(Edit, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            MissionDetails_MissionDescriptionTextBlock;        // 0xDD0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            MissionDetails_MissionNameTextBlock;               // 0xDD8(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   MissionDetails_StartMissionButton;                 // 0xDE0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            MissionDetails_StartMissionButtonText;             // 0xDE8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UHorizontalBox*                        MissionDetailsButtonPanel;                         // 0xDF0(0x8)(Edit, ConstParm, Net, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UCanvasPanel*                          MissionDetailsContainer;                           // 0xDF8(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UEditableTextBox*                      MissionFilter;                                     // 0xE00(0x8)(Edit, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UBorder*                               MissionInfoBorder;                                 // 0xE08(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UWidgetSwitcher*                       MissionInfoTabSwitcher;                            // 0xE10(0x8)(Edit, ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UVerticalBox*                          MissionListBox;                                    // 0xE18(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UVerticalBox*                          MissionListContainer;                              // 0xE20(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UBorder*                               MissionListPanel;                                  // 0xE28(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            MissionNotCompletedTextBlock;                      // 0xE30(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UVerticalBox*                          MissionPrereqListPanel;                            // 0xE38(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UVerticalBox*                          MissionPrerequisitePanel;                          // 0xE40(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               MissionsButton;                                    // 0xE48(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UVerticalBox*                          MissionsTabPanel;                                  // 0xE50(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UBorder*                               MissionStatusPanel;                                // 0xE58(0x8)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UMissionBiomeCompletionButton_C*       OceanBiomeButton;                                  // 0xE60(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            RewardsLabelTextBlock;                             // 0xE68(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UVerticalBox*                          RewardsPanel;                                      // 0xE70(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UBorder*                               SelectAMissionPanel;                               // 0xE78(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               ShowMissionInfoButton;                             // 0xE80(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                TabBackgroundImage;                                // 0xE88(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UWidgetSwitcher*                       TabBgSwitcher;                                     // 0xE90(0x8)(Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TextBlock_855;                                     // 0xE98(0x8)(BlueprintVisible, ExportObject, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, EditorOnly, NoDestructor, AutoWeak, AssetRegistrySearchable, SimpleDisplay)
	class UVerticalBox*                          TrackedMissionBox;                                 // 0xEA0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   TrackMissionButton;                                // 0xEA8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            TrackMissionLabel;                                 // 0xEB0(0x8)(ConstParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UMissionBiomeCompletionButton_C*       VolcanicBiomeButton;                               // 0xEB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UVerticalBox*                          WorldBuffsRewardsPanel;                            // 0xEC0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMissionsUI_C* GetDefaultObj();

};

}


