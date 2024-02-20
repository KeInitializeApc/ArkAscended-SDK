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
	class UTemplateSequence*                     InSequence;                                        // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function TemplateSequence.TemplateSequenceActor.SetBinding
struct ATemplateSequenceActor_SetBinding_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	bool                                         bOverridesDefault;                                 // 0x8(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13C7[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function TemplateSequence.TemplateSequenceActor.LoadSequence
struct ATemplateSequenceActor_LoadSequence_Params
{
public:
	class UTemplateSequence*                     ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
struct ATemplateSequenceActor_GetSequencePlayer_Params
{
public:
	class UTemplateSequencePlayer*               ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function TemplateSequence.TemplateSequenceActor.GetSequence
struct ATemplateSequenceActor_GetSequence_Params
{
public:
	class UTemplateSequence*                     ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
struct UTemplateSequencePlayer_CreateTemplateSequencePlayer_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UTemplateSequence*                     TemplateSequence;                                  // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	struct FMovieSceneSequencePlaybackSettings   Settings;                                          // 0x10(0x20)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class ATemplateSequenceActor*                OutActor;                                          // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class UTemplateSequencePlayer*               ReturnValue;                                       // 0x38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x7A0 (0x7A0 - 0x0)
// Function TemplateSequence.SequenceCameraShakeTestUtil.GetPostProcessBlendCache
struct USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	int32                                        PPIndex;                                           // 0x8(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_13EB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPostProcessSettings                  OutPPSettings;                                     // 0x10(0x780)(Edit, ConstParm, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        OutPPBlendWeight;                                  // 0x790(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x794(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_13EC[0xB];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x880 (0x880 - 0x0)
// Function TemplateSequence.SequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV
struct USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_13F7[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMinimalViewInfo                      ReturnValue;                                       // 0x10(0x870)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x880 (0x880 - 0x0)
// Function TemplateSequence.SequenceCameraShakeTestUtil.GetCameraCachePOV
struct USequenceCameraShakeTestUtil_GetCameraCachePOV_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_13FB[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMinimalViewInfo                      ReturnValue;                                       // 0x10(0x870)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


