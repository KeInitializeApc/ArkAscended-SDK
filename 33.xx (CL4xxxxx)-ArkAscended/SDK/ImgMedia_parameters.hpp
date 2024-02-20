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

// 0x10 (0x10 - 0x0)
// Function ImgMedia.ImgMediaSource.SetTokenizedSequencePath
struct UImgMediaSource_SetTokenizedSequencePath_Params
{
public:
	class FString                                Path;                                              // 0x0(0x10)(ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ImgMedia.ImgMediaSource.SetSequencePath
struct UImgMediaSource_SetSequencePath_Params
{
public:
	class FString                                Path;                                              // 0x0(0x10)(ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ImgMedia.ImgMediaSource.SetMipLevelDistance
struct UImgMediaSource_SetMipLevelDistance_Params
{
public:
	float                                        Distance;                                          // 0x0(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ImgMedia.ImgMediaSource.RemoveTargetObject
struct UImgMediaSource_RemoveTargetObject_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(ConstParm, ExportObject, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ImgMedia.ImgMediaSource.RemoveGlobalCamera
struct UImgMediaSource_RemoveGlobalCamera_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(ConstParm, ExportObject, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ImgMedia.ImgMediaSource.GetSequencePath
struct UImgMediaSource_GetSequencePath_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ImgMedia.ImgMediaSource.GetProxies
struct UImgMediaSource_GetProxies_Params
{
public:
	TArray<class FString>                        OutProxies;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ImgMedia.ImgMediaSource.AddTargetObject
struct UImgMediaSource_AddTargetObject_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(ConstParm, ExportObject, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ImgMedia.ImgMediaSource.AddGlobalCamera
struct UImgMediaSource_AddGlobalCamera_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(ConstParm, ExportObject, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

}
}


