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
// bool                               FromRider                                                        (BlueprintVisible, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bCancelForceLand                                                 (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               SpawnDinoDefaultController                                       (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              OverrideUnboardDirection                                         (Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bForceEvenIfBuffPreventsClear                                    (Edit, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bFromUse                                                         (BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool ABuff_ASAPreventDismount_C::BPBypassPreventDinoDismount(bool* bCancelForceLand, bool* SpawnDinoDefaultController, int32* OverrideUnboardDirection, bool* bForceEvenIfBuffPreventsClear, bool* bFromUse, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_ASAPreventDismount_C", "BPBypassPreventDinoDismount");

	Params::ABuff_ASAPreventDismount_C_BPBypassPreventDinoDismount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bCancelForceLand != nullptr)
		*bCancelForceLand = Parms.bCancelForceLand;

	if (SpawnDinoDefaultController != nullptr)
		*SpawnDinoDefaultController = Parms.SpawnDinoDefaultController;

	if (OverrideUnboardDirection != nullptr)
		*OverrideUnboardDirection = Parms.OverrideUnboardDirection;

	if (bForceEvenIfBuffPreventsClear != nullptr)
		*bForceEvenIfBuffPreventsClear = Parms.bForceEvenIfBuffPreventsClear;

	if (bFromUse != nullptr)
		*bFromUse = Parms.bFromUse;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}

}


