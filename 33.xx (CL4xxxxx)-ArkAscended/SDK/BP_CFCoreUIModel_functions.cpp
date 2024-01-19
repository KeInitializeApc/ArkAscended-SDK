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
// enum class EGameModsEvent          Evt                                                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FCFCoreMod>          InModsList                                                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FInstallProgressMod> OutModsList                                                      (ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<struct FInstallProgressMod> CallFunc_OnEventReceived_OutModsList                             (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               CallFunc_OnEventReceived_ReturnValue                             (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

TArray<struct FInstallProgressMod> UBP_CFCoreUIModel_C::OnEventReceived(bool ReturnValue, const TArray<struct FInstallProgressMod>& CallFunc_OnEventReceived_OutModsList, bool* CallFunc_OnEventReceived_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CFCoreUIModel_C", "OnEventReceived");

	Params::UBP_CFCoreUIModel_C_OnEventReceived_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_OnEventReceived_OutModsList = CallFunc_OnEventReceived_OutModsList;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_OnEventReceived_ReturnValue != nullptr)
		*CallFunc_OnEventReceived_ReturnValue = Parms.CallFunc_OnEventReceived_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_CFCoreUIModel.BP_CFCoreUIModel_C.OnEventReceived_LibraryProgress
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FLibraryProgress            Progress                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> OutModsList                                                      (ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<struct FInstallProgressMod> CallFunc_OnEventReceived_LibraryProgress_OutModsList             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               CallFunc_OnEventReceived_LibraryProgress_ReturnValue             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

TArray<struct FInstallProgressMod> UBP_CFCoreUIModel_C::OnEventReceived_LibraryProgress(bool ReturnValue, const TArray<struct FInstallProgressMod>& CallFunc_OnEventReceived_LibraryProgress_OutModsList, bool CallFunc_OnEventReceived_LibraryProgress_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CFCoreUIModel_C", "OnEventReceived_LibraryProgress");

	Params::UBP_CFCoreUIModel_C_OnEventReceived_LibraryProgress_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_OnEventReceived_LibraryProgress_OutModsList = CallFunc_OnEventReceived_LibraryProgress_OutModsList;
	Parms.CallFunc_OnEventReceived_LibraryProgress_ReturnValue = CallFunc_OnEventReceived_LibraryProgress_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


