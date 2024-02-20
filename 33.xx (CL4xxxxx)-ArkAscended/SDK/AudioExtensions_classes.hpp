#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.SoundfieldEncodingSettingsBase
class USoundfieldEncodingSettingsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class USoundfieldEncodingSettingsBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.SpatializationPluginSourceSettingsBase
class USpatializationPluginSourceSettingsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class USpatializationPluginSourceSettingsBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.SourceDataOverridePluginSourceSettingsBase
class USourceDataOverridePluginSourceSettingsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class USourceDataOverridePluginSourceSettingsBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.OcclusionPluginSourceSettingsBase
class UOcclusionPluginSourceSettingsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UOcclusionPluginSourceSettingsBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.ReverbPluginSourceSettingsBase
class UReverbPluginSourceSettingsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UReverbPluginSourceSettingsBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.AudioParameterControllerInterface
class IAudioParameterControllerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAudioParameterControllerInterface* GetDefaultObj();

	class FName SetTriggerParameter();
	class FString SetStringParameter();
	TArray<class FString> SetStringArrayParameter();
	TArray<struct FAudioParameter> SetParameters_Blueprint();
	class UObject* SetObjectParameter();
	TArray<class UObject*> SetObjectArrayParameter();
	int32 SetIntParameter();
	TArray<int32> SetIntArrayParameter();
	class FName SetFloatParameter(float InFloat);
	TArray<float> SetFloatArrayParameter();
	class FName SetBoolParameter(bool* InBool);
	TArray<bool> SetBoolArrayParameter();
	void ResetParameters();
};

// 0x8 (0x30 - 0x28)
// Class AudioExtensions.AudioCodecEncoderSettings
class UAudioCodecEncoderSettings : public UObject
{
public:
	int32                                        Version;                                           // 0x28(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance)
	uint8                                        Pad_182E[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioCodecEncoderSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.AudioEndpointSettingsBase
class UAudioEndpointSettingsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAudioEndpointSettingsBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.DummyEndpointSettings
class UDummyEndpointSettings : public UAudioEndpointSettingsBase
{
public:

	static class UClass* StaticClass();
	static class UDummyEndpointSettings* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class AudioExtensions.SoundModulatorBase
class USoundModulatorBase : public UObject
{
public:
	uint8                                        Pad_1837[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USoundModulatorBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.SoundfieldEndpointSettingsBase
class USoundfieldEndpointSettingsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class USoundfieldEndpointSettingsBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.SoundfieldEffectSettingsBase
class USoundfieldEffectSettingsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class USoundfieldEffectSettingsBase* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class AudioExtensions.SoundfieldEffectBase
class USoundfieldEffectBase : public UObject
{
public:
	class USoundfieldEffectSettingsBase*         Settings;                                          // 0x28(0x8)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundfieldEffectBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.WaveformTransformationBase
class UWaveformTransformationBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UWaveformTransformationBase* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class AudioExtensions.WaveformTransformationChain
class UWaveformTransformationChain : public UObject
{
public:
	TArray<class UWaveformTransformationBase*>   Transformations;                                   // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UWaveformTransformationChain* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class AudioExtensions.AudioPcmEncoderSettings
class UAudioPcmEncoderSettings : public UAudioCodecEncoderSettings
{
public:
	enum class EPcmBitDepthConversion            BitDepthConversion;                                // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1848[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioPcmEncoderSettings* GetDefaultObj();

};

}


