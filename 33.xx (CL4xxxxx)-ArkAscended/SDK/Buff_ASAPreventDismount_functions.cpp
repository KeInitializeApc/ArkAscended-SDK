#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_ASAPreventDismount.Buff_ASAPreventDismount_C
// (Actor)

class UClass* ABuff_ASAPreventDismount_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_ASAPreventDismount_C");

	return Clss;
}


// Buff_ASAPreventDismount_C Buff_ASAPreventDismount.Default__Buff_ASAPreventDismount_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_ASAPreventDismount_C* ABuff_ASAPreventDismount_C::GetDefaultObj()
{
	static class ABuff_ASAPreventDismount_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_ASAPreventDismount_C*>(ABuff_ASAPreventDismount_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buff_ASAPreventDismount.Buff_ASAPreventDismount_C.BPBypassPreventDinoDismount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FromRider                                                        (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bCancelForceLand                                                 (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               SpawnDinoDefaultController                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              OverrideUnboardDirection                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bForceEvenIfBuffPreventsClear                                    (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bFromUse                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ABuff_ASAPreventDismount_C::BPBypassPreventDinoDismount(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_ASAPreventDismount_C", "BPBypassPreventDinoDismount");

	Params::ABuff_ASAPreventDismount_C_BPBypassPreventDinoDismount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


