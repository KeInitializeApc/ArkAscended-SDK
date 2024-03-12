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
	enum class EResonanceRenderMode              RenderMode;                                        // 0x28(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CD5[0x7];                                     // Fixing Size Of Struct > TateDumper <

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
	class UResonanceAudioReverbPluginPreset* GetGlobalReverbPreset();
};

// 0x80 (0x540 - 0x4C0)
// Class ResonanceAudio.ResonanceAudioDirectivityVisualizer
class AResonanceAudioDirectivityVisualizer : public AActor
{
public:
	uint8                                        Pad_1CEC[0x70];                                    // Fixing Size After Last Property  > TateDumper <
	class UMaterial*                             Material;                                          // 0x530(0x8)(Edit, ConstParm, Net, EditFixedSize, Transient, Config, DisableEditOnInstance)
	class UResonanceAudioSpatializationSourceSettings* Settings;                                          // 0x538(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class AResonanceAudioDirectivityVisualizer* GetDefaultObj();

};

// 0x108 (0x170 - 0x68)
// Class ResonanceAudio.ResonanceAudioReverbPluginPreset
class UResonanceAudioReverbPluginPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1D0F[0x98];                                    // Fixing Size After Last Property  > TateDumper <
	struct FResonanceAudioReverbPluginSettings   Settings;                                          // 0x100(0x70)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UResonanceAudioReverbPluginPreset* GetDefaultObj();

	void SetRoomRotation(struct FQuat* InRotation);
	void SetRoomPosition(struct FVector* InPosition);
	void SetRoomMaterials(const TArray<enum class ERaMaterialName>& InMaterials);
	void SetRoomDimensions(const struct FVector& InDimensions);
	void SetReverbTimeModifier(float InReverbTimeModifier);
	void SetReverbGain(float InReverbGain);
	void SetReverbBrightness(float InReverbBrightness);
	void SetReflectionScalar(float InReflectionScalar);
	void SetEnableRoomEffects(bool bInEnableRoomEffects);
};

// 0x68 (0x90 - 0x28)
// Class ResonanceAudio.ResonanceAudioSettings
class UResonanceAudioSettings : public UObject
{
public:
	struct FSoftObjectPath                       OutputSubmix;                                      // 0x28(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ERaQualityMode                    QualityMode;                                       // 0x48(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D18[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSoftObjectPath                       GlobalReverbPreset;                                // 0x50(0x20)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       GlobalSourcePreset;                                // 0x70(0x20)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UResonanceAudioSettings* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class ResonanceAudio.ResonanceAudioSpatializationSourceSettings
class UResonanceAudioSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{
public:
	enum class ERaSpatializationMethod           SpatializationMethod;                              // 0x28(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D29[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Pattern;                                           // 0x2C(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Sharpness;                                         // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bToggleVisualization;                              // 0x34(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D2B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Scale;                                             // 0x38(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	float                                        Spread;                                            // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERaDistanceRolloffModel           Rolloff;                                           // 0x40(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D2D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinDistance;                                       // 0x44(0x4)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxDistance;                                       // 0x48(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_1D2E[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UResonanceAudioSpatializationSourceSettings* GetDefaultObj();

	void SetSoundSourceSpread(float InSpread);
	void SetSoundSourceDirectivity(float InPattern, float InSharpness);
};

}


