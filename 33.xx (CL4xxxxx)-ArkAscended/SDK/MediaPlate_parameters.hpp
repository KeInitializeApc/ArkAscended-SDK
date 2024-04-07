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

// 0x1 (0x1 - 0x0)
// Function MediaPlate.MediaPlateComponent.SetPlayOnlyWhenVisible
struct UMediaPlateComponent_SetPlayOnlyWhenVisible_Params
{
public:
	bool                                         bInPlayOnlyWhenVisible;                            // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MediaPlate.MediaPlateComponent.SetMeshRange
struct UMediaPlateComponent_SetMeshRange_Params
{
public:
	struct FVector2D                             InMeshRange;                                       // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MediaPlate.MediaPlateComponent.SetLoop
struct UMediaPlateComponent_SetLoop_Params
{
public:
	bool                                         bInLoop;                                           // 0x0(0x1)(ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MediaPlate.MediaPlateComponent.SetLetterboxAspectRatio
struct UMediaPlateComponent_SetLetterboxAspectRatio_Params
{
public:
	float                                        AspectRatio;                                       // 0x0(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MediaPlate.MediaPlateComponent.SetIsAspectRatioAuto
struct UMediaPlateComponent_SetIsAspectRatioAuto_Params
{
public:
	bool                                         bInIsAspectRatioAuto;                              // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MediaPlate.MediaPlateComponent.Seek
struct UMediaPlateComponent_Seek_Params
{
public:
	struct FTimespan                             Time;                                              // 0x0(0x8)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_127D[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function MediaPlate.MediaPlateComponent.Rewind
struct UMediaPlateComponent_Rewind_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MediaPlate.MediaPlateComponent.OnMediaOpened
struct UMediaPlateComponent_OnMediaOpened_Params
{
public:
	class FString                                DeviceUrl;                                         // 0x0(0x10)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MediaPlate.MediaPlateComponent.IsMediaPlatePlaying
struct UMediaPlateComponent_IsMediaPlatePlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MediaPlate.MediaPlateComponent.GetMeshRange
struct UMediaPlateComponent_GetMeshRange_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MediaPlate.MediaPlateComponent.GetMediaTexture
struct UMediaPlateComponent_GetMediaTexture_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_12A6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMediaTexture*                         ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MediaPlate.MediaPlateComponent.GetMediaPlayer
struct UMediaPlateComponent_GetMediaPlayer_Params
{
public:
	class UMediaPlayer*                          ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MediaPlate.MediaPlateComponent.GetLoop
struct UMediaPlateComponent_GetLoop_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MediaPlate.MediaPlateComponent.GetLetterboxAspectRatio
struct UMediaPlateComponent_GetLetterboxAspectRatio_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MediaPlate.MediaPlateComponent.GetIsAspectRatioAuto
struct UMediaPlateComponent_GetIsAspectRatioAuto_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


