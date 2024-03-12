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

// 0x10 (0x10 - 0x0)
// Function MetasoundEngine.MetasoundGeneratorHandle.CreateMetaSoundGeneratorHandle
struct UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Params
{
public:
	class UAudioComponent*                       OnComponent;                                       // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMetasoundGeneratorHandle*             ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MetasoundEngine.MetasoundGeneratorHandle.ApplyParameterPack
struct UMetasoundGeneratorHandle_ApplyParameterPack_Params
{
public:
	class UMetasoundParameterPack*               Pack;                                              // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1BB9[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories
struct UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Params
{
public:
	TArray<struct FMetaSoundAssetDirectory>      Directories;                                       // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories
struct UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Params
{
public:
	TArray<struct FMetaSoundAssetDirectory>      Directories;                                       // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

}
}


