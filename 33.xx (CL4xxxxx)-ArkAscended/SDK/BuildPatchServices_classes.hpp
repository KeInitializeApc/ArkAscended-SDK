#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x120 - 0x28)
// Class BuildPatchServices.BuildPatchManifest
class UBuildPatchManifest : public UObject
{
public:
	uint8                                        ManifestFileVersion;                               // 0x28(0x1)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIsFileData;                                       // 0x29(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_291B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	uint32                                       AppID;                                             // 0x2C(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	class FString                                AppName;                                           // 0x30(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                BuildVersion;                                      // 0x40(0x10)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                LaunchExe;                                         // 0x50(0x10)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                LaunchCommand;                                     // 0x60(0x10)(Edit, ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TSet<class FString>                          PrereqIds;                                         // 0x70(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                PrereqName;                                        // 0xC0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                PrereqPath;                                        // 0xD0(0x10)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                PrereqArgs;                                        // 0xE0(0x10)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FFileManifestData>             FileManifestList;                                  // 0xF0(0x10)(ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FChunkInfoData>                ChunkList;                                         // 0x100(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FCustomFieldData>              CustomFields;                                      // 0x110(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBuildPatchManifest* GetDefaultObj();

};

}


