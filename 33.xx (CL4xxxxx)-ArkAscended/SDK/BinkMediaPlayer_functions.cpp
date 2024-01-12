#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class BinkMediaPlayer.BinkFunctionLibrary
// (None)

class UClass* UBinkFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BinkFunctionLibrary");

	return Clss;
}


// BinkFunctionLibrary BinkMediaPlayer.Default__BinkFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UBinkFunctionLibrary* UBinkFunctionLibrary::GetDefaultObj()
{
	static class UBinkFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UBinkFunctionLibrary*>(UBinkFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetTime
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTimespan UBinkFunctionLibrary::BinkLoadingMovie_GetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkFunctionLibrary", "BinkLoadingMovie_GetTime");

	Params::UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetDuration
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTimespan UBinkFunctionLibrary::BinkLoadingMovie_GetDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkFunctionLibrary", "BinkLoadingMovie_GetDuration");

	Params::UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkFunctionLibrary.Bink_DrawOverlays
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UBinkFunctionLibrary::Bink_DrawOverlays()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkFunctionLibrary", "Bink_DrawOverlays");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class BinkMediaPlayer.BinkMediaPlayer
// (None)

class UClass* UBinkMediaPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BinkMediaPlayer");

	return Clss;
}


// BinkMediaPlayer BinkMediaPlayer.Default__BinkMediaPlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UBinkMediaPlayer* UBinkMediaPlayer::GetDefaultObj()
{
	static class UBinkMediaPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UBinkMediaPlayer*>(UBinkMediaPlayer::StaticClass()->DefaultObject);

	return Default;
}


// Function BinkMediaPlayer.BinkMediaPlayer.SupportsSeeking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBinkMediaPlayer::SupportsSeeking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "SupportsSeeking");

	Params::UBinkMediaPlayer_SupportsSeeking_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkMediaPlayer.SupportsScrubbing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBinkMediaPlayer::SupportsScrubbing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "SupportsScrubbing");

	Params::UBinkMediaPlayer_SupportsScrubbing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkMediaPlayer.SupportsRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              Rate                                                             (BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Unthinned                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBinkMediaPlayer::SupportsRate(float Rate, bool Unthinned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "SupportsRate");

	Params::UBinkMediaPlayer_SupportsRate_Params Parms{};

	Parms.Rate = Rate;
	Parms.Unthinned = Unthinned;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkMediaPlayer.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBinkMediaPlayer::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function BinkMediaPlayer.BinkMediaPlayer.SetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Rate                                                             (BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)

void UBinkMediaPlayer::SetVolume(float Rate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "SetVolume");

	Params::UBinkMediaPlayer_SetVolume_Params Parms{};

	Parms.Rate = Rate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BinkMediaPlayer.BinkMediaPlayer.SetRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Rate                                                             (BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBinkMediaPlayer::SetRate(float Rate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "SetRate");

	Params::UBinkMediaPlayer_SetRate_Params Parms{};

	Parms.Rate = Rate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkMediaPlayer.SetLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InLooping                                                        (Edit, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBinkMediaPlayer::SetLooping(bool InLooping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "SetLooping");

	Params::UBinkMediaPlayer_SetLooping_Params Parms{};

	Parms.InLooping = InLooping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkMediaPlayer.Seek
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan                   InTime                                                           (Edit, ExportObject, Net, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBinkMediaPlayer::Seek(const struct FTimespan& InTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "Seek");

	Params::UBinkMediaPlayer_Seek_Params Parms{};

	Parms.InTime = InTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkMediaPlayer.Rewind
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBinkMediaPlayer::Rewind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "Rewind");

	Params::UBinkMediaPlayer_Rewind_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkMediaPlayer.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBinkMediaPlayer::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "Play");

	Params::UBinkMediaPlayer_Play_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkMediaPlayer.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBinkMediaPlayer::Pause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "Pause");

	Params::UBinkMediaPlayer_Pause_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkMediaPlayer.OpenUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewUrl                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBinkMediaPlayer::OpenUrl(const class FString& NewUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "OpenUrl");

	Params::UBinkMediaPlayer_OpenUrl_Params Parms{};

	Parms.NewUrl = NewUrl;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkMediaPlayer.IsStopped
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBinkMediaPlayer::IsStopped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "IsStopped");

	Params::UBinkMediaPlayer_IsStopped_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkMediaPlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBinkMediaPlayer::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "IsPlaying");

	Params::UBinkMediaPlayer_IsPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkMediaPlayer.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBinkMediaPlayer::IsPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "IsPaused");

	Params::UBinkMediaPlayer_IsPaused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkMediaPlayer.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBinkMediaPlayer::IsLooping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "IsLooping");

	Params::UBinkMediaPlayer_IsLooping_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkMediaPlayer.IsInitialized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBinkMediaPlayer::IsInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "IsInitialized");

	Params::UBinkMediaPlayer_IsInitialized_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkMediaPlayer.GetUrl
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UBinkMediaPlayer::GetUrl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "GetUrl");

	Params::UBinkMediaPlayer_GetUrl_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkMediaPlayer.GetTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTimespan UBinkMediaPlayer::GetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "GetTime");

	Params::UBinkMediaPlayer_GetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkMediaPlayer.GetRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UBinkMediaPlayer::GetRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "GetRate");

	Params::UBinkMediaPlayer_GetRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkMediaPlayer.GetDuration
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTimespan UBinkMediaPlayer::GetDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "GetDuration");

	Params::UBinkMediaPlayer_GetDuration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkMediaPlayer.Draw
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture*                    Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
// bool                               Tonemap                                                          (Edit, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Out_nits                                                         (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Alpha                                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Srgb_decode                                                      (Edit, BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               Hdr                                                              (ConstParm, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UTexture* UBinkMediaPlayer::Draw(bool Tonemap, int32 Out_nits, float Alpha, bool Srgb_decode, bool Hdr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "Draw");

	Params::UBinkMediaPlayer_Draw_Params Parms{};

	Parms.Tonemap = Tonemap;
	Parms.Out_nits = Out_nits;
	Parms.Alpha = Alpha;
	Parms.Srgb_decode = Srgb_decode;
	Parms.Hdr = Hdr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkMediaPlayer.CloseUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBinkMediaPlayer::CloseUrl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "CloseUrl");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function BinkMediaPlayer.BinkMediaPlayer.CanPlay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBinkMediaPlayer::CanPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "CanPlay");

	Params::UBinkMediaPlayer_CanPlay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkMediaPlayer.CanPause
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBinkMediaPlayer::CanPause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "CanPause");

	Params::UBinkMediaPlayer_CanPause_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class BinkMediaPlayer.BinkMediaTexture
