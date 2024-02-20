#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct BuildPatchServices.CustomFieldData
struct FCustomFieldData
{
public:
	class FString                                Key;                                               // 0x0(0x10)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	class FString                                Value;                                             // 0x10(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct BuildPatchServices.SHAHashData
struct FSHAHashData
{
public:
	uint8                                        Hash[0x14];                                        // 0x0(0x14)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct BuildPatchServices.ChunkInfoData
struct FChunkInfoData
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, Parm, Transient, DisableEditOnInstance)
	uint64                                       Hash;                                              // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	struct FSHAHashData                          ShaHash;                                           // 0x18(0x14)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AE5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        FileSize;                                          // 0x30(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        GroupNumber;                                       // 0x38(0x1)(Edit, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AE6[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct BuildPatchServices.ChunkPartData
struct FChunkPartData
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, Parm, Transient, DisableEditOnInstance)
	uint32                                       Offset;                                            // 0x10(0x4)(Edit, ExportObject, Parm, Transient, Config, DisableEditOnInstance, EditConst)
	uint32                                       Size;                                              // 0x14(0x4)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct BuildPatchServices.FileManifestData
struct FFileManifestData
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
	struct FSHAHashData                          FileHash;                                          // 0x10(0x14)(ExportObject, BlueprintReadOnly, ZeroConstructor, Transient)
	uint8                                        Pad_1AEA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FChunkPartData>                FileChunkParts;                                    // 0x28(0x10)(Edit, ConstParm, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        InstallTags;                                       // 0x38(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsUnixExecutable;                                 // 0x48(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AEB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                SymlinkTarget;                                     // 0x50(0x10)(ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsReadOnly;                                       // 0x60(0x1)(ExportObject, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	bool                                         bIsCompressed;                                     // 0x61(0x1)(ConstParm, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AEE[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

}


