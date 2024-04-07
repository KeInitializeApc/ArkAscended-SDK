#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.SetGlobalReverbPreset
struct UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset_Params
{
public:
	class UResonanceAudioReverbPluginPreset*     InPreset;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.GetGlobalReverbPreset
struct UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset_Params
{
public:
	class UResonanceAudioReverbPluginPreset*     ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomRotation
struct UResonanceAudioReverbPluginPreset_SetRoomRotation_Params
{
public:
	struct FQuat                                 InRotation;                                        // 0x0(0x20)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomPosition
struct UResonanceAudioReverbPluginPreset_SetRoomPosition_Params
{
public:
	struct FVector                               InPosition;                                        // 0x0(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomMaterials
struct UResonanceAudioReverbPluginPreset_SetRoomMaterials_Params
{
public:
	TArray<enum class ERaMaterialName>           InMaterials;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomDimensions
struct UResonanceAudioReverbPluginPreset_SetRoomDimensions_Params
{
public:
	struct FVector                               InDimensions;                                      // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbTimeModifier
struct UResonanceAudioReverbPluginPreset_SetReverbTimeModifier_Params
{
public:
	float                                        InReverbTimeModifier;                              // 0x0(0x4)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbGain
struct UResonanceAudioReverbPluginPreset_SetReverbGain_Params
{
public:
	float                                        InReverbGain;                                      // 0x0(0x4)(Edit, ConstParm, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbBrightness
struct UResonanceAudioReverbPluginPreset_SetReverbBrightness_Params
{
public:
	float                                        InReverbBrightness;                                // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReflectionScalar
struct UResonanceAudioReverbPluginPreset_SetReflectionScalar_Params
{
public:
	float                                        InReflectionScalar;                                // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetEnableRoomEffects
struct UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Params
{
public:
	bool                                         bInEnableRoomEffects;                              // 0x0(0x1)(BlueprintVisible, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceSpread
struct UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Params
{
public:
	float                                        InSpread;                                          // 0x0(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceDirectivity
struct UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Params
{
public:
	float                                        InPattern;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        InSharpness;                                       // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

}
}


