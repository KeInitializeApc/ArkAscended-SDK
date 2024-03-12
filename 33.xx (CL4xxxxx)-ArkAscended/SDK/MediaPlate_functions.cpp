#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MediaPlate.MediaPlate
// (Actor)

class UClass* AMediaPlate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaPlate");

	return Clss;
}


// MediaPlate MediaPlate.Default__MediaPlate
// (Public, ClassDefaultObject, ArchetypeObject)

class AMediaPlate* AMediaPlate::GetDefaultObj()
{
	static class AMediaPlate* Default = nullptr;

	if (!Default)
		Default = static_cast<AMediaPlate*>(AMediaPlate::StaticClass()->DefaultObject);

	return Default;
}


// Class MediaPlate.MediaPlateAssetUserData
// (None)

class UClass* UMediaPlateAssetUserData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaPlateAssetUserData");

	return Clss;
}


// MediaPlateAssetUserData MediaPlate.Default__MediaPlateAssetUserData
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaPlateAssetUserData* UMediaPlateAssetUserData::GetDefaultObj()
{
	static class UMediaPlateAssetUserData* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaPlateAssetUserData*>(UMediaPlateAssetUserData::StaticClass()->DefaultObject);

	return Default;
}


// Class MediaPlate.MediaPlateComponent
// (None)

class UClass* UMediaPlateComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaPlateComponent");

	return Clss;
}


// MediaPlateComponent MediaPlate.Default__MediaPlateComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaPlateComponent* UMediaPlateComponent::GetDefaultObj()
{
	static class UMediaPlateComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaPlateComponent*>(UMediaPlateComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MediaPlate.MediaPlateComponent.SetPlayOnlyWhenVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInPlayOnlyWhenVisible                                           (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMediaPlateComponent::SetPlayOnlyWhenVisible(bool* bInPlayOnlyWhenVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "SetPlayOnlyWhenVisible");

	Params::UMediaPlateComponent_SetPlayOnlyWhenVisible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInPlayOnlyWhenVisible != nullptr)
		*bInPlayOnlyWhenVisible = Parms.bInPlayOnlyWhenVisible;

}


// Function MediaPlate.MediaPlateComponent.SetMeshRange
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InMeshRange                                                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMediaPlateComponent::SetMeshRange(struct FVector2D* InMeshRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "SetMeshRange");

	Params::UMediaPlateComponent_SetMeshRange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMeshRange != nullptr)
		*InMeshRange = std::move(Parms.InMeshRange);

}


// Function MediaPlate.MediaPlateComponent.SetLoop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInLoop                                                          (ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMediaPlateComponent::SetLoop(bool* bInLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "SetLoop");

	Params::UMediaPlateComponent_SetLoop_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInLoop != nullptr)
		*bInLoop = Parms.bInLoop;

}


// Function MediaPlate.MediaPlateComponent.SetLetterboxAspectRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AspectRatio                                                      (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

float UMediaPlateComponent::SetLetterboxAspectRatio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "SetLetterboxAspectRatio");

	Params::UMediaPlateComponent_SetLetterboxAspectRatio_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MediaPlate.MediaPlateComponent.SetIsAspectRatioAuto
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsAspectRatioAuto                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMediaPlateComponent::SetIsAspectRatioAuto(bool* bInIsAspectRatioAuto)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "SetIsAspectRatioAuto");

	Params::UMediaPlateComponent_SetIsAspectRatioAuto_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInIsAspectRatioAuto != nullptr)
		*bInIsAspectRatioAuto = Parms.bInIsAspectRatioAuto;

}


// Function MediaPlate.MediaPlateComponent.Seek
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan                   Time                                                             (Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMediaPlateComponent::Seek()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "Seek");

	Params::UMediaPlateComponent_Seek_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MediaPlate.MediaPlateComponent.Rewind
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMediaPlateComponent::Rewind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "Rewind");

	Params::UMediaPlateComponent_Rewind_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MediaPlate.MediaPlateComponent.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMediaPlateComponent::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "Play");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MediaPlate.MediaPlateComponent.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMediaPlateComponent::Pause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "Pause");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MediaPlate.MediaPlateComponent.Open
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMediaPlateComponent::Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "Open");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MediaPlate.MediaPlateComponent.OnMediaOpened
// (Final, Native, Private)
// Parameters:
// class FString                      DeviceUrl                                                        (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMediaPlateComponent::OnMediaOpened(class FString* DeviceUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "OnMediaOpened");

	Params::UMediaPlateComponent_OnMediaOpened_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DeviceUrl != nullptr)
		*DeviceUrl = std::move(Parms.DeviceUrl);

}


// Function MediaPlate.MediaPlateComponent.OnMediaEnd
// (Final, Native, Private)
// Parameters:

void UMediaPlateComponent::OnMediaEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "OnMediaEnd");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MediaPlate.MediaPlateComponent.IsMediaPlatePlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMediaPlateComponent::IsMediaPlatePlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "IsMediaPlatePlaying");

	Params::UMediaPlateComponent_IsMediaPlatePlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MediaPlate.MediaPlateComponent.GetMeshRange
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector2D UMediaPlateComponent::GetMeshRange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "GetMeshRange");

	Params::UMediaPlateComponent_GetMeshRange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MediaPlate.MediaPlateComponent.GetMediaTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class UMediaTexture*               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UMediaTexture* UMediaPlateComponent::GetMediaTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "GetMediaTexture");

	Params::UMediaPlateComponent_GetMediaTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MediaPlate.MediaPlateComponent.GetMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*                ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UMediaPlayer* UMediaPlateComponent::GetMediaPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "GetMediaPlayer");

	Params::UMediaPlateComponent_GetMediaPlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MediaPlate.MediaPlateComponent.GetLoop
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMediaPlateComponent::GetLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "GetLoop");

	Params::UMediaPlateComponent_GetLoop_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MediaPlate.MediaPlateComponent.GetLetterboxAspectRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UMediaPlateComponent::GetLetterboxAspectRatio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "GetLetterboxAspectRatio");

	Params::UMediaPlateComponent_GetLetterboxAspectRatio_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MediaPlate.MediaPlateComponent.GetIsAspectRatioAuto
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMediaPlateComponent::GetIsAspectRatioAuto()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "GetIsAspectRatioAuto");

	Params::UMediaPlateComponent_GetIsAspectRatioAuto_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MediaPlate.MediaPlateComponent.Close
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMediaPlateComponent::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "Close");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


