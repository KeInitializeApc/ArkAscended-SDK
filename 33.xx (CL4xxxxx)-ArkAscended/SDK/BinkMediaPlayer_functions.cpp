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
// struct FTimespan                   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBinkFunctionLibrary::BinkLoadingMovie_GetTime(const struct FTimespan& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkFunctionLibrary", "BinkLoadingMovie_GetTime");

	Params::UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetDuration
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan                   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBinkFunctionLibrary::BinkLoadingMovie_GetDuration(const struct FTimespan& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkFunctionLibrary", "BinkLoadingMovie_GetDuration");

	Params::UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBinkMediaPlayer::SupportsSeeking(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "SupportsSeeking");

	Params::UBinkMediaPlayer_SupportsSeeking_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BinkMediaPlayer.BinkMediaPlayer.SupportsScrubbing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBinkMediaPlayer::SupportsScrubbing(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "SupportsScrubbing");

	Params::UBinkMediaPlayer_SupportsScrubbing_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BinkMediaPlayer.BinkMediaPlayer.SupportsRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              Rate                                                             (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Unthinned                                                        (Edit, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBinkMediaPlayer::SupportsRate(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "SupportsRate");

	Params::UBinkMediaPlayer_SupportsRate_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// float                              Rate                                                             (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)

float UBinkMediaPlayer::SetVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "SetVolume");

	Params::UBinkMediaPlayer_SetVolume_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkMediaPlayer.SetRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Rate                                                             (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UBinkMediaPlayer::SetRate(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "SetRate");

	Params::UBinkMediaPlayer_SetRate_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BinkMediaPlayer.BinkMediaPlayer.SetLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InLooping                                                        (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBinkMediaPlayer::SetLooping(bool* InLooping, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "SetLooping");

	Params::UBinkMediaPlayer_SetLooping_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InLooping != nullptr)
		*InLooping = Parms.InLooping;

}


// Function BinkMediaPlayer.BinkMediaPlayer.Seek
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan                   InTime                                                           (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBinkMediaPlayer::Seek(struct FTimespan* InTime, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "Seek");

	Params::UBinkMediaPlayer_Seek_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTime != nullptr)
		*InTime = std::move(Parms.InTime);

}


// Function BinkMediaPlayer.BinkMediaPlayer.Rewind
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBinkMediaPlayer::Rewind(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "Rewind");

	Params::UBinkMediaPlayer_Rewind_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BinkMediaPlayer.BinkMediaPlayer.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBinkMediaPlayer::Play(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "Play");

	Params::UBinkMediaPlayer_Play_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BinkMediaPlayer.BinkMediaPlayer.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBinkMediaPlayer::Pause(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "Pause");

	Params::UBinkMediaPlayer_Pause_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BinkMediaPlayer.BinkMediaPlayer.OpenUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewUrl                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBinkMediaPlayer::OpenUrl(class FString* NewUrl, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "OpenUrl");

	Params::UBinkMediaPlayer_OpenUrl_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewUrl != nullptr)
		*NewUrl = std::move(Parms.NewUrl);

}


// Function BinkMediaPlayer.BinkMediaPlayer.IsStopped
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBinkMediaPlayer::IsStopped(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "IsStopped");

	Params::UBinkMediaPlayer_IsStopped_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BinkMediaPlayer.BinkMediaPlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBinkMediaPlayer::IsPlaying(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "IsPlaying");

	Params::UBinkMediaPlayer_IsPlaying_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BinkMediaPlayer.BinkMediaPlayer.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBinkMediaPlayer::IsPaused(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "IsPaused");

	Params::UBinkMediaPlayer_IsPaused_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BinkMediaPlayer.BinkMediaPlayer.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBinkMediaPlayer::IsLooping(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "IsLooping");

	Params::UBinkMediaPlayer_IsLooping_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BinkMediaPlayer.BinkMediaPlayer.IsInitialized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBinkMediaPlayer::IsInitialized(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "IsInitialized");

	Params::UBinkMediaPlayer_IsInitialized_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BinkMediaPlayer.BinkMediaPlayer.GetUrl
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBinkMediaPlayer::GetUrl(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "GetUrl");

	Params::UBinkMediaPlayer_GetUrl_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BinkMediaPlayer.BinkMediaPlayer.GetTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan                   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBinkMediaPlayer::GetTime(const struct FTimespan& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "GetTime");

	Params::UBinkMediaPlayer_GetTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BinkMediaPlayer.BinkMediaPlayer.GetRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBinkMediaPlayer::GetRate(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "GetRate");

	Params::UBinkMediaPlayer_GetRate_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BinkMediaPlayer.BinkMediaPlayer.GetDuration
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan                   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBinkMediaPlayer::GetDuration(const struct FTimespan& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "GetDuration");

	Params::UBinkMediaPlayer_GetDuration_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BinkMediaPlayer.BinkMediaPlayer.Draw
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture*                    Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
// bool                               Tonemap                                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Out_nits                                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Alpha                                                            (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Srgb_decode                                                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               Hdr                                                              (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UTexture* UBinkMediaPlayer::Draw(bool* Tonemap, int32* Out_nits, float* Alpha, bool* Srgb_decode, bool* Hdr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "Draw");

	Params::UBinkMediaPlayer_Draw_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Tonemap != nullptr)
		*Tonemap = Parms.Tonemap;

	if (Out_nits != nullptr)
		*Out_nits = Parms.Out_nits;

	if (Alpha != nullptr)
		*Alpha = Parms.Alpha;

	if (Srgb_decode != nullptr)
		*Srgb_decode = Parms.Srgb_decode;

	if (Hdr != nullptr)
		*Hdr = Parms.Hdr;

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
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBinkMediaPlayer::CanPlay(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "CanPlay");

	Params::UBinkMediaPlayer_CanPlay_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BinkMediaPlayer.BinkMediaPlayer.CanPause
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBinkMediaPlayer::CanPause(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaPlayer", "CanPause");

	Params::UBinkMediaPlayer_CanPause_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UBinkMediaPlayer*            InMediaPlayer                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UBinkMediaPlayer* UBinkMediaTexture::SetMediaPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BinkMediaTexture", "SetMediaPlayer");

	Params::UBinkMediaTexture_SetMediaPlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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


