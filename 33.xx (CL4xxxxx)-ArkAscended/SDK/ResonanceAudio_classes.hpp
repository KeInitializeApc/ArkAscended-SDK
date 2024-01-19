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
	enum class EResonanceRenderMode              RenderMode;                                        // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_269F[0x7];                                     // Fixing Size Of Struct > TateDumper <

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

	class UResonanceAudioReverbPluginPreset* SetGlobalReverbPreset();
	void GetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset* ReturnValue);
};

// 0x80 (0x548 - 0x4C8)
// Class ResonanceAudio.ResonanceAudioDirectivityVisualizer
class AResonanceAudioDirectivityVisualizer : public AActor
{
public:
	uint8                                        Pad_26C9[0x70];                                    // Fixing Size After Last Property  > TateDumper <
	class UMaterial*                             Material;                                          // 0x538(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	class UResonanceAudioSpatializationSourceSettings* Settings;                                          // 0x540(0x8)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class AResonanceAudioDirectivityVisualizer* GetDefaultObj();

};

// 0x108 (0x170 - 0x68)
// Class ResonanceAudio.ResonanceAudioReverbPluginPreset
class UResonanceAudioReverbPluginPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_26DD[0x98];                                    // Fixing Size After Last Property  > TateDumper <
	struct FResonanceAudioReverbPluginSettings   Settings;                                          // 0x100(0x70)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UResonanceAudioReverbPluginPreset* GetDefaultObj();

	struct FQuat SetRoomRotation();
	struct FVector SetRoomPosition();
	TArray<enum class ERaMaterialName> SetRoomMaterials();
	struct FVector SetRoomDimensions();
	float SetReverbTimeModifier();
	float SetReverbGain();
	float SetReverbBrightness();
	float SetReflectionScalar();
	bool SetEnableRoomEffects();
};

// 0x68 (0x90 - 0x28)
// Class ResonanceAudio.ResonanceAudioSettings
class UResonanceAudioSettings : public UObject
{
public:
	struct FSoftObjectPath                       OutputSubmix;                                      // 0x28(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ERaQualityMode                    QualityMode;                                       // 0x48(0x1)(ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_26DE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSoftObjectPath                       GlobalReverbPreset;                                // 0x50(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       GlobalSourcePreset;                                // 0x70(0x20)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UResonanceAudioSettings* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class ResonanceAudio.ResonanceAudioSpatializationSourceSettings
class UResonanceAudioSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{
public:
	enum class ERaSpatializationMethod           SpatializationMethod;                              // 0x28(0x1)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_26DF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Pattern;                                           // 0x2C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	float                                        Sharpness;                                         // 0x30(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bToggleVisualization;                              // 0x34(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_26E3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Scale;                                             // 0x38(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        Spread;                                            // 0x3C(0x4)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class ERaDistanceRolloffModel           Rolloff;                                           // 0x40(0x1)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_26E4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinDistance;                                       // 0x44(0x4)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MaxDistance;                                       // 0x48(0x4)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_26E5[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UResonanceAudioSpatializationSourceSettings* GetDefaultObj();

	float SetSoundSourceSpread();
	float SetSoundSourceDirectivity();
};

}


