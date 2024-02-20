#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Soundscape.SoundscapeBPFunctionLibrary
// (None)

class UClass* USoundscapeBPFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundscapeBPFunctionLibrary");

	return Clss;
}


// SoundscapeBPFunctionLibrary Soundscape.Default__SoundscapeBPFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundscapeBPFunctionLibrary* USoundscapeBPFunctionLibrary::GetDefaultObj()
{
	static class USoundscapeBPFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundscapeBPFunctionLibrary*>(USoundscapeBPFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Soundscape.SoundscapeBPFunctionLibrary.SpawnSoundscapePalette
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundscapePalette*          SoundscapePaletteIn                                              (Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UActiveSoundscapePalette*    SoundscapePaletteAgentsOut                                       (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* USoundscapeBPFunctionLibrary::SpawnSoundscapePalette(class USoundscapePalette** SoundscapePaletteIn, class UActiveSoundscapePalette** SoundscapePaletteAgentsOut, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeBPFunctionLibrary", "SpawnSoundscapePalette");

	Params::USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SoundscapePaletteIn != nullptr)
		*SoundscapePaletteIn = Parms.SoundscapePaletteIn;

	if (SoundscapePaletteAgentsOut != nullptr)
		*SoundscapePaletteAgentsOut = Parms.SoundscapePaletteAgentsOut;

	return Parms.ReturnValue;

}


// Function Soundscape.SoundscapeBPFunctionLibrary.SpawnSoundscapeColor
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundscapeColor*            SoundscapeColorIn                                                (ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UActiveSoundscapeColor*      ActiveSoundscapeColor                                            (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* USoundscapeBPFunctionLibrary::SpawnSoundscapeColor(class USoundscapeColor** SoundscapeColorIn, class UActiveSoundscapeColor* ActiveSoundscapeColor, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeBPFunctionLibrary", "SpawnSoundscapeColor");

	Params::USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Params Parms{};

	Parms.ActiveSoundscapeColor = ActiveSoundscapeColor;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SoundscapeColorIn != nullptr)
		*SoundscapeColorIn = Parms.SoundscapeColorIn;

	return Parms.ReturnValue;

}


// Class Soundscape.SoundscapeColor
// (None)

class UClass* USoundscapeColor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundscapeColor");

	return Clss;
}


// SoundscapeColor Soundscape.Default__SoundscapeColor
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundscapeColor* USoundscapeColor::GetDefaultObj()
{
	static class USoundscapeColor* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundscapeColor*>(USoundscapeColor::StaticClass()->DefaultObject);

	return Default;
}


// Class Soundscape.ActiveSoundscapeColorVoice
// (None)

class UClass* UActiveSoundscapeColorVoice::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveSoundscapeColorVoice");

	return Clss;
}


// ActiveSoundscapeColorVoice Soundscape.Default__ActiveSoundscapeColorVoice
// (Public, ClassDefaultObject, ArchetypeObject)

class UActiveSoundscapeColorVoice* UActiveSoundscapeColorVoice::GetDefaultObj()
{
	static class UActiveSoundscapeColorVoice* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveSoundscapeColorVoice*>(UActiveSoundscapeColorVoice::StaticClass()->DefaultObject);

	return Default;
}


// Function Soundscape.ActiveSoundscapeColorVoice.StopLimitedDurationVoice
// (Final, Native, Public)
// Parameters:
// float                              FadeOutTime                                                      (Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)

float UActiveSoundscapeColorVoice::StopLimitedDurationVoice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveSoundscapeColorVoice", "StopLimitedDurationVoice");

	Params::UActiveSoundscapeColorVoice_StopLimitedDurationVoice_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Soundscape.ActiveSoundscapeColor
// (None)

class UClass* UActiveSoundscapeColor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveSoundscapeColor");

	return Clss;
}


// ActiveSoundscapeColor Soundscape.Default__ActiveSoundscapeColor
// (Public, ClassDefaultObject, ArchetypeObject)

class UActiveSoundscapeColor* UActiveSoundscapeColor::GetDefaultObj()
{
	static class UActiveSoundscapeColor* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveSoundscapeColor*>(UActiveSoundscapeColor::StaticClass()->DefaultObject);

	return Default;
}


// Function Soundscape.ActiveSoundscapeColor.UpdateSoundscapeColor
// (Final, Native, Public)
// Parameters:

void UActiveSoundscapeColor::UpdateSoundscapeColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveSoundscapeColor", "UpdateSoundscapeColor");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Soundscape.ActiveSoundscapeColor.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ColorFadeOutTime                                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)

void UActiveSoundscapeColor::Stop(float* ColorFadeOutTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveSoundscapeColor", "Stop");

	Params::UActiveSoundscapeColor_Stop_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ColorFadeOutTime != nullptr)
		*ColorFadeOutTime = Parms.ColorFadeOutTime;

}


// Function Soundscape.ActiveSoundscapeColor.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ColorVolume                                                      (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              ColorPitch                                                       (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              ColorFadeInTime                                                  (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)

