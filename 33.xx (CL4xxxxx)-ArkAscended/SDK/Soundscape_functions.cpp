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
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundscapePalette*          SoundscapePaletteIn                                              (Net, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// class UActiveSoundscapePalette*    SoundscapePaletteAgentsOut                                       (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool USoundscapeBPFunctionLibrary::SpawnSoundscapePalette(class USoundscapePalette** SoundscapePaletteIn, class UActiveSoundscapePalette** SoundscapePaletteAgentsOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeBPFunctionLibrary", "SpawnSoundscapePalette");

	Params::USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Params Parms{};


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
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundscapeColor*            SoundscapeColorIn                                                (ExportObject, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// class UActiveSoundscapeColor*      ActiveSoundscapeColor                                            (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool USoundscapeBPFunctionLibrary::SpawnSoundscapeColor(class USoundscapeColor** SoundscapeColorIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeBPFunctionLibrary", "SpawnSoundscapeColor");

	Params::USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Params Parms{};


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
// float                              FadeOutTime                                                      (ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

void UActiveSoundscapeColorVoice::StopLimitedDurationVoice(float FadeOutTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveSoundscapeColorVoice", "StopLimitedDurationVoice");

	Params::UActiveSoundscapeColorVoice_StopLimitedDurationVoice_Params Parms{};

	Parms.FadeOutTime = FadeOutTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// float                              ColorFadeOutTime                                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)

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
// float                              ColorVolume                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              ColorPitch                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              ColorFadeInTime                                                  (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)

float UActiveSoundscapeColor::Play(float* ColorFadeInTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveSoundscapeColor", "Play");

	Params::UActiveSoundscapeColor_Play_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ColorFadeInTime != nullptr)
		*ColorFadeInTime = Parms.ColorFadeInTime;

	return Parms.ReturnValue;

}


// Function Soundscape.ActiveSoundscapeColor.IsPlaying
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UActiveSoundscapeColor::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveSoundscapeColor", "IsPlaying");

	Params::UActiveSoundscapeColor_IsPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// struct FGameplayTag                ColorPoint                                                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 USoundscapeColorPointHashMap::NumColorPointsInCell(struct FVector* Location, struct FGameplayTag* ColorPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeColorPointHashMap", "NumColorPointsInCell");

	Params::USoundscapeColorPointHashMap_NumColorPointsInCell_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (ColorPoint != nullptr)
		*ColorPoint = std::move(Parms.ColorPoint);

	return Parms.ReturnValue;

}


// Function Soundscape.SoundscapeColorPointHashMap.InitializeHash
// (Final, Native, Public, HasDefaults)
// Parameters:
// float                              HashCellSizeIn                                                   (Net, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     GridCenterIn                                                     (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)

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
// uint64                             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

uint64 USoundscapeColorPointHashMap::CalculateHashIndex(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeColorPointHashMap", "CalculateHashIndex");

	Params::USoundscapeColorPointHashMap_CalculateHashIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	return Parms.ReturnValue;

}


// Function Soundscape.SoundscapeColorPointHashMap.AddColorPointToHash
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FGameplayTag                ColorPoint                                                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool USoundscapeColorPointHashMap::AddColorPointToHash(struct FVector* Location, struct FGameplayTag* ColorPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeColorPointHashMap", "AddColorPointToHash");

	Params::USoundscapeColorPointHashMap_AddColorPointToHash_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (ColorPoint != nullptr)
		*ColorPoint = std::move(Parms.ColorPoint);

	return Parms.ReturnValue;

}


// Function Soundscape.SoundscapeColorPointHashMap.AddColorPointArrayToHash
// (Final, Native, Public, HasOutParams)
// Parameters:
// TArray<struct FVector>             Locations                                                        (BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGameplayTag                ColorPoint                                                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

TArray<struct FVector> USoundscapeColorPointHashMap::AddColorPointArrayToHash(struct FGameplayTag* ColorPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeColorPointHashMap", "AddColorPointArrayToHash");

	Params::USoundscapeColorPointHashMap_AddColorPointArrayToHash_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ColorPoint != nullptr)
		*ColorPoint = std::move(Parms.ColorPoint);

	return Parms.ReturnValue;

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
// struct FGameplayTag                SoundscapeState                                                  (Edit, ExportObject, Net, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)

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
// class FName                        PaletteCollectionName                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool USoundscapeSubsystem::RemovePaletteCollection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeSubsystem", "RemovePaletteCollection");

	Params::USoundscapeSubsystem_RemovePaletteCollection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Soundscape.SoundscapeSubsystem.RemoveColorPointCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ColorPointCollectionName                                         (ConstParm, BlueprintVisible, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool USoundscapeSubsystem::RemoveColorPointCollection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeSubsystem", "RemoveColorPointCollection");

	Params::USoundscapeSubsystem_RemoveColorPointCollection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Soundscape.SoundscapeSubsystem.ClearState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                SoundscapeState                                                  (Edit, ExportObject, Net, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)

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
// struct FGameplayTag                ColorPoint                                                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 USoundscapeSubsystem::CheckColorPointDensity(struct FVector* Location, struct FGameplayTag* ColorPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeSubsystem", "CheckColorPointDensity");

	Params::USoundscapeSubsystem_CheckColorPointDensity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (ColorPoint != nullptr)
		*ColorPoint = std::move(Parms.ColorPoint);

	return Parms.ReturnValue;

}


// Function Soundscape.SoundscapeSubsystem.AddPaletteCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        PaletteCollectionName                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// struct FSoundscapePaletteCollectionPaletteCollection                                                (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool USoundscapeSubsystem::AddPaletteCollection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeSubsystem", "AddPaletteCollection");

	Params::USoundscapeSubsystem_AddPaletteCollection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Soundscape.SoundscapeSubsystem.AddColorPointCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ColorPointCollectionName                                         (ConstParm, BlueprintVisible, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// struct FSoundscapeColorPointCollectionColorPointCollection                                             (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)

struct FSoundscapeColorPointCollection USoundscapeSubsystem::AddColorPointCollection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeSubsystem", "AddColorPointCollection");

	Params::USoundscapeSubsystem_AddColorPointCollection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


