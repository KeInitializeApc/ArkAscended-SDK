#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x70 - 0x28)
// Class MetasoundEngine.MetasoundGeneratorHandle
class UMetasoundGeneratorHandle : public UObject
{
public:
	class UAudioComponent*                       AudioComponent;                                    // 0x28(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_25F2[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UMetaSoundSource*                      CachedMetasoundSource;                             // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_25F3[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMetasoundGeneratorHandle* GetDefaultObj();

	class UMetasoundGeneratorHandle* CreateMetaSoundGeneratorHandle();
	bool ApplyParameterPack();
};

// 0x48 (0x80 - 0x38)
// Class MetasoundEngine.MetaSoundSettings
class UMetaSoundSettings : public UDeveloperSettings
{
public:
	bool                                         bAutoUpdateEnabled;                                // 0x38(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_25F5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FMetasoundFrontendClassName>   AutoUpdateDenylist;                                // 0x40(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	TArray<struct FDefaultMetaSoundAssetAutoUpdateSettings> AutoUpdateAssetDenylist;                           // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAutoUpdateLogWarningOnDroppedConnection;          // 0x60(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_25F7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FDirectoryPath>                DirectoriesToRegister;                             // 0x68(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        DenyListCacheChangeID;                             // 0x78(0x4)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_25F8[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMetaSoundSettings* GetDefaultObj();

};

// 0x0 (0x60 - 0x60)
// Class MetasoundEngine.MetasoundEditorGraphBase
class UMetasoundEditorGraphBase : public UEdGraph
{
public:

	static class UClass* StaticClass();
	static class UMetasoundEditorGraphBase* GetDefaultObj();

};

// 0x330 (0x358 - 0x28)
// Class MetasoundEngine.MetaSoundPatch
class UMetaSoundPatch : public UObject
{
public:
	uint8                                        Pad_25FC[0x68];                                    // Fixing Size After Last Property  > TateDumper <
	struct FMetasoundFrontendDocument            RootMetaSoundDocument;                             // 0x90(0x1C8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	TSet<class FString>                          ReferencedAssetClassKeys;                          // 0x258(0x50)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	TSet<class UObject*>                         ReferencedAssetClassObjects;                       // 0x2A8(0x50)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	TSet<struct FSoftObjectPath>                 ReferenceAssetClassCache;                          // 0x2F8(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FGuid                                 AssetClassID;                                      // 0x348(0x10)(BlueprintVisible, Net, ZeroConstructor)

	static class UClass* StaticClass();
	static class UMetaSoundPatch* GetDefaultObj();

};

// 0x1B0 (0x1E0 - 0x30)
// Class MetasoundEngine.MetaSoundAssetSubsystem
class UMetaSoundAssetSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_2602[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FMetaSoundAsyncAssetDependencies> LoadingDependencies;                               // 0x38(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2603[0x198];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMetaSoundAssetSubsystem* GetDefaultObj();

	TArray<struct FMetaSoundAssetDirectory> UnregisterAssetClassesInDirectories();
	TArray<struct FMetaSoundAssetDirectory> RegisterAssetClassesInDirectories();
};

// 0x3A0 (0x860 - 0x4C0)
// Class MetasoundEngine.MetaSoundSource
class UMetaSoundSource : public USoundWaveProcedural
{
public:
	uint8                                        Pad_2604[0x68];                                    // Fixing Size After Last Property  > TateDumper <
	struct FMetasoundFrontendDocument            RootMetaSoundDocument;                             // 0x528(0x1C8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	TSet<class FString>                          ReferencedAssetClassKeys;                          // 0x6F0(0x50)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	TSet<class UObject*>                         ReferencedAssetClassObjects;                       // 0x740(0x50)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	TSet<struct FSoftObjectPath>                 ReferenceAssetClassCache;                          // 0x790(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EMetasoundSourceAudioFormat       OutputFormat;                                      // 0x7E0(0x1)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2606[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 AssetClassID;                                      // 0x7E4(0x10)(BlueprintVisible, Net, ZeroConstructor)
	uint8                                        Pad_2607[0x6C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMetaSoundSource* GetDefaultObj();

};

}


