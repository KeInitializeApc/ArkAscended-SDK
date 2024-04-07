#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerCameraBlueprint.PlayerCameraBlueprint_C
// (Actor)

class UClass* APlayerCameraBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerCameraBlueprint_C");

	return Clss;
}


// PlayerCameraBlueprint_C PlayerCameraBlueprint.Default__PlayerCameraBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APlayerCameraBlueprint_C* APlayerCameraBlueprint_C::GetDefaultObj()
{
	static class APlayerCameraBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayerCameraBlueprint_C*>(APlayerCameraBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerCameraBlueprint.PlayerCameraBlueprint_C.ReceiveDestroyed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerCameraBlueprint_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerCameraBlueprint_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerCameraBlueprint.PlayerCameraBlueprint_C.Spawn Water Interaction Comp And Attach To Camera
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerCameraBlueprint_C::Spawn_Water_Interaction_Comp_And_Attach_To_Camera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerCameraBlueprint_C", "Spawn Water Interaction Comp And Attach To Camera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerCameraBlueprint.PlayerCameraBlueprint_C.ExecuteUbergraph_PlayerCameraBlueprint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class AWaterInteractionBP_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_K2_AttachToActor_ReturnValue                            (ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

bool APlayerCameraBlueprint_C::ExecuteUbergraph_PlayerCameraBlueprint(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerCameraBlueprint_C", "ExecuteUbergraph_PlayerCameraBlueprint");

	Params::APlayerCameraBlueprint_C_ExecuteUbergraph_PlayerCameraBlueprint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	return Parms.ReturnValue;

}

}


