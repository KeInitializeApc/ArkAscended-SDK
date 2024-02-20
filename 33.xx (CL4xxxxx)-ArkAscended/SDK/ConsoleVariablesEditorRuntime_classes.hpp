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
	uint8                                        Pad_BC0[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                VariableCollectionDescription;                     // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	TArray<struct FConsoleVariablesEditorAssetSaveData> SavedCommands;                                     // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UConsoleVariablesAsset* GetDefaultObj();

	class FString SetVariableCollectionDescription();
	TArray<struct FConsoleVariablesEditorAssetSaveData> ReplaceSavedCommands();
	class FString RemoveConsoleVariable(bool ReturnValue);
	void GetVariableCollectionDescription(const class FString& ReturnValue);
	void GetSavedCommandsCount(int32 ReturnValue);
	void GetSavedCommandsAsStringArray(bool* bOnlyIncludeChecked, const TArray<class FString>& ReturnValue);
	void GetSavedCommandsAsCommaSeparatedString(bool* bOnlyIncludeChecked, const class FString& ReturnValue);
	void GetSavedCommands(const TArray<struct FConsoleVariablesEditorAssetSaveData>& ReturnValue);
	enum class ESearchCase FindSavedDataByCommandString(struct FConsoleVariablesEditorAssetSaveData* OutValue, bool ReturnValue);
	class UObject* ExecuteSavedCommands(bool* bOnlyIncludeChecked);
	class UConsoleVariablesAsset* CopyFrom();
	struct FConsoleVariablesEditorAssetSaveData AddOrSetConsoleObjectSavedData();
};

}


