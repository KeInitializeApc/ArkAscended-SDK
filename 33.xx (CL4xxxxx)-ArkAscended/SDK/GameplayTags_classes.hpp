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

	struct FGameplayTag RemoveGameplayTag(bool ReturnValue);
	class FString NotEqual_TagTag(bool ReturnValue);
	class FString NotEqual_TagContainerTagContainer(bool ReturnValue);
	struct FGameplayTagContainer NotEqual_GameplayTagContainer(bool ReturnValue);
	struct FGameplayTag NotEqual_GameplayTag(bool ReturnValue);
	void MatchesTag(struct FGameplayTag* TagOne, struct FGameplayTag* TagTwo, bool* bExactMatch, bool ReturnValue);
	struct FGameplayTagContainer MatchesAnyTags(struct FGameplayTag* TagOne, bool* bExactMatch, bool ReturnValue);
	void MakeLiteralGameplayTagContainer(struct FGameplayTagContainer* Value, const struct FGameplayTagContainer& ReturnValue);
	void MakeLiteralGameplayTag(struct FGameplayTag* Value, const struct FGameplayTag& ReturnValue);
	void MakeGameplayTagQuery(struct FGameplayTagQuery* TagQuery, const struct FGameplayTagQuery& ReturnValue);
	void MakeGameplayTagContainerFromTag(struct FGameplayTag* SingleTag, const struct FGameplayTagContainer& ReturnValue);
	void MakeGameplayTagContainerFromArray(const TArray<struct FGameplayTag>& GameplayTags, const struct FGameplayTagContainer& ReturnValue);
	void IsTagQueryEmpty(struct FGameplayTagQuery* TagQuery, bool ReturnValue);
	struct FGameplayTag IsGameplayTagValid(bool ReturnValue);
	struct FGameplayTag HasTag(bool* bExactMatch, bool ReturnValue);
	struct FGameplayTagContainer HasAnyTags(bool* bExactMatch, bool ReturnValue);
	struct FGameplayTagContainer HasAllTags(bool* bExactMatch, bool ReturnValue);
	struct FGameplayTagContainer HasAllMatchingGameplayTags(TScriptInterface<class IGameplayTagAssetInterface>* TagContainerInterface, bool ReturnValue);
	struct FGameplayTag GetTagName(class FName ReturnValue);
	struct FGameplayTagContainer GetNumGameplayTagsInContainer(int32 ReturnValue);
	struct FGameplayTagContainer GetDebugStringFromGameplayTagContainer(const class FString& ReturnValue);
	struct FGameplayTag GetDebugStringFromGameplayTag(const class FString& ReturnValue);
	TArray<class AActor*> GetAllActorsOfClassMatchingTagQuery();
	struct FGameplayTagContainer EqualEqual_GameplayTagContainer(bool ReturnValue);
	struct FGameplayTag EqualEqual_GameplayTag(bool ReturnValue);
	struct FGameplayTag DoesTagAssetInterfaceHaveTag(TScriptInterface<class IGameplayTagAssetInterface>* TagContainerInterface, bool ReturnValue);
	struct FGameplayTagContainer DoesContainerMatchTagQuery(struct FGameplayTagQuery* TagQuery, bool ReturnValue);
	struct FGameplayTagContainer BreakGameplayTagContainer(const TArray<struct FGameplayTag>& GameplayTags);
	struct FGameplayTagContainer AppendGameplayTagContainers(struct FGameplayTagContainer* InTagContainer);
	struct FGameplayTag AddGameplayTag();
};

// 0x0 (0x28 - 0x28)
// Class GameplayTags.GameplayTagAssetInterface
class IGameplayTagAssetInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGameplayTagAssetInterface* GetDefaultObj();

	void HasMatchingGameplayTag(struct FGameplayTag* TagToCheck, bool ReturnValue);
	struct FGameplayTagContainer HasAnyMatchingGameplayTags(bool ReturnValue);
	struct FGameplayTagContainer HasAllMatchingGameplayTags(bool ReturnValue);
	struct FGameplayTagContainer GetOwnedGameplayTags();
};

// 0x70 (0x98 - 0x28)
// Class GameplayTags.EditableGameplayTagQuery
class UEditableGameplayTagQuery : public UObject
{
public:
	class FString                                UserDescription;                                   // 0x28(0x10)(ExportObject, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_20D1[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	class UEditableGameplayTagQueryExpression*   RootExpression;                                    // 0x48(0x8)(ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FGameplayTagQuery                     TagQueryExportText_Helper;                         // 0x50(0x48)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
	struct FGameplayTagContainer                 Tags;                                              // 0x28(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_AnyTagsMatch* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x28(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_AllTagsMatch* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x28(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_NoTagsMatch* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_AnyExprMatch* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_AllExprMatch* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_NoExprMatch* GetDefaultObj();

};

// 0x220 (0x248 - 0x28)
// Class GameplayTags.GameplayTagsManager
class UGameplayTagsManager : public UObject
{
public:
	uint8                                        Pad_20DE[0x138];                                   // Fixing Size After Last Property  > TateDumper <
	TMap<class FName, struct FGameplayTagSource> TagSources;                                        // 0x160(0x50)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_20E0[0x88];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UDataTable*>                    GameplayTagTables;                                 // 0x238(0x10)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGameplayTagsManager* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.GameplayTagsList
class UGameplayTagsList : public UObject
{
public:
	class FString                                ConfigFileName;                                    // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FGameplayTagTableRow>          GameplayTagList;                                   // 0x38(0x10)(ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGameplayTagsList* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.RestrictedGameplayTagsList
class URestrictedGameplayTagsList : public UObject
{
public:
	class FString                                ConfigFileName;                                    // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FRestrictedGameplayTagTableRow> RestrictedGameplayTagList;                         // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class URestrictedGameplayTagsList* GetDefaultObj();

};

// 0x70 (0xB8 - 0x48)
// Class GameplayTags.GameplayTagsSettings
class UGameplayTagsSettings : public UGameplayTagsList
{
public:
	bool                                         ImportTagsFromConfig;                              // 0x48(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         WarnOnInvalidTags;                                 // 0x49(0x1)(ConstParm, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         ClearInvalidTags;                                  // 0x4A(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         AllowEditorTagUnloading;                           // 0x4B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         AllowGameTagUnloading;                             // 0x4C(0x1)(ConstParm, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         FastReplication;                                   // 0x4D(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_20EA[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                InvalidTagCharacters;                              // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	TArray<struct FGameplayTagCategoryRemap>     CategoryRemapping;                                 // 0x60(0x10)(ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FSoftObjectPath>               GameplayTagTableList;                              // 0x70(0x10)(ConstParm, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	TArray<struct FGameplayTagRedirect>          GameplayTagRedirects;                              // 0x80(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class FName>                          CommonlyReplicatedTags;                            // 0x90(0x10)(Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        NumBitsForContainerSize;                           // 0xA0(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	int32                                        NetIndexFirstBitSegment;                           // 0xA4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	TArray<struct FRestrictedConfigInfo>         RestrictedConfigFiles;                             // 0xA8(0x10)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGameplayTagsSettings* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class GameplayTags.GameplayTagsDeveloperSettings
class UGameplayTagsDeveloperSettings : public UDeveloperSettings
{
public:
	class FString                                DeveloperConfigName;                               // 0x38(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FName                                  FavoriteTagSource;                                 // 0x48(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGameplayTagsDeveloperSettings* GetDefaultObj();

};

}


