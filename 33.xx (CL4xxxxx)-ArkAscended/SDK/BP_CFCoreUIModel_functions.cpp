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
// enum class EGameModsEvent          Evt                                                              (Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FCFCoreMod>          InModsList                                                       (Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FInstallProgressMod> OutModsList                                                      (BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<struct FInstallProgressMod> CallFunc_OnEventReceived_OutModsList                             (Edit, ConstParm, BlueprintVisible, Net, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_OnEventReceived_ReturnValue                             (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UBP_CFCoreUIModel_C::OnEventReceived(enum class EGameModsEvent* Evt, TArray<struct FCFCoreMod>* InModsList, TArray<struct FInstallProgressMod>* OutModsList, const TArray<struct FInstallProgressMod>& CallFunc_OnEventReceived_OutModsList, bool CallFunc_OnEventReceived_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CFCoreUIModel_C", "OnEventReceived");

	Params::UBP_CFCoreUIModel_C_OnEventReceived_Params Parms{};

	Parms.CallFunc_OnEventReceived_OutModsList = CallFunc_OnEventReceived_OutModsList;
	Parms.CallFunc_OnEventReceived_ReturnValue = CallFunc_OnEventReceived_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Evt != nullptr)
		*Evt = Parms.Evt;

	if (InModsList != nullptr)
		*InModsList = std::move(Parms.InModsList);

	if (OutModsList != nullptr)
		*OutModsList = std::move(Parms.OutModsList);

	return Parms.ReturnValue;

}


// Function BP_CFCoreUIModel.BP_CFCoreUIModel_C.OnEventReceived_LibraryProgress
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FLibraryProgress            Progress                                                         (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> OutModsList                                                      (BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<struct FInstallProgressMod> CallFunc_OnEventReceived_LibraryProgress_OutModsList             (Edit, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_OnEventReceived_LibraryProgress_ReturnValue             (BlueprintVisible, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UBP_CFCoreUIModel_C::OnEventReceived_LibraryProgress(enum class EGameModsEvent* Evt, struct FLibraryProgress* Progress, TArray<struct FInstallProgressMod>* OutModsList, const TArray<struct FInstallProgressMod>& CallFunc_OnEventReceived_LibraryProgress_OutModsList, bool CallFunc_OnEventReceived_LibraryProgress_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CFCoreUIModel_C", "OnEventReceived_LibraryProgress");

	Params::UBP_CFCoreUIModel_C_OnEventReceived_LibraryProgress_Params Parms{};

	Parms.CallFunc_OnEventReceived_LibraryProgress_OutModsList = CallFunc_OnEventReceived_LibraryProgress_OutModsList;
	Parms.CallFunc_OnEventReceived_LibraryProgress_ReturnValue = CallFunc_OnEventReceived_LibraryProgress_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Evt != nullptr)
		*Evt = Parms.Evt;

	if (Progress != nullptr)
		*Progress = std::move(Parms.Progress);

	if (OutModsList != nullptr)
		*OutModsList = std::move(Parms.OutModsList);

	return Parms.ReturnValue;

}

}


