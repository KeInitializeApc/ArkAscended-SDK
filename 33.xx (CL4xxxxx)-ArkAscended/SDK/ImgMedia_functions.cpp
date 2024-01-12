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
// class FString                      Path                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)

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
// class FString                      Path                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)

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
// float                              Distance                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UImgMediaSource::SetMipLevelDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "SetMipLevelDistance");

	Params::UImgMediaSource_SetMipLevelDistance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ImgMedia.ImgMediaSource.RemoveTargetObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

class AActor* UImgMediaSource::RemoveTargetObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "RemoveTargetObject");

	Params::UImgMediaSource_RemoveTargetObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ImgMedia.ImgMediaSource.RemoveGlobalCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

class AActor* UImgMediaSource::RemoveGlobalCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "RemoveGlobalCamera");

	Params::UImgMediaSource_RemoveGlobalCamera_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ImgMedia.ImgMediaSource.GetSequencePath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UImgMediaSource::GetSequencePath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "GetSequencePath");

	Params::UImgMediaSource_GetSequencePath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ImgMedia.ImgMediaSource.GetProxies
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutProxies                                                       (Edit, ExportObject, Net, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void UImgMediaSource::GetProxies(TArray<class FString>* OutProxies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "GetProxies");

	Params::UImgMediaSource_GetProxies_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutProxies != nullptr)
		*OutProxies = std::move(Parms.OutProxies);

}


// Function ImgMedia.ImgMediaSource.AddTargetObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

class AActor* UImgMediaSource::AddTargetObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "AddTargetObject");

	Params::UImgMediaSource_AddTargetObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ImgMedia.ImgMediaSource.AddGlobalCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

class AActor* UImgMediaSource::AddGlobalCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "AddGlobalCamera");

	Params::UImgMediaSource_AddGlobalCamera_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


