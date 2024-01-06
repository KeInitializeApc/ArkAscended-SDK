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
	uint8                                        ManifestFileVersion;                               // 0x28(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIsFileData;                                       // 0x29(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_20C0[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	uint32                                       AppID;                                             // 0x2C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, InstancedReference, SubobjectReference)
	class FString                                AppName;                                           // 0x30(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                BuildVersion;                                      // 0x40(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                LaunchExe;                                         // 0x50(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                LaunchCommand;                                     // 0x60(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TSet<class FString>                          PrereqIds;                                         // 0x70(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                PrereqName;                                        // 0xC0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                PrereqPath;                                        // 0xD0(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                PrereqArgs;                                        // 0xE0(0x10)(Edit, ConstParm, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FFileManifestData>             FileManifestList;                                  // 0xF0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FChunkInfoData>                ChunkList;                                         // 0x100(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FCustomFieldData>              CustomFields;                                      // 0x110(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBuildPatchManifest* GetDefaultObj();

};

}


