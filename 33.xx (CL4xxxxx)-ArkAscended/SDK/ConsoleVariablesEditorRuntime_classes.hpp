#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x50 - 0x28)
// Class ConsoleVariablesEditorRuntime.ConsoleVariablesAsset
class UConsoleVariablesAsset : public UObject
{
public:
	uint8                                        Pad_133E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                VariableCollectionDescription;                     // 0x30(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FConsoleVariablesEditorAssetSaveData> SavedCommands;                                     // 0x40(0x10)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UConsoleVariablesAsset* GetDefaultObj();

	void SetVariableCollectionDescription(class FString* InVariableCollectionDescription);
	TArray<struct FConsoleVariablesEditorAssetSaveData> ReplaceSavedCommands();
	bool RemoveConsoleVariable(class FString* InCommandString);
	class FString GetVariableCollectionDescription();
	int32 GetSavedCommandsCount();
	TArray<class FString> GetSavedCommandsAsStringArray();
	class FString GetSavedCommandsAsCommaSeparatedString();
	TArray<struct FConsoleVariablesEditorAssetSaveData> GetSavedCommands();
	bool FindSavedDataByCommandString(class FString* InCommandString, struct FConsoleVariablesEditorAssetSaveData* OutValue, enum class ESearchCase* SearchCase);
	bool ExecuteSavedCommands(class UObject** WorldContextObject);
	void CopyFrom(class UConsoleVariablesAsset** InAssetToCopy);
	struct FConsoleVariablesEditorAssetSaveData AddOrSetConsoleObjectSavedData();
};

}


