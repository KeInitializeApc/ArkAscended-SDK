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
	uint8                                        Pad_17A6[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                VariableCollectionDescription;                     // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FConsoleVariablesEditorAssetSaveData> SavedCommands;                                     // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UConsoleVariablesAsset* GetDefaultObj();

	class FString SetVariableCollectionDescription();
	void ReplaceSavedCommands(TArray<struct FConsoleVariablesEditorAssetSaveData>* Replacement);
	bool RemoveConsoleVariable();
	class FString GetVariableCollectionDescription();
	int32 GetSavedCommandsCount();
	TArray<class FString> GetSavedCommandsAsStringArray(bool* bOnlyIncludeChecked);
	class FString GetSavedCommandsAsCommaSeparatedString(bool* bOnlyIncludeChecked);
	TArray<struct FConsoleVariablesEditorAssetSaveData> GetSavedCommands();
	bool FindSavedDataByCommandString();
	class UObject* ExecuteSavedCommands(bool* bOnlyIncludeChecked);
	class UConsoleVariablesAsset* CopyFrom();
	void AddOrSetConsoleObjectSavedData(struct FConsoleVariablesEditorAssetSaveData* InData);
};

}


