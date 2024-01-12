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
// bool                               FromRider                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bCancelForceLand                                                 (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               SpawnDinoDefaultController                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              OverrideUnboardDirection                                         (ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bForceEvenIfBuffPreventsClear                                    (ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bFromUse                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool ABuff_ASAPreventDismount_C::BPBypassPreventDinoDismount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_ASAPreventDismount_C", "BPBypassPreventDinoDismount");

	Params::ABuff_ASAPreventDismount_C_BPBypassPreventDinoDismount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


