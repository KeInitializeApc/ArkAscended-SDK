#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ResonanceAudio.ResonanceAudioSoundfieldSettings
// (None)

class UClass* UResonanceAudioSoundfieldSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResonanceAudioSoundfieldSettings");

	return Clss;
}


// ResonanceAudioSoundfieldSettings ResonanceAudio.Default__ResonanceAudioSoundfieldSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UResonanceAudioSoundfieldSettings* UResonanceAudioSoundfieldSettings::GetDefaultObj()
{
	static class UResonanceAudioSoundfieldSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UResonanceAudioSoundfieldSettings*>(UResonanceAudioSoundfieldSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary
// (None)

class UClass* UResonanceAudioBlueprintFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResonanceAudioBlueprintFunctionLibrary");

	return Clss;
}


// ResonanceAudioBlueprintFunctionLibrary ResonanceAudio.Default__ResonanceAudioBlueprintFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UResonanceAudioBlueprintFunctionLibrary* UResonanceAudioBlueprintFunctionLibrary::GetDefaultObj()
{
	static class UResonanceAudioBlueprintFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UResonanceAudioBlueprintFunctionLibrary*>(UResonanceAudioBlueprintFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.SetGlobalReverbPreset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UResonanceAudioReverbPluginPreset*InPreset                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

void UResonanceAudioBlueprintFunctionLibrary::SetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset** InPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioBlueprintFunctionLibrary", "SetGlobalReverbPreset");

	Params::UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPreset != nullptr)
		*InPreset = Parms.InPreset;

}


// Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.GetGlobalReverbPreset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UResonanceAudioReverbPluginPreset*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UResonanceAudioBlueprintFunctionLibrary::GetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioBlueprintFunctionLibrary", "GetGlobalReverbPreset");

	Params::UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ResonanceAudio.ResonanceAudioDirectivityVisualizer
// (Actor)

class UClass* AResonanceAudioDirectivityVisualizer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResonanceAudioDirectivityVisualizer");

	return Clss;
}


// ResonanceAudioDirectivityVisualizer ResonanceAudio.Default__ResonanceAudioDirectivityVisualizer
// (Public, ClassDefaultObject, ArchetypeObject)

class AResonanceAudioDirectivityVisualizer* AResonanceAudioDirectivityVisualizer::GetDefaultObj()
{
	static class AResonanceAudioDirectivityVisualizer* Default = nullptr;

	if (!Default)
		Default = static_cast<AResonanceAudioDirectivityVisualizer*>(AResonanceAudioDirectivityVisualizer::StaticClass()->DefaultObject);

	return Default;
}


// Class ResonanceAudio.ResonanceAudioReverbPluginPreset
// (None)

class UClass* UResonanceAudioReverbPluginPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResonanceAudioReverbPluginPreset");

	return Clss;
}


