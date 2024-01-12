#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class GameplayTags.BlueprintGameplayTagLibrary
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBlueprintGameplayTagLibrary* GetDefaultObj();

	bool RemoveGameplayTag(struct FGameplayTag* Tag);
	bool NotEqual_TagTag();
	bool NotEqual_TagContainerTagContainer();
	bool NotEqual_GameplayTagContainer();
	bool NotEqual_GameplayTag();
	bool MatchesTag(struct FGameplayTag* TagOne, struct FGameplayTag* TagTwo);
	bool MatchesAnyTags(struct FGameplayTag* TagOne);
	struct FGameplayTagContainer MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& Value);
	struct FGameplayTag MakeLiteralGameplayTag(const struct FGameplayTag& Value);
	struct FGameplayTagQuery MakeGameplayTagQuery(struct FGameplayTagQuery* TagQuery);
	struct FGameplayTagContainer MakeGameplayTagContainerFromTag(struct FGameplayTag* SingleTag);
	struct FGameplayTagContainer MakeGameplayTagContainerFromArray();
	bool IsTagQueryEmpty(struct FGameplayTagQuery* TagQuery);
	bool IsGameplayTagValid(const struct FGameplayTag& GameplayTag);
	bool HasTag(struct FGameplayTag* Tag);
	bool HasAnyTags();
	bool HasAllTags();
	bool HasAllMatchingGameplayTags(TScriptInterface<class IGameplayTagAssetInterface>* TagContainerInterface);
	class FName GetTagName(const struct FGameplayTag& GameplayTag);
	int32 GetNumGameplayTagsInContainer();
	class FString GetDebugStringFromGameplayTagContainer();
	class FString GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag);
	TArray<class AActor*> GetAllActorsOfClassMatchingTagQuery(class UClass* ActorClass, const struct FGameplayTagQuery& GameplayTagQuery);
	bool EqualEqual_GameplayTagContainer();
	bool EqualEqual_GameplayTag();
	bool DoesTagAssetInterfaceHaveTag(TScriptInterface<class IGameplayTagAssetInterface>* TagContainerInterface, struct FGameplayTag* Tag);
	bool DoesContainerMatchTagQuery(struct FGameplayTagQuery* TagQuery);
	TArray<struct FGameplayTag> BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer);
	void AppendGameplayTagContainers(const struct FGameplayTagContainer& InOutTagContainer, struct FGameplayTagContainer* InTagContainer);
	struct FGameplayTagContainer AddGameplayTag(struct FGameplayTag* Tag);
};

// 0x0 (0x28 - 0x28)
// Class GameplayTags.GameplayTagAssetInterface
class IGameplayTagAssetInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGameplayTagAssetInterface* GetDefaultObj();

	bool HasMatchingGameplayTag(struct FGameplayTag* TagToCheck);
	bool HasAnyMatchingGameplayTags();
	bool HasAllMatchingGameplayTags();
	struct FGameplayTagContainer GetOwnedGameplayTags();
};

// 0x70 (0x98 - 0x28)
// Class GameplayTags.EditableGameplayTagQuery
class UEditableGameplayTagQuery : public UObject
{
public:
	class FString                                UserDescription;                                   // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E4E[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	class UEditableGameplayTagQueryExpression*   RootExpression;                                    // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGameplayTagQuery                     TagQueryExportText_Helper;                         // 0x50(0x48)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQuery* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression
class UEditableGameplayTagQueryExpression : public UObject
{
public:

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x28(0x20)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Config)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_AnyTagsMatch* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x28(0x20)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Config)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_AllTagsMatch* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x28(0x20)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Config)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_NoTagsMatch* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x28(0x10)(OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_AnyExprMatch* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x28(0x10)(OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_AllExprMatch* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x28(0x10)(OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_NoExprMatch* GetDefaultObj();

};

// 0x220 (0x248 - 0x28)
// Class GameplayTags.GameplayTagsManager
class UGameplayTagsManager : public UObject
{
public:
	uint8                                        Pad_2E53[0x138];                                   // Fixing Size After Last Property  > TateDumper <
	TMap<class FName, struct FGameplayTagSource> TagSources;                                        // 0x160(0x50)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E55[0x88];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UDataTable*>                    GameplayTagTables;                                 // 0x238(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGameplayTagsManager* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.GameplayTagsList
class UGameplayTagsList : public UObject
{
public:
	class FString                                ConfigFileName;                                    // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FGameplayTagTableRow>          GameplayTagList;                                   // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGameplayTagsList* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.RestrictedGameplayTagsList
class URestrictedGameplayTagsList : public UObject
{
public:
	class FString                                ConfigFileName;                                    // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FRestrictedGameplayTagTableRow> RestrictedGameplayTagList;                         // 0x38(0x10)(ConstParm, BlueprintVisible, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class URestrictedGameplayTagsList* GetDefaultObj();

};

// 0x70 (0xB8 - 0x48)
// Class GameplayTags.GameplayTagsSettings
class UGameplayTagsSettings : public UGameplayTagsList
{
public:
	bool                                         ImportTagsFromConfig;                              // 0x48(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         WarnOnInvalidTags;                                 // 0x49(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         ClearInvalidTags;                                  // 0x4A(0x1)(ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         AllowEditorTagUnloading;                           // 0x4B(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         AllowGameTagUnloading;                             // 0x4C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         FastReplication;                                   // 0x4D(0x1)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_2E5B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                InvalidTagCharacters;                              // 0x50(0x10)(Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	TArray<struct FGameplayTagCategoryRemap>     CategoryRemapping;                                 // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FSoftObjectPath>               GameplayTagTableList;                              // 0x70(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	TArray<struct FGameplayTagRedirect>          GameplayTagRedirects;                              // 0x80(0x10)(BlueprintVisible, ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class FName>                          CommonlyReplicatedTags;                            // 0x90(0x10)(Net, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        NumBitsForContainerSize;                           // 0xA0(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	int32                                        NetIndexFirstBitSegment;                           // 0xA4(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	TArray<struct FRestrictedConfigInfo>         RestrictedConfigFiles;                             // 0xA8(0x10)(BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGameplayTagsSettings* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class GameplayTags.GameplayTagsDeveloperSettings
class UGameplayTagsDeveloperSettings : public UDeveloperSettings
{
public:
	class FString                                DeveloperConfigName;                               // 0x38(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  FavoriteTagSource;                                 // 0x48(0x8)(Edit, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGameplayTagsDeveloperSettings* GetDefaultObj();

};

}


