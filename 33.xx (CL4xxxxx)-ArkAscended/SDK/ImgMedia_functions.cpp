#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ImgMedia.ImgMediaSource
// (None)

class UClass* UImgMediaSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImgMediaSource");

	return Clss;
}


// ImgMediaSource ImgMedia.Default__ImgMediaSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UImgMediaSource* UImgMediaSource::GetDefaultObj()
{
	static class UImgMediaSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UImgMediaSource*>(UImgMediaSource::StaticClass()->DefaultObject);

	return Default;
}


// Function ImgMedia.ImgMediaSource.SetTokenizedSequencePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, SubobjectReference)

void UImgMediaSource::SetTokenizedSequencePath(const class FString& Path)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "SetTokenizedSequencePath");

	Params::UImgMediaSource_SetTokenizedSequencePath_Params Parms{};

	Parms.Path = Path;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ImgMedia.ImgMediaSource.SetSequencePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, SubobjectReference)

void UImgMediaSource::SetSequencePath(const class FString& Path)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "SetSequencePath");

	Params::UImgMediaSource_SetSequencePath_Params Parms{};

	Parms.Path = Path;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ImgMedia.ImgMediaSource.SetMipLevelDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Distance                                                         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UImgMediaSource::SetMipLevelDistance(float* Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "SetMipLevelDistance");

	Params::UImgMediaSource_SetMipLevelDistance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Distance != nullptr)
		*Distance = Parms.Distance;

}


// Function ImgMedia.ImgMediaSource.RemoveTargetObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (Net, OutParm, EditConst, InstancedReference, SubobjectReference)

void UImgMediaSource::RemoveTargetObject(class AActor** InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "RemoveTargetObject");

	Params::UImgMediaSource_RemoveTargetObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InActor != nullptr)
		*InActor = Parms.InActor;

}


// Function ImgMedia.ImgMediaSource.RemoveGlobalCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (Net, OutParm, EditConst, InstancedReference, SubobjectReference)

void UImgMediaSource::RemoveGlobalCamera(class AActor** InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "RemoveGlobalCamera");

	Params::UImgMediaSource_RemoveGlobalCamera_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InActor != nullptr)
		*InActor = Parms.InActor;

}


// Function ImgMedia.ImgMediaSource.GetSequencePath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UImgMediaSource::GetSequencePath(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "GetSequencePath");

	Params::UImgMediaSource_GetSequencePath_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ImgMedia.ImgMediaSource.GetProxies
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutProxies                                                       (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

TArray<class FString> UImgMediaSource::GetProxies()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "GetProxies");

	Params::UImgMediaSource_GetProxies_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ImgMedia.ImgMediaSource.AddTargetObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (Net, OutParm, EditConst, InstancedReference, SubobjectReference)

void UImgMediaSource::AddTargetObject(class AActor** InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "AddTargetObject");

	Params::UImgMediaSource_AddTargetObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InActor != nullptr)
		*InActor = Parms.InActor;

}


// Function ImgMedia.ImgMediaSource.AddGlobalCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (Net, OutParm, EditConst, InstancedReference, SubobjectReference)

void UImgMediaSource::AddGlobalCamera(class AActor** InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "AddGlobalCamera");

	Params::UImgMediaSource_AddGlobalCamera_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InActor != nullptr)
		*InActor = Parms.InActor;

}

}


