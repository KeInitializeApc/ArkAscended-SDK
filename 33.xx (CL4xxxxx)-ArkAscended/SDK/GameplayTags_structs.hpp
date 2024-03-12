#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGameplayContainerMatchType : uint8
{
	Any                            = 0,
	All                            = 1,
	EGameplayContainerMatchType_MAX = 2,
};

enum class EGameplayTagQueryExprType : uint8
{
	Undefined                      = 0,
	AnyTagsMatch                   = 1,
	AllTagsMatch                   = 2,
	NoTagsMatch                    = 3,
	AnyExprMatch                   = 4,
	AllExprMatch                   = 5,
	NoExprMatch                    = 6,
	EGameplayTagQueryExprType_MAX  = 7,
};

enum class EGameplayTagSourceType : uint8
{
	Native                         = 0,
	DefaultTagList                 = 1,
	TagList                        = 2,
	RestrictedTagList              = 3,
	DataTable                      = 4,
	Invalid                        = 5,
	EGameplayTagSourceType_MAX     = 6,
};

enum class EGameplayTagSelectionType : uint8
{
	None                           = 0,
	NonRestrictedOnly              = 1,
	RestrictedOnly                 = 2,
	All                            = 3,
	EGameplayTagSelectionType_MAX  = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayTags.GameplayTag
struct FGameplayTag
{
public:
	class FName                                  TagName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayTags.GameplayTagContainerNetSerializerSerializationHelper
struct FGameplayTagContainerNetSerializerSerializationHelper
{
public:
	TArray<struct FGameplayTag>                  GameplayTags;                                      // 0x0(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayTags.GameplayTagContainer
struct FGameplayTagContainer
{
public:
	TArray<struct FGameplayTag>                  GameplayTags;                                      // 0x0(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	TArray<struct FGameplayTag>                  ParentTags;                                        // 0x10(0x10)(Edit, ConstParm, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayTags.GameplayTagReferenceHelper
struct FGameplayTagReferenceHelper
{
public:
	uint8                                        Pad_263D[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
struct FGameplayTagCreationWidgetHelper
{
public:
	uint8                                        Pad_263F[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GameplayTags.GameplayTagQuery
struct FGameplayTagQuery
{
public:
	int32                                        TokenStreamVersion;                                // 0x0(0x4)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_2641[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FGameplayTag>                  TagDictionary;                                     // 0x8(0x10)(BlueprintVisible, Net, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	TArray<uint8>                                QueryTokenStream;                                  // 0x18(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	class FString                                UserDescription;                                   // 0x28(0x10)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	class FString                                AutoDescription;                                   // 0x38(0x10)(Edit, ExportObject, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GameplayTags.GameplayTagContainerNetSerializerConfig
struct FGameplayTagContainerNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        Pad_2645[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GameplayTags.GameplayTagNetSerializerConfig
struct FGameplayTagNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        Pad_2646[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayTags.GameplayTagRedirect
struct FGameplayTagRedirect
{
public:
	class FName                                  OldTagName;                                        // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	class FName                                  NewTagName;                                        // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct GameplayTags.GameplayTagTableRow
struct FGameplayTagTableRow : public FTableRowBase
{
public:
	class FName                                  Tag;                                               // 0x8(0x8)(Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                DevComment;                                        // 0x10(0x10)(ConstParm, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
struct FRestrictedGameplayTagTableRow : public FGameplayTagTableRow
{
public:
	bool                                         bAllowNonRestrictedChildren;                       // 0x20(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_2649[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayTags.GameplayTagSource
struct FGameplayTagSource
{
public:
	class FName                                  SourceName;                                        // 0x0(0x8)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	enum class EGameplayTagSourceType            SourceType;                                        // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_264A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UGameplayTagsList*                     SourceTagList;                                     // 0x10(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	class URestrictedGameplayTagsList*           SourceRestrictedTagList;                           // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GameplayTags.GameplayTagNode
struct FGameplayTagNode
{
public:
	uint8                                        Pad_264C[0x50];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayTags.GameplayTagCategoryRemap
struct FGameplayTagCategoryRemap
{
public:
	class FString                                BaseCategory;                                      // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	TArray<class FString>                        RemapCategories;                                   // 0x10(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayTags.RestrictedConfigInfo
struct FRestrictedConfigInfo
{
public:
	class FString                                RestrictedConfigName;                              // 0x0(0x10)(OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	TArray<class FString>                        Owners;                                            // 0x10(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
};

}


