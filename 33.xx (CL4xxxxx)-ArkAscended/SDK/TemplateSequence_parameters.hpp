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
// Function TemplateSequence.TemplateSequenceActor.SetSequence
struct ATemplateSequenceActor_SetSequence_Params
{
public:
	class UTemplateSequence*                     InSequence;                                        // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function TemplateSequence.TemplateSequenceActor.SetBinding
struct ATemplateSequenceActor_SetBinding_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	bool                                         bOverridesDefault;                                 // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_22D4[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function TemplateSequence.TemplateSequenceActor.LoadSequence
struct ATemplateSequenceActor_LoadSequence_Params
{
public:
	class UTemplateSequence*                     ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
struct ATemplateSequenceActor_GetSequencePlayer_Params
{
public:
	class UTemplateSequencePlayer*               ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function TemplateSequence.TemplateSequenceActor.GetSequence
struct ATemplateSequenceActor_GetSequence_Params
{
public:
	class UTemplateSequence*                     ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
struct UTemplateSequencePlayer_CreateTemplateSequencePlayer_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UTemplateSequence*                     TemplateSequence;                                  // 0x8(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	struct FMovieSceneSequencePlaybackSettings   Settings;                                          // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	class ATemplateSequenceActor*                OutActor;                                          // 0x30(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UTemplateSequencePlayer*               ReturnValue;                                       // 0x38(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x790 (0x790 - 0x0)
// Function TemplateSequence.SequenceCameraShakeTestUtil.GetPostProcessBlendCache
struct USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	int32                                        PPIndex;                                           // 0x8(0x4)(EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_22EF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPostProcessSettings                  OutPPSettings;                                     // 0x10(0x770)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        OutPPBlendWeight;                                  // 0x780(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x784(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_22F0[0xB];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x870 (0x870 - 0x0)
// Function TemplateSequence.SequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV
struct USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	uint8                                        Pad_22F4[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMinimalViewInfo                      ReturnValue;                                       // 0x10(0x860)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x870 (0x870 - 0x0)
// Function TemplateSequence.SequenceCameraShakeTestUtil.GetCameraCachePOV
struct USequenceCameraShakeTestUtil_GetCameraCachePOV_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	uint8                                        Pad_22F8[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMinimalViewInfo                      ReturnValue;                                       // 0x10(0x860)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


