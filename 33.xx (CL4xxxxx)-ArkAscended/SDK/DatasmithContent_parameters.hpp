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
	bool                                         bPartialMatchKey;                                  // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_23DC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
struct UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class FName                                  Key;                                               // 0x8(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	bool                                         bPartialMatchKey;                                  // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_23E2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ReturnValue;                                       // 0x18(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
struct UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class FString                                StringToMatch;                                     // 0x8(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<class FName>                          OutKeys;                                           // 0x18(0x10)(Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<class FString>                        OutValues;                                         // 0x28(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
struct UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class UDatasmithAssetUserData*               ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
struct ADatasmithImportedSequencesActor_PlayLevelSequence_Params
{
public:
	class ULevelSequence*                        SequenceToPlay;                                    // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

}
}


