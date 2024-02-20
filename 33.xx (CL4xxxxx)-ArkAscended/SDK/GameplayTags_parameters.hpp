#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
struct UBlueprintGameplayTagLibrary_RemoveGameplayTag_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FGameplayTag                          Tag;                                               // 0x20(0x8)(ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_204A[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
struct UBlueprintGameplayTagLibrary_NotEqual_TagTag_Params
{
public:
	struct FGameplayTag                          A;                                                 // 0x0(0x8)(Edit, Parm, OutParm, ReturnParm, Transient, Config)
	class FString                                B;                                                 // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config)
	bool                                         ReturnValue;                                       // 0x18(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2051[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
struct UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Params
{
public:
	struct FGameplayTagContainer                 A;                                                 // 0x0(0x20)(Edit, Parm, OutParm, ReturnParm, Transient, Config)
	class FString                                B;                                                 // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config)
	bool                                         ReturnValue;                                       // 0x30(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2053[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
struct UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Params
{
public:
	struct FGameplayTagContainer                 A;                                                 // 0x0(0x20)(Edit, Parm, OutParm, ReturnParm, Transient, Config)
	struct FGameplayTagContainer                 B;                                                 // 0x20(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config)
	bool                                         ReturnValue;                                       // 0x40(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2056[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x14 (0x14 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
struct UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Params
{
public:
	struct FGameplayTag                          A;                                                 // 0x0(0x8)(Edit, Parm, OutParm, ReturnParm, Transient, Config)
	struct FGameplayTag                          B;                                                 // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2058[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x14 (0x14 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
struct UBlueprintGameplayTagLibrary_MatchesTag_Params
{
public:
	struct FGameplayTag                          TagOne;                                            // 0x0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FGameplayTag                          TagTwo;                                            // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bExactMatch;                                       // 0x10(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x11(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_205F[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
struct UBlueprintGameplayTagLibrary_MatchesAnyTags_Params
{
public:
	struct FGameplayTag                          TagOne;                                            // 0x0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FGameplayTagContainer                 OtherContainer;                                    // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bExactMatch;                                       // 0x28(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x29(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2064[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
struct UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Params
{
public:
	struct FGameplayTagContainer                 Value;                                             // 0x0(0x20)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x20(0x20)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
struct UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params
{
public:
	struct FGameplayTag                          Value;                                             // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	struct FGameplayTag                          ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
struct UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0x0(0x48)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FGameplayTagQuery                     ReturnValue;                                       // 0x48(0x48)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
struct UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Params
{
public:
	struct FGameplayTag                          SingleTag;                                         // 0x0(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x8(0x20)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
struct UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Params
{
public:
	TArray<struct FGameplayTag>                  GameplayTags;                                      // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x10(0x20)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
struct UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Params
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0x0(0x48)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x48(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2077[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
struct UBlueprintGameplayTagLibrary_IsGameplayTagValid_Params
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_207C[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
struct UBlueprintGameplayTagLibrary_HasTag_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FGameplayTag                          Tag;                                               // 0x20(0x8)(ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         bExactMatch;                                       // 0x28(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x29(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2081[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
struct UBlueprintGameplayTagLibrary_HasAnyTags_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FGameplayTagContainer                 OtherContainer;                                    // 0x20(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bExactMatch;                                       // 0x40(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x41(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2088[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
struct UBlueprintGameplayTagLibrary_HasAllTags_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FGameplayTagContainer                 OtherContainer;                                    // 0x20(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bExactMatch;                                       // 0x40(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x41(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_208C[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
struct UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params
{
public:
	TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface;                             // 0x0(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FGameplayTagContainer                 OtherContainer;                                    // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x30(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2096[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
struct UBlueprintGameplayTagLibrary_GetTagName_Params
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
struct UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x20(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_209C[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
struct UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x20(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
struct UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Params
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst)
	class FString                                ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
struct UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UClass*                                ActorClass;                                        // 0x8(0x8)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGameplayTagQuery                     GameplayTagQuery;                                  // 0x10(0x48)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst)
	TArray<class AActor*>                        OutActors;                                         // 0x58(0x10)(Edit, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
struct UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Params
{
public:
	struct FGameplayTagContainer                 A;                                                 // 0x0(0x20)(Edit, Parm, OutParm, ReturnParm, Transient, Config)
	struct FGameplayTagContainer                 B;                                                 // 0x20(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config)
	bool                                         ReturnValue;                                       // 0x40(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_20AB[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x14 (0x14 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
struct UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Params
{
public:
	struct FGameplayTag                          A;                                                 // 0x0(0x8)(Edit, Parm, OutParm, ReturnParm, Transient, Config)
	struct FGameplayTag                          B;                                                 // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_20AD[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
struct UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params
{
public:
	TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface;                             // 0x0(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FGameplayTag                          Tag;                                               // 0x10(0x8)(ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_20B1[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
struct UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FGameplayTagQuery                     TagQuery;                                          // 0x20(0x48)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x68(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_20B4[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
struct UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Params
{
public:
	struct FGameplayTagContainer                 GameplayTagContainer;                              // 0x0(0x20)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst)
	TArray<struct FGameplayTag>                  GameplayTags;                                      // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0x40 (0x40 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
struct UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params
{
public:
	struct FGameplayTagContainer                 InOutTagContainer;                                 // 0x0(0x20)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FGameplayTagContainer                 InTagContainer;                                    // 0x20(0x20)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
struct UBlueprintGameplayTagLibrary_AddGameplayTag_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FGameplayTag                          Tag;                                               // 0x20(0x8)(ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
struct IGameplayTagAssetInterface_HasMatchingGameplayTag_Params
{
public:
	struct FGameplayTag                          TagToCheck;                                        // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_20C5[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
struct IGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x20(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_20CB[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
struct IGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x20(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_20D0[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
struct IGameplayTagAssetInterface_GetOwnedGameplayTags_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
};

}
}


