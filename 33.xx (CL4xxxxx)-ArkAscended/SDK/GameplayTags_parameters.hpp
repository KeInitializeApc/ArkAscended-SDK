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
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	struct FGameplayTag                          Tag;                                               // 0x20(0x8)(Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2DFA[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
struct UBlueprintGameplayTagLibrary_NotEqual_TagTag_Params
{
public:
	struct FGameplayTag                          A;                                                 // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	class FString                                B;                                                 // 0x8(0x10)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2DFF[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
struct UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Params
{
public:
	struct FGameplayTagContainer                 A;                                                 // 0x0(0x20)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	class FString                                B;                                                 // 0x20(0x10)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E04[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
struct UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Params
{
public:
	struct FGameplayTagContainer                 A;                                                 // 0x0(0x20)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	struct FGameplayTagContainer                 B;                                                 // 0x20(0x20)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E0A[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x14 (0x14 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
struct UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Params
{
public:
	struct FGameplayTag                          A;                                                 // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	struct FGameplayTag                          B;                                                 // 0x8(0x8)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E11[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x14 (0x14 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
struct UBlueprintGameplayTagLibrary_MatchesTag_Params
{
public:
	struct FGameplayTag                          TagOne;                                            // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGameplayTag                          TagTwo;                                            // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bExactMatch;                                       // 0x10(0x1)(BlueprintReadOnly, Parm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E15[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
struct UBlueprintGameplayTagLibrary_MatchesAnyTags_Params
{
public:
	struct FGameplayTag                          TagOne;                                            // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGameplayTagContainer                 OtherContainer;                                    // 0x8(0x20)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bExactMatch;                                       // 0x28(0x1)(BlueprintReadOnly, Parm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x29(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E17[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
struct UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Params
{
public:
	struct FGameplayTagContainer                 Value;                                             // 0x0(0x20)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x20(0x20)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
struct UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params
{
public:
	struct FGameplayTag                          Value;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	struct FGameplayTag                          ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
struct UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0x0(0x48)(ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGameplayTagQuery                     ReturnValue;                                       // 0x48(0x48)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
struct UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Params
{
public:
	struct FGameplayTag                          SingleTag;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x8(0x20)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
struct UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Params
{
public:
	TArray<struct FGameplayTag>                  GameplayTags;                                      // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x10(0x20)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
struct UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Params
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0x0(0x48)(ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E2B[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
struct UBlueprintGameplayTagLibrary_IsGameplayTagValid_Params
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E2C[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
struct UBlueprintGameplayTagLibrary_HasTag_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	struct FGameplayTag                          Tag;                                               // 0x20(0x8)(Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bExactMatch;                                       // 0x28(0x1)(BlueprintReadOnly, Parm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x29(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E2F[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
struct UBlueprintGameplayTagLibrary_HasAnyTags_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	struct FGameplayTagContainer                 OtherContainer;                                    // 0x20(0x20)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bExactMatch;                                       // 0x40(0x1)(BlueprintReadOnly, Parm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x41(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E36[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
struct UBlueprintGameplayTagLibrary_HasAllTags_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	struct FGameplayTagContainer                 OtherContainer;                                    // 0x20(0x20)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bExactMatch;                                       // 0x40(0x1)(BlueprintReadOnly, Parm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x41(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E37[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
struct UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params
{
public:
	TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface;                             // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGameplayTagContainer                 OtherContainer;                                    // 0x10(0x20)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E38[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
struct UBlueprintGameplayTagLibrary_GetTagName_Params
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
struct UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E3B[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
struct UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
struct UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Params
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
struct UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UClass*                                ActorClass;                                        // 0x8(0x8)(ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FGameplayTagQuery                     GameplayTagQuery;                                  // 0x10(0x48)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst)
	TArray<class AActor*>                        OutActors;                                         // 0x58(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
struct UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Params
{
public:
	struct FGameplayTagContainer                 A;                                                 // 0x0(0x20)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	struct FGameplayTagContainer                 B;                                                 // 0x20(0x20)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E40[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x14 (0x14 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
struct UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Params
{
public:
	struct FGameplayTag                          A;                                                 // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	struct FGameplayTag                          B;                                                 // 0x8(0x8)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E41[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
struct UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params
{
public:
	TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface;                             // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGameplayTag                          Tag;                                               // 0x10(0x8)(Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E42[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
struct UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	struct FGameplayTagQuery                     TagQuery;                                          // 0x20(0x48)(ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x68(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E43[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
struct UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Params
{
public:
	struct FGameplayTagContainer                 GameplayTagContainer;                              // 0x0(0x20)(Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst)
	TArray<struct FGameplayTag>                  GameplayTags;                                      // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
};

// 0x40 (0x40 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
struct UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params
{
public:
	struct FGameplayTagContainer                 InOutTagContainer;                                 // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FGameplayTagContainer                 InTagContainer;                                    // 0x20(0x20)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
struct UBlueprintGameplayTagLibrary_AddGameplayTag_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	struct FGameplayTag                          Tag;                                               // 0x20(0x8)(Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
struct IGameplayTagAssetInterface_HasMatchingGameplayTag_Params
{
public:
	struct FGameplayTag                          TagToCheck;                                        // 0x0(0x8)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E48[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
struct IGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E4A[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
struct IGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E4B[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
struct IGameplayTagAssetInterface_GetOwnedGameplayTags_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
};

}
}


