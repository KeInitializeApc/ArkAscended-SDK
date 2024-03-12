#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_SCUBA_Flippers.Buff_SCUBA_Flippers_C
// (Actor)

class UClass* ABuff_SCUBA_Flippers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_SCUBA_Flippers_C");

	return Clss;
}


// Buff_SCUBA_Flippers_C Buff_SCUBA_Flippers.Default__Buff_SCUBA_Flippers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_SCUBA_Flippers_C* ABuff_SCUBA_Flippers_C::GetDefaultObj()
{
	static class ABuff_SCUBA_Flippers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_SCUBA_Flippers_C*>(ABuff_SCUBA_Flippers_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buff_SCUBA_Flippers.Buff_SCUBA_Flippers_C.BPOnInstigatorMovementModeChangedNotify
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EMovementMode           PrevMovementMode                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// uint8                              PreviousCustomMode                                               (BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// enum class EMovementMode           NewMovementMode                                                  (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// uint8                              NewCustomMode                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

uint8 ABuff_SCUBA_Flippers_C::BPOnInstigatorMovementModeChangedNotify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_SCUBA_Flippers_C", "BPOnInstigatorMovementModeChangedNotify");

	Params::ABuff_SCUBA_Flippers_C_BPOnInstigatorMovementModeChangedNotify_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_SCUBA_Flippers.Buff_SCUBA_Flippers_C.ExecuteUbergraph_Buff_SCUBA_Flippers
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// enum class EMovementMode           K2Node_Event_PrevMovementMode                                    (BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, InstancedReference, SubobjectReference)
// uint8                              K2Node_Event_PreviousCustomMode                                  (Edit, ConstParm, EditFixedSize, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EMovementMode           K2Node_Event_NewMovementMode                                     (BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, InstancedReference, SubobjectReference)
// uint8                              K2Node_Event_NewCustomMode                                       (ConstParm, BlueprintVisible, Net, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ABuff_SCUBA_Flippers_C::ExecuteUbergraph_Buff_SCUBA_Flippers(int32* EntryPoint, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, enum class EMovementMode K2Node_Event_PrevMovementMode, uint8 K2Node_Event_PreviousCustomMode, enum class EMovementMode K2Node_Event_NewMovementMode, uint8 K2Node_Event_NewCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_SCUBA_Flippers_C", "ExecuteUbergraph_Buff_SCUBA_Flippers");

	Params::ABuff_SCUBA_Flippers_C_ExecuteUbergraph_Buff_SCUBA_Flippers_Params Parms{};

	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_Event_PrevMovementMode = K2Node_Event_PrevMovementMode;
	Parms.K2Node_Event_PreviousCustomMode = K2Node_Event_PreviousCustomMode;
	Parms.K2Node_Event_NewMovementMode = K2Node_Event_NewMovementMode;
	Parms.K2Node_Event_NewCustomMode = K2Node_Event_NewCustomMode;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}

}


