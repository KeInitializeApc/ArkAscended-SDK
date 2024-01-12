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

	bool OnEventReceived(enum class EGameModsEvent* Evt, TArray<struct FCFCoreMod>* InModsList, TArray<struct FInstallProgressMod>* OutModsList, const TArray<struct FInstallProgressMod>& CallFunc_OnEventReceived_OutModsList, bool CallFunc_OnEventReceived_ReturnValue);
	bool OnEventReceived_LibraryProgress(enum class EGameModsEvent* Evt, struct FLibraryProgress* Progress, TArray<struct FInstallProgressMod>* OutModsList, const TArray<struct FInstallProgressMod>& CallFunc_OnEventReceived_LibraryProgress_OutModsList, bool CallFunc_OnEventReceived_LibraryProgress_ReturnValue);
};

}


