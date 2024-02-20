#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x80 - 0x80)
// BlueprintGeneratedClass BP_CFCoreUIModel.BP_CFCoreUIModel_C
class UBP_CFCoreUIModel_C : public UCFCoreUIModel
{
public:

	static class UClass* StaticClass();
	static class UBP_CFCoreUIModel_C* GetDefaultObj();

	bool OnEventReceived(enum class EGameModsEvent Evt, const TArray<struct FCFCoreMod>& InModsList, const TArray<struct FInstallProgressMod>& OutModsList, bool ReturnValue);
	bool OnEventReceived_LibraryProgress(enum class EGameModsEvent Evt, struct FLibraryProgress* Progress, const TArray<struct FInstallProgressMod>& OutModsList, bool ReturnValue);
};

}


