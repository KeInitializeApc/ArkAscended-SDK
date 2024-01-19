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
	class UAudioComponent*                       AudioComponent;                                    // 0x28(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2548[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UMetaSoundSource*                      CachedMetasoundSource;                             // 0x38(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2549[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMetasoundGeneratorHandle* GetDefaultObj();

	void CreateMetaSoundGeneratorHandle(class UAudioComponent* OnComponent, class UMetasoundGeneratorHandle* ReturnValue);
	void ApplyParameterPack(class UMetasoundParameterPack* Pack, bool ReturnValue);
};

// 0x48 (0x80 - 0x38)
// Class MetasoundEngine.MetaSoundSettings
class UMetaSoundSettings : public UDeveloperSettings
{
public:
	bool                                         bAutoUpdateEnabled;                                // 0x38(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_254C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FMetasoundFrontendClassName>   AutoUpdateDenylist;                                // 0x40(0x10)(Edit, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<struct FDefaultMetaSoundAssetAutoUpdateSettings> AutoUpdateAssetDenylist;                           // 0x50(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAutoUpdateLogWarningOnDroppedConnection;          // 0x60(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_254E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FDirectoryPath>                DirectoriesToRegister;                             // 0x68(0x10)(ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        DenyListCacheChangeID;                             // 0x78(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_254F[0x4];                                     // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_2551[0x68];                                    // Fixing Size After Last Property  > TateDumper <
	struct FMetasoundFrontendDocument            RootMetaSoundDocument;                             // 0x90(0x1C8)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TSet<class FString>                          ReferencedAssetClassKeys;                          // 0x258(0x50)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TSet<class UObject*>                         ReferencedAssetClassObjects;                       // 0x2A8(0x50)(Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TSet<struct FSoftObjectPath>                 ReferenceAssetClassCache;                          // 0x2F8(0x50)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FGuid                                 AssetClassID;                                      // 0x348(0x10)(BlueprintVisible, Net, ZeroConstructor)

	static class UClass* StaticClass();
	static class UMetaSoundPatch* GetDefaultObj();

};

// 0x1B0 (0x1E0 - 0x30)
// Class MetasoundEngine.MetaSoundAssetSubsystem
class UMetaSoundAssetSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_2554[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FMetaSoundAsyncAssetDependencies> LoadingDependencies;                               // 0x38(0x10)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2555[0x198];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMetaSoundAssetSubsystem* GetDefaultObj();

	void UnregisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory>* Directories);
	void RegisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory>* Directories);
};

// 0x3A0 (0x860 - 0x4C0)
// Class MetasoundEngine.MetaSoundSource
class UMetaSoundSource : public USoundWaveProcedural
{
public:
	uint8                                        Pad_2556[0x68];                                    // Fixing Size After Last Property  > TateDumper <
	struct FMetasoundFrontendDocument            RootMetaSoundDocument;                             // 0x528(0x1C8)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TSet<class FString>                          ReferencedAssetClassKeys;                          // 0x6F0(0x50)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TSet<class UObject*>                         ReferencedAssetClassObjects;                       // 0x740(0x50)(Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TSet<struct FSoftObjectPath>                 ReferenceAssetClassCache;                          // 0x790(0x50)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EMetasoundSourceAudioFormat       OutputFormat;                                      // 0x7E0(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2558[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 AssetClassID;                                      // 0x7E4(0x10)(BlueprintVisible, Net, ZeroConstructor)
	uint8                                        Pad_2559[0x6C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMetaSoundSource* GetDefaultObj();

};

}


