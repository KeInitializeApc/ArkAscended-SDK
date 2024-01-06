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

	struct FGameplayTag RemoveGameplayTag(struct FGameplayTagContainer* TagContainer, bool* ReturnValue);
	class FString NotEqual_TagTag(bool* ReturnValue);
	class FString NotEqual_TagContainerTagContainer(bool* ReturnValue);
	struct FGameplayTagContainer NotEqual_GameplayTagContainer(bool* ReturnValue);
	struct FGameplayTag NotEqual_GameplayTag(bool* ReturnValue);
	void MatchesTag(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, bool bExactMatch, bool* ReturnValue);
	struct FGameplayTagContainer MatchesAnyTags(const struct FGameplayTag& TagOne, bool bExactMatch, bool* ReturnValue);
	void MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& Value, struct FGameplayTagContainer* ReturnValue);
	void MakeLiteralGameplayTag(const struct FGameplayTag& Value, struct FGameplayTag* ReturnValue);
	void MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery, struct FGameplayTagQuery* ReturnValue);
	void MakeGameplayTagContainerFromTag(const struct FGameplayTag& SingleTag, struct FGameplayTagContainer* ReturnValue);
	TArray<struct FGameplayTag> MakeGameplayTagContainerFromArray(struct FGameplayTagContainer* ReturnValue);
	void IsTagQueryEmpty(const struct FGameplayTagQuery& TagQuery, bool* ReturnValue);
	void IsGameplayTagValid(const struct FGameplayTag& GameplayTag, bool* ReturnValue);
	struct FGameplayTag HasTag(struct FGameplayTagContainer* TagContainer, bool bExactMatch, bool* ReturnValue);
	struct FGameplayTagContainer HasAnyTags(struct FGameplayTagContainer* TagContainer, bool bExactMatch, bool* ReturnValue);
	struct FGameplayTagContainer HasAllTags(struct FGameplayTagContainer* TagContainer, bool bExactMatch, bool* ReturnValue);
	struct FGameplayTagContainer HasAllMatchingGameplayTags(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, bool* ReturnValue);
	void GetTagName(const struct FGameplayTag& GameplayTag, class FName* ReturnValue);
	void GetNumGameplayTagsInContainer(struct FGameplayTagContainer* TagContainer, int32* ReturnValue);
	void GetDebugStringFromGameplayTagContainer(struct FGameplayTagContainer* TagContainer, class FString* ReturnValue);
	void GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag, class FString* ReturnValue);
	TArray<class AActor*> GetAllActorsOfClassMatchingTagQuery(class UClass** ActorClass, const struct FGameplayTagQuery& GameplayTagQuery);
	struct FGameplayTagContainer EqualEqual_GameplayTagContainer(bool* ReturnValue);
	struct FGameplayTag EqualEqual_GameplayTag(bool* ReturnValue);
	struct FGameplayTag DoesTagAssetInterfaceHaveTag(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, bool* ReturnValue);
	void DoesContainerMatchTagQuery(struct FGameplayTagContainer* TagContainer, const struct FGameplayTagQuery& TagQuery, bool* ReturnValue);
	TArray<struct FGameplayTag> BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer);
	void AppendGameplayTagContainers(struct FGameplayTagContainer* InOutTagContainer, const struct FGameplayTagContainer& InTagContainer);
	struct FGameplayTag AddGameplayTag(struct FGameplayTagContainer* TagContainer);
};

// 0x0 (0x28 - 0x28)
// Class GameplayTags.GameplayTagAssetInterface
class IGameplayTagAssetInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGameplayTagAssetInterface* GetDefaultObj();

	void HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck, bool* ReturnValue);
	void HasAnyMatchingGameplayTags(struct FGameplayTagContainer* TagContainer, bool* ReturnValue);
	void HasAllMatchingGameplayTags(struct FGameplayTagContainer* TagContainer, bool* ReturnValue);
	void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer);
};

// 0x70 (0x98 - 0x28)
// Class GameplayTags.EditableGameplayTagQuery
class UEditableGameplayTagQuery : public UObject
{
public:
	class FString                                UserDescription;                                   // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2545[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	class UEditableGameplayTagQueryExpression*   RootExpression;                                    // 0x48(0x8)(Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGameplayTagQuery                     TagQueryExportText_Helper;                         // 0x50(0x48)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

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
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_AnyExprMatch* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_AllExprMatch* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_NoExprMatch* GetDefaultObj();

};

// 0x220 (0x248 - 0x28)
// Class GameplayTags.GameplayTagsManager
class UGameplayTagsManager : public UObject
{
public:
	uint8                                        Pad_2555[0x138];                                   // Fixing Size After Last Property  > TateDumper <
	TMap<class FName, struct FGameplayTagSource> TagSources;                                        // 0x160(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2556[0x88];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UDataTable*>                    GameplayTagTables;                                 // 0x238(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGameplayTagsManager* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.GameplayTagsList
class UGameplayTagsList : public UObject
{
public:
	class FString                                ConfigFileName;                                    // 0x28(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FGameplayTagTableRow>          GameplayTagList;                                   // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGameplayTagsList* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.RestrictedGameplayTagsList
class URestrictedGameplayTagsList : public UObject
{
public:
	class FString                                ConfigFileName;                                    // 0x28(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FRestrictedGameplayTagTableRow> RestrictedGameplayTagList;                         // 0x38(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class URestrictedGameplayTagsList* GetDefaultObj();

};

// 0x70 (0xB8 - 0x48)
// Class GameplayTags.GameplayTagsSettings
class UGameplayTagsSettings : public UGameplayTagsList
{
public:
	bool                                         ImportTagsFromConfig;                              // 0x48(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         WarnOnInvalidTags;                                 // 0x49(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         ClearInvalidTags;                                  // 0x4A(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         AllowEditorTagUnloading;                           // 0x4B(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         AllowGameTagUnloading;                             // 0x4C(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         FastReplication;                                   // 0x4D(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_255D[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                InvalidTagCharacters;                              // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	TArray<struct FGameplayTagCategoryRemap>     CategoryRemapping;                                 // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FSoftObjectPath>               GameplayTagTableList;                              // 0x70(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	TArray<struct FGameplayTagRedirect>          GameplayTagRedirects;                              // 0x80(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class FName>                          CommonlyReplicatedTags;                            // 0x90(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        NumBitsForContainerSize;                           // 0xA0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	int32                                        NetIndexFirstBitSegment;                           // 0xA4(0x4)(ConstParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<struct FRestrictedConfigInfo>         RestrictedConfigFiles;                             // 0xA8(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGameplayTagsSettings* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class GameplayTags.GameplayTagsDeveloperSettings
class UGameplayTagsDeveloperSettings : public UDeveloperSettings
{
public:
	class FString                                DeveloperConfigName;                               // 0x38(0x10)(Edit, ConstParm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  FavoriteTagSource;                                 // 0x48(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGameplayTagsDeveloperSettings* GetDefaultObj();

};

}