void UActiveSoundscapeColor::Play(float ColorVolume, float ColorPitch, float* ColorFadeInTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveSoundscapeColor", "Play");

	Params::UActiveSoundscapeColor_Play_Params Parms{};

	Parms.ColorVolume = ColorVolume;
	Parms.ColorPitch = ColorPitch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ColorFadeInTime != nullptr)
		*ColorFadeInTime = Parms.ColorFadeInTime;

}


// Function Soundscape.ActiveSoundscapeColor.IsPlaying
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UActiveSoundscapeColor::IsPlaying(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveSoundscapeColor", "IsPlaying");

	Params::UActiveSoundscapeColor_IsPlaying_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Soundscape.SoundscapeColorPointComponent
// (None)

class UClass* USoundscapeColorPointComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundscapeColorPointComponent");

	return Clss;
}


// SoundscapeColorPointComponent Soundscape.Default__SoundscapeColorPointComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundscapeColorPointComponent* USoundscapeColorPointComponent::GetDefaultObj()
{
	static class USoundscapeColorPointComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundscapeColorPointComponent*>(USoundscapeColorPointComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Soundscape.SoundscapePalette
// (None)

class UClass* USoundscapePalette::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundscapePalette");

	return Clss;
}


// SoundscapePalette Soundscape.Default__SoundscapePalette
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundscapePalette* USoundscapePalette::GetDefaultObj()
{
	static class USoundscapePalette* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundscapePalette*>(USoundscapePalette::StaticClass()->DefaultObject);

	return Default;
}


// Class Soundscape.ActiveSoundscapePalette
// (None)

class UClass* UActiveSoundscapePalette::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveSoundscapePalette");

	return Clss;
}


// ActiveSoundscapePalette Soundscape.Default__ActiveSoundscapePalette
// (Public, ClassDefaultObject, ArchetypeObject)

class UActiveSoundscapePalette* UActiveSoundscapePalette::GetDefaultObj()
{
	static class UActiveSoundscapePalette* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveSoundscapePalette*>(UActiveSoundscapePalette::StaticClass()->DefaultObject);

	return Default;
}


// Function Soundscape.ActiveSoundscapePalette.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UActiveSoundscapePalette::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveSoundscapePalette", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Soundscape.ActiveSoundscapePalette.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UActiveSoundscapePalette::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveSoundscapePalette", "Play");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Soundscape.SoundscapeSettings
// (None)

class UClass* USoundscapeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundscapeSettings");

	return Clss;
}


// SoundscapeSettings Soundscape.Default__SoundscapeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundscapeSettings* USoundscapeSettings::GetDefaultObj()
{
	static class USoundscapeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundscapeSettings*>(USoundscapeSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Soundscape.SoundscapeColorPointHashCellDensity
// (None)

class UClass* USoundscapeColorPointHashCellDensity::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundscapeColorPointHashCellDensity");

	return Clss;
}


// SoundscapeColorPointHashCellDensity Soundscape.Default__SoundscapeColorPointHashCellDensity
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundscapeColorPointHashCellDensity* USoundscapeColorPointHashCellDensity::GetDefaultObj()
{
	static class USoundscapeColorPointHashCellDensity* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundscapeColorPointHashCellDensity*>(USoundscapeColorPointHashCellDensity::StaticClass()->DefaultObject);

	return Default;
}


// Class Soundscape.SoundscapeColorPointHashMap
// (None)

class UClass* USoundscapeColorPointHashMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundscapeColorPointHashMap");

	return Clss;
}


// SoundscapeColorPointHashMap Soundscape.Default__SoundscapeColorPointHashMap
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundscapeColorPointHashMap* USoundscapeColorPointHashMap::GetDefaultObj()
{
	static class USoundscapeColorPointHashMap* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundscapeColorPointHashMap*>(USoundscapeColorPointHashMap::StaticClass()->DefaultObject);

	return Default;
}


// Function Soundscape.SoundscapeColorPointHashMap.SetGridCenterpoint
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)

