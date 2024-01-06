#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ActorLayerUtilities.LayersBlueprintLibrary
// (None)

class UClass* ULayersBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LayersBlueprintLibrary");

	return Clss;
}


// LayersBlueprintLibrary ActorLayerUtilities.Default__LayersBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULayersBlueprintLibrary* ULayersBlueprintLibrary::GetDefaultObj()
{
	static class ULayersBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULayersBlueprintLibrary*>(ULayersBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FActorLayer                 Layer                                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig)

struct FActorLayer ULayersBlueprintLibrary::RemoveActorFromLayer(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayersBlueprintLibrary", "RemoveActorFromLayer");

	Params::ULayersBlueprintLibrary_RemoveActorFromLayer_Params Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FActorLayer                 ActorLayer                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config)
// TArray<class AActor*>              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* ULayersBlueprintLibrary::GetActors(const struct FActorLayer& ActorLayer, TArray<class AActor*>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayersBlueprintLibrary", "GetActors");

	Params::ULayersBlueprintLibrary_GetActors_Params Parms{};

	Parms.ActorLayer = ActorLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FActorLayer                 Layer                                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig)

struct FActorLayer ULayersBlueprintLibrary::AddActorToLayer(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayersBlueprintLibrary", "AddActorToLayer");

	Params::ULayersBlueprintLibrary_AddActorToLayer_Params Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


