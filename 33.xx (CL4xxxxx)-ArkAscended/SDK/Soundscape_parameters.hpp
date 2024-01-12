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

// 0x20 (0x20 - 0x0)
// Function Soundscape.SoundscapeBPFunctionLibrary.SpawnSoundscapePalette
struct USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundscapePalette*                    SoundscapePaletteIn;                               // 0x8(0x8)(Net, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UActiveSoundscapePalette*              SoundscapePaletteAgentsOut;                        // 0x10(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_648[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Soundscape.SoundscapeBPFunctionLibrary.SpawnSoundscapeColor
struct USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USoundscapeColor*                      SoundscapeColorIn;                                 // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UActiveSoundscapeColor*                ActiveSoundscapeColor;                             // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_64C[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function Soundscape.ActiveSoundscapeColorVoice.StopLimitedDurationVoice
struct UActiveSoundscapeColorVoice_StopLimitedDurationVoice_Params
{
public:
	float                                        FadeOutTime;                                       // 0x0(0x4)(ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Soundscape.ActiveSoundscapeColor.Stop
struct UActiveSoundscapeColor_Stop_Params
{
public:
	float                                        ColorFadeOutTime;                                  // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function Soundscape.ActiveSoundscapeColor.Play
struct UActiveSoundscapeColor_Play_Params
{
public:
	float                                        ColorVolume;                                       // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        ColorPitch;                                        // 0x4(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        ColorFadeInTime;                                   // 0x8(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Soundscape.ActiveSoundscapeColor.IsPlaying
struct UActiveSoundscapeColor_IsPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Soundscape.SoundscapeColorPointHashMap.SetGridCenterpoint
struct USoundscapeColorPointHashMap_SetGridCenterpoint_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
};

// 0x28 (0x28 - 0x0)
// Function Soundscape.SoundscapeColorPointHashMap.NumColorPointsInCell
struct USoundscapeColorPointHashMap_NumColorPointsInCell_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FGameplayTag                          ColorPoint;                                        // 0x18(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_662[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function Soundscape.SoundscapeColorPointHashMap.InitializeHash
struct USoundscapeColorPointHashMap_InitializeHash_Params
{
public:
	float                                        HashCellSizeIn;                                    // 0x0(0x4)(Net, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_663[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               GridCenterIn;                                      // 0x8(0x18)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Soundscape.SoundscapeColorPointHashMap.CalculateHashIndex
struct USoundscapeColorPointHashMap_CalculateHashIndex_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	uint64                                       ReturnValue;                                       // 0x18(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Soundscape.SoundscapeColorPointHashMap.AddColorPointToHash
struct USoundscapeColorPointHashMap_AddColorPointToHash_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FGameplayTag                          ColorPoint;                                        // 0x18(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_666[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function Soundscape.SoundscapeColorPointHashMap.AddColorPointArrayToHash
struct USoundscapeColorPointHashMap_AddColorPointArrayToHash_Params
{
public:
	TArray<struct FVector>                       Locations;                                         // 0x0(0x10)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FGameplayTag                          ColorPoint;                                        // 0x10(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Soundscape.SoundscapeSubsystem.SetState
struct USoundscapeSubsystem_SetState_Params
{
public:
	struct FGameplayTag                          SoundscapeState;                                   // 0x0(0x8)(Edit, ExportObject, Net, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function Soundscape.SoundscapeSubsystem.RemovePaletteCollection
struct USoundscapeSubsystem_RemovePaletteCollection_Params
{
public:
	class FName                                  PaletteCollectionName;                             // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_671[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function Soundscape.SoundscapeSubsystem.RemoveColorPointCollection
struct USoundscapeSubsystem_RemoveColorPointCollection_Params
{
public:
	class FName                                  ColorPointCollectionName;                          // 0x0(0x8)(ConstParm, BlueprintVisible, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_674[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function Soundscape.SoundscapeSubsystem.ClearState
struct USoundscapeSubsystem_ClearState_Params
{
public:
	struct FGameplayTag                          SoundscapeState;                                   // 0x0(0x8)(Edit, ExportObject, Net, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Soundscape.SoundscapeSubsystem.CheckColorPointDensity
struct USoundscapeSubsystem_CheckColorPointDensity_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FGameplayTag                          ColorPoint;                                        // 0x18(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_677[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// Function Soundscape.SoundscapeSubsystem.AddPaletteCollection
struct USoundscapeSubsystem_AddPaletteCollection_Params
{
public:
	class FName                                  PaletteCollectionName;                             // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	struct FSoundscapePaletteCollection          PaletteCollection;                                 // 0x8(0x50)(Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_67A[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function Soundscape.SoundscapeSubsystem.AddColorPointCollection
struct USoundscapeSubsystem_AddColorPointCollection_Params
{
public:
	class FName                                  ColorPointCollectionName;                          // 0x0(0x8)(ConstParm, BlueprintVisible, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	struct FSoundscapeColorPointCollection       ColorPointCollection;                              // 0x8(0x10)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
};

}
}


