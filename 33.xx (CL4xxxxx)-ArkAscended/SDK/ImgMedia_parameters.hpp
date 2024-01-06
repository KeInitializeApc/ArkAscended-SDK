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
	class FString                                Path;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
};

// 0x10 (0x10 - 0x0)
// Function ImgMedia.ImgMediaSource.SetSequencePath
struct UImgMediaSource_SetSequencePath_Params
{
public:
	class FString                                Path;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
};

// 0x4 (0x4 - 0x0)
// Function ImgMedia.ImgMediaSource.SetMipLevelDistance
struct UImgMediaSource_SetMipLevelDistance_Params
{
public:
	float                                        Distance;                                          // 0x0(0x4)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ImgMedia.ImgMediaSource.RemoveTargetObject
struct UImgMediaSource_RemoveTargetObject_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ImgMedia.ImgMediaSource.RemoveGlobalCamera
struct UImgMediaSource_RemoveGlobalCamera_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ImgMedia.ImgMediaSource.GetSequencePath
struct UImgMediaSource_GetSequencePath_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ImgMedia.ImgMediaSource.GetProxies
struct UImgMediaSource_GetProxies_Params
{
public:
	TArray<class FString>                        OutProxies;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ImgMedia.ImgMediaSource.AddTargetObject
struct UImgMediaSource_AddTargetObject_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ImgMedia.ImgMediaSource.AddGlobalCamera
struct UImgMediaSource_AddGlobalCamera_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
};

}
}


