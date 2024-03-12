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
// Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetTime
struct UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Params
{
public:
	struct FTimespan                             ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetDuration
struct UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Params
{
public:
	struct FTimespan                             ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.SupportsSeeking
struct UBinkMediaPlayer_SupportsSeeking_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.SupportsScrubbing
struct UBinkMediaPlayer_SupportsScrubbing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.SupportsRate
struct UBinkMediaPlayer_SupportsRate_Params
{
public:
	float                                        Rate;                                              // 0x0(0x4)(Edit, BlueprintVisible, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         Unthinned;                                         // 0x4(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_E9[0x2];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.SetVolume
struct UBinkMediaPlayer_SetVolume_Params
{
public:
	float                                        Rate;                                              // 0x0(0x4)(Edit, BlueprintVisible, OutParm, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.SetRate
struct UBinkMediaPlayer_SetRate_Params
{
public:
	float                                        Rate;                                              // 0x0(0x4)(Edit, BlueprintVisible, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_FA[0x3];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x2 (0x2 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.SetLooping
struct UBinkMediaPlayer_SetLooping_Params
{
public:
	bool                                         InLooping;                                         // 0x0(0x1)(EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.Seek
struct UBinkMediaPlayer_Seek_Params
{
public:
	struct FTimespan                             InTime;                                            // 0x0(0x8)(BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_101[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.Rewind
struct UBinkMediaPlayer_Rewind_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.Play
struct UBinkMediaPlayer_Play_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.Pause
struct UBinkMediaPlayer_Pause_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.OpenUrl
struct UBinkMediaPlayer_OpenUrl_Params
{
public:
	class FString                                NewUrl;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_10A[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.IsStopped
struct UBinkMediaPlayer_IsStopped_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.IsPlaying
struct UBinkMediaPlayer_IsPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.IsPaused
struct UBinkMediaPlayer_IsPaused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.IsLooping
struct UBinkMediaPlayer_IsLooping_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.IsInitialized
struct UBinkMediaPlayer_IsInitialized_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.GetUrl
struct UBinkMediaPlayer_GetUrl_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.GetTime
struct UBinkMediaPlayer_GetTime_Params
{
public:
	struct FTimespan                             ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.GetRate
struct UBinkMediaPlayer_GetRate_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.GetDuration
struct UBinkMediaPlayer_GetDuration_Params
{
public:
	struct FTimespan                             ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.Draw
struct UBinkMediaPlayer_Draw_Params
{
public:
	class UTexture*                              Texture;                                           // 0x0(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	bool                                         Tonemap;                                           // 0x8(0x1)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_118[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        Out_nits;                                          // 0xC(0x4)(Edit, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        Alpha;                                             // 0x10(0x4)(Edit, BlueprintVisible, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Srgb_decode;                                       // 0x14(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         Hdr;                                               // 0x15(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_11A[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.CanPlay
struct UBinkMediaPlayer_CanPlay_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.CanPause
struct UBinkMediaPlayer_CanPause_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function BinkMediaPlayer.BinkMediaTexture.SetMediaPlayer
struct UBinkMediaTexture_SetMediaPlayer_Params
{
public:
	class UBinkMediaPlayer*                      InMediaPlayer;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
};

}
}


