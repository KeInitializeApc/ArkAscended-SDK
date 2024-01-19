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
// class UResonanceAudioReverbPluginPreset*InPreset                                                         (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UResonanceAudioReverbPluginPreset* UResonanceAudioBlueprintFunctionLibrary::SetGlobalReverbPreset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioBlueprintFunctionLibrary", "SetGlobalReverbPreset");

	Params::UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.GetGlobalReverbPreset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UResonanceAudioReverbPluginPreset*ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FQuat                       InRotation                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

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
// struct FVector                     InPosition                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FVector UResonanceAudioReverbPluginPreset::SetRoomPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetRoomPosition");

	Params::UResonanceAudioReverbPluginPreset_SetRoomPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomMaterials
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<enum class ERaMaterialName> InMaterials                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

TArray<enum class ERaMaterialName> UResonanceAudioReverbPluginPreset::SetRoomMaterials()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetRoomMaterials");

	Params::UResonanceAudioReverbPluginPreset_SetRoomMaterials_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomDimensions
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InDimensions                                                     (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

struct FVector UResonanceAudioReverbPluginPreset::SetRoomDimensions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetRoomDimensions");

	Params::UResonanceAudioReverbPluginPreset_SetRoomDimensions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbTimeModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReverbTimeModifier                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

float UResonanceAudioReverbPluginPreset::SetReverbTimeModifier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetReverbTimeModifier");

	Params::UResonanceAudioReverbPluginPreset_SetReverbTimeModifier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReverbGain                                                     (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

float UResonanceAudioReverbPluginPreset::SetReverbGain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetReverbGain");

	Params::UResonanceAudioReverbPluginPreset_SetReverbGain_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbBrightness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReverbBrightness                                               (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

float UResonanceAudioReverbPluginPreset::SetReverbBrightness()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetReverbBrightness");

	Params::UResonanceAudioReverbPluginPreset_SetReverbBrightness_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReflectionScalar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReflectionScalar                                               (EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

float UResonanceAudioReverbPluginPreset::SetReflectionScalar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetReflectionScalar");

	Params::UResonanceAudioReverbPluginPreset_SetReflectionScalar_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetEnableRoomEffects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInEnableRoomEffects                                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

bool UResonanceAudioReverbPluginPreset::SetEnableRoomEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetEnableRoomEffects");

	Params::UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// float                              InSpread                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

float UResonanceAudioSpatializationSourceSettings::SetSoundSourceSpread()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioSpatializationSourceSettings", "SetSoundSourceSpread");

	Params::UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceDirectivity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPattern                                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              InSharpness                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

float UResonanceAudioSpatializationSourceSettings::SetSoundSourceDirectivity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioSpatializationSourceSettings", "SetSoundSourceDirectivity");

	Params::UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


