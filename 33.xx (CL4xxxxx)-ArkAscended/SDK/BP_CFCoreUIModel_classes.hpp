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

	TArray<struct FInstallProgressMod> OnEventReceived(bool ReturnValue, const TArray<struct FInstallProgressMod>& CallFunc_OnEventReceived_OutModsList, bool* CallFunc_OnEventReceived_ReturnValue);
	TArray<struct FInstallProgressMod> OnEventReceived_LibraryProgress(bool ReturnValue, const TArray<struct FInstallProgressMod>& CallFunc_OnEventReceived_LibraryProgress_OutModsList, bool CallFunc_OnEventReceived_LibraryProgress_ReturnValue);
};

}


