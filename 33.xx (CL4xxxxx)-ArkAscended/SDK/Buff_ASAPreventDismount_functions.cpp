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
// bool                               FromRider                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bCancelForceLand                                                 (Edit, ConstParm, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               SpawnDinoDefaultController                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              OverrideUnboardDirection                                         (BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bForceEvenIfBuffPreventsClear                                    (Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bFromUse                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ABuff_ASAPreventDismount_C::BPBypassPreventDinoDismount(bool* FromRider, bool bCancelForceLand, bool SpawnDinoDefaultController, int32 OverrideUnboardDirection, bool bForceEvenIfBuffPreventsClear, bool bFromUse, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_ASAPreventDismount_C", "BPBypassPreventDinoDismount");

	Params::ABuff_ASAPreventDismount_C_BPBypassPreventDinoDismount_Params Parms{};

	Parms.bCancelForceLand = bCancelForceLand;
	Parms.SpawnDinoDefaultController = SpawnDinoDefaultController;
	Parms.OverrideUnboardDirection = OverrideUnboardDirection;
	Parms.bForceEvenIfBuffPreventsClear = bForceEvenIfBuffPreventsClear;
	Parms.bFromUse = bFromUse;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FromRider != nullptr)
		*FromRider = Parms.FromRider;

}

}


