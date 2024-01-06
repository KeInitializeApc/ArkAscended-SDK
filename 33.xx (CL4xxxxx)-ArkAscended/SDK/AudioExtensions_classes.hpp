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

	void SetTriggerParameter(class FName InName);
	class FString SetStringParameter(class FName InName);
	TArray<class FString> SetStringArrayParameter(class FName InName);
	void SetParameters_Blueprint(TArray<struct FAudioParameter>* InParameters);
	class UObject* SetObjectParameter(class FName InName);
	TArray<class UObject*> SetObjectArrayParameter(class FName InName);
	void SetIntParameter(class FName InName, int32* InInt);
	TArray<int32> SetIntArrayParameter(class FName InName);
	float SetFloatParameter(class FName InName);
	TArray<float> SetFloatArrayParameter(class FName InName);
	bool SetBoolParameter(class FName InName);
	TArray<bool> SetBoolArrayParameter(class FName InName);
	void ResetParameters();
};

// 0x8 (0x30 - 0x28)
// Class AudioExtensions.AudioCodecEncoderSettings
class UAudioCodecEncoderSettings : public UObject
{
public:
	int32                                        Version;                                           // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnInstance)
	uint8                                        Pad_1FD2[0x4];                                     // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_1FD6[0x8];                                     // Fixing Size Of Struct > TateDumper <

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
	class USoundfieldEffectSettingsBase*         Settings;                                          // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
	TArray<class UWaveformTransformationBase*>   Transformations;                                   // 0x28(0x10)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UWaveformTransformationChain* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class AudioExtensions.AudioPcmEncoderSettings
class UAudioPcmEncoderSettings : public UAudioCodecEncoderSettings
{
public:
	enum class EPcmBitDepthConversion            BitDepthConversion;                                // 0x30(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FE3[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioPcmEncoderSettings* GetDefaultObj();

};

}