// (None)

class UClass* UBinkMediaTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BinkMediaTexture");

	return Clss;
}


// BinkMediaTexture BinkMediaPlayer.Default__BinkMediaTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UBinkMediaTexture* UBinkMediaTexture::GetDefaultObj()
{
	static class UBinkMediaTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UBinkMediaTexture*>(UBinkMediaTexture::StaticClass()->DefaultObject);

	return Default;
}


// Function BinkMediaPlayer.BinkMediaTexture.SetMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBinkMediaPlayer*            InMediaPlayer                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UBinkMediaTexture::SetMediaPlayer(class UBinkMediaPlayer** InMediaPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaTexture", "SetMediaPlayer");

	Params::UBinkMediaTexture_SetMediaPlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMediaPlayer != nullptr)
		*InMediaPlayer = Parms.InMediaPlayer;

}


// Function BinkMediaPlayer.BinkMediaTexture.Clear
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBinkMediaTexture::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaTexture", "Clear");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class BinkMediaPlayer.BinkMoviePlayerSettings
// (None)

class UClass* UBinkMoviePlayerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BinkMoviePlayerSettings");

	return Clss;
}


// BinkMoviePlayerSettings BinkMediaPlayer.Default__BinkMoviePlayerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UBinkMoviePlayerSettings* UBinkMoviePlayerSettings::GetDefaultObj()
{
	static class UBinkMoviePlayerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UBinkMoviePlayerSettings*>(UBinkMoviePlayerSettings::StaticClass()->DefaultObject);

	return Default;
}

}


