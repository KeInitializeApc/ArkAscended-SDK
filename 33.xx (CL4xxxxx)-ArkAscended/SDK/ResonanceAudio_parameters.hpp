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
	class UResonanceAudioReverbPluginPreset*     InPreset;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.GetGlobalReverbPreset
struct UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset_Params
{
public:
	class UResonanceAudioReverbPluginPreset*     ReturnValue;                                       // 0x0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomRotation
struct UResonanceAudioReverbPluginPreset_SetRoomRotation_Params
{
public:
	struct FQuat                                 InRotation;                                        // 0x0(0x20)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomPosition
struct UResonanceAudioReverbPluginPreset_SetRoomPosition_Params
{
public:
	struct FVector                               InPosition;                                        // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomMaterials
struct UResonanceAudioReverbPluginPreset_SetRoomMaterials_Params
{
public:
	TArray<enum class ERaMaterialName>           InMaterials;                                       // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomDimensions
struct UResonanceAudioReverbPluginPreset_SetRoomDimensions_Params
{
public:
	struct FVector                               InDimensions;                                      // 0x0(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbTimeModifier
struct UResonanceAudioReverbPluginPreset_SetReverbTimeModifier_Params
{
public:
	float                                        InReverbTimeModifier;                              // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbGain
struct UResonanceAudioReverbPluginPreset_SetReverbGain_Params
{
public:
	float                                        InReverbGain;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbBrightness
struct UResonanceAudioReverbPluginPreset_SetReverbBrightness_Params
{
public:
	float                                        InReverbBrightness;                                // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReflectionScalar
struct UResonanceAudioReverbPluginPreset_SetReflectionScalar_Params
{
public:
	float                                        InReflectionScalar;                                // 0x0(0x4)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetEnableRoomEffects
struct UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Params
{
public:
	bool                                         bInEnableRoomEffects;                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceSpread
struct UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Params
{
public:
	float                                        InSpread;                                          // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceDirectivity
struct UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Params
{
public:
	float                                        InPattern;                                         // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        InSharpness;                                       // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

}
}


