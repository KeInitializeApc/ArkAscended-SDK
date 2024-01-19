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
// class AActor*                      InActor                                                          (Net, OutParm, EditConst, InstancedReference, SubobjectReference)
// struct FActorLayer                 Layer                                                            (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

struct FActorLayer ULayersBlueprintLibrary::RemoveActorFromLayer(class AActor** InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayersBlueprintLibrary", "RemoveActorFromLayer");

	Params::ULayersBlueprintLibrary_RemoveActorFromLayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InActor != nullptr)
		*InActor = Parms.InActor;

	return Parms.ReturnValue;

}


// Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FActorLayer                 ActorLayer                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config)
// TArray<class AActor*>              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ULayersBlueprintLibrary::GetActors(class UObject* WorldContextObject, const struct FActorLayer& ActorLayer, const TArray<class AActor*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayersBlueprintLibrary", "GetActors");

	Params::ULayersBlueprintLibrary_GetActors_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActorLayer = ActorLayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (Net, OutParm, EditConst, InstancedReference, SubobjectReference)
// struct FActorLayer                 Layer                                                            (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

struct FActorLayer ULayersBlueprintLibrary::AddActorToLayer(class AActor** InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayersBlueprintLibrary", "AddActorToLayer");

	Params::ULayersBlueprintLibrary_AddActorToLayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InActor != nullptr)
		*InActor = Parms.InActor;

	return Parms.ReturnValue;

}

}


