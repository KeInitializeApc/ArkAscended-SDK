#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CFCoreUIModel.BP_CFCoreUIModel_C
// (None)

class UClass* UBP_CFCoreUIModel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CFCoreUIModel_C");

	return Clss;
}


// BP_CFCoreUIModel_C BP_CFCoreUIModel.Default__BP_CFCoreUIModel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CFCoreUIModel_C* UBP_CFCoreUIModel_C::GetDefaultObj()
{
	static class UBP_CFCoreUIModel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CFCoreUIModel_C*>(UBP_CFCoreUIModel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CFCoreUIModel.BP_CFCoreUIModel_C.OnEventReceived
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// TArray<struct FCFCoreMod>          InModsList                                                       (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// TArray<struct FInstallProgressMod> OutModsList                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<struct FInstallProgressMod> CallFunc_OnEventReceived_OutModsList                             (Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_OnEventReceived_ReturnValue                             (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

bool UBP_CFCoreUIModel_C::OnEventReceived(enum class EGameModsEvent Evt, const TArray<struct FCFCoreMod>& InModsList, const TArray<struct FInstallProgressMod>& OutModsList, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CFCoreUIModel_C", "OnEventReceived");

	Params::UBP_CFCoreUIModel_C_OnEventReceived_Params Parms{};

	Parms.Evt = Evt;
	Parms.InModsList = InModsList;
	Parms.OutModsList = OutModsList;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CFCoreUIModel.BP_CFCoreUIModel_C.OnEventReceived_LibraryProgress
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// struct FLibraryProgress            Progress                                                         (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// TArray<struct FInstallProgressMod> OutModsList                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<struct FInstallProgressMod> CallFunc_OnEventReceived_LibraryProgress_OutModsList             (Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_OnEventReceived_LibraryProgress_ReturnValue             (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

bool UBP_CFCoreUIModel_C::OnEventReceived_LibraryProgress(enum class EGameModsEvent Evt, struct FLibraryProgress* Progress, const TArray<struct FInstallProgressMod>& OutModsList, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CFCoreUIModel_C", "OnEventReceived_LibraryProgress");

	Params::UBP_CFCoreUIModel_C_OnEventReceived_LibraryProgress_Params Parms{};

	Parms.Evt = Evt;
	Parms.OutModsList = OutModsList;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Progress != nullptr)
		*Progress = std::move(Parms.Progress);

	return Parms.ReturnValue;

}

}


