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
	class FString                                Key;                                               // 0x0(0x10)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class FString                                Value;                                             // 0x10(0x10)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct BuildPatchServices.SHAHashData
struct FSHAHashData
{
public:
	uint8                                        Hash[0x14];                                        // 0x0(0x14)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct BuildPatchServices.ChunkInfoData
struct FChunkInfoData
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	uint64                                       Hash;                                              // 0x10(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	struct FSHAHashData                          ShaHash;                                           // 0x18(0x14)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2920[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        FileSize;                                          // 0x30(0x8)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        GroupNumber;                                       // 0x38(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2921[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct BuildPatchServices.ChunkPartData
struct FChunkPartData
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	uint32                                       Offset;                                            // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	uint32                                       Size;                                              // 0x14(0x4)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct BuildPatchServices.FileManifestData
struct FFileManifestData
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
	struct FSHAHashData                          FileHash;                                          // 0x10(0x14)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient)
	uint8                                        Pad_2922[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FChunkPartData>                FileChunkParts;                                    // 0x28(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TArray<class FString>                        InstallTags;                                       // 0x38(0x10)(Edit, BlueprintVisible, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bIsUnixExecutable;                                 // 0x48(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2924[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                SymlinkTarget;                                     // 0x50(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bIsReadOnly;                                       // 0x60(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bIsCompressed;                                     // 0x61(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2925[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

}


