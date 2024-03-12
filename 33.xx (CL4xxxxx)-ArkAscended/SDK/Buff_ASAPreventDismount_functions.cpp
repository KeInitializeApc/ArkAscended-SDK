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
// bool                               FromRider                                                        (Edit, BlueprintReadOnly, Net, Parm, EditConst, InstancedReference, SubobjectReference)
// bool                               bCancelForceLand                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               SpawnDinoDefaultController                                       (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              OverrideUnboardDirection                                         (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bForceEvenIfBuffPreventsClear                                    (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bFromUse                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ABuff_ASAPreventDismount_C::BPBypassPreventDinoDismount(bool FromRider, bool* bCancelForceLand, bool* SpawnDinoDefaultController, int32* OverrideUnboardDirection, bool* bForceEvenIfBuffPreventsClear, bool* bFromUse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_ASAPreventDismount_C", "BPBypassPreventDinoDismount");

	Params::ABuff_ASAPreventDismount_C_BPBypassPreventDinoDismount_Params Parms{};

	Parms.FromRider = FromRider;

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

	return Parms.ReturnValue;

}

}


