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
	uint8                                        Pad_EBF[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                VariableCollectionDescription;                     // 0x30(0x10)(ConstParm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FConsoleVariablesEditorAssetSaveData> SavedCommands;                                     // 0x40(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UConsoleVariablesAsset* GetDefaultObj();

	void SetVariableCollectionDescription(const class FString& InVariableCollectionDescription);
	TArray<struct FConsoleVariablesEditorAssetSaveData> ReplaceSavedCommands();
	void RemoveConsoleVariable(const class FString& InCommandString, bool* ReturnValue);
	void GetVariableCollectionDescription(class FString* ReturnValue);
	void GetSavedCommandsCount(int32* ReturnValue);
	bool GetSavedCommandsAsStringArray(TArray<class FString>* ReturnValue);
	bool GetSavedCommandsAsCommaSeparatedString(class FString* ReturnValue);
	void GetSavedCommands(TArray<struct FConsoleVariablesEditorAssetSaveData>* ReturnValue);
	struct FConsoleVariablesEditorAssetSaveData FindSavedDataByCommandString(const class FString& InCommandString, enum class ESearchCase SearchCase, bool* ReturnValue);
	bool ExecuteSavedCommands();
	void CopyFrom(class UConsoleVariablesAsset* InAssetToCopy);
	struct FConsoleVariablesEditorAssetSaveData AddOrSetConsoleObjectSavedData();
};

}