// ResonanceAudioReverbPluginPreset ResonanceAudio.Default__ResonanceAudioReverbPluginPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class UResonanceAudioReverbPluginPreset* UResonanceAudioReverbPluginPreset::GetDefaultObj()
{
	static class UResonanceAudioReverbPluginPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<UResonanceAudioReverbPluginPreset*>(UResonanceAudioReverbPluginPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomRotation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FQuat                       InRotation                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

struct FQuat UResonanceAudioReverbPluginPreset::SetRoomRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetRoomRotation");

	Params::UResonanceAudioReverbPluginPreset_SetRoomRotation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomPosition
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InPosition                                                       (Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UResonanceAudioReverbPluginPreset::SetRoomPosition(struct FVector* InPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetRoomPosition");

	Params::UResonanceAudioReverbPluginPreset_SetRoomPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPosition != nullptr)
		*InPosition = std::move(Parms.InPosition);

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomMaterials
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<enum class ERaMaterialName> InMaterials                                                      (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UResonanceAudioReverbPluginPreset::SetRoomMaterials(TArray<enum class ERaMaterialName>* InMaterials)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetRoomMaterials");

	Params::UResonanceAudioReverbPluginPreset_SetRoomMaterials_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMaterials != nullptr)
		*InMaterials = std::move(Parms.InMaterials);

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomDimensions
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InDimensions                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UResonanceAudioReverbPluginPreset::SetRoomDimensions(struct FVector* InDimensions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetRoomDimensions");

	Params::UResonanceAudioReverbPluginPreset_SetRoomDimensions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InDimensions != nullptr)
		*InDimensions = std::move(Parms.InDimensions);

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbTimeModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReverbTimeModifier                                             (ExportObject, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UResonanceAudioReverbPluginPreset::SetReverbTimeModifier(float* InReverbTimeModifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetReverbTimeModifier");

	Params::UResonanceAudioReverbPluginPreset_SetReverbTimeModifier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InReverbTimeModifier != nullptr)
		*InReverbTimeModifier = Parms.InReverbTimeModifier;

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReverbGain                                                     (Edit, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UResonanceAudioReverbPluginPreset::SetReverbGain(float* InReverbGain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetReverbGain");

	Params::UResonanceAudioReverbPluginPreset_SetReverbGain_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InReverbGain != nullptr)
		*InReverbGain = Parms.InReverbGain;

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbBrightness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReverbBrightness                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UResonanceAudioReverbPluginPreset::SetReverbBrightness(float InReverbBrightness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetReverbBrightness");

	Params::UResonanceAudioReverbPluginPreset_SetReverbBrightness_Params Parms{};

	Parms.InReverbBrightness = InReverbBrightness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReflectionScalar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReflectionScalar                                               (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UResonanceAudioReverbPluginPreset::SetReflectionScalar(float InReflectionScalar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetReflectionScalar");

	Params::UResonanceAudioReverbPluginPreset_SetReflectionScalar_Params Parms{};

	Parms.InReflectionScalar = InReflectionScalar;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetEnableRoomEffects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInEnableRoomEffects                                             (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UResonanceAudioReverbPluginPreset::SetEnableRoomEffects(bool bInEnableRoomEffects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetEnableRoomEffects");

	Params::UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Params Parms{};

	Parms.bInEnableRoomEffects = bInEnableRoomEffects;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ResonanceAudio.ResonanceAudioSettings
// (None)

class UClass* UResonanceAudioSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResonanceAudioSettings");

	return Clss;
}


// ResonanceAudioSettings ResonanceAudio.Default__ResonanceAudioSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UResonanceAudioSettings* UResonanceAudioSettings::GetDefaultObj()
{
	static class UResonanceAudioSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UResonanceAudioSettings*>(UResonanceAudioSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class ResonanceAudio.ResonanceAudioSpatializationSourceSettings
// (None)

class UClass* UResonanceAudioSpatializationSourceSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResonanceAudioSpatializationSourceSettings");

	return Clss;
}


// ResonanceAudioSpatializationSourceSettings ResonanceAudio.Default__ResonanceAudioSpatializationSourceSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UResonanceAudioSpatializationSourceSettings* UResonanceAudioSpatializationSourceSettings::GetDefaultObj()
{
	static class UResonanceAudioSpatializationSourceSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UResonanceAudioSpatializationSourceSettings*>(UResonanceAudioSpatializationSourceSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceSpread
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSpread                                                         (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UResonanceAudioSpatializationSourceSettings::SetSoundSourceSpread(float* InSpread)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioSpatializationSourceSettings", "SetSoundSourceSpread");

	Params::UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSpread != nullptr)
		*InSpread = Parms.InSpread;

}


// Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceDirectivity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPattern                                                        (Edit, BlueprintVisible, Net, Parm, Config, InstancedReference, SubobjectReference)
// float                              InSharpness                                                      (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UResonanceAudioSpatializationSourceSettings::SetSoundSourceDirectivity(float InPattern, float* InSharpness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioSpatializationSourceSettings", "SetSoundSourceDirectivity");

	Params::UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Params Parms{};

	Parms.InPattern = InPattern;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSharpness != nullptr)
		*InSharpness = Parms.InSharpness;

}

}


