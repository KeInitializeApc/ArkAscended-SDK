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
	uint8                                        Pad_1352[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                VariableCollectionDescription;                     // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FConsoleVariablesEditorAssetSaveData> SavedCommands;                                     // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UConsoleVariablesAsset* GetDefaultObj();

	void SetVariableCollectionDescription(class FString* InVariableCollectionDescription);
	TArray<struct FConsoleVariablesEditorAssetSaveData> ReplaceSavedCommands();
	void RemoveConsoleVariable(class FString* InCommandString, bool ReturnValue);
	void GetVariableCollectionDescription(const class FString& ReturnValue);
	void GetSavedCommandsCount(int32 ReturnValue);
	bool GetSavedCommandsAsStringArray(const TArray<class FString>& ReturnValue);
	bool GetSavedCommandsAsCommaSeparatedString(const class FString& ReturnValue);
	void GetSavedCommands(const TArray<struct FConsoleVariablesEditorAssetSaveData>& ReturnValue);
	struct FConsoleVariablesEditorAssetSaveData FindSavedDataByCommandString(class FString* InCommandString, enum class ESearchCase* SearchCase, bool ReturnValue);
	bool ExecuteSavedCommands(class UObject* WorldContextObject);
	void CopyFrom(class UConsoleVariablesAsset** InAssetToCopy);
	struct FConsoleVariablesEditorAssetSaveData AddOrSetConsoleObjectSavedData();
};

}


