#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CableComponent.CableActor
// (Actor)

class UClass* ACableActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CableActor");

	return Clss;
}


// CableActor CableComponent.Default__CableActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ACableActor* ACableActor::GetDefaultObj()
{
	static class ACableActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ACableActor*>(ACableActor::StaticClass()->DefaultObject);

	return Default;
}


// Class CableComponent.CableComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UCableComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CableComponent");

	return Clss;
}


// CableComponent CableComponent.Default__CableComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCableComponent* UCableComponent::GetDefaultObj()
{
	static class UCableComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCableComponent*>(UCableComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CableComponent.CableComponent.SetAttachEndToComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*             Component                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FName                        SocketName                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)

void UCableComponent::SetAttachEndToComponent(class USceneComponent* Component, class FName* SocketName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CableComponent", "SetAttachEndToComponent");

	Params::UCableComponent_SetAttachEndToComponent_Params Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SocketName != nullptr)
		*SocketName = Parms.SocketName;

}


// Function CableComponent.CableComponent.SetAttachEndTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// class FName                        ComponentProperty                                                (ConstParm, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        SocketName                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)

void UCableComponent::SetAttachEndTo(class AActor** Actor, class FName ComponentProperty, class FName* SocketName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CableComponent", "SetAttachEndTo");

	Params::UCableComponent_SetAttachEndTo_Params Parms{};

	Parms.ComponentProperty = ComponentProperty;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Actor != nullptr)
		*Actor = Parms.Actor;

	if (SocketName != nullptr)
		*SocketName = Parms.SocketName;

}


// Function CableComponent.CableComponent.GetCableParticleLocations
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>             Locations                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

void UCableComponent::GetCableParticleLocations(const TArray<struct FVector>& Locations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CableComponent", "GetCableParticleLocations");

	Params::UCableComponent_GetCableParticleLocations_Params Parms{};

	Parms.Locations = Locations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CableComponent.CableComponent.GetAttachedComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USceneComponent*             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCableComponent::GetAttachedComponent(class USceneComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CableComponent", "GetAttachedComponent");

	Params::UCableComponent_GetAttachedComponent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CableComponent.CableComponent.GetAttachedActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCableComponent::GetAttachedActor(class AActor* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CableComponent", "GetAttachedActor");

	Params::UCableComponent_GetAttachedActor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


