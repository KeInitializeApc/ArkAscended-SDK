#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioExtensions.SoundfieldEncodingSettingsBase
// (None)

class UClass* USoundfieldEncodingSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundfieldEncodingSettingsBase");

	return Clss;
}


// SoundfieldEncodingSettingsBase AudioExtensions.Default__SoundfieldEncodingSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundfieldEncodingSettingsBase* USoundfieldEncodingSettingsBase::GetDefaultObj()
{
	static class USoundfieldEncodingSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundfieldEncodingSettingsBase*>(USoundfieldEncodingSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.SpatializationPluginSourceSettingsBase
// (None)

class UClass* USpatializationPluginSourceSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatializationPluginSourceSettingsBase");

	return Clss;
}


// SpatializationPluginSourceSettingsBase AudioExtensions.Default__SpatializationPluginSourceSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USpatializationPluginSourceSettingsBase* USpatializationPluginSourceSettingsBase::GetDefaultObj()
{
	static class USpatializationPluginSourceSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatializationPluginSourceSettingsBase*>(USpatializationPluginSourceSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.SourceDataOverridePluginSourceSettingsBase
// (None)

class UClass* USourceDataOverridePluginSourceSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SourceDataOverridePluginSourceSettingsBase");

	return Clss;
}


// SourceDataOverridePluginSourceSettingsBase AudioExtensions.Default__SourceDataOverridePluginSourceSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USourceDataOverridePluginSourceSettingsBase* USourceDataOverridePluginSourceSettingsBase::GetDefaultObj()
{
	static class USourceDataOverridePluginSourceSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USourceDataOverridePluginSourceSettingsBase*>(USourceDataOverridePluginSourceSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.OcclusionPluginSourceSettingsBase
// (None)

class UClass* UOcclusionPluginSourceSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OcclusionPluginSourceSettingsBase");

	return Clss;
}


// OcclusionPluginSourceSettingsBase AudioExtensions.Default__OcclusionPluginSourceSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UOcclusionPluginSourceSettingsBase* UOcclusionPluginSourceSettingsBase::GetDefaultObj()
{
	static class UOcclusionPluginSourceSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UOcclusionPluginSourceSettingsBase*>(UOcclusionPluginSourceSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.ReverbPluginSourceSettingsBase
// (None)

class UClass* UReverbPluginSourceSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReverbPluginSourceSettingsBase");

	return Clss;
}


// ReverbPluginSourceSettingsBase AudioExtensions.Default__ReverbPluginSourceSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UReverbPluginSourceSettingsBase* UReverbPluginSourceSettingsBase::GetDefaultObj()
{
	static class UReverbPluginSourceSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UReverbPluginSourceSettingsBase*>(UReverbPluginSourceSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.AudioParameterControllerInterface
// (None)

class UClass* IAudioParameterControllerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioParameterControllerInterface");

	return Clss;
}


// AudioParameterControllerInterface AudioExtensions.Default__AudioParameterControllerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IAudioParameterControllerInterface* IAudioParameterControllerInterface::GetDefaultObj()
{
	static class IAudioParameterControllerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IAudioParameterControllerInterface*>(IAudioParameterControllerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetTriggerParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void IAudioParameterControllerInterface::SetTriggerParameter(class FName* InName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetTriggerParameter");

	Params::IAudioParameterControllerInterface_SetTriggerParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InName != nullptr)
		*InName = Parms.InName;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetStringParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      InValue                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

class FString IAudioParameterControllerInterface::SetStringParameter(class FName* InName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetStringParameter");

	Params::IAudioParameterControllerInterface_SetStringParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InName != nullptr)
		*InName = Parms.InName;

	return Parms.ReturnValue;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class FString>              InValue                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

TArray<class FString> IAudioParameterControllerInterface::SetStringArrayParameter(class FName* InName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetStringArrayParameter");

	Params::IAudioParameterControllerInterface_SetStringArrayParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InName != nullptr)
		*InName = Parms.InName;

	return Parms.ReturnValue;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAudioParameter>     InParameters                                                     (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)

void IAudioParameterControllerInterface::SetParameters_Blueprint(const TArray<struct FAudioParameter>& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetParameters_Blueprint");

	Params::IAudioParameterControllerInterface_SetParameters_Blueprint_Params Parms{};

	Parms.InParameters = InParameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetObjectParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UObject*                     InValue                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

class UObject* IAudioParameterControllerInterface::SetObjectParameter(class FName* InName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetObjectParameter");

	Params::IAudioParameterControllerInterface_SetObjectParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InName != nullptr)
		*InName = Parms.InName;

	return Parms.ReturnValue;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UObject*>             InValue                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

TArray<class UObject*> IAudioParameterControllerInterface::SetObjectArrayParameter(class FName* InName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetObjectArrayParameter");

	Params::IAudioParameterControllerInterface_SetObjectArrayParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InName != nullptr)
		*InName = Parms.InName;

	return Parms.ReturnValue;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetIntParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InInt                                                            (Edit, ExportObject, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)

int32 IAudioParameterControllerInterface::SetIntParameter(class FName* InName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetIntParameter");

	Params::IAudioParameterControllerInterface_SetIntParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InName != nullptr)
		*InName = Parms.InName;

	return Parms.ReturnValue;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<int32>                      InValue                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

TArray<int32> IAudioParameterControllerInterface::SetIntArrayParameter(class FName* InName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetIntArrayParameter");

	Params::IAudioParameterControllerInterface_SetIntArrayParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InName != nullptr)
		*InName = Parms.InName;

	return Parms.ReturnValue;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetFloatParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InFloat                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

float IAudioParameterControllerInterface::SetFloatParameter(class FName* InName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetFloatParameter");

	Params::IAudioParameterControllerInterface_SetFloatParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InName != nullptr)
		*InName = Parms.InName;

	return Parms.ReturnValue;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<float>                      InValue                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

TArray<float> IAudioParameterControllerInterface::SetFloatArrayParameter(class FName* InName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetFloatArrayParameter");

	Params::IAudioParameterControllerInterface_SetFloatArrayParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InName != nullptr)
		*InName = Parms.InName;

	return Parms.ReturnValue;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetBoolParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               InBool                                                           (EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void IAudioParameterControllerInterface::SetBoolParameter(class FName* InName, bool* InBool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetBoolParameter");

	Params::IAudioParameterControllerInterface_SetBoolParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InName != nullptr)
		*InName = Parms.InName;

	if (InBool != nullptr)
		*InBool = Parms.InBool;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<bool>                       InValue                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

TArray<bool> IAudioParameterControllerInterface::SetBoolArrayParameter(class FName* InName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetBoolArrayParameter");

	Params::IAudioParameterControllerInterface_SetBoolArrayParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InName != nullptr)
		*InName = Parms.InName;

	return Parms.ReturnValue;

}


// Function AudioExtensions.AudioParameterControllerInterface.ResetParameters
// (Native, Public, BlueprintCallable)
// Parameters:

void IAudioParameterControllerInterface::ResetParameters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "ResetParameters");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AudioExtensions.AudioCodecEncoderSettings
// (None)

class UClass* UAudioCodecEncoderSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioCodecEncoderSettings");

	return Clss;
}


// AudioCodecEncoderSettings AudioExtensions.Default__AudioCodecEncoderSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioCodecEncoderSettings* UAudioCodecEncoderSettings::GetDefaultObj()
{
	static class UAudioCodecEncoderSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioCodecEncoderSettings*>(UAudioCodecEncoderSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.AudioEndpointSettingsBase
// (None)

class UClass* UAudioEndpointSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioEndpointSettingsBase");

	return Clss;
}


// AudioEndpointSettingsBase AudioExtensions.Default__AudioEndpointSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioEndpointSettingsBase* UAudioEndpointSettingsBase::GetDefaultObj()
{
	static class UAudioEndpointSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioEndpointSettingsBase*>(UAudioEndpointSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.DummyEndpointSettings
// (None)

class UClass* UDummyEndpointSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DummyEndpointSettings");

	return Clss;
}


// DummyEndpointSettings AudioExtensions.Default__DummyEndpointSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UDummyEndpointSettings* UDummyEndpointSettings::GetDefaultObj()
{
	static class UDummyEndpointSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UDummyEndpointSettings*>(UDummyEndpointSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.SoundModulatorBase
// (None)

class UClass* USoundModulatorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundModulatorBase");

	return Clss;
}


// SoundModulatorBase AudioExtensions.Default__SoundModulatorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundModulatorBase* USoundModulatorBase::GetDefaultObj()
{
	static class USoundModulatorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundModulatorBase*>(USoundModulatorBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.SoundfieldEndpointSettingsBase
// (None)

class UClass* USoundfieldEndpointSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundfieldEndpointSettingsBase");

	return Clss;
}


// SoundfieldEndpointSettingsBase AudioExtensions.Default__SoundfieldEndpointSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundfieldEndpointSettingsBase* USoundfieldEndpointSettingsBase::GetDefaultObj()
{
	static class USoundfieldEndpointSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundfieldEndpointSettingsBase*>(USoundfieldEndpointSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.SoundfieldEffectSettingsBase
// (None)

class UClass* USoundfieldEffectSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundfieldEffectSettingsBase");

	return Clss;
}


// SoundfieldEffectSettingsBase AudioExtensions.Default__SoundfieldEffectSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundfieldEffectSettingsBase* USoundfieldEffectSettingsBase::GetDefaultObj()
{
	static class USoundfieldEffectSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundfieldEffectSettingsBase*>(USoundfieldEffectSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.SoundfieldEffectBase
// (None)

class UClass* USoundfieldEffectBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundfieldEffectBase");

	return Clss;
}


// SoundfieldEffectBase AudioExtensions.Default__SoundfieldEffectBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundfieldEffectBase* USoundfieldEffectBase::GetDefaultObj()
{
	static class USoundfieldEffectBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundfieldEffectBase*>(USoundfieldEffectBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.WaveformTransformationBase
// (None)

class UClass* UWaveformTransformationBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaveformTransformationBase");

	return Clss;
}


// WaveformTransformationBase AudioExtensions.Default__WaveformTransformationBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaveformTransformationBase* UWaveformTransformationBase::GetDefaultObj()
{
	static class UWaveformTransformationBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaveformTransformationBase*>(UWaveformTransformationBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.WaveformTransformationChain
// (None)

class UClass* UWaveformTransformationChain::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaveformTransformationChain");

	return Clss;
}


// WaveformTransformationChain AudioExtensions.Default__WaveformTransformationChain
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaveformTransformationChain* UWaveformTransformationChain::GetDefaultObj()
{
	static class UWaveformTransformationChain* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaveformTransformationChain*>(UWaveformTransformationChain::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.AudioPcmEncoderSettings
// (None)

class UClass* UAudioPcmEncoderSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioPcmEncoderSettings");

	return Clss;
}


// AudioPcmEncoderSettings AudioExtensions.Default__AudioPcmEncoderSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioPcmEncoderSettings* UAudioPcmEncoderSettings::GetDefaultObj()
{
	static class UAudioPcmEncoderSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioPcmEncoderSettings*>(UAudioPcmEncoderSettings::StaticClass()->DefaultObject);

	return Default;
}

}


