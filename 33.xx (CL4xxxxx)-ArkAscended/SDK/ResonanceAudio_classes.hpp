#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class ResonanceAudio.ResonanceAudioSoundfieldSettings
class UResonanceAudioSoundfieldSettings : public USoundfieldEncodingSettingsBase
{
public:
	enum class EResonanceRenderMode              RenderMode;                                        // 0x28(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1827[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UResonanceAudioSoundfieldSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary
class UResonanceAudioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UResonanceAudioBlueprintFunctionLibrary* GetDefaultObj();

	void SetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset** InPreset);
	void GetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset* ReturnValue);
};

// 0x80 (0x548 - 0x4C8)
// Class ResonanceAudio.ResonanceAudioDirectivityVisualizer
class AResonanceAudioDirectivityVisualizer : public AActor
{
public:
	uint8                                        Pad_182B[0x70];                                    // Fixing Size After Last Property  > TateDumper <
	class UMaterial*                             Material;                                          // 0x538(0x8)(Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UResonanceAudioSpatializationSourceSettings* Settings;                                          // 0x540(0x8)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class AResonanceAudioDirectivityVisualizer* GetDefaultObj();

};

// 0x108 (0x170 - 0x68)
// Class ResonanceAudio.ResonanceAudioReverbPluginPreset
class UResonanceAudioReverbPluginPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1842[0x98];                                    // Fixing Size After Last Property  > TateDumper <
	struct FResonanceAudioReverbPluginSettings   Settings;                                          // 0x100(0x70)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UResonanceAudioReverbPluginPreset* GetDefaultObj();

	struct FQuat SetRoomRotation();
	void SetRoomPosition(struct FVector* InPosition);
	void SetRoomMaterials(TArray<enum class ERaMaterialName>* InMaterials);
	void SetRoomDimensions(struct FVector* InDimensions);
	void SetReverbTimeModifier(float* InReverbTimeModifier);
	void SetReverbGain(float* InReverbGain);
	void SetReverbBrightness(float InReverbBrightness);
	void SetReflectionScalar(float InReflectionScalar);
	void SetEnableRoomEffects(bool bInEnableRoomEffects);
};

// 0x68 (0x90 - 0x28)
// Class ResonanceAudio.ResonanceAudioSettings
class UResonanceAudioSettings : public UObject
{
public:
	struct FSoftObjectPath                       OutputSubmix;                                      // 0x28(0x20)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	enum class ERaQualityMode                    QualityMode;                                       // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1845[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSoftObjectPath                       GlobalReverbPreset;                                // 0x50(0x20)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       GlobalSourcePreset;                                // 0x70(0x20)(Edit, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UResonanceAudioSettings* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class ResonanceAudio.ResonanceAudioSpatializationSourceSettings
class UResonanceAudioSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{
public:
	enum class ERaSpatializationMethod           SpatializationMethod;                              // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_184A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Pattern;                                           // 0x2C(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	float                                        Sharpness;                                         // 0x30(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bToggleVisualization;                              // 0x34(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_184B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Scale;                                             // 0x38(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	float                                        Spread;                                            // 0x3C(0x4)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ERaDistanceRolloffModel           Rolloff;                                           // 0x40(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_184C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinDistance;                                       // 0x44(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	float                                        MaxDistance;                                       // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_184D[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UResonanceAudioSpatializationSourceSettings* GetDefaultObj();

	void SetSoundSourceSpread(float* InSpread);
	void SetSoundSourceDirectivity(float InPattern, float* InSharpness);
};

}


