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

// 0x28 (0x28 - 0x0)
// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValuesForKey
struct UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class FName                                  Key;                                               // 0x8(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	bool                                         bPartialMatchKey;                                  // 0x10(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BF6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
struct UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class FName                                  Key;                                               // 0x8(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	bool                                         bPartialMatchKey;                                  // 0x10(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BF8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
struct UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class FString                                StringToMatch;                                     // 0x8(0x10)(BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<class FName>                          OutKeys;                                           // 0x18(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<class FString>                        OutValues;                                         // 0x28(0x10)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
struct UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class UDatasmithAssetUserData*               ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
struct ADatasmithImportedSequencesActor_PlayLevelSequence_Params
{
public:
	class ULevelSequence*                        SequenceToPlay;                                    // 0x0(0x8)(Edit, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

}
}

