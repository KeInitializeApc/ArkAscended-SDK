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
// class AActor*                      InActor                                                          (ConstParm, ExportObject, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FActorLayer                 Layer                                                            (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference)

struct FActorLayer ULayersBlueprintLibrary::RemoveActorFromLayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayersBlueprintLibrary", "RemoveActorFromLayer");

	Params::ULayersBlueprintLibrary_RemoveActorFromLayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FActorLayer                 ActorLayer                                                       (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config)
// TArray<class AActor*>              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* ULayersBlueprintLibrary::GetActors(const struct FActorLayer& ActorLayer, const TArray<class AActor*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayersBlueprintLibrary", "GetActors");

	Params::ULayersBlueprintLibrary_GetActors_Params Parms{};

	Parms.ActorLayer = ActorLayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (ConstParm, ExportObject, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FActorLayer                 Layer                                                            (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference)

struct FActorLayer ULayersBlueprintLibrary::AddActorToLayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayersBlueprintLibrary", "AddActorToLayer");

	Params::ULayersBlueprintLibrary_AddActorToLayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


