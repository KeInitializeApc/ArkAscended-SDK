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
	enum class EResonanceRenderMode              RenderMode;                                        // 0x28(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2736[0x7];                                     // Fixing Size Of Struct > TateDumper <

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

// 0x80 (0x548 - 0x4C8)
// Class ResonanceAudio.ResonanceAudioDirectivityVisualizer
class AResonanceAudioDirectivityVisualizer : public AActor
{
public:
	uint8                                        Pad_273B[0x70];                                    // Fixing Size After Last Property  > TateDumper <
	class UMaterial*                             Material;                                          // 0x538(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	class UResonanceAudioSpatializationSourceSettings* Settings;                                          // 0x540(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class AResonanceAudioDirectivityVisualizer* GetDefaultObj();

};

// 0x108 (0x170 - 0x68)
// Class ResonanceAudio.ResonanceAudioReverbPluginPreset
class UResonanceAudioReverbPluginPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_2742[0x98];                                    // Fixing Size After Last Property  > TateDumper <
	struct FResonanceAudioReverbPluginSettings   Settings;                                          // 0x100(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UResonanceAudioReverbPluginPreset* GetDefaultObj();

	void SetRoomRotation(struct FQuat* InRotation);
	struct FVector SetRoomPosition();
	void SetRoomMaterials(TArray<enum class ERaMaterialName>* InMaterials);
	void SetRoomDimensions(struct FVector* InDimensions);
	void SetReverbTimeModifier(float* InReverbTimeModifier);
	void SetReverbGain(float* InReverbGain);
	void SetReverbBrightness(float* InReverbBrightness);
	void SetReflectionScalar(float* InReflectionScalar);
	void SetEnableRoomEffects(bool bInEnableRoomEffects);
};

// 0x68 (0x90 - 0x28)
// Class ResonanceAudio.ResonanceAudioSettings
class UResonanceAudioSettings : public UObject
{
public:
	struct FSoftObjectPath                       OutputSubmix;                                      // 0x28(0x20)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ERaQualityMode                    QualityMode;                                       // 0x48(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2746[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSoftObjectPath                       GlobalReverbPreset;                                // 0x50(0x20)(EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       GlobalSourcePreset;                                // 0x70(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UResonanceAudioSettings* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class ResonanceAudio.ResonanceAudioSpatializationSourceSettings
class UResonanceAudioSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{
public:
	enum class ERaSpatializationMethod           SpatializationMethod;                              // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2748[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Pattern;                                           // 0x2C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        Sharpness;                                         // 0x30(0x4)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bToggleVisualization;                              // 0x34(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2749[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Scale;                                             // 0x38(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        Spread;                                            // 0x3C(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class ERaDistanceRolloffModel           Rolloff;                                           // 0x40(0x1)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_274A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinDistance;                                       // 0x44(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MaxDistance;                                       // 0x48(0x4)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_274B[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UResonanceAudioSpatializationSourceSettings* GetDefaultObj();

	void SetSoundSourceSpread(float* InSpread);
	void SetSoundSourceDirectivity(float InPattern, float* InSharpness);
};

}


