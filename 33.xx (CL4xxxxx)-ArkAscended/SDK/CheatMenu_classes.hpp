#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x431 (0xEA9 - 0xA78)
// WidgetBlueprintGeneratedClass CheatMenu.CheatMenu_C
class UCheatMenu_C : public UUI_DebugSpawnMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA78(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UCheckBox*                             BabyCheck;                                         // 0xA80(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UCheckBox*                             BlueprintCheckBox;                                 // 0xA88(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference)
	class UCanvasPanel*                          CharacterPresetOptions;                            // 0xA90(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UCanvasPanel*                          CheatOptions;                                      // 0xA98(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UEditableTextBox*                      CheatStringAddition;                               // 0xAA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UButton*                               ClearFilterButton;                                 // 0xAA8(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	class UButton*                               CloseButton;                                       // 0xAB0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UCheckBox*                             DebugTouchCheck;                                   // 0xAB8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UCanvasPanel*                          DebugView;                                         // 0xAC0(0x8)(BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UDataListPanel*                        DinoList;                                          // 0xAC8(0x8)(Edit, ExportObject, Config, EditConst, SubobjectReference)
	class UCanvasPanel*                          DinoOptions;                                       // 0xAD0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Config, EditConst, SubobjectReference)
	class UEditableTextBox*                      DinoSpawnLevelBox;                                 // 0xAD8(0x8)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UCanvasPanel*                          EggOptions;                                        // 0xAE0(0x8)(Edit, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	class UCheckBox*                             EngramCheckBox;                                    // 0xAE8(0x8)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
	class UCheckBox*                             FemaleCheck;                                       // 0xAF0(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UCheckBox*                             FertilizedCheckBox;                                // 0xAF8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UCanvasPanel*                          FilterPanel;                                       // 0xB00(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UImage*                                Image;                                             // 0xB08(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	class UImage*                                Image_4;                                           // 0xB10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, NonTransactional)
	class UImage*                                Image_48;                                          // 0xB18(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, NoDestructor)
	class UImage*                                Image_97;                                          // 0xB20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, AutoWeak)
	class UCheckBox*                             IncludeItemsCheck;                                 // 0xB28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class UCanvasPanel*                          ItemOptions;                                       // 0xB30(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UCheckBox*                             MaleCheck;                                         // 0xB38(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UEditableTextBox*                      NamesFilterInputField;                             // 0xB40(0x8)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UEditableTextBox*                      NumberEggsToSpawn;                                 // 0xB48(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UEditableTextBox*                      NumToSpawnTextBox;                                 // 0xB50(0x8)(ConstParm, ExportObject, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	class UEditableTextBox*                      QualityToSpawnTextBox;                             // 0xB58(0x8)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	class UTextBlock*                            ReferenceText;                                     // 0xB60(0x8)(Edit, BlueprintReadOnly, Parm, Config, EditConst, SubobjectReference)
	class UCheckBox*                             SaddleCheck;                                       // 0xB68(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UCheckBox*                             TameCheck;                                         // 0xB70(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UButton*                               ToDinosButton;                                     // 0xB78(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	int32                                        ScreenTracker;                                     // 0xB80(0x4)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_29D7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FText>                          FolderNames;                                       // 0xB88(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class UUI_DebugSpawnMenuEntry*>       DebugEntries;                                      // 0xB98(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<class FString>                        DinoNames;                                         // 0xBA8(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<class FString>                        DinoEggNames;                                      // 0xBB8(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FString>                        CheatNames;                                        // 0xBC8(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	TArray<class FString>                        CheatStrings;                                      // 0xBD8(0x10)(ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FString>                        CharacterPresetStrings;                            // 0xBE8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<struct FCheatMenuCharacterLevelPreset> CharacterPresetLevel;                              // 0xBF8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Config, EditConst, SubobjectReference)
	TArray<class FString>                        ScorchedEarthDinoNames;                            // 0xC08(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<enum class ECheatMenuOptionTypes>     OptionTypes;                                       // 0xC18(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	TArray<class FString>                        ScorchedEarthEggNames;                             // 0xC28(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	TArray<struct FCheatMapJumpInfo>             IslandMapJumpInfos;                                // 0xC38(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FString>                        MapOpenCheats;                                     // 0xC48(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FString>                        OpenMapNames;                                      // 0xC58(0x10)(ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<struct FCheatMapJumpInfo>             SE_MapJumpInfos;                                   // 0xC68(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	TArray<class FString>                        ReferenceTexts;                                    // 0xC78(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<struct FCheatMapJumpInfo>             CenterMapJumpInfos;                                // 0xC88(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<struct FCheatMapJumpInfo>             AberrationMapJumpInfos;                            // 0xC98(0x10)(ExportObject, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<struct FCheatMapJumpInfo>             RagnarokMapJumpInfos;                              // 0xCA8(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	TArray<struct FCheatMapJumpInfo>             ExtinctionMapJumpInfos;                            // 0xCB8(0x10)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<struct FCheatMapJumpInfo>             ValgueroMapJumpInfos;                              // 0xCC8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<struct FCheatMapJumpInfo>             CrystalIslesMapJumpInfos;                          // 0xCD8(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<struct FCheatMapJumpInfo>             GenesisMapJumpInfos;                               // 0xCE8(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<struct FCheatMapJumpInfo>             Gen2MapJumpInfos;                                  // 0xCF8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	TArray<struct FCheatMapJumpInfo>             LostIslandMapJumpInfos;                            // 0xD08(0x10)(ConstParm, Net, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<bool>                                 CheatConfirmation;                                 // 0xD18(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FString>                        IslandBossStrings;                                 // 0xD28(0x10)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FString>                        IslandBossCheats;                                  // 0xD38(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<class FString>                        SEBossCheats;                                      // 0xD48(0x10)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FString>                        SEBossStrings;                                     // 0xD58(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<class FString>                        AberrationBossStrings;                             // 0xD68(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference)
	TArray<class FString>                        AberrationBossCheats;                              // 0xD78(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FString>                        ExtinctionBossCheats;                              // 0xD88(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Config, EditConst, SubobjectReference)
	TArray<class FString>                        ExtinctionBossStrings;                             // 0xD98(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
	TArray<class FString>                        CenterBossCheats;                                  // 0xDA8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<class FString>                        CenterBossStrings;                                 // 0xDB8(0x10)(BlueprintReadOnly, Net, Config, EditConst, SubobjectReference)
	TArray<class FString>                        RagnarokBossCheats;                                // 0xDC8(0x10)(Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FString>                        RagnarokBossStrings;                               // 0xDD8(0x10)(Edit, Net, Config, EditConst, SubobjectReference)
	TArray<class FString>                        ValgueroBossCheats;                                // 0xDE8(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	TArray<class FString>                        ValgueroBossStrings;                               // 0xDF8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FString>                        AberrationUniqueDinoNames;                         // 0xE08(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<class FString>                        AberrantDinoNames;                                 // 0xE18(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	TArray<class FString>                        Community_Dino_Names;                              // 0xE28(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
	TArray<class FString>                        ExtinctionDinoNames;                               // 0xE38(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FString>                        ExtinctionCorruptDinoNames;                        // 0xE48(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<bool>                                 OptionsIsEngram;                                   // 0xE58(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<int32>                                OptionsQuantity;                                   // 0xE68(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FString>                        ExtionctionEggNames;                               // 0xE78(0x10)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<class FString>                        EventDinoNames;                                    // 0xE88(0x10)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                FilterName;                                        // 0xE98(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
	bool                                         IgnoreFilterChange;                                // 0xEA8(0x1)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UCheatMenu_C* GetDefaultObj();

	bool BPEscapeClosed(bool* ReturnValue, class AShooterHUD* CallFunc_GetShooterHUD_ReturnValue);
	void ClearFilter(bool* ShouldRefresh);
	bool GetBossSpawnArray(TArray<class FString>* BossNames, const TArray<class FString>& BossCheats);
	bool CloseMenu(class AShooterHUD* CallFunc_GetShooterHUD_ReturnValue);
	bool GetMapOpenListsForEntry(bool Success);
	class UCheatMenuMapOpenButton_C* CreateMapOpenButton(class FString* Name, class FName MapName, class UUI_DebugSpawnMenuEntry** CreatedWidget, class FText* CallFunc_Conv_StringToText_ReturnValue);
	class UUI_DebugSpawnMenuEntry* CreateMapOpenEntry(class FString* Name, TArray<class FString>* Array, class FName* CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	int32 GetMapJumpArray(const TArray<class FString>& EmptyStringArray, bool CallFunc_LessEqual_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, TArray<struct FCheatMapJumpInfo>* CallFunc_GetMapJumpListForEntry_MapJumps, int32 CallFunc_Array_Add_ReturnValue);
	class UCheatMapJumpButton_C* CreateMapJumpButton(class UUI_DebugSpawnMenuEntry** CreatedWidget, class FText* CallFunc_Conv_StringToText_ReturnValue);
	struct FCheatMapJumpInfo CreateMapJumpEntry(class UUI_DebugSpawnMenuEntry** CallFunc_CreateMapJumpButton_CreatedWidget, int32 CallFunc_Array_Add_ReturnValue);
	bool GetMapJumpListForEntry(bool Success);
	bool AddAllEntriesButtonForItems(TArray<TSoftClassPtr<class UPrimalItem>>* Items);
	class UCheatMenuItemAllButton_C* CreateButtonFromAllEntries(TArray<TSoftClassPtr<class UPrimalItem>>* Items, class UCheatMenuItemAllButton_C** ReturnValue, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue);
	void HideAllOptions();
	enum class ESlateVisibility SetupOptionsBarForFolder();
	bool GetCharacterPresetsForEntry(const TArray<struct FCheatMenuCharacterLevelPreset>& CharacterPresetLevel, TArray<struct FCheatMenuCharacterPresetItems>* CharacterPresetItem, bool Success);
	bool GetCheatListsForEntry(TArray<bool>* RequireConfirm, bool Success, const TArray<class FString>& CallFunc_GetBossSpawnArray_BossNames);
	bool GetEggListsForEntry(bool Success);
	bool GetDinoListsForEntry(bool Success);
	struct FCheatMenuCharacterLevelPreset CreateCharacterPresetEntry(const class FString& InString, TArray<struct FCheatMenuCharacterLevelPreset>* LevelLists, class FText* CallFunc_Conv_StringToText_ReturnValue, class UUI_DebugSpawnMenuEntry* CallFunc_CreateButtonFromCharacterPresets_CreatedWidget, int32 CallFunc_Array_Add_ReturnValue);
	bool CreateCheatEntry(class FString* Name, TArray<class FString>* Array, bool CallFunc_Array_IsValidIndex_ReturnValue, class UUI_DebugSpawnMenuEntry* CallFunc_CreateCheatButtonFromBlueprintID_CreatedWidget, int32 CallFunc_Array_Add_ReturnValue);
	class UUI_DebugSpawnMenuEntry* CreateEggEntry(class FString* Name, const TArray<TSoftClassPtr<class UPrimalItem>>& UnFertEggs, TArray<TSoftClassPtr<class UPrimalItem>>* FertEggs, bool CallFunc_IsValidSoftClassReference_ReturnValue, bool CallFunc_IsValidSoftClassReference_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	class UCheatMenuButton_C* CreateDinoEntry(const TArray<TSoftClassPtr<class APrimalDinoCharacter>>& DinoBPList, TArray<TSoftClassPtr<class UPrimalItem>>* DinoSaddleList, bool CallFunc_IsValidSoftClassReference_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	bool SetupOptionBar(class FText* CallFunc_Conv_IntToText_ReturnValue);
	bool CreateButtonFromCharacterPresets(class FText* Name, const struct FCheatMenuCharacterLevelPreset& Levels, struct FCheatMenuCharacterPresetItems* Items, class UUI_DebugSpawnMenuEntry** CreatedWidget);
	class UCheatMenuFolderButton_C* CreateFolderButtons(class FText* Name, class UTexture2D** Image);
	class UCheatMenuCheatButton_C* CreateCheatButtonFromBlueprintID(class FString* Name, bool* RequireConfirm, bool* Allow_Additional_String, class UUI_DebugSpawnMenuEntry** CreatedWidget, class FText* CallFunc_Conv_StringToText_ReturnValue);
	bool CreateEggItemButtonFromBlueprintIDs(class FString* Name, TSoftClassPtr<class UPrimalItem>* FertilizedEgg, class UUI_DebugSpawnMenuEntry** CreatedWidget, class FText* CallFunc_Conv_StringToText_ReturnValue);
	class UCheatMenuItemButton_C* CreateItemButtonFromBlueprintID(TSoftClassPtr<class UPrimalItem>* Blueprint, class UUI_DebugSpawnMenuEntry** CreatedWidget, bool CallFunc_IsValidSoftClassReference_ReturnValue);
	class UCheatMenuItemButton_C* CreateItemButtonAndSetText(class FString* ItemName, class UCheatMenuButton_C** CreatedButton, class FText* CallFunc_Conv_StringToText_ReturnValue);
	class UCheatMenuButton_C* CreateDinoButtonAndSetText(class UCheatMenuButton_C** CreatedButton, class FText* CallFunc_Conv_StringToText_ReturnValue);
	void Construct();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_126_OnButtonClickedEvent__DelegateSignature();
	class FText BndEvt__EditableTextBox_139_K2Node_ComponentBoundEvent_360_OnEditableTextBoxCommittedEvent__DelegateSignature(enum class ETextCommit CommitMethod);
	class FText BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature(enum class ETextCommit CommitMethod);
	void BndEvt__ToDinosButton_K2Node_ComponentBoundEvent_319_OnButtonPressedEvent__DelegateSignature();
	class FText BndEvt__NumberEggsToSpawn_K2Node_ComponentBoundEvent_232_OnEditableTextBoxCommittedEvent__DelegateSignature(enum class ETextCommit CommitMethod);
	int32 Screen_Changed();
	void OnHome();
	bool BndEvt__BlueprintCheckBox_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature();
	bool BndEvt__SpawnMenu_TameCheck_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature();
	class FText BndEvt__CheatMenu_NamesFilterInputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature();
	void BndEvt__CheatMenu_Button_131_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	bool ExecuteUbergraph_CheatMenu(int32 EntryPoint, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32* CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32* CallFunc_Add_IntInt_ReturnValue_2, int32* CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, int32* CallFunc_Add_IntInt_ReturnValue_4, class FText K2Node_ComponentBoundEvent_Text_3, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_2, class FString* CallFunc_Conv_TextToString_ReturnValue, class FText K2Node_ComponentBoundEvent_Text_2, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_1, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FText* CallFunc_Conv_IntToText_ReturnValue, class FText* CallFunc_Conv_IntToText_ReturnValue_1, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class FString* CallFunc_Conv_TextToString_ReturnValue_2, class FText* CallFunc_Conv_IntToText_ReturnValue_2, int32 Temp_int_Array_Index_Variable_4, int32* K2Node_CustomEvent_ToScreen, class UUI_DebugSpawnMenuEntry* CallFunc_CreateFolderButtons_outWidget, bool* K2Node_SwitchEnum_CmpSuccess, TArray<TSoftClassPtr<class UPrimalItem>>* CallFunc_GetDinoListsForEntry_Saddles, const TArray<TSoftClassPtr<class UPrimalItem>>& CallFunc_GetEggListsForEntry_DinoEggBlueprintIDs, TArray<TSoftClassPtr<class UPrimalItem>>* CallFunc_GetEggListsForEntry_DinoFertEggBlueprintIDs, TArray<class FString>* CallFunc_GetCheatListsForEntry_CheatStrings, TArray<bool>* CallFunc_GetCheatListsForEntry_RequireConfirm, bool* CallFunc_GetCheatListsForEntry_AllowAdditionalString, bool CallFunc_GetCheatListsForEntry_Success, const TArray<struct FCheatMenuCharacterLevelPreset>& CallFunc_GetCharacterPresetsForEntry_CharacterPresetLevel, const TArray<struct FCheatMenuCharacterPresetItems>& CallFunc_GetCharacterPresetsForEntry_CharacterPresetItem, TArray<struct FCheatMapJumpInfo>* CallFunc_GetMapJumpListForEntry_MapJumps, const TArray<class FString>& CallFunc_GetMapOpenListsForEntry_CheatStrings, class UUI_DebugSpawnMenuEntry* CallFunc_CreateFolderButtons_outWidget_1, int32 CallFunc_Array_Add_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, const TArray<class FString>& CallFunc_GetBossSpawnArray_BossNames, class FText K2Node_ComponentBoundEvent_Text, class FString* CallFunc_Conv_TextToString_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue_2);
};

}