void USoundscapeColorPointHashMap::SetGridCenterpoint(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeColorPointHashMap", "SetGridCenterpoint");

	Params::USoundscapeColorPointHashMap_SetGridCenterpoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function Soundscape.SoundscapeColorPointHashMap.NumColorPointsInCell
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FGameplayTag                ColorPoint                                                       (BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USoundscapeColorPointHashMap::NumColorPointsInCell(struct FVector* Location, const struct FGameplayTag& ColorPoint, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeColorPointHashMap", "NumColorPointsInCell");

	Params::USoundscapeColorPointHashMap_NumColorPointsInCell_Params Parms{};

	Parms.ColorPoint = ColorPoint;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function Soundscape.SoundscapeColorPointHashMap.InitializeHash
// (Final, Native, Public, HasDefaults)
// Parameters:
// float                              HashCellSizeIn                                                   (Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// struct FVector                     GridCenterIn                                                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

struct FVector USoundscapeColorPointHashMap::InitializeHash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeColorPointHashMap", "InitializeHash");

	Params::USoundscapeColorPointHashMap_InitializeHash_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Soundscape.SoundscapeColorPointHashMap.ClearHash
// (Final, Native, Public)
// Parameters:

void USoundscapeColorPointHashMap::ClearHash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeColorPointHashMap", "ClearHash");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Soundscape.SoundscapeColorPointHashMap.CalculateHashIndex
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// uint64                             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USoundscapeColorPointHashMap::CalculateHashIndex(struct FVector* Location, uint64 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeColorPointHashMap", "CalculateHashIndex");

	Params::USoundscapeColorPointHashMap_CalculateHashIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function Soundscape.SoundscapeColorPointHashMap.AddColorPointToHash
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FGameplayTag                ColorPoint                                                       (BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USoundscapeColorPointHashMap::AddColorPointToHash(struct FVector* Location, const struct FGameplayTag& ColorPoint, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeColorPointHashMap", "AddColorPointToHash");

	Params::USoundscapeColorPointHashMap_AddColorPointToHash_Params Parms{};

	Parms.ColorPoint = ColorPoint;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function Soundscape.SoundscapeColorPointHashMap.AddColorPointArrayToHash
// (Final, Native, Public, HasOutParams)
// Parameters:
// TArray<struct FVector>             Locations                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGameplayTag                ColorPoint                                                       (BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

void USoundscapeColorPointHashMap::AddColorPointArrayToHash(const TArray<struct FVector>& Locations, const struct FGameplayTag& ColorPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeColorPointHashMap", "AddColorPointArrayToHash");

	Params::USoundscapeColorPointHashMap_AddColorPointArrayToHash_Params Parms{};

	Parms.Locations = Locations;
	Parms.ColorPoint = ColorPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Soundscape.SoundscapeColorPointHashMapCollection
// (None)

class UClass* USoundscapeColorPointHashMapCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundscapeColorPointHashMapCollection");

	return Clss;
}


// SoundscapeColorPointHashMapCollection Soundscape.Default__SoundscapeColorPointHashMapCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundscapeColorPointHashMapCollection* USoundscapeColorPointHashMapCollection::GetDefaultObj()
{
	static class USoundscapeColorPointHashMapCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundscapeColorPointHashMapCollection*>(USoundscapeColorPointHashMapCollection::StaticClass()->DefaultObject);

	return Default;
}


// Class Soundscape.SoundscapeSubsystem
// (None)

class UClass* USoundscapeSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundscapeSubsystem");

	return Clss;
}


// SoundscapeSubsystem Soundscape.Default__SoundscapeSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundscapeSubsystem* USoundscapeSubsystem::GetDefaultObj()
{
	static class USoundscapeSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundscapeSubsystem*>(USoundscapeSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function Soundscape.SoundscapeSubsystem.SetState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                SoundscapeState                                                  (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

struct FGameplayTag USoundscapeSubsystem::SetState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeSubsystem", "SetState");

	Params::USoundscapeSubsystem_SetState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Soundscape.SoundscapeSubsystem.RestartSoundscape
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USoundscapeSubsystem::RestartSoundscape()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeSubsystem", "RestartSoundscape");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Soundscape.SoundscapeSubsystem.RemovePaletteCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        PaletteCollectionName                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName USoundscapeSubsystem::RemovePaletteCollection(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeSubsystem", "RemovePaletteCollection");

	Params::USoundscapeSubsystem_RemovePaletteCollection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Soundscape.SoundscapeSubsystem.RemoveColorPointCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ColorPointCollectionName                                         (ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName USoundscapeSubsystem::RemoveColorPointCollection(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeSubsystem", "RemoveColorPointCollection");

	Params::USoundscapeSubsystem_RemoveColorPointCollection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Soundscape.SoundscapeSubsystem.ClearState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                SoundscapeState                                                  (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

struct FGameplayTag USoundscapeSubsystem::ClearState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeSubsystem", "ClearState");

	Params::USoundscapeSubsystem_ClearState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Soundscape.SoundscapeSubsystem.CheckColorPointDensity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FGameplayTag                ColorPoint                                                       (BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USoundscapeSubsystem::CheckColorPointDensity(struct FVector* Location, const struct FGameplayTag& ColorPoint, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeSubsystem", "CheckColorPointDensity");

	Params::USoundscapeSubsystem_CheckColorPointDensity_Params Parms{};

	Parms.ColorPoint = ColorPoint;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function Soundscape.SoundscapeSubsystem.AddPaletteCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        PaletteCollectionName                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// struct FSoundscapePaletteCollectionPaletteCollection                                                (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSoundscapePaletteCollection USoundscapeSubsystem::AddPaletteCollection(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeSubsystem", "AddPaletteCollection");

	Params::USoundscapeSubsystem_AddPaletteCollection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Soundscape.SoundscapeSubsystem.AddColorPointCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ColorPointCollectionName                                         (ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// struct FSoundscapeColorPointCollectionColorPointCollection                                             (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

class FName USoundscapeSubsystem::AddColorPointCollection(const struct FSoundscapeColorPointCollection& ColorPointCollection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeSubsystem", "AddColorPointCollection");

	Params::USoundscapeSubsystem_AddColorPointCollection_Params Parms{};

	Parms.ColorPointCollection = ColorPointCollection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


